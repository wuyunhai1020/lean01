#include<iostream>
using namespace std;
int main10() {
	cout << "现在是lean01-10正在运行" << endl;

	//比较运算符和逻辑运算符

	//3、比较运算符

	int a = 10;
	int b = 20;
	cout << ( a == b) << endl;//这里加括号是为了让编译器先计算括号内的表达式，再输出结果，否则先输出a，后面的==b机器就看不懂了
	//比较运算符：==，！=，<,>,<=,>=
    //实验： 
	/*cout << a == b << endl;*/


    //4、逻辑运算符：！，&&，|| 非，与，或
	int c = 0;
	cout << !a<<"\t" << !c << "\t"<<!!a<<endl; 
	cout << (a&&b) <<"\t" <<(a&&c)<<"\t" <<(a&&!b)<<"\t" << (!a && b) << endl;
	cout << (a || b) << "\t" << (a || c) << "\t" << (!a || b) << endl;








	system("pause");

	return 0;
}