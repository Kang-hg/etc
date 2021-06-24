USE cookDB;														#cookDB 선택
CREATE TABLE buyTBL2 (SELECT * FROM buyTBL);					#buyTBL2 생성(buyTBL전체)
SELECT * FROM buyTBL2;											#buyTBL2 전체를 보여주기

CREATE TABLE buyTBL3 (SELECT userID, prodName FROM buyTBL);		#buyTBL3 생성(buyTBL에서 userID와 prodName만)
SELECT * FROM buyTBL3;											#buyTBL3 전체를 보여주기


#------------------------------------------------------------------------------------------------------
# GROUP By .... HAVING
# 함수
# AVG() : 평균
# MIN() : 최소값
# MAX() : 최대값
# COUNT() : 행의 개수
# COUNT(DISTINCT) : 행의 개수 중복제거
# STDEV() : 표준편차
# VAR_SAMP() : 분산

select userID, amount from buyTBL order by userID;				#userID와 amount를 보여준다 userID로 그룹화 하여

select userID, SUM(amount) from buyTBL group by userID;

select userID as '사용자 아이디', sum(amount) as '총 구매 개수'		# as=변환 (userID -> 사용자 아이디)
	from buyTBL group by userID;
select userID as '사용자 아이디', sum(price*amount) as '총 구매액'
	from buyTBL group by userID;
select userID as '사용자 아이디', sum(price*amount) as '총 구매액'
	from buyTBL group by userID;
select avg(amount) as '평균 구매 개수' from buyTBL;
select userID, avg(amount) as '평균 구매 개수'
	from buyTBL group by userID;
															#select userID, avg(amount) as '평균 구매 개수'
															#	from buyTBL order by userID;
select userName, max(height), min(height) from userTBL;
select userName, max(height), min(height)
	from userTBL group by userName;


#------------------------------------------------------------------------------------------------------
select userName, height										#userName과 height를
	from userTBL											#userTBL에서
	where height = (select max(height)from userTBL)			#height의 최대값 or
		or height = (select min(height)from userTBL);		#height의 최소값을 보여주기

select count(*) from userTBL;								#userTBL 전체를 count 하기

select count(mobile1) as '휴대폰이 있는 사용자' from userTBL;	#userTBL에서 mobile1을 count 하기


#------------------------------------------------------------------------------------------------------
select userID as '사용자', sum(price*amount) as '총 구매액'
	from buyTBL
    group by userID;

# where 사용시 group by 사용 불가!
select userID as '사용자', sum(price*amount) as '총 구매액'
	from buyTBL
    where sum(price*amount) > 1000
    group by userID;
	

select userID as '사용자', sum(price*amount) as '총 구매액'
	from buyTBL
    group by userID
    having sum(price*amount) > 1000;						#sum(price*amount)>1000 일때만 출력

select userID as '사용자', sum(price*amount) as '총 구매액'
	from buyTBL
    group by userID
    having sum(price*amount) > 1000
    order by sum(price*amount) desc;
    
select num, groupName, sum(price*amount) as '비용'
	from buyTBL
    group by groupName, num
    with rollup;											# 소계
    
select userID,groupName, sum(price*amount) as '비용'
	from buyTBL
    group by groupName,userID
    with rollup;

#------------------------------------------------------------------------------------------------------
use cookdb;
create table testTBL1 (id int, userName char(3), age int);

insert into testTBL1 values (1, '뽀로로', 16);
insert into testTBL1(id, userName) values (2, '크롱');
insert into testTBL1(userName, age, id) values ('루피', 14, 3);

#------------------------------------------------------------------------------------------------------
use cookdb;
create table testTBL2(
id int auto_increment primary key,
userName char(3),
age int);

insert into testTBL2 values (null, '에디', 15);					# auto_increment 때문에 id에 null 입력 가능
insert into testTBL2 values (null, '포비', 12);
insert into testTBL2 values (null, '통통이', 11);
select * from testTBL2;

alter table testTBL2 auto_increment=100;
delete from testTBL2 where userName = '패티';
insert into testTBL2 values (null, '패티', 13);
select * from testTBL2;

#------------------------------------------------------------------------------------------------------
create table testTBL3(
id int auto_increment primary key,
userName char(3),
age int);

alter table testTBL3 auto_increment=1000;
set @@auto_increment_increment=3;						#3씩 증가
insert into testTBL3 values (null, '우디', 20);
insert into testTBL3 values (null, '버즈', 18);
insert into testTBL3 values (null, '제시', 19);
select * from testTBL3;

insert into testTBL3 values (null, '토이', 17), (null, '스토리', 18), (null, '무비', 19);
select * from testTBL3;

#------------------------------------------------------------------------------------------------------
create table testTBL4 (id int, Fname varchar(50), Lname varchar(50));
insert into testTBL4
	select emp_no, first_name, last_name
	from employees.employees;

create table testTBL5
	(select emp_no, first_name, last_name from employees.employees);
select * from testTBL5 limit 3;

create table testTBL6
	(select emp_no as id, first_name as Fname, last_name as Lname
		from employees.employees);
select * from testTBL6 limit 3;

#------------------------------------------------------------------------------------------------------
update testTBL4
	set Lname = '없음'
    where Fname = 'Kyoichi';

update buyTBL set price = price * 1.5 ;

use cookdb;
# Fname 'Aamer' 이면 모두 삭제
delete from testTBL4 where Fname = 'Aamer';

