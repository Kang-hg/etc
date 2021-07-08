DROP PROCEDURE IF EXISTS ifProc1; -- 기존에 만든적이 있다면 삭제
DELIMITER $$
CREATE PROCEDURE ifProc1()
BEGIN
	DECLARE var1 INT;
    SET var1 = 100;
    
    IF var1 = 100 THEN
		SELECT '100입니다.';
	else
		SELECT '100 이 아닙니다.';
	END IF;
END $$
DELIMITER ;
CALL ifProc1();
#####################################################################################################
DROP PROCEDURE IF EXISTS ifProc2;
USE employees;
DELIMITER $$
CREATE PROCEDURE ifProc2()
BEGIN
	DECLARE hireDATE DATE;
    DECLARE curDATE DATE;
    DECLARE days INT;
    SELECT hire_date INTO hireDATE
		FROM employees.employees
        WHERE emp_no = 10001;
        
	SET curDATE = CURRENT_DATE();
    SET days = DATEDIFF(curDATE, hireDATE);
    IF (days/365) >= 5 THEN
		SELECT CONCAT('입사한지', days, '일이나 지났습니다. 축하합니다!') AS '메세지';
	ELSE
		SELECT '입사한지' + days + '일밖에 안되었네요. 열심히 일하세요.' AS '메세지';
	END IF;
END $$
DELIMITER ;
CALL ifProc2();
SELECT emp_no, CONCAT(first_name, last_name) as 'name', hire_date
	FROM employees.employees
	WHERE emp_no = 10001;

DROP PROCEDURE IF EXISTS caseProc;
DELIMITER $$
CREATE PROCEDURE caseProc()
BEGIN
	DECLARE point INT;
    DECLARE credit CHAR(1);
    SET point = 77;
    
    CASE
		WHEN point >= 90 THEN
			SET credit = 'A';
		WHEN point >= 80 THEN
			SET credit = 'B';
		WHEN point >= 70 THEN
			SET credit = 'C';
		WHEN point >= 60 THEN
			SET credit = 'D';
		ELSE
			SET credit = 'F';
    END CASE;
    SELECT CONCAT('취득점수 ==>', point), CONCAT('학점==>', credit);
END $$
DELIMITER ;
CALL caseProc();
################################################################################
SELECT uT.userID, uT.userName, sum(bT.price * bT.amount) AS 총구매액,
	CASE
		WHEN sum(price * amount) >= 1000 THEN '최우수고객'
        WHEN sum(price * amount) >= 000 THEN '일반고객'
        ELSE '유령고객'
	END AS '고객등급'
	FROM userTBL uT
		LEFT OUTER JOIN buyTBL bT
			ON uT.userID = bT.userID
				GROUP BY uT.userID
                ORDER BY sum(bT.price * bT.amount) DESC;
################################################################################	
select uT.userID, uT.userName, sum(bT.price * bT.amount) as '총구매액',
	case
		when sum(price*amount) >= 1000 then '1등급 고객'
		when sum(price*amount) >= 000 then '등외 고객'
        else '쓰레기'
	end as '고객등급'
    from userTBL uT
		left outer join buyTBL bT
			on uT.userID = bT.userID
	group by uT.userID
	order by sum(bT.price * bT.amount) desc;