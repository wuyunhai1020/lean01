#include<iostream>
using namespace std;
int main27()
{
	cout << "�����������е���lean01-27" << endl;
	cout << endl;
	//��ά����������;
	int arr1[2][3] =
	{
		{1,3,5},
		{2,4,6}

	};
	for (int j = 0; j < 2; j++)
	{
		for (int i = 0; i < 3; i++)
		{

			cout << arr1[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;
	//1.���Բ鿴ռ���ڴ�ռ��С
	cout << "��ά����arr1ռ���ڴ�ռ�Ϊ��" << sizeof(arr1) << endl;
	cout << "���һ��ռ���ڴ�ռ�Ϊ" << sizeof(arr1[0]) << endl;
	cout << "���һ�е�һ��Ԫ��ռ���ڴ�Ϊ��" << sizeof(arr1[0][0]) << endl;
	//��ô��һ����ô���أ�д��ѭ������ÿһ�еĵ���Ԫ���ڴ���Ӽ��ɣ����������·���
	//arr1[0]Ĭ���ǵ�һ��
	cout << "��ά��������Ϊ��" << sizeof(arr1) / sizeof(arr1[0]) << endl;
	cout << "��ά��������Ϊ��" <<sizeof(arr1[0]) / sizeof(arr1[0][0]) << endl;
	

	//2.���Բ鿴�����׵�ַ
	cout<<"��ά������׵�ַΪ"<<(int)arr1<< endl;
	cout<<"��ά�����һ���׵�ַΪ��"<<(int)arr1[0] << endl;
	cout << "��ά����ڶ����׵�ַΪ��" << (int)arr1[1] << endl;
	cout << "��ά�����һ�е�һ��Ԫ���׵�ַΪ��" << (int)&arr1[0][0] << endl;//����arr1[0][0]�Ǹ�����Ҫ�����ĵ�ַ����Ҫȡַ��&
	cout << "��ά�����һ�еڶ���Ԫ���׵�ַΪ��" << (int)&arr1[0][1]<< endl;
	cout << "��ά����ڶ��е�һ��Ԫ���׵�ַΪ��" << (int)&arr1[1][0] << endl;
	system("pause");

	return 0;
}