# Fname 'Aamer' 이면 상위 5개만 삭제
delete from testTBL4 where Fname = 'Aamer' limit 5;

#------------------------------------------------------------------------------------------------------
create table bigTBL1 (select * from employees.employees);
create table bigTBL2 (select * from employees.employees);
create table bigTBL3 (select * from employees.employees);

# 로그를 기록하는 작업을 하기 때문에 삭제 하는데 시간이 오래 걸림
delete from bigTBL1;								# 항상 지우기 전에 조건을 생각
# 테이블 자체를 삭제하고 로그기록을 하지 않는다.
drop table bigTBL2;
# 로그를 기록하지 않고 테이블은 남아 있는다.
truncate table bigTBL3;

#------------------------------------------------------------------------------------------------------
create table memberTBL (select userID, userName, addr from userTBL limit 3);
alter table memberTBL								# alter = 테이블의 내용을 수정
	add constraint pk_memberTBL primary key (userID) ; -- pk를 지정함
select * from memberTBL;

insert into memberTBL values('KHD', '강후덜', '미국');
insert into memberTBL values('LSM', '이상민', '서울');
insert into memberTBL values('KSJ', '김성주', '경기');

insert ignore into memberTBL values('KHD', '강후덜', '미국');
insert ignore into memberTBL values('LSM', '이상민', '서울');
insert ignore into memberTBL values('KSJ', '김성주', '경기');
select * from memberTBL;

insert into memberTBL values('KHD', '강후덜', '미국')
	on duplicate key update userName='강후덜', addr='미국';			# 같은 key가 있다면 업데이트를 한다.
insert into memberTBL values('DJM', '동짜몽', '일본')
	on duplicate key update userName='동짜몽', addr='일본';
select * from memberTBL;

#------------------------------------------------------------------------------------------------------
# *중요*
select row_number( ) over(order by height desc) "키큰순위", userName, addr, height
	from userTBL;
select row_number( ) over(order by height desc, userName asc) "키큰순위", userName, addr, height
	from userTBL;
select addr, row_number( ) over(partition by addr order by height desc, userName asc) "지역별 키큰순위", userName, addr, height
	from userTBL;
    
#같은 순위일 때 같은 등수를 설정
select dense_rank( ) over(order by height desc) "키큰순위", userName, addr, height
	from userTBL;
    
#공동3위가 있을 때 다음은 4등이 아닌 5등
select rank( ) over(order by height desc) "키큰순위", userName, addr, height
	from userTBL;
    
select ntile(2) over(order by height desc) "반번호", userName, addr, height
	from userTBL;
select ntile(4) over(order by height desc) "반번호", userName, addr, height
	from userTBL;

#------------------------------------------------------------------------------------------------------
#lead(열 이름, 다음 행 위치, 다음행이 없을 경우 출력값) 순서로 지정한다.
select userName, addr, height as "키",
		height - (lead(height, 1, 0) over(order by height desc)) as "다음 사람과 키 차이"
	from userTBL;

#파티션으로 나눈 기준으로 first_value()값에서 - height
select addr, userName, height as "키",
		height - (first_value(height) over(partition by addr order by height desc))
			as "지역별 최대키와 차이"
	from userTBL;

# cume_dist 값의 그룹에 있는 값의 누적 분포치를 계산
#			키가 크거나 같은 사람이 전체의 몇 %만큼 차지하는지 누적하여 출력
select addr, userName, height as "키",
		(cume_dist() over(partition by addr order by height desc)) * 100 as "누적인원 백분율%"
	from userTBL;

#------------------------------------------------------------------------------------------------------
#피벗 테이블
create table pivotTest(
uName char(3),
season char(2),
amount int);

insert into pivotTest values('유재석', '겨울', 10);
insert into pivotTest values('강호동', '여름', 15);
insert into pivotTest values('유재석', '겨울', 25);
insert into pivotTest values('유재석', '봄',   3);
insert into pivotTest values('유재석', '봄',   37);
insert into pivotTest values('강호동', '겨울', 40);
insert into pivotTest values('유재석', '여름', 14);
insert into pivotTest values('유재석', '겨울', 22);
insert into pivotTest values('강호동', '여름', 64);
select * from pivotTest;

# 피벗은 한 열에 포함된 여러 값을 여러 열로 변환하여 출력하고 필요하면 집계까지 수행하는 기능
select uName,
	sum(case when season='봄' then amount end) as '봄',
	sum(case when season='여름' then amount end) as '여름',
    sum(case when season='가을' then amount end) as '가을',
    sum(case when season='겨울' then amount end) as '겨울'
from pivotTest
group by uName;

#------------------------------------------------------------------------------------------------------
select userid as '사용자', sum(price*amount) as '총 구매액'
	from buyTBL group by userid;

# 가상의 테이블을 만든다.
with abc(userid, total)
as
(select userid, sum(price*amount)
	from buyTBL group by userid)
select * from abc order by total desc;

select addr, max(height) from userTBL group by addr;

with cte_userTBL(addr, maxHeight)
as
(select addr, max(height) from userTBL group by addr)
select avg(maxHeight*1.0) as '각 지역별 최고키의 평균' from cte_userTBL;
#avg(maxHeight*1.0) => 1.0을 곱해주며 실수형으로 형 변환

#------------------------------------------------------------------------------------------------------














