#include <stdio.h>
#include <windows.h>
#include <windowsx.h>
#include <mmsystem.h>
int main(int argc, char *argv[])
{
  PlaySound(TEXT("C:\\Users\\home\\Desktop\\battle_BGM.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
  return 0;
}
  
