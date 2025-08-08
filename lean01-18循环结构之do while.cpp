#include<iostream>
#include<cmath>
using namespace std;
int main18() {
	cout << "现在正在运行的是lean01-18" << endl;
	cout << endl;
	//do while是先执行一次语句，再判断一次条件;while则是先判断条件再执行语句
	//例子，输出0到9
	int num = 0;
	do
	{   
		num++;
		cout << num << endl;
		cout << endl;
	} 
	while (num < 9);

	//作业：水仙花数
	//水仙花数是指一个3位数，它的每个位上的数字的三次幂之和等于它本身
	//eg:1^3+5^3+3^3=153
	//请用do-while语句，求出所有3位数中的水仙花数。
	cout << "请开始你的表演" << endl;
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
			//可以空着不写
		}
	} while (value < 999);

	//乘方的处理办法:
	//方法1：引入pow函数：#include<cmath>，pow(底数,指数）
	//方法2：一个个乘
	//方法3：写循环，见之于下节for循环




	system("pause");
	//多线程调试 DLL (/MDd)
	return 0;
}
