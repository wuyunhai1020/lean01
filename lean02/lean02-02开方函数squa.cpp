//lean02-02开方函数squa.cpp
#include<iostream>
using namespace std;
double squa(double s)//计算a的算数平方根
{	
	if (s < 0)
	{
		cout << "你输入了一个负数，程序将终止" << endl;
		return -1;

	}

	else if (s == 0)
	{
		cout << "你输入了0，这是不应该的" << endl;
		return 0;
	}

	else if(s>0)
	{
		double x = 2;
		for (int i = 1; i <= 99; i++)//迭代100次
		{

			x = (x + s / x) / 2;
		}
		cout << "你输入了一个正数，成功运行" << endl;
		return x;
	}
	else//本意是用来防止输入的是字符什么鬼鬼的，结果发现似乎用不上啊
	{
		cout << "?" << endl;
		return -2;
	}
}
