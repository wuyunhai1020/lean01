#include<iostream>
#include<cmath>
using namespace std;
int main18() {
	cout << "�����������е���lean01-18" << endl;
	cout << endl;
	//do while����ִ��һ����䣬���ж�һ������;while�������ж�������ִ�����
	//���ӣ����0��9
	int num = 0;
	do
	{   
		num++;
		cout << num << endl;
		cout << endl;
	} 
	while (num < 9);

	//��ҵ��ˮ�ɻ���
	//ˮ�ɻ�����ָһ��3λ��������ÿ��λ�ϵ����ֵ�������֮�͵���������
	//eg:1^3+5^3+3^3=153
	//����do-while��䣬�������3λ���е�ˮ�ɻ�����
	cout << "�뿪ʼ��ı���" << endl;
	int value = 99;
	int a = 0, b = 0, c = 0;
	do {
		value++;
		a = value / 100;
		b = (value - a * 100) / 10;
		c = (value - a * 100 - b * 10) / 1;
		if ((pow(a,3)) + pow(b,3) + c*c*c == value) {
			cout << value << endl;
			/*cout << endl;*/
		}
		else {
			//���Կ��Ų�д
		}
	} while (value < 999);

	//�˷��Ĵ���취:
	//����1������pow������#include<cmath>��pow(����,ָ����
	//����2��һ������
	//����3��дѭ������֮���½�forѭ��




	system("pause");
	//���̵߳��� DLL (/MDd)
	return 0;
}
