#include<iostream>
#include<string>
using namespace std;
int main15() 
{ 
	cout << "现在正在运行的是lean01-15\n" << endl;
	//选择结构之switch
	//长话多说，switch一般狗都不用，三目也用得比较少，if还是太强了
	//但学switch可以加深对选择结构的理解
	//个人认为，这节最重要的东西不是switch，而是break和default

	//ds出的题目
	/*题目一：编写一个C++程序，实现两个数的基本算术运算（加、减、乘、除）。用户输入两个数字和一个运算符，程序根据运算符使用switch语句执行相应的运算并输出结果。
	要求：
		1. 用户输入格式为：数字1 运算符 数字2（例如：5 + 3）
		2. 运算符包括： + （加法）、 - （减法）、 * （乘法）、 / （除法）
		3. 使用switch语句根据运算符进行分支处理。
		4. 考虑除法中除数为0的情况，如果除数为0，输出错误信息"Error: Division by zero!"。
		5. 如果输入的运算符不是上述四种之一，输出错误信息"Error: Invalid opera tor!"。*/

	//char a = '+', b = '-', c = '*', d = '/';
	//cout << int(a)<<'\t' << int(b)<<'\t' << int(c)<<'\t' << int(d) << endl;

	cout << "这是个基本计算机，请输入两个数和一个运算符（+ - * /），我会帮你计算出结果"<<"\n" << "输入示例：1.2/5" << endl;
	double a = 0, b = 0;
	char discout;
	while (1)
	{
		cin >> a >> discout >> b;
		switch (int(discout) % 10)
		{
		case 3://加法
			cout << a << "+" << b << "=" << a + b << endl;
			break;//如果没有这个break,程序会继续执行下一个case的代码
		case 5://减法
			cout << a << "-" << b << "=" << a - b << endl;
			break;
		case 2://乘法
			cout << a << "*" << b << "=" << a * b << endl;
			break;
		case 7://除法
			switch (int(b))
			{
			case 0:
				cout << "Error:Division by zero!" << endl;
				break;//这个break结束的是小switch的case0
			default:
				cout << a << "/" << b << "=" << a / b << endl;
				break;//这个switch结束的是小switch的default
			}//小switch的屁股
			break;//这个break是用来结束case7
		default://运算符号乱输入
			cout << "Error:Invalid operator!";
			break;
		}//大switch的屁股
	}//while的屁股

	//事实上，case后面接的是   整型常量表达式 。字符当然也是常量了，人家ASCII码都规定了的。
	//比如： case'+':
	//cout << "xxx" << endl;
	





	//下面是一些实验
	// 
	//double b;
	//cin >> b;
	//cout << int(b) << endl;//int(xx)是强制类型转换，字符转为整型时体现为ASCII码值，浮点转为整型时体现为取整

	//char ch[]="cpdd";
	/*char ch  ;
	cin >> ch;
	cout << int(ch) << endl;*/

		system("pause");

		return 0;
}