//lean02-02��������squa.cpp
#include<iostream>
using namespace std;
double squa(double s)//����a������ƽ����
{	
	if (s < 0)
	{
		cout << "��������һ��������������ֹ" << endl;
		return -1;

	}

	else if (s == 0)
	{
		cout << "��������0�����ǲ�Ӧ�õ�" << endl;
		return 0;
	}

	else if(s>0)
	{
		double x = 2;
		for (int i = 1; i <= 99; i++)//����100��
		{

			x = (x + s / x) / 2;
		}
		cout << "��������һ���������ɹ�����" << endl;
		return x;
	}
	else//������������ֹ��������ַ�ʲô���ģ���������ƺ��ò��ϰ�
	{
		cout << "?" << endl;
		return -2;
	}
}
