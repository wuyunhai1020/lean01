#include<iostream>
using namespace std;
int main12() {
	cout << "现在正在运行的lean01-12" << endl;
	//if的多条件与嵌套
	// 
	//所谓的if多条件，就是判断-分两类-再判断-再分两类，而非是根据一个条件分入多类中的某类
	//比如，输入725，判断流程就是700以上→710以上→720以上，而非直接给你投到725（当然，看具体代码）
	//所谓的if嵌套，就是在一个if语句块中再写一个if语句块
	cout << "请输入角色血量，我将为你分配适合的职业" << endl;
	int hp = 0;
	int bp = 0;
	cout << "请在下方输入角色血量，蓝量：" << endl;
	cin >> hp>>bp;
	cout << "你输入的角色血量是" << hp <<  endl;
	cout << "你输入的角色蓝量是" << bp << endl;//输出本质是位运算，从左往右看的，所以小括号必须加上
	if ((hp <= 0) || (bp < 0)) {//加小括号更规范，当然不加也可以
		if (hp <= 0) {
			cout << "我们目前没有亡灵法师这类职业" << endl;
		}
		else {
			cout << "肾虚仔，蓝都被吸光了是吧？" << endl;
		}
	}
	else if (hp > 1000) {
		cout << "你适合当前排" << endl;
		if (hp > 2000) {
			cout << "你适合当坦克" << endl;
		}
		else {
			cout << "你适合当战士" << endl;
		}
	}
	else if (hp > 500) {
		if (bp > 500) {
			cout << "你适合当牧师" << endl;
		}
		else {
			cout << "你适合当刺客" << endl;
		}
	}

	else if (hp > 250&&bp>500) {
		cout << "你适合当或法师" << endl;
	}
	else if (hp > 250 && bp <= 500) {
		cout << "你适合当射手" << endl;
	}
	else {
		cout << "你不适合任何职业，请氪金提升你的属性" << endl;
	}

	system("pause");

	return 0;
}