#include<iostream>
using namespace std;
int main22()
{
	cout << "现在正在运行的是lean01-22" << endl;
	cout << endl;

	//continue的作用是，跳过本次循环中余下尚未执行的语句，继续执行下一次循环
	//我们以“逢7过”游戏为例：
	//逢7过：一个接一个报数，如果报的数中某位数字含有7或者这个数是7的倍数，则必须回答真心话

	//好吧，这里的continue其实没用好，作用不是很明显。以后看有没有案例再给他补上

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	for (int i = 1; i < 1000; i++)
	{
		a = i / 100;
		b = (i - a * 100) / 10;
		c = (i - a * 100 - b * 10) / 1;
		d = i % 7;
		cout << i << endl;
		if (a == 7 || b == 7 || c == 7 || d == 0)
		{
			cout << "中奖了！说出你的真心话" << endl;
			continue;
		}
		if (i != 999)
		{
			cout << "很好，请继续吧" << endl;
		}
		else {
			cout << "冻结吧！" << endl;
		}


	}









	system("pause");

	return 0;


}