#include <stdio.h>

/*
struct date
{
	int month;
	int day;
	int year;
};

struct student
{
	int number;
	char name[20];
	double grade;
	struct date* dob;
};

int main() {
	struct date d = { 10, 17, 1993 };
	struct student s = { 201917141, "강현구", 4.17 };

	s.dob = &d;
	
	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %f\n", s.grade);
	printf("생년월일: %d년 %d월 %d일\n", s.dob->year, s.dob->month, s.dob->day);
}

*/