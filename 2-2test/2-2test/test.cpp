#include<iostream>
//
////ʹ�ùؼ���namespace���� �����ռ�N
//namespace N
//{
//	//a b cΪ�����ռ��Ա
//	int a = 1; 
//	int b = 2;
//	int Add(int a, int b)
//	{
//		return a + b;
//	}
//}
//
////2 ʹ��using�������ռ��г�Ա����
//using N::b;
////3 ʹ��using namespace�����ռ���������
//using namespace N;
//int main()
//{
//	//1 �������ռ����Ƽ��������޶���
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
//	//ͨ�����벻ͬ����ʵ�ε��ò�ͬͬ������
//	Add(10, 20);
//	Add(10.0, 20.0);
//	Add(10L);
//	return 0;
//}

void TestRef()
{
	int a = 10;
	int& ra = a;      //������������,ra��a������
	printf("%p\n", &a);
	printf("%p\n", &ra);
}
int main()
{
	return 0;
}