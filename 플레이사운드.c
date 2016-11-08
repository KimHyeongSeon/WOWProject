#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h> 

#pragma comment(lib, "winmm.lib") //#pragma comment 전처리문을 통해서 laySound 함수 호출을 위한 winmm.lib 라이브러리를 로드합니다.

#define SOUND_FILE_NAME ".\\res\\APPLAUSE.wav"
int main(int argc, char* argv[]){    
printf("아무 키나 입력하시면 소리 재생이 멈춥니다.\n"); // 로드할 소리 파일 경로를 미리 매크로로 저장 
PlaySound(TEXT(SOUND_FILE_NAME), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);    
while (!_kbhit());    
PlaySound(NULL, 0, 0);    
return 0;//
}

//http://kkikkodev.tistory.com/54 출
