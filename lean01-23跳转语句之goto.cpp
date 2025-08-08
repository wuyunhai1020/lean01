#include<iostream>
using namespace std;
int main()
{
	cout << "现在正在运行的是lean01-23" << endl;
	cout << endl;

	//goto，也叫做飞雷神，可以无视结构直接跳转语句
	//大致是这样的：首先，创建标志：goto flag（当然其他的名称也可以），然后插入标志，这样代码执行到goto的时候，就会跳转到标志处继续执行。
	//需要注意的是，标志完全可以在goto前面，不过这样很容易造成死循环就是了。
	//goto尽量别乱用，容易崩

	//示例：这里稍微优化了一下“逢7过”的代码
	cout << "下面将进行“逢7过”游戏" << endl;
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
		cout << "冻结吧！" << endl;
	}





	system("pause");

	return 0;
}