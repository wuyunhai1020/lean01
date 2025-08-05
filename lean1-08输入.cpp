#include<iostream>
#include<string>
#include<limits>
#include<sstream>
using namespace std;
int main8() {
	cout << "现在是lean01-8正在运行" << endl;

	int a;
		cout << "请给整形变量赋值"<<endl;
		cin >> a;
		//cin.ignore(numeric_limits<streamsize>::max(), '\n');//清空缓冲区用的，解除注释即可使用
		cout << "你输入的整型值=" << a << endl;//如果这里输入了一个小数，系统会取其整数部分，小数部分留在缓冲区，等待下次输入


    float b;
		cout << "请给浮点型变量赋值" << endl;
		cin >> b;
		cout << "你输入的浮点型值=" << b << endl;

	char c;
		cout << "请给字符型变量赋值" << endl;
		cin >> c;
		cout << "你输入的字符型值=" << c <<"\n" <<"其ASCII码值="<<int(c) << endl;

	string d;
		cout << "请给字符串型变量赋值" << endl;
		cin >> d;
		cout << "你输入的字符串型值=" << d << endl;

    bool e;

		cout << "请给布尔型变量赋值" << endl;//如果输入非数字会提取失败，直接报0了
		cin >> e;
		cout << "你输入的布尔型值=" << e << endl;
	

	system("pause");

	return 0;
}