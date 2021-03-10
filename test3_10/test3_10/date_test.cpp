//#include<iostream>
//using namespace std;
//
//class Time
//{
//public:
//	Time& operator=(const Time& t)
//	{
//		cout << "Time& operator=(const Time& t)" << endl;
//		return *this;
//	}
//	//构造函数
//	Time(int hour = 0, int minute = 0)
//		:_hour(hour)
//		,_minute(minute)
//	{
//		cout << "Time(int hour = 0, int minute = 0)" << endl;
//	}
//	//拷贝构造函数
//	Time(const Time& t)
//		:_hour(t._hour)
//		,_minute(t._minute)
//	{
//		cout << "Time(const Time& t)" << endl;
//	}
//	
//private:
//	int _hour;
//	int _minute;
//};
//class Date
//{
//public:
//	//构造函数  (初始化列表)
//	Date(int year, int month, int day, int hour, int minute, int ref)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//		,_t(hour,minute)
//		,_ref(ref)
//		,_n(10)
//	{
//	}
//
//	//构造函数 (不用初始化列表)
//	/*Date(int year, int month, int day, int hour, int minute, int ref)
//		: _ref(ref)
//		, _n(10)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		Time t(hour, minute);
//		_t = t;
//	}*/
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;        //没有默认构造函数的自定义类型
//	int& _ref;      //引用
//	const int _n;   //const
//};
//int main()
//{
//	Date d1(1999, 5, 4, 5, 4, 8);
//	return 0;
//}


#include<iostream>
using namespace std;

class A
{
public:
	A()
	{
		++_count;
	}
	A(const A& a)
	{
		++_count;
	}
	static int GetCount()
	{
		return _count;
	}
private:
	static int _count;  //声明
};

int A::_count = 0;     //定义初始化
int main()
{
	cout << A::GetCount() << endl;
	A a1;
	A a2;
	A a3;
	A a4;
	A a5(a1);
	cout << sizeof(A) << endl;
	cout << A::GetCount() << endl;
	return 0;
}