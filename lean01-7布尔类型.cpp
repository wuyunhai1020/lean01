#include<iostream>
using namespace std;
int main7(){
    cout << "������lean01-7��������" << endl;
    //1������bool�������ͱ���
    bool statement1 = true;
    bool statement2 = false;
    bool statement3 = 1;
    bool statement4 = 0;
    bool statement5 = 12.05;
    bool statement6 = "leanback";//C�������Զ�������ֵת��Ϊtrue�����ַ���ת��Ϊfalse(���ڼ���)
    bool statement7 = "";
    cout << statement1 <<"\t" <<statement2<<"\n"<<statement3<<"\t" <<statement4<<"\t" <<statement5<< endl;
    cout << statement6 <<"\t" <<statement7<<endl;

    //2��bool�������͵Ĵ�С

    cout << "bool�������͵Ĵ�СΪ" << sizeof(statement6) << "�ֽ�" << endl;

    system("pause");

    return 0;
}