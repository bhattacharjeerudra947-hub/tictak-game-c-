#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;
#define MAX_LENGTH 1000
//DIRECTION
const char d_up= 'w';
const char d_down='s';
const char d_right='d';
const char d_left='a';
int con_w,con_h;
void initscreen(){
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole,&csbi);
    con_h=csbi.srWindow.Bottom-csbi.srWindow.Top+1;
    con_w=csbi.srWindow.Right-csbi.srWindow.Left+1;
    

}
int main(){
    initscreen();
    
    return 0;
}
