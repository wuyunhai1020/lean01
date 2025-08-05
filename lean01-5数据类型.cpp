#include<iostream>
using namespace std;
//数据类型是必须的，用以分配内存空间和确定变量的值的类型
/*
整形：short（短整形） int（整形） long(长整形) long long（长长整形）
浮点型（实型）：float（单精度浮点型） double（双精度浮点型） long double（长双精度浮点型）
字符型：char（字符型，通常占用1个字节，存储单个字符） wchar(宽字符型，通常占用2个字节，存储Unicode字符）
bool（布尔型，表示真假）：true(非0) false(0)
*/
int main5(){
	cout << "现在是lean01-5正在运行" << endl;
	//下面利用关键字 sizeof()来获取数据类型的大小
	short a = 1;
	int b = 9;
	long c = 101;
	float d = 3.14f;//这后面加个f是为了告诉编译器这是个float类型，
		//否则编译器先把它当做double类型，然后再转化为float，浪费算力
	double e = 2.71828;
	long double Pi = 3.14159226535;// 一般cout只能显示出最多6位小数
	//若要显示更多小数位，可以使用setprecision()函数，这是后话
	cout << "short的大小为" << sizeof(short) << endl;//可以观察到，short的大小为2个字节
	cout << "float的大小为" << sizeof(d) << endl;//因为d是float类型，所以sizeof(d)就可以获取float的大小为4字节
	cout << "Pi =" << Pi << endl;

	//科学计数法
	float f1 = 1.23e4f;//表示1.23*10^4，即12300
	double f2 = 1205e-2;//表示1205*10^-2，即12.05
	cout << "f1 = " << f1<<"\t" << "f2 =" << f2 << endl;
	

	//字符型变量
	//1、字符型变量创建方式
	char ch1 = 'a';
	cout << "ch1 = " << ch1 << endl;
	//2、字符型变量所占内存大小
	cout << "char字符型变量所占内存为" << sizeof(ch1) << "字节" << endl;
	//3、字符型变量的ASCII码值
	cout << "ch1的ASCII码值为" << int(ch1) << endl;//将字符转化为整形
	//可以发现，a的ASCII码值为97（当然，已经化为十进制）。那这个ASCII码值有什么用呢？
	//简单来说，可以理解成计算机字符和数字的映射关系。人们习惯用字符来表示信息，而计算机只能处理数字
	//于是，大家约定俗成地把常用的a的码值设为97，这样计算机就可以用数字97来表示字符a了
	//可以说，ASCII码就是为了确保不同设备间文本信息的统一传播和显示而设计的
	char ch2;
	int v;
	cout << "请输入一个ASCII码值（0-127），我会把它加1再显示" << endl;
	cin >> v;
	ch2 = v+1;
	cout << "ASCII码值为"<<v<<"+1" << "对应的字符是" << ch2 << endl;
	//常见的ASCII码值
	//A-65,a-32
	//0-31的码值分配给了控制字符，用于控制外围设备，一般显示不出来。32-64一般是#￥%之类的
	
	
	//4、转义字符
	//转移字符是用来表示一些不能显示出来的ASCII字符，常用的有\t（格水平制表符），\n(换行符），\\（反斜杠）

	cout<<"\\" << endl;//为了打出一个反斜杠，需要两个反斜杠，因为一个反斜杠是转义字符的开始
	cout << "a\t零败" << endl;
	cout << "aaa\t零败" << endl;//\t用以屁股对齐，一个\t有8个空格的宽度，前面有x个字符，后面就有8-x个空格
	cout << "aaaaa\t零败" << endl;
	cout << "aaaaaaa\t零败" << endl;
	cout << "aaaaaaaa\t零败" << endl;
	cout << "leanback\t零败" << endl;//注意观察，当x等于8时，x就相当于0了，这时候会出现8个空格而非0个。
	//从实用角度来想想看，如果出现0个空格，那你还打什么\t，不是浪费吗？



	system("pause");
	return 0;
}