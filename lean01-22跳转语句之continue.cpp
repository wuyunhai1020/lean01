#include<iostream>
using namespace std;
int main22()
{
	cout << "�����������е���lean01-22" << endl;
	cout << endl;

	//continue�������ǣ���������ѭ����������δִ�е���䣬����ִ����һ��ѭ��
	//�����ԡ���7������ϷΪ����
	//��7����һ����һ�������������������ĳλ���ֺ���7�����������7�ı����������ش����Ļ�

	//�ðɣ������continue��ʵû�úã����ò��Ǻ����ԡ��Ժ���û�а����ٸ�������

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	for (int i = 1; i < 1000; i++)
	{
		a = i / 100;
		b = (i - a * 100) / 10;
		c = (i - a * 100 - b * 10) / 1;
		d = i % 7;
		cout << i << endl;
		if (a == 7 || b == 7 || c == 7 || d == 0)
		{
			cout << "�н��ˣ�˵��������Ļ�" << endl;
			continue;
		}
		if (i != 999)
		{
			cout << "�ܺã��������" << endl;
		}
		else {
			cout << "����ɣ�" << endl;
		}


	}









	system("pause");

	return 0;


}