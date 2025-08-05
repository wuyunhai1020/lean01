#include <iostream>//预处理指令不是C+语句，它们以#开头告诉编译器在正式编译前要做什么，比如包含头文件、宏定义等，他们不需要分号结尾
using namespace std;

int main3() {
	cout << "现在正在运行的lean01-3" << endl;
	//变量存在的意义：便于管理内存空间；
	//变量创建的语法：数据类型 变量名 = 初始值；
	int xianbei = 114514;//这是个整数变量，初始值为114514
	int xianbei2;
	xianbei2 = 1919810;//这是个整数变量，先声明后赋值，初始值为1919810；

	//常量的定义方式
	//1、#define 宏（常量）
    #define PI 3.14159 //宏定义常量，PI是一个常量，值为3.14159，如果下面

	//2、const 修饰的变量
	const double e = 2.71828; //建议使用const

	system("pause");


	return 0;
}