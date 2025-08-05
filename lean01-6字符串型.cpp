#include<iostream>
#include<string>//所有#include指令都要放在最前面，在任何函数定义前面
#include <locale>  // 需要包含 <locale> 头文件
using namespace std;
int main6() {
    cout << "现在是lean01-6正在运行" << endl;

//1、C风格字符串： char 字符串名[] = "字符串内容"
    char a0[] = "0";
    char str1[] = "lean";
    char a1  [] = "back";//这中括号离远一点也无所谓
        cout << str1 <<"\n" << a1 << endl;//这样以后就不用每次都打lean了，打str1就行了。中括号是格式，这就是经典的以少代多了
//宽字符设置
        locale::global(locale(""));//设置本地化以支持宽字符输出
        //根据ds说法，设置locale后，会使用系统的默认本地化环境。比如在中文Windows上，locale("")会使用GBK编码
        //否则，会使用默认的ASCII编码，这样就无法正确显示中文字符。实验放在末尾，可以把前面都注释掉来看看会发生什么
        wchar_t ch3 = L'kylin';//单引号表示单个字符，否则只会输出头头那个。L表示宽字符
        wchar_t ch4[] = L"brighttoe";//要么单引号没中括号，要么双引号有中括号
        wcout << ch3 << L"\n" << ch4 << endl;//用wcout输出，字符串前加L

//2、C++风格字符串:用之前要加入头文件#include<string>
//如果不加头文件<string>，理论上会报错，当然如果编辑器比较nb，可能帮你加了



    string str2 = "零";
    string a2   = "败";
    cout << str2 << "\n" << a2 << endl;



//All in all，char存储的单字节字符是ASCII，或多字节字符UTF-8。wchar_t存储的宽字符可以直接表示Unicode字符，一般是2字节（UTF-16）
        cout << sizeof(a2) << " " << sizeof(ch3) << "  " << sizeof(ch4) << endl;//其中各种门道，纷繁复杂，以后再说吧
        
        //实验
        
        /*wchar_t ch[] = L"你好";
        wcout << ch  << endl;*/

        
        //locale::global(locale(""));  // 设置全局本地化
        //wchar_t ch[] = L"你好";
        //wcout << ch << endl;  // 正常输出：你好



    system("pause");

    return 0;
}