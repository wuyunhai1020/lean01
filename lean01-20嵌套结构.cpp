#include<iostream>
using namespace std;
int main20() {
	cout << "�������е���lean01-20" << endl;
	cout << endl;
	//Ƕ�׽ṹ��ʵ��ֻ��forǶ���Լ�������Ƕ�ף���ifǶ��for����֮��ģ����еġ��������forǶ��forΪ�����Լ����forѭ�������
	//Ҫ������99�˷���˳��ף����������99�ۣ�
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++) 
		{
			cout << j << '*' << i << '='<<j*i<<"\t";
		
		
		
		}
		cout << endl;
	
	}

	cout << endl;

	system("pause");

	return 0;
}