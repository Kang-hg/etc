SHOW variables like 'character_set_system';

select cast('2020-10-19 12:35:29.123' as date) as 'date';
select cast('2020-10-19 12:35:29.123' as time) as 'time';
select cast('2020-10-19 12:35:29.123' as datetime) as 'datetime';

use cookdb;
set @myVar1 = 5;
set @myVar2 = 3;
set @myVar3 = 4.25;
set @myVar4 = 'MC 이름 ==> ';
select @myVar1;
select @myVar2 + @myVar3 ;
select @myVar4, userName from userTBL where height > 180;

set @myVar1 = 3;
prepare myQuery
	from 'SELECT userName, height from userTBL order by height limit ?';
execute myQuery using @myVar1;


#=========================================================================================
use cookdb;
select avg(amount) as '평균 구매 개수' from buyTBL;

select cast(avg(amount) as signed integer) as '평균 구매 개수' from buyTBL;
select convert(avg(amount), signed integer) as '평균 구매 개수' from buyTBL;

select cast('2020$12$12' as date);
select cast('2020/12/12' as date);
select cast('2020%12%12' as date);
select cast('2020@12@12' as date);

select num, concat(cast(price as char(10)), 'x', cast(amount as char(4)), '=') as '단가x수량',
	price*amount as '구매역'
    from buyTBL;

select '100'+'200'; -- 문자와 문자를 더함 (정수로 변환되서 연산됨)
select concat('100', '200'); -- 문자와 문자를 연결 (문자로 처리)
select concat(100, '200'); -- 정수와 문자를 연결 (정수가 문자로 변환되서 처리)
select 1 > '3mega'; -- 정수인 3으로 변환되어서 비교
select 4 > '3mega'; -- 정수인 3으로 변환되어서 비교
select 0 = 'mega3'; -- 문자는 0으로 변환됨


#=========================================================================================
select if (100>200, '참이다.', '거짓이다.');
select ifnull(null, '널이군요.'), ifnull(100, '널이군요.');
select nullif(100,100), ifnull(200,100);

select case 10
		when 1 then '일'
		when 5 then '오'
        when 10 then '십'
        else '모름'
	end;
    
select ascii('A'), char(65);

select bit_length('abc'), char_length('abc'), length('abc');
select bit_length('가나다'), char_length('가나다'), length('가나다');

select concat_ws('/', '2020', '01', '01');

select elt(2, '하나', '둘', '셋'), field('둘', '하나', '둘', '셋'), find_in_set('둘', '하나,둘,셋'), instr('하나둘셋', '둘'), locate('둘', '하나둘셋');

select format(123456.123456, 4);


#=========================================================================================
select bin(31), hex(31), oct(31);
select insert('abcdefghi', 3, 4, '@@@@'), insert('abcdefghi', 3, 2, '@@@@');
select left('abcdefghi', 3), right('abcdefghi', 3);
select lower('abcdEFGH'), upper('abcdEFGH');
select lpad('쿡북', 6, '##'), rpad('쿡북', 7, '##');
select ltrim('	쿡북'), rtrim('쿡북	');
select trim('	쿡북	'), trim(both 'ㅋ' from 'ㅋㅋㅋ재미있어요.ㅋㅋㅋ');
select replace('IT 쿡북 MySQL', '쿡북', 'CookBook');
select reverse('MySQL');
select concat('IT', space(10), 'CookBook MySQL');
select substring('대한민국만세', 3, 2);
select substring_index('www.mysql.com', '.', 2), substring_index('www.mysql.com', '.', -2);
select abs(-100);
select ceiling(4.7), floor(4.7), round(4.7);


#=========================================================================================
select conv('AA', 16, 2), conv(100, 10, 8);					# 진법 변환
select degrees(PI()), radians(180);							# 라디안 값을 각도로 변환 , 각도를 라디안 값으로 변환
select mod(157, 10), 157 % 10, 157 mod 10;					# 나머지 값 계산
select pow(2, 3), sqrt(9); 									# 거듭제곱 , 루트 계산
select rand(), floor(1 + (rand() * (6-1)));					# 난수
select sign(100), sign(0), sign(-100.123); 					# 숫자가 양수, 0, 음수인지 구하여 1, 0, -1
select truncate(12345.12345, 2), truncate(12345.12345, -2);	# 소수점을 기준으로 정수 위치까지 구하고 버림


#=========================================================================================
select adddate('2020-01-01', interval 31 day), adddate('2020-01-01', interval 1 month);
select subdate('2020-01-01', interval 31 day), subdate('2020-01-01', interval 1 month);
select addtime('2020-01-01 23:59:59', '1:1:1'), addtime('15:00:00', '2:10:10');
select subtime('2020-01-01 23:59:59', '1:1:1'), subtime('15:00:00', '2:10:10');
select year(curdate()), month(current_date()), dayofmonth(current_date);
select hour(curtime()), minute(current_time()), second(current_time), microsecond(current_time);
select date(now()), time(now());
select datediff('2023-01-01', now()), timediff('23:23:59', '12:11:10');

select dayofweek(curdate()), monthname(curdate()), dayofyear(curdate());
select last_day('2020-02-01');
select makedate(2020, 32);
select maketime(12, 11, 10);
select period_add(202001, 11), period_diff(202001, 201812);
select quarter('2020-07-07');
select time_to_sec('12:11:10');


#=========================================================================================
select current_user(), database();

use cookdb;
select * from userTBL;
select found_rows();

use cookdb;
update buyTBL set price=price*2;
select row_count();

select sleep(5);
select '5초후에 이게 보여요';


#=========================================================================================
use cookdb;
select json_object('name', userName, 'height', height) as 'json 값'
	from userTBL
    where height >= 180;
    
set @json = '{ "userTBL" :
	[
		{"name":"강호동","height":182},
        {"name":"이휘재","height":180},
        {"name":"남희석","height":180},
        {"name":"박수홍","height":183}
	]
}';
select json_valid(@json) as json_valid;
select json_search(@json, 'one', '남희석') as json_search;
select json_extract(@json, '$.userTBL[2].name') as json_extract;
select json_insert(@json, '$.userTBL[0].mDate', '2019-09-09') as json_insert;
select json_replace(@json, '$.userTBL[0].name', '토마스') as json_replace;
select json_remove(@json, '$.userTBL[0]') as json_remove;


#=========================================================================================






















