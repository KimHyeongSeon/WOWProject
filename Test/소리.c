#include<stdio.h>
#include<Windows.h>
#include<MMSystem.h>
#pragma comment(lib,"Winmm.lib")

int main()
{	
  sndPlaySoundA("C:\\hello.wav",SND_ASYNC|SND_NODEFAULT);  	
  return 0;
}

//멜로디로 출력하려면
#include<stdio.h>
#include<Windows.h>
int main()
{
  Beep(523,100); //음,길이	Sleep(100); 
  //길이	
  // Beep의 앞은 523(도) 587(레) 659 698 784 880 988(시) 1046 (도)	
  return 0;
}
