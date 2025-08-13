#include<iostream>
using namespace std;
int main25()
{
	cout << "现在正在运行的是lean01-25" << endl;
	cout << endl;
	cout << "下面是案例1，找最大值" << endl;
	//一.五只小猪称体重：找出数组内最大值（当然不允许用max函数）
	int arr1[5] = { 300,205,452,420,315 };
	int max = arr1[0];
	for (int i = 1; i <= 4; i++)
	{
		max = (arr1[i] >= max) ? arr1[i] : max;//事实上，相较于使用三目运算符，用if可读性更高
		cout << "局部最大值为" << max << endl;

	}
	cout << "最大值为" << max<<endl;
	cout << endl;

	cout << "下面是案例2，元素逆置" << endl;
	//二.元素逆置：让数组首尾的元素互换位置，使得数组改变。但不是创造一个新的数组
	int arr2[5] = { 1,2,3,4,5 };
	const int n = sizeof(arr2) / sizeof(arr2[0]);//这里如果不用const，下面的arrt就搭建不起来
	//当然，c++ primer plus里面提到，可以利用new来避开这一点。具体见以后学习new吧
	//民法:先造了再说
	char ch;
	while (1)
	{
		cout << "请选择方法：a.民法 b.官法 c.跳过" << endl;
		cin >> ch;
		if (ch == 'a') {
			int arrt[n];
			for (int i = 0; i < n; i++)
			{
				arrt[i] = arr2[n - 1 - i];
			}
			for (int i = 0; i < n; i++)
			{
				arr2[i] = arrt[i];
				cout << arr2[i] << endl;
			}
		}
		//官方：一次换两个，对换
		else if (ch == 'b')
		{
			int temp = 0;
			for (int i = 0; i < n / 2; i++)
			{
				temp = arr2[i];
				arr2[i] = arr2[n - 1 - i];
				arr2[n - 1 - i] = temp;

			}
			for (int i = 0; i < n; i++)
			{
				cout << arr2[i] << endl;
			}
		}
		else
		{
			break;
		}//万一输入了什么defg的，还费什么话，直接给人家过了
	}
	cout << endl;

	cout << "下面是案例3，冒泡排序" << endl;
//三.冒泡排序：将元素从大到小或者从小到大排序，但是算法是相邻元素比较
	
	int arr3[] = { 9,1,4,3,6,5,2,8,7 };
	int m = sizeof(arr3) / sizeof(arr3[0]);//m是数组长度
	for (int j = m; j > 0; j--) //j是使得每次冒泡，数组长度减1（屁股已最大，不用再排它）
	{
		for (int i = 0; i < j - 1; i++)//i是用来进行单次冒泡的
		{
			int temp = arr3[i];//逆置用的。至于你说变量和上面重合，重合就重合，取名字哪有那么容易，重新赋值就行了
			if (arr3[i] > arr3[i + 1])
			{
				arr3[i] = arr3[i + 1];
				arr3[i + 1] = temp;//局部元素逆置

			}
			else {
				//啥也不干
			}
			

		}//到此也只是进行了一次冒泡（或者说沉底）而已，还不足以使得整个数组按序排列
		for (int k = 0; k < m; k++)
		{
			cout << arr3[k];
		}//这里用来显示每次冒泡后的结果
		cout << endl;


		//下面这段是我想着，如果在某一次排好序了，就停下来吧，别继续了。
		//不过我个人认为，写了下面这行，计算机工作量会变大。算了，变大点就变大点吧
		//应当注意的是,if的判断语句部分不能嵌套for，试过了。这点真比不上数学，人家一个倒A就完事了。不过话说回来，数学是给人看的，到底不同
		int r=1;
		for (int t = 0; t < m - 1; t++)
		{
			if (arr3[t] <= arr3[t + 1])
			{
				r++;
			}
		}
		if (r==m)
		{
			break;
		}
	}
	
	


	system("pause");

	return 0;
}