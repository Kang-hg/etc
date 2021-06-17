select productName, company from shopdb.producttbl;

create table `my testTBL` (id int);

drop table `my testTBL`;


create table indexTBL(first_name varchar(14), last_name varchar(16),
hire_date date);

insert into indexTBL
	select first_name, last_name, hire_date
	from employees.employees
    limit 500;
    
select * from indexTBL;


select * from indexTBL where first_name = 'Mary';

create index idx_indexTBL_firstname on indexTBL(first_name);

create view uv_memberTBL
as select memberName, memberAddress from memberTBL;

select * from uv_memberTBL;

/*스토어 프로시저(함수)*/
DELIMITER // 
CREATE PROCEDURE myProc()
begin
	select * from memberTBL where memberName = '토마스';
    select * from productTBL where productName = '냉장고';
end //
DELIMITER ;

call myProc();

DELIMITER // 
CREATE PROCEDURE myProc1()
begin
	select * from memberTBL where memberName = '토마스';
    select * from productTBL where productName = '냉장고';
end //
DELIMITER ;

call myProc1();

insert into memberTBL values ('Soccer','흥민','서울시 서대문구 북가좌동');
update memberTBL set memberAddress = '서울 강남구 역삼동' where memberName = '흥민';
delete from memberTBL where memberName = '흥민';

set SQL_SAFE_UPDATES = 0;

create table deletedMemberTBL (
	memberID char(8) ,
    memberName char(5) ,
    memberAddress char(20) ,
    deletedDate date -- 삭제한 날짜
);
delimiter //
create trigger trg_deletedMemberTBL  -- 트리거 이름
	after delete -- 삭제 후에 작동하게 지정
	on memberTBL -- 트리거를 부착할 테이블
	for each row -- 각 행마다 적용시킴
begin
	-- old 테이블의 내용을 백업테이블에 삽입
	insert into deletedMemberTBL
		values (old.memberID, old.memberName, old.memberAddress, curdate() );
end //
delimiter ;


use employees;
select * from employees;

DROP DATABASE IF EXISTS cookDB; -- 만약 cookDB가 존재하면 우선 삭제한다.
CREATE DATABASE cookDB;
USE cookDB;
CREATE TABLE userTBL -- 회원 테이블 1
(
userID	CHAR(8) NOT NULL PRIMARY KEY, -- 사용자 아이디(PK)
userName	VARCHAR(10) NOT NULL, -- 이름
birthYear	INT NOT NULL, -- 출생년도
addr		CHAR(2) NOT NULL, -- 지역(경기, 서울, 경남 식으로 2글자만 입력)
mobile1		CHAR(3), -- 휴대폰의 국번(011, 016, 017, 018, 019, 010 등)
mobile2		CHAR(8), -- 휴대폰의 나머지 전화번호(하이픈제외)
height		SMALLINT, -- 키
mDate		DATE -- 회원 가입일
);
CREATE TABLE buyTBL -- 회원 구매 테이블 N
(
num			INT AUTO_INCREMENT NOT NULL PRIMARY KEY, -- 순번(PK) AUTO_INCREMENT 데이터 추가씩 1씩 증가
userID		CHAR(8) NOT NULL, -- 아이디(FK)
prodName	CHAR(6) NOT NULL, -- 물품명
groupName	CHAR(4), -- 분류
price		INT NOT NULL, -- 단가
amount		SMALLINT NOT NULL, -- 수량
FOREIGN KEY (userID) REFERENCES userTBL(userID) -- 외래키 설정
);

