//this is a screenshot project .

#include <windows.h>
#include <tchar.h>
#include <stdio.h>

int  main (
)
{
    if (RegisterHotKey(
                NULL,
                1,
                MOD_ALT,
                0x42))  //0x42 is 'b'
    {
        _tprintf(_T("Hotkey 'ALT+b' registered, using MOD_NOREPEAT flag\n"));
    }   // This part is essential to make the following Windows message loop working !
//when it receives a certain key ,it will modify the msg .then the msg will have valid value

    MSG msg = {0};

    while (GetMessage(&msg, NULL, 0, 0) != 0)
    {
        if (msg.message == WM_HOTKEY)
        {
            _tprintf(_T("WM_HOTKEY received\n"));
        }
    }

    return 0;
}
