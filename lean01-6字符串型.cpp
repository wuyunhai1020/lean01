#include<iostream>
#include<string>//����#includeָ�Ҫ������ǰ�棬���κκ�������ǰ��
#include <locale>  // ��Ҫ���� <locale> ͷ�ļ�
using namespace std;
int main6() {
    cout << "������lean01-6��������" << endl;

//1��C����ַ����� char �ַ�����[] = "�ַ�������"
    char a0[] = "0";
    char str1[] = "lean";
    char a1  [] = "back";//����������Զһ��Ҳ����ν
    cout << str1 <<"\n" << a1 << endl;//�����Ժ�Ͳ���ÿ�ζ���lean�ˣ���str1�����ˡ��������Ǹ�ʽ������Ǿ�������ٴ�����

    //��ʵ������ַ������������ַ�������
    char ar1[6] = "ab d";
    cout << "ar1�ĵ�һ��Ԫ��Ϊ" << ar1[0] << endl;
    cout << "ar1�ĵڶ���Ԫ��Ϊ" << ar1[1] << endl;
    cout << "ar1�ĵ�����Ԫ��Ϊ" << ar1[2] << endl;
    int ar1_2 = ar1[2];
    cout << "ar1������Ԫ�أ�Ҳ���ǿո񣬵�ASCII��ֵΪ"<<ar1_2<<endl;
    cout << "ar1�ĵ��ĸ�Ԫ��Ϊ" << ar1[3] << endl;
    cout << "ar1�ĵ����Ԫ��Ϊ" << ar1[4] << endl;
    int ar1_4 = ar1[4];
    cout << "ar1�����Ԫ�أ�Ҳ���ǿգ���ASCII��ֵΪ" << ar1_4 << endl;
    int ar1_5 = ar1[5];
    cout << "ar1�����Ԫ�أ�Ҳ���ǿպ�Ŀգ���ASCII��ֵΪ" << ar1_5 << endl;
    char t0 = 0;
    cout << "�ַ��ͱ���t0��ASCII��ֵΪ0�����������ʲô�ɣ�" << t0<<endl;


//���ַ�����
        locale::global(locale(""));//���ñ��ػ���֧�ֿ��ַ����
        //����ds˵��������locale�󣬻�ʹ��ϵͳ��Ĭ�ϱ��ػ�����������������Windows�ϣ�locale("")��ʹ��GBK����
        //���򣬻�ʹ��Ĭ�ϵ�ASCII���룬�������޷���ȷ��ʾ�����ַ���ʵ�����ĩβ�����԰�ǰ�涼ע�͵��������ᷢ��ʲô
        wchar_t ch3 = L'kylin';//�����ű�ʾ�����ַ�������ֻ�����ͷͷ�Ǹ���L��ʾ���ַ�
        wchar_t ch4[] = L"brighttoe";//Ҫô������û�����ţ�Ҫô˫������������
        wcout << ch3 << L"\n" << ch4 << endl;//��wcout������ַ���ǰ��L

//2��C++����ַ���:��֮ǰҪ����ͷ�ļ�#include<string>
//�������ͷ�ļ�<string>�������ϻᱨ����Ȼ����༭���Ƚ�nb�����ܰ������



    string str2 = "���";
    string a2   = "leanback";
    cout << str2 << "\n" << a2 << endl;



//All in all��char�洢�ĵ��ֽ��ַ���ASCII������ֽ��ַ�UTF-8��wchar_t�洢�Ŀ��ַ�����ֱ�ӱ�ʾUnicode�ַ���һ����2�ֽڣ�UTF-16��
        cout << sizeof(a2) << " " << sizeof(ch3) << "  " << sizeof(ch4) << endl;//���и����ŵ����׷����ӣ��Ժ���˵��
        
        //ʵ��
        
        /*wchar_t ch[] = L"���";
        wcout << ch  << endl;*/

        
        //locale::global(locale(""));  // ����ȫ�ֱ��ػ�
        //wchar_t ch[] = L"���";
        //wcout << ch << endl;  // ������������



    system("pause");

    return 0;
}