INSERT INTO userTBL VALUES('YJS', '유재석', 1972, '서울', '010', '11111111', 178, '2008-8-8');
INSERT INTO userTBL VALUES('KHD', '강호동', 1970, '경북', '011', '22222222', 182, '2007-7-7');
INSERT INTO userTBL VALUES('KKJ', '김국진', 1965, '서울', '019', '33333333', 171, '2009-9-9');
INSERT INTO userTBL VALUES('KYM', '김용만', 1967, '서울', '010', '44444444', 177, '2015-5-5');
INSERT INTO userTBL VALUES('KJD', '김제동', 1974, '경남', NULL, NULL		, 173, '2013-3-3');
INSERT INTO userTBL VALUES('NHS', '남희석', 1971, '충남', '016', '66666666', 180, '2017-4-4');
INSERT INTO userTBL VALUES('SDY', '신동엽', 1971, '경기', NULL, NULL		, 176, '2008-10-10');
INSERT INTO userTBL VALUES('LHJ', '이휘재', 1972, '경기', '011', '88888888', 180, '2006-4-4');
INSERT INTO userTBL VALUES('LKK', '이경규', 1960, '경남', '018', '99999999', 170, '2004-12-12');
INSERT INTO userTBL VALUES('PSH', '박수홍', 1970, '서울', '010', '00000000', 183, '2012-5-5');

INSERT INTO buyTBL VALUES(NULL, 'KHD', '운동화', NULL	, 30, 2);
INSERT INTO buyTBL VALUES(NULL, 'KHD', '노트북', '전자', 1000, 1);
INSERT INTO buyTBL VALUES(NULL, 'KYM', '모니터', '전자', 200, 1);
INSERT INTO buyTBL VALUES(NULL, 'PSH', '모니터', '전자', 200, 5);
INSERT INTO buyTBL VALUES(NULL, 'KHD', '청바지', '의류', 50, 3);
INSERT INTO buyTBL VALUES(NULL, 'PSH', '메모리', '전자', 80, 10);
INSERT INTO buyTBL VALUES(NULL, 'KJD', '책', '서적', 15, 5);
INSERT INTO buyTBL VALUES(NULL, 'LHJ', '책', '서적', 15, 2);
INSERT INTO buyTBL VALUES(NULL, 'LHJ', '청바지', '의류', 50, 1);
INSERT INTO buyTBL VALUES(NULL, 'PSH', '운동화', NULL, 30, 2);
INSERT INTO buyTBL VALUES(NULL, 'LHJ', '책', '서적', 15, 1);
INSERT INTO buyTBL VALUES(NULL, 'PSH', '운동화', NULL, 30, 2);

SELECT userID, userName, height, birthYear FROM userTBL where birthYear >= 1970 and height >= 182;
select userID, userName from userTBL where birthYear >= 1970 or height >= 182;
select userName, height from userTBL where height >= 180 and height <= 182;
select userName, height from usertbl where height between 180 and 182;
select userName, addr from usertbl where addr='경남' or addr='충남' or addr='경북';
select userName, addr from usertbl where addr in('경남','충남','경북');
select userName, height from usertbl where userName like '김%';
select userName, height from usertbl where userName like '_경규';
select userName, height from usertbl where height > 177;

select userName, height from usertbl
	where height > (select height from usertbl where userName = '김용만');

select userName, height from userTBL
	where height >= (select height from userTBL where addr = '경기');
    
select userName, height from userTBL
	where height >= any (select height from userTBL where addr = '경기');
    
select userName, height from userTBL
	where height = any (select height from userTBL where addr = '경기');
    
select userName, height from userTBL
	where height in (select height from userTBL where addr = '경기');
    
select userName, mDate from userTBL order by mDate;

select userName, mDate from userTBL order by mDate desc;

select userName, height from userTBL order by height desc, userName asc;

select userName, height from userTBL order by height;

select userName, height from userTBL order by userName asc;

select addr from userTBL;

select distinct addr from userTBL;


use employees;
select emp_no, hire_date from employees
	order by hire_date ASC;

select emp_no, hire_date from employees
	order by hire_date ASC
    limit 5;

select emp_no, hire_date from employees
	order by hire_date ASC
    limit 0, 5; -- limit 5 offset 0과 동일







