#include<stdio.h>
#include<Windows.h>
void textcolor(int color_number)
{   
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color_number);
}
int main(){
system("color 0c");
textcolor(15);
puts("Hello ~~!!");
    textcolor(14);puts("Hello ~~!!");
    textcolor(11);puts("Hello ~~!!");
    return 0;
}
