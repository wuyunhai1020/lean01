#include<iostream>
using namespace std;
int main20() {
	cout << "现在运行的是lean01-20" << endl;
	cout << endl;
	//嵌套结构其实不只是for嵌套自己，各种嵌套，如if嵌进for啊，之类的，都有的。这里仅以for嵌套for为例，以加深对for循环的理解
	//要求：制作99乘法表（顺便祝隔壁有情人99哇）
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