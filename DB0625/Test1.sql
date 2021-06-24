# 1번 문제
CREATE TABLE cookdb.emp (select dept_no as 'deptNo', dept_name as 'deptName'
	from employees.departments);

# 2번 문제
select userID as '사용자ID', sum(amount) as '총 구매개수'
	from buyTBL
    group by userID order by userID desc;

# 3번 문제
select userID as '사용자ID', avg(amount) as '평균 구매 개수'
	from buyTBL
    group by userID
    having avg(amount) >= 2
    order by avg(amount) desc;

# 4번 문제
select num, groupName, sum(amount) as '개수'					# 보여줄 항목, amount
	from buyTBL												# 기준
    group by groupName, num									# 그룹화 할 항목
    with rollup;											# 소계, 합계

#=======================================================================================
# 5번 문제
select addr, row_number( ) over(partition by addr order by mDate) "지역별 가입일 빠른 순위", userName, addr, mDate
	from userTBL;

# 6번 문제
#lead(열 이름, 다음 행 위치, 다음행이 없을 경우 출력값) 순서로 지정한다.
select userName, addr, mDate as '가입일',
	datediff(lead(mDate,1,0) over(order by mDate), mDate) as '다른 사람과의 가입일자 차이'
    from userTBL;
    
#	datediff(mDate - (lead(mDate,1,null)) over(order by mDate)) as '다른 사람과의 가입일자 차이'
#	datediff(2004-12-12,2006-04-04) over(order by mDate) as '다른 사람과의 가입일자 차이'

# 7번 문제
select season,
	sum(case when uName='유재석' then amount end) as '유재석',
    sum(case when uName='강호동' then amount end) as '강호동'
    from pivotTest
    group by season;