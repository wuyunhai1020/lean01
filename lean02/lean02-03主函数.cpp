//lean02-03������.cpp
#include<iostream>
#include"lean02-00��������.hpp"
using namespace std;
int main()
{
	cout << "�����������е���lean02-03\n" << endl;

	cout << "������һ���������ҽ���ȡ��������ƽ����" << endl;
	cout << "���븺��������ֹ����\n" << endl;

	int j = 1;
	while (j<=10)
	{
		j++;//��ֹһֱ����ȥ���ҵ���Ūը��

		double a = 1;//a��ʼ����ֵΪ1����ס��һ�㡣a��Ҫ������������
		cin >> a;

		double x = 3;//x��Ҫ�������������
		x = squa(a);
		if (a >= 0)
		{
			cout << a << "������ƽ������" << x << endl;
			cout << endl;
		}
		else
		{
			cout<<"ѭ���Ѿ���ֹ" << endl;
			break;
		}

	}
	

	system("pause");

	return 0;
}