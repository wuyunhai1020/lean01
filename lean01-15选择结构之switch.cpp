#include<iostream>
#include<string>
using namespace std;
int main15() 
{ 
	cout << "�����������е���lean01-15\n" << endl;
	//ѡ��ṹ֮switch
	//������˵��switchһ�㹷�����ã���ĿҲ�õñȽ��٣�if����̫ǿ��
	//��ѧswitch���Լ����ѡ��ṹ�����
	//������Ϊ���������Ҫ�Ķ�������switch������break��default

	//ds������Ŀ
	/*��Ŀһ����дһ��C++����ʵ���������Ļ����������㣨�ӡ������ˡ��������û������������ֺ�һ���������������������ʹ��switch���ִ����Ӧ�����㲢��������
	Ҫ��
		1. �û������ʽΪ������1 ����� ����2�����磺5 + 3��
		2. ����������� + ���ӷ����� - ���������� * ���˷����� / ��������
		3. ʹ��switch��������������з�֧����
		4. ���ǳ����г���Ϊ0��������������Ϊ0�����������Ϣ"Error: Division by zero!"��
		5. �������������������������֮һ�����������Ϣ"Error: Invalid opera tor!"��*/

	//char a = '+', b = '-', c = '*', d = '/';
	//cout << int(a)<<'\t' << int(b)<<'\t' << int(c)<<'\t' << int(d) << endl;

	cout << "���Ǹ��������������������������һ���������+ - * /�����һ�����������"<<"\n" << "����ʾ����1.2/5" << endl;
	double a = 0, b = 0;
	char discout;
	while (1)
	{
		cin >> a >> discout >> b;
		switch (int(discout) % 10)
		{
		case 3://�ӷ�
			cout << a << "+" << b << "=" << a + b << endl;
			break;//���û�����break,��������ִ����һ��case�Ĵ���
		case 5://����
			cout << a << "-" << b << "=" << a - b << endl;
			break;
		case 2://�˷�
			cout << a << "*" << b << "=" << a * b << endl;
			break;
		case 7://����
			switch (int(b))
			{
			case 0:
				cout << "Error:Division by zero!" << endl;
				break;//���break��������Сswitch��case0
			default:
				cout << a << "/" << b << "=" << a / b << endl;
				break;//���switch��������Сswitch��default
			}//Сswitch��ƨ��
			break;//���break����������case7
		default://�������������
			cout << "Error:Invalid operator!";
			break;
		}//��switch��ƨ��
	}//while��ƨ��

	//��ʵ�ϣ�case����ӵ���   ���ͳ������ʽ ���ַ���ȻҲ�ǳ����ˣ��˼�ASCII�붼�涨�˵ġ�
	//���磺 case'+':
	//cout << "xxx" << endl;
	





	//������һЩʵ��
	// 
	//double b;
	//cin >> b;
	//cout << int(b) << endl;//int(xx)��ǿ������ת�����ַ�תΪ����ʱ����ΪASCII��ֵ������תΪ����ʱ����Ϊȡ��

	//char ch[]="cpdd";
	/*char ch  ;
	cin >> ch;
	cout << int(ch) << endl;*/

		system("pause");

		return 0;
}