create database movieDB;

use movieDB;
create table movieTBL
(	movie_id		int,
	movie_title		varchar(30),
	movie_director	varchar(20),
    movie_star		varchar(20),
    movie_script	longtext,
    movie_film		longblob
)	default charset=utf8mb4;

insert into movieTBL values (1, '쉰들러 리스트', '스필버그', '리암 니슨',
	load_file('C:/SQL/Movies/Schindler.txt'), load_file('C:/SQL/Movies/Schindler.mp4'));

select * from movieTBL;

show variables like 'max_allowed_packet';

show variables like 'secure_file_priv';


#============================================================================================
truncate movieTBL;

insert into movieTBL values (1, '쉰들러 리스트', '스필버그', '리암 니슨',
	load_file('C:/MySQL/Movies/Schindler.txt'), load_file('C:/MySQL/Movies/Schindler.mp4'));
insert into movieTBL values (2, '쇼생크 탈출', '프랭크 다라본트', '팀 로빈스',
	load_file('C:/MySQL/Movies/Shawshank.txt'), load_file('C:/MySQL/Movies/Shawshank.mp4'));
insert into movieTBL values (3, '라스트 모히칸', '마이클 만', '다니엘 데이 루이스',
	load_file('C:/MySQL/Movies/mohican.txt'), load_file('C:/MySQL/Movies/mohican.mp4'));
select * from movieTBL;

select movie_script from movieTBL where movie_id=1
	into outfile 'C:/MySQL/Movies/Schindler_out.txt'
    lines terminated by '\\n';

select movie_film from movieTBL where movie_id=3
	into dumpfile 'C:/MySQL/Movies/Mohican_out.mp4';


#============================================================================================










