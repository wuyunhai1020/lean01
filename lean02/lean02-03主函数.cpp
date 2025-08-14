//lean02-03主函数.cpp
#include<iostream>
#include"lean02-00声明函数.hpp"
using namespace std;
int main()
{
	cout << "现在正在运行的是lean02-03\n" << endl;

	cout << "请输入一个正数，我将求取它的算术平方根" << endl;
	cout << "输入负数可以终止程序\n" << endl;

	int j = 1;
	while (j<=10)
	{
		j++;//防止一直跑下去把我电脑弄炸了

		double a = 1;//a初始化赋值为1，记住这一点。a是要当被开方数的
		cin >> a;

		double x = 3;//x是要当开方后的数的
		x = squa(a);
		if (a >= 0)
		{
			cout << a << "的算术平方根是" << x << endl;
			cout << endl;
		}
		else
		{
			cout<<"循环已经终止" << endl;
			break;
		}

	}
	

	system("pause");

	return 0;
}