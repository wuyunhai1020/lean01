#include<iostream>
#include<string>
#include<limits>
#include<sstream>
using namespace std;
int main8() {
	cout << "������lean01-8��������" << endl;

	int a;
		cout << "������α�����ֵ"<<endl;
		cin >> a;
		//cin.ignore(numeric_limits<streamsize>::max(), '\n');//��ջ������õģ����ע�ͼ���ʹ��
		cout << "�����������ֵ=" << a << endl;//�������������һ��С����ϵͳ��ȡ���������֣�С���������ڻ��������ȴ��´�����


    float b;
		cout << "��������ͱ�����ֵ" << endl;
		cin >> b;
		cout << "������ĸ�����ֵ=" << b << endl;

	char c;
		cout << "����ַ��ͱ�����ֵ" << endl;
		cin >> c;
		cout << "��������ַ���ֵ=" << c <<"\n" <<"��ASCII��ֵ="<<int(c) << endl;

	string d;
		cout << "����ַ����ͱ�����ֵ" << endl;
		cin >> d;
		cout << "��������ַ�����ֵ=" << d << endl;

    bool e;

		cout << "��������ͱ�����ֵ" << endl;//�����������ֻ���ȡʧ�ܣ�ֱ�ӱ�0��
		cin >> e;
		cout << "������Ĳ�����ֵ=" << e << endl;
	

	system("pause");

	return 0;
}