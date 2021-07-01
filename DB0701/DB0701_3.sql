select buyTBL.userID, userName, prodName, addr, concat(mobile1, mobile2) as '연락처'
	from buyTBL
    inner join userTBL
    on buyTBL.userID = userTBL.userID;
    
select *
	from buyTBL
    inner join userTBL
    on buyTBL.userID = userTBL.userID
    where buyTBL.userID = 'KYM';

select B.userID, U.userID, B.prodName, U.addr, concat(U.mobile1, U.mobile2) as '연락처'
	from buyTBL B
    inner join userTBL U
    on B.userID = U.userID;


#===========================================================================================
# inner join
select B.userID, U.userName 
	from buyTBL B
	inner join userTBL U
    on B.userID = U.userID
    group by userID ;

select distinct B.userID, U.userName 
	from buyTBL B
	inner join userTBL U
    on B.userID = U.userID
    order by userID ;

# 서브쿼리
select distinct U.userID, U.userName
	from userTBL U
    where exists (
		select *
        from buyTBL B
        where U.userID = B.userID) ;


#===========================================================================================
create table stdTBL(
	stdName		varchar(10) not null primary key,
    addr 		char(4) not null
    );

create table clubTBL(
	clubName	varchar(10) not null primary key,
    roomNo		char(4) not null
    );

create table stdclubTBL(
	num 		int auto_increment not null primary key,
    stdName		varchar(10) not null,
    clubName	varchar(10) not null,
	foreign key(stdName) references stdTBL(stdName),
	foreign key(clubName) references clubTBL(clubName)
);

insert into stdTBL values ('강호동', '경북'), ('김제동', '경남'), ('김용만', '서울'),
('이휘재', '경기'), ('박수홍', '서울');
insert into clubTBL values ('수영', '101호'), ('바둑', '102호'), ('축구', '103호'),
('봉사', '104호');
insert into stdclubTBL values (null, '강호동', '바둑'), (null, '강호동', '축구'),
(null, '김용만', '축구'), (null, '이휘재', '축구'), (null, '이휘재', '봉사'), (null, '박수홍', '봉사');

select S.stdName, S.addr, C.clubName, C.roomNo
	from stdTBL S
		inner join stdclubTBL SC
			on S.stdName = SC.stdName
		inner join clubTBL C
		on SC.clubName = C.clubName
    order by S.stdName;

select C.clubName, C.roomNo, S.stdName, S.addr
	from stdTBL S
		inner join stdclubTBL SC
			on SC.stdName = S.stdName
		inner join clubTBL C
        on SC.clubName = C.clubName
	order by C.clubName;

select U.userID, U.userName, B.prodName, U.addr, concat(U.mobile1, U.mobile2) as '연락처'
	from userTBL U
		left outer join buyTBL B
        on U.userID = B.userID
	order by U.userID;

select U.userID, U.userName, B.prodName, U.addr, concat(U.mobile1, U.mobile2) as '연락처'
	from userTBL U
		right outer join buyTBL B
        on U.userID = B.userID
	order by U.userID;

select U.userID, U.userName, B.prodName, U.addr, concat(U.mobile1, U.mobile2) as '연락처'
	from userTBL U
		left outer join buyTBL B
		on U.userID = B.userID
	where B.prodName is null
    order by U.userID;

select S.stdName, S.addr, C.clubName, C.roomNo
	from stdTBL S
		left outer join stdclubTBL SC
			on S.stdName = SC. stdName
		left outer join clubTBL C
			on SC.clubName = C.clubName
	order by S.stdName;

select C.clubName, C.roomNo, S.stdName, S.addr
	from stdTBL S
		left outer join stdclubTBL SC
			on SC.stdName = S.stdName
		right outer join clubTBL C
			on SC.clubName = C.clubName
	order by C.clubName;

select S.stdName, S.addr, C.clubName, C.roomNo
	from stdTBL S
		left outer join stdclubTBL SC
			on S.stdName = SC.stdName
		left outer join clubTBL C
			on SC.clubName = C.clubName
union
select S.stdName, S.addr, C.clubName, C.roomNo
	from stdTBL S
		left outer join stdclubTBL SC
			on SC.stdName = s.stdName
		right outer join clubTBL C
			on SC.clubName = C.clubName;

use employees;
select count(*) as '데이터개수'
	from employees
		cross join titles;


#===========================================================================================
use cookdb;
create table empTBL (emp char(3), manager char(3), empTel varchar(8));

insert into empTBL values('나사장', null, '0000');
insert into empTBL values('김재무', '나사장', '2222');
insert into empTBL values('김부장', '김재무', '2222-1');
insert into empTBL values('이부장', '김재무', '2222-2');
insert into empTBL values('우대리', '이부장', '2222-2-1');
insert into empTBL values('지사원', '이부장', '2222-2-2');
insert into empTBL values('이영업', '나사장', '1111');
insert into empTBL values('한과장', '이영업', '1111-1');
insert into empTBL values('최정보', '나사장', '3333');
insert into empTBL values('윤차장', '최정보', '3333-1');
insert into empTBL values('이주임', '윤차장', '3333-1-1');

select distinct E.emp as '부하직원' , E.manager as '직속상관' , M.empTel as '직속상관연락처'
	from empTBL E
		inner join empTBL M
        on E.emp = M.emp
	group by E.emp;

select E.emp as '부하직원', M.emp as '직속상관', M.empTel as '직속상관연락처'
	from empTBL E
		inner join empTBL M
        on E.manager = M.emp
	where E.emp = '우대리';


#===========================================================================================
select stdName, addr from stdTBL
	union all
select clubName, roomNo from clubTBL;

select userName, concat(mobile1, '-', mobile2) as '전화번호' from userTBL
	where userName not in (select userName from userTBL where mobile1 is null);

select userName, concat(mobile1, mobile2) as '전화번호' from userTBL
	where userName in (select userName from userTBL where mobile1 is null);






