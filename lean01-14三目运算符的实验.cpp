#include<iostream>
using namespace std;
int main14(){
	cout << "现在正在运行的是lean01-14\n" << endl;
	cout << "请输入两个整数，我将为你选择其中较大的一个\n" << endl;
	int a = 0, b = 0;
	cin >> a >> b;
	a > b ? (cout <<"其中较大的为" << a << endl) : (cout <<"其中较大的为" << b << endl);
	//实验成功，说明三目运算符返回的表达式可以作为指令来使用
	//再看看三目运算符返回的能否是部分代码
	//实验二，看看三目运算符能否返回部分代码

	/*cout<<"请再输入两个整数，我将为你选择其中较小的一个\n"<<endl;
	int c = 0, d = 0;
	cin >> c >> d;
	cout << ((c < d) ? ("其中较小的为" << c) : ("其中较小的为" << d)) << endl;*/
	//实验失败，说明三目运算符返回的表达式必须是一个完整的表达式，不能是部分代码。由于有一个地方报错，整个项目每个源文件都跑不了，所以给这个失败的实验注释掉了。
	
	//总结，三目运算符返回的表达式必须是一个明确的指令，要么是一个变量，要么是一段完成的执行代码。

	//实验三，看看三目运算符能否返回个大块的执行代码

	/*int nia = 0, guoguo = 0;
	cout << "请分别输入nia哥的生日和guoguo的生日，以解锁下一步剧情走向\n" << endl;
	cout << "nia哥生日为" << endl;
	cin >> nia;
	cout << endl;
	cout << "guoguo生日为" << endl;
	cin >> guoguo;
	cout << endl;
	int love = 0;
	((nia = 20061204) && (guoguo = 20071022)) ? (
		cout << "觉得他们会在一起多久呢？" << endl,
		cin >> love, 
		cout << endl, 
	if (love >= 99) { 
		cout << "对了，当然是长长久久啦！" << endl;
	}
	else {
		cout << "你输入的数字好像不太对哦，重新输入吧" << endl;
	}) : (cout << "输错了，你个单身狗");*/

	//实验失败。省老师提醒，三元运算符不能嵌套if。如果嵌套多个cout和cin，可以用逗号隔开
	
	
	system("pause");

	return 0;
}