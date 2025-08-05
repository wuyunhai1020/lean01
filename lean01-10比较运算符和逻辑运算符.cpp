#include<iostream>
using namespace std;
int main() {
	cout << "现在是lean01-10正在运行" << endl;
	int a = 10;
	int b = 20;
	cout << ( a == b) << endl;//这里加括号是为了让编译器先计算括号内的表达式，再输出结果，否则先输出a，后面的==b机器就看不懂了
	//比较运算符：==，！=，<,>,<=,>=

	system("pause");

	return 0;
}