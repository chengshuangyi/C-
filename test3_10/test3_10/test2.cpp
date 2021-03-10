//有两个日期，求两个日期之间的天数，如果两个日期是连续的我们规定他们之间的天数为两天
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;

bool is_leap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return true;
	return false;
}
int cal_days(int year, int month, int day)
{
	int daytab[2][13] = {
		{0,31,28,31,30,31,30,31,31,30,31,30,31},
		{0,31,29,31,30,31,30,31,31,30,31,30,31} };
	int t_year = 0;
	int days = 0;
	while (t_year < year)
	{
		if (is_leap(t_year))
			days += 366;
		else
			days += 365;
		++t_year;
	}
	int t_month = 1;
	int falg = 0;
	while (t_month < month)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			falg = 1;
		days += daytab[falg][t_month];
		++t_month;
	}
	return days += day;
}
int main()
{
	int y1, y2;
	int m1, m2;
	int d1, d2;
	while (scanf("%04d%02d%02d", &y1, &m1, &d1) != EOF) {
		scanf("%04d%02d%02d", &y2, &m2, &d2);
		int n1 = cal_days(y1, m1, d1);
		int n2 = cal_days(y2, m2, d2);
		cout << abs(n1 - n2) + 1 << endl;
	}
	return 0;
}