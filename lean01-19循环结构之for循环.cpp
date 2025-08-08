#include<iostream>
using namespace std;
int main19() {
	cout << "现在正在运行的是lean01-19" << endl;
	cout << endl;

	//for循环：标准格式：for(起始表达式;循环条件;末尾循环体){循环语句；}
	//看例子：
	for (int a = 1; a <= 9; a++) {
		cout << a << "\n" << endl;
	}
	//从显示的结果很容易看出，对于格式为for(0;1;2){3}来说，执行顺序是0>1>3>2>1>3>2>...
	//简单来说，就是，先执行起始表达式，然后根据循环条件判断是否可以进行，若可以，则进入循环语句执行代码，执行一次后执行末尾循环体的代码，然后再次根据循环条件判断是否进行下一次
	//试着写乘方看看吧
	int b=0, n=0;
	int k = 1;
	cout<<"输入底数" << endl;
	cin >> b;
	cout << "输入指数" << endl;
	cin >> n;
	for (int c =1; k <= n; k++) 
	{
		c = c * b;
		cout << c << endl;
	}
	





	system("pause");

	return 0;
}