#include<iostream>
using namespace std;
int main17() {
	cout << "现在正在运行的是lean01-17" << endl;
	//while的大概用法在lean01-15已经体现了，这里作为一个猜数字游戏放在这里


	//添加随机数种子，利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));
	//1、系统生成随机数
	int num = rand() % 100 + 1;//rand()%100 生成 0~99的随机数，后面加1就是1~100
    int value = 0;
	int life = 8;

	cout << "请输入你猜测的数字，你最多只能猜8次哦" << endl;

	while ((value != num)&&(life>0))
	{
		life--;
		//2、用户输入猜测数
	
		cin >> value;

		//3、系统进行判断与反馈
		if (value > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (value < num)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "猜测正确" << endl;
			//break;//这就是可以放break的点
		}

	}


	//还有另外一种结束循环的方法。首先，令循环条件恒为真，然后在猜对的那个部分，执行个break，详见上面注释处


	system("pause");
		
	return 0;
}