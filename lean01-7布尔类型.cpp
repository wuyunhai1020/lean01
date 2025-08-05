#include<iostream>
using namespace std;
int main7(){
    cout << "现在是lean01-7正在运行" << endl;
    //1、创建bool数据类型变量
    bool statement1 = true;
    bool statement2 = false;
    bool statement3 = 1;
    bool statement4 = 0;
    bool statement5 = 12.05;
    bool statement6 = "leanback";//C＋＋会自动将非零值转换为true，空字符串转换为false(存在即真)
    bool statement7 = "";
    cout << statement1 <<"\t" <<statement2<<"\n"<<statement3<<"\t" <<statement4<<"\t" <<statement5<< endl;
    cout << statement6 <<"\t" <<statement7<<endl;

    //2、bool数据类型的大小

    cout << "bool数据类型的大小为" << sizeof(statement6) << "字节" << endl;

    system("pause");

    return 0;
}