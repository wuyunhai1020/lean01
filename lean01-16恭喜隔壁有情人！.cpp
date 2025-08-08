#include<iostream>
using namespace std;
int main16() {
    cout << "现在正在运行的是lean01-16，祝福隔壁有情人！\n" << endl;

    cout << "这是月老评测系统，请输入双方的生日，格式为年月日（如2000年1月1日为20000101），以评测他们是否是有情人哦\n" << endl;
    int nia = 0, aguoguo = 0;
    cout << "男方生日为" << endl;
    cin >> nia ;
    cout << endl;
    cout << "女方生日为" << endl;
    cin >> aguoguo;
    cout << endl;
    if ((nia == 20061204) && (aguoguo == 20071022)) {
        cout << "有情人终成眷属，99呀" << endl;
    }
    else {
        cout << "哎呀，输错生日了，重新输入吧" << endl;
    }

    system("pause");

    return 0;




}