#include<iostream>
//
////使用关键字namespace定义 命名空间N
//namespace N
//{
//	//a b c为命名空间成员
//	int a = 1; 
//	int b = 2;
//	int Add(int a, int b)
//	{
//		return a + b;
//	}
//}
//
////2 使用using将命名空间中成员引入
//using N::b;
////3 使用using namespace命名空间名称引入
//using namespace N;
//int main()
//{
//	//1 加命名空间名称及作用域限定符
//	printf("%d\n", N::a);
//	printf("%d\n", b);
//	printf("%d\n", Add(2,3));
//	
//	return 0;
//}

//int Add(int left, int right)
//{
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	return left + right;
//}
//long Add(int left)
//{
//	return left ;
//}
//int main()
//{
//	//通过输入不同精度实参调用不同同名函数
//	Add(10, 20);
//	Add(10.0, 20.0);
//	Add(10L);
//	return 0;
//}

void TestRef()
{
	int a = 10;
	int& ra = a;      //定义引用类型,ra是a的引用
	printf("%p\n", &a);
	printf("%p\n", &ra);
}
int main()
{
	return 0;
}