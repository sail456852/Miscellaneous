//this is a screenshot project .
#include <Windows.h>
#include <stdio.h>
#include <tchar.h>
#include <fstream>







int Screenshot();

int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int)
{
    RegisterHotKey(
        NULL,
        1,
        MOD_ALT,
        0x42);
    //0x42 is 'b'

//when it receives a certain key ,it will modify the msg .then the msg will have valid value

    MSG msg = {0};

    while (GetMessage(&msg, NULL, 0, 0) != 0)
    {
        if (msg.message == WM_HOTKEY)
        {
            Screenshot();
        }
    }

    return 0;
}


int Screenshot()
{
    /*HWND hWnd = GetConsoleWindow ();
    ShowWindow (hWnd, SW_HIDE);         //hide the Console Window ,if your build target is console application I guess .
    Sleep (1000);*/
    static int count = 0 ; // count variable
    TCHAR TxtName[10] = {0};

    //************************name part ********************
    _stprintf(TxtName, _T("D:\\test\\%d.png"), ++count);

    std::ofstream f ;
    f.open(TxtName,std::ios::app);
    f << "the count value now is : " << count ;


    return 0;

}
