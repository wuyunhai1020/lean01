#include<iostream>
using namespace std;
int main21() 
{
	cout << "�������е���lean01-21" << endl;
	cout << endl;
	  
	//break����������� ѡ��ṹ �� ѭ���ṹ
	//һ�����ڣ�����switch���ս�case��default���ڣ�Ƕ�ף�ѭ���ṹ���սᣨ������ڲ㣩ѭ��
	//����switch����е�Ӧ��
	//�Ұѻ������������Ĵ���۹����ˡ���Ȼ����������������覴õģ��������������ֲ�����С���������覴�����޸���break�����ÿ��ܾ�û��ô������
	cout << "���Ǹ��������������������������һ���������+ - * /�����һ�����������" << "\n" << "����ʾ����1.2/5" << endl;
	double a = 0, b = 0;
	char discout;
	while (1)
	{
		cin >> a >> discout >> b;
		switch (discout)
		{
		case '+'://�ӷ�
			cout << a << "+" << b << "=" << a + b << endl;
			break;//���û�����break,��������ִ����һ��case�Ĵ���
		case '-'://����
			cout << a << "-" << b << "=" << a - b << endl;
			break;
		case '*'://�˷�
			cout << a << "*" << b << "=" << a * b << endl;
			break;
		case '/'://����
			switch (int(b))
			{
			case 0:
				cout << "Error:Division by zero!" << endl;
				break;//���break��������Сswitch��case'/'
			default:
				cout << a << "/" << b << "=" << a / b << endl;
				break;//���switch��������Сswitch��default
			}//Сswitch��ƨ��
			break;//���break����������case7
		default://�������������
			cout << "Error:Invalid operator!";
			break;
		}//��switch��ƨ��
		break;//����ôֱ�Ӵ������while
	}//while��ƨ��
	cout<<endl;





	//�������99�˷�����ϲ���������ˣ�����ʾ

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; ; j++)//�ɼ�����ʵfor�������Сֻ��û˭�����ԡ�����ȫû�˶�����
		{
			if (j > i) 
			{
				break;//ʵ����ѭ���Ĵ���
			}
			cout << j << '*' << i << '=' << j * i << "\t";



		}
		cout << endl;

	}
	cout << endl;


	system ("pause");

	return 0;
}