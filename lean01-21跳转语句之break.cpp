#include<iostream>
using namespace std;
int main21() 
{
	cout << "现在运行的是lean01-21" << endl;
	cout << endl;
	  
	//break语句用于跳出 选择结构 和 循环结构
	//一般用于：①在switch中终结case或default②在（嵌套）循环结构中终结（最近的内层）循环
	//①在switch语句中的应用
	//我把基本计算机那里的代码扣过来了。当然这个计算机代码是有瑕疵的，除数的整数部分不能是小数。但这个瑕疵如果修复，break的作用可能就没那么明显了
	cout << "这是个基本计算机，请输入两个数和一个运算符（+ - * /），我会帮你计算出结果" << "\n" << "输入示例：1.2/5" << endl;
	double a = 0, b = 0;
	char discout;
	while (1)
	{
		cin >> a >> discout >> b;
		switch (discout)
		{
		case '+'://加法
			cout << a << "+" << b << "=" << a + b << endl;
			break;//如果没有这个break,程序会继续执行下一个case的代码
		case '-'://减法
			cout << a << "-" << b << "=" << a - b << endl;
			break;
		case '*'://乘法
			cout << a << "*" << b << "=" << a * b << endl;
			break;
		case '/'://除法
			switch (int(b))
			{
			case 0:
				cout << "Error:Division by zero!" << endl;
				break;//这个break结束的是小switch的case'/'
			default:
				cout << a << "/" << b << "=" << a / b << endl;
				break;//这个switch结束的是小switch的default
			}//小switch的屁股
			break;//这个break是用来结束case7
		default://运算符号乱输入
			cout << "Error:Invalid operator!";
			break;
		}//大switch的屁股
		break;//我特么直接打破你个while
	}//while的屁股
	cout<<endl;





	//②这里借99乘法表（恭喜隔壁有情人）来演示

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; ; j++)//可见，其实for里面的三小只，没谁都可以。就算全没了都可以
		{
			if (j > i) 
			{
				break;//实现了循环的打破
			}
			cout << j << '*' << i << '=' << j * i << "\t";



		}
		cout << endl;

	}
	cout << endl;


	system ("pause");

	return 0;
}