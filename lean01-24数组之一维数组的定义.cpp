#include<iostream>
using namespace std;
int main24()
{
	cout << "现在正在运行的是lean01-24" << endl;
	cout << endl;
	//数组，将同一类型的变量储存在连续的内存空间中。在我看来，一维数组就是一维数列
	//数组的三种定义：
	//一
	int arr1[5];//数据类型 数组名[数组长度]
	for (int i = 0;i<=4; i++)//注意 数组越界 的问题，如果爆表了很容易把电脑炸了的
	{
		arr1[i] = i + 1;
		cout << arr1[i] << endl;
		if (i == 10)
		{
			break;
		}
	}
	//二
	int arr2[5] = { 602,703,1113,1205,1212 };
	for (int i = 0; i <= 4; i++)
	{
		cout << arr2[i] << endl;
	}
	//三
	int arr3[] = { 1022,1214,513,1020,302 };
	for (int i = 0; i <= 4; i++)
	{
		cout << arr3[i] << endl;
	}
	cout << endl;
    //数组名的应用
	//计算整个数组占用内存大小
	cout << sizeof(arr3) << endl;
	cout << sizeof(arr3) / sizeof(arr3[0]) << endl;//计算元素个数
	//通过数组名查看数组首地址
	cout << "数组arr3的首地址为" << (int)arr3 << endl;
	cout << "数组arr3第1项的首地址为" << (int)&arr3[0] << endl;
	system("pause");
	//数组名是常量，不可以进行赋值操作

	//注意，人机系统不会检查下标对不对，如果输出的时候下表爆了，会输出奇怪的东西，可能会炸了系统，别搞。如果是输入，也就是给数组的元素赋值的时候，多赋了几个，系统也会爆
	//相对安全的是，少赋几个，这样没赋的，就会被系统默认为0。char字符串就是一个例子。

	return 0;
}