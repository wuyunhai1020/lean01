#include<iostream>
using namespace std;
int main17() {
	cout << "�����������е���lean01-17" << endl;
	//while�Ĵ���÷���lean01-15�Ѿ������ˣ�������Ϊһ����������Ϸ��������


	//�����������ӣ����õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));
	//1��ϵͳ���������
	int num = rand() % 100 + 1;//rand()%100 ���� 0~99��������������1����1~100
    int value = 0;
	int life = 8;

	cout << "��������²�����֣������ֻ�ܲ�8��Ŷ" << endl;

	while ((value != num)&&(life>0))
	{
		life--;
		//2���û�����²���
	
		cin >> value;

		//3��ϵͳ�����ж��뷴��
		if (value > num)
		{
			cout << "�²����" << endl;
		}
		else if (value < num)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "�²���ȷ" << endl;
			//break;//����ǿ��Է�break�ĵ�
		}

	}


	//��������һ�ֽ���ѭ���ķ��������ȣ���ѭ��������Ϊ�棬Ȼ���ڲ¶Ե��Ǹ����֣�ִ�и�break���������ע�ʹ�


	system("pause");
		
	return 0;
}