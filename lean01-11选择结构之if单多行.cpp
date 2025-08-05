#include <iostream>
using namespace std;
int main11(){
	cout << "现在正在运行的lean01-11" << endl;
	//程序流程结构：顺序结构，选择结构，循环结构。
	// 一般的程序都是顺序结构，只有在需要根据条件来执行不同的代码时才会使用选择结构。
	//if语句：单行格式，多行格式和多条件的if语句

   //if语句的单行格式
   // 输入璠子的出生月和日（如0101），若正确，则输出“不曾忘”，否则不显示
	int birthday1;
	cout << "泼皮生日是哪月哪天？" << endl;
	cin >>birthday1 ;
	cout << "你输入的生日是：" << birthday1 << endl;
	if (birthday1 == 1205)
	{
		cout << "不曾忘" << endl;

}
	//if语句的多行格式
	//输入欣姐的出生月和日（如0101），若正确，则输出“不曾忘”，否则输出“不应忘”
	int birthday2;
	cout << "欣姐生日是哪月哪天？" << endl;
	cin >> birthday2;
	if (birthday2 == 1212)
	{
		cout << "不曾忘" << endl;
	}
	else {
		cout << "不应忘" << endl;
	}








	system("pause");

	return 0;
}