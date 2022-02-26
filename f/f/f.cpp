#include <iostream>
#include<windows.h>

#include "args.h"

#pragma comment(linker, "/MERGE:.rdata=.text")

using namespace std;

//混淆区段名 
wchar_t* sec_name;

//目标驱动路径(大部分情况需要dump后的文件,除非他没有使用压缩这个选项)
wchar_t* file_full_name;

int main()
{
    int argc = 0;
    LPWSTR* argv = CommandLineToArgvW(GetCommandLineW(), &argc);
    
    //
    //获得驱动文件路径
    //
    
    file_full_name = argz_arg(argc, argv, 0);
    if (!file_full_name)
    {
        wcout << "[E]Please give a target driver file\n";
        return 0;
    }

#ifdef _DEBUG
    wcout << "[I]Current file (" << file_full_name << ")" << endl;
#endif // _DEBUG

    //
    //初始化vmp节
    //
    
    sec_name = argz_value(argc, argv, L"sec");
    if (!sec_name)
        sec_name = (wchar_t*)L".vmp0";

#ifdef _DEBUG
    wcout << "[I]Section name (" << sec_name << ")" << endl;
#endif // _DEBUG








    return 0;
}

