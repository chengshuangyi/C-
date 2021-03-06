#include <string>
#include <iostream>
using namespace std;
class BOOK  //定义了一个书类
{
private:
	string _bookISBN;  //书的ISBN号
	float _price;      //书的价格

public:
	//定义了一个成员函数，这个函数是“实参为类类型的函数”
	//这个函数用于比较两本书的ISBN号是否相同
	bool isSameISBN(const BOOK & other) {
		return other._bookISBN == _bookISBN;
	}

	//类的构造函数  “传一个参数就可以进行调用的构造函数”（虽然它有两个形参，但其中一个有默认实参，只用一个参数也能进行调用）
	BOOK(string ISBN, float price = 0.0f) :_bookISBN(ISBN), _price(price) {}
};

int main()
{
	BOOK A("A-A-A");
	BOOK B("B-B-B");

	cout << A.isSameISBN(B) << endl;               //正常调用函数，无需发生转换

	cout << A.isSameISBN(string("A-A-A")) << endl; //此处即发生一个隐式转换：string类型-->BOOK类型，借助BOOK的构造函数进行转换，以满足isSameISBN函数的传参要求。
	cout << A.isSameISBN(BOOK("A-A-A")) << endl;   //显式创建匿名临时对象，也即是编译器干的事情。

	system("pause");
}