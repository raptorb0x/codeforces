#include <Windows.h>


#define SELF_REMOVE_STRING  TEXT("cmd.exe /C ping 1.1.1.1 -n 1 -w 3000 > Nul & Del \"%s\"")

BOOL SelfDelete()
{
  TCHAR szFile[MAX_PATH], szCmd[MAX_PATH];

  if((GetModuleFileName(0,szFile,MAX_PATH)!=0) &&
     (GetShortPathName(szFile,szFile,MAX_PATH)!=0))
  {
    lstrcpy(szCmd,"/c del ");
    lstrcat(szCmd,szFile);
    lstrcat(szCmd," >> NUL");

    if((GetEnvironmentVariable("ComSpec",szFile,MAX_PATH)!=0) &&
       ((INT)ShellExecute(0,0,szFile,szCmd,0,SW_HIDE)>32))
       return TRUE;
  }
  return FALSE;
}

int main()
{
    /* Do what you need */

    /* Call this function at the very end of your program to delete itself */

    return SelfDelete();;
}
