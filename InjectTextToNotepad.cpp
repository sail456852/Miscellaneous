#include <windows.h>
#include <tchar.h>


int main()
{
    HWND notepad = FindWindow(_T("Notepad"), NULL);  //find the handle of the notepad process
    HWND edit = FindWindowEx(notepad, NULL, _T("Edit"), NULL); //I believe this is the handle of the class included in the parent Window
    SendMessage(edit, WM_SETTEXT, NULL, (LPARAM)_T("hello,biatch!")); //send a message to a handle
}


//If there are multi- instances open on a Windows desktop , what this function does is to send the message into last Active instance of the
//notepad process .
