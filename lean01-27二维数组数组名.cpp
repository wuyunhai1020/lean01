#include<iostream>
using namespace std;
int main27()
{
	cout << "现在正在运行的是lean01-27" << endl;
	cout << endl;
	//二维数组名称用途
	int arr1[2][3] =
	{
		{1,3,5},
		{2,4,6}

	};
	for (int j = 0; j < 2; j++)
	{
		for (int i = 0; i < 3; i++)
		{

			cout << arr1[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;
	//1.可以查看占用内存空间大小
	cout << "二维数组arr1占用内存空间为：" << sizeof(arr1) << endl;
	cout << "其第一行占用内存空间为" << sizeof(arr1[0]) << endl;
	cout << "其第一行第一列元素占用内存为：" << sizeof(arr1[0][0]) << endl;
	//那么第一列怎么看呢？写个循环，让每一列的单个元素内存相加即可，或者用如下方法
	//arr1[0]默认是第一行
	cout << "二维数组行数为：" << sizeof(arr1) / sizeof(arr1[0]) << endl;
	cout << "二维数组列数为：" <<sizeof(arr1[0]) / sizeof(arr1[0][0]) << endl;
	

	//2.可以查看数组首地址
	cout<<"二维数组的首地址为"<<(int)arr1<< endl;
	cout<<"二维数组第一行首地址为："<<(int)arr1[0] << endl;
	cout << "二维数组第二行首地址为：" << (int)arr1[1] << endl;
	cout << "二维数组第一行第一列元素首地址为：" << (int)&arr1[0][0] << endl;//由于arr1[0][0]是个数，要看它的地址必须要取址符&
	cout << "二维数组第一行第二列元素首地址为：" << (int)&arr1[0][1]<< endl;
	cout << "二维数组第二行第一列元素首地址为：" << (int)&arr1[1][0] << endl;
	system("pause");

	return 0;
}