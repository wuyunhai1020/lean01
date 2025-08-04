#include <iostream>
using namespace std;

int main4() {
	//有些字符串不可作为变量和常量名（即标识符），比如关键字，比如int、return、if、else等
	/*不合法的变量名示例：
      int 3age;      // 不能以数字开头
     int double;    // 不能用关键字
    int my-age;    // 不能有特殊符号
     int my age;    // 不能有空格
    int my牛牛；   //不能有中文字符
	*/

	int Value = 99;
	int value = 100;//C++区分大小写

	//合法的变量名示例：字母，下划线和数字的组合，不能以数字开头，不能有空格和特殊符号
	int _ = 1;
	int __ = 2;
	int _asdfghjkl123456789__ = 3;

	cout << "Value = " << Value<<endl;
	
	system("pause");

	return 0;
}