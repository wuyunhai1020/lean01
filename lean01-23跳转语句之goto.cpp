#include<iostream>
using namespace std;
int main()
{
	cout << "�����������е���lean01-23" << endl;
	cout << endl;

	//goto��Ҳ���������񣬿������ӽṹֱ����ת���
	//�����������ģ����ȣ�������־��goto flag����Ȼ����������Ҳ���ԣ���Ȼ������־����������ִ�е�goto��ʱ�򣬾ͻ���ת����־������ִ�С�
	//��Ҫע����ǣ���־��ȫ������gotoǰ�棬�������������������ѭ�������ˡ�
	//goto���������ã����ױ�

	//ʾ����������΢�Ż���һ�¡���7�����Ĵ���
	cout << "���潫���С���7������Ϸ" << endl;
	for (int i = 1; i <= 1000; i++)
	{
		cout << i << endl;
		cout << endl;
		int a = i / 100;
		int b = (i - a*100) / 10;
		int c = i - a * 100 - b * 10;
		if ((i % 7 == 0) || (a == 7) || (b == 7) || (c == 7))
		{
			goto flag;



		}
		flag;
		cout << "����ɣ�" << endl;
	}





	system("pause");

	return 0;
}