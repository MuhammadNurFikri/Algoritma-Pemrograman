#ifndef BASIC_H_INCLUDED
#define BASIC_H_INCLUDED
#endif // BASIC_H_INCLUDED

#include <iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>

using namespace std;

//library with basic helpful functions

void Color(int color)
{   //simplify color changing
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
}

void clear()
{   //system("cls") alternative
    COORD topLeft={0,0};
    HANDLE console=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen;
    DWORD written;

    GetConsoleScreenBufferInfo(console,&screen);
    FillConsoleOutputCharacterA(console,' ',screen.dwSize.X * screen.dwSize.Y, topLeft, &written);
    FillConsoleOutputAttribute(console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
                               screen.dwSize.X * screen.dwSize.Y, topLeft,&written);
    SetConsoleCursorPosition(console,topLeft);
}

void cursorJump(short x,short y, bool clearLine)
{
    //move to desired position
    COORD cursor={x,y};
    HANDLE console=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(console,cursor);
    //clear remaining line when desired
    if (clearLine==true)
    {
        for (int i=x;i<80;i++)
        cout<<" ";
        //return to desired position
        cursorJump(x,y,false);
    }
}

void border(int x,int y,int width,int height)
{   //cordinates of top/left corner and width, height used to create border
     //no text within the border is disturbed
    //increment values to make them inclusive
    width++,height++;
    char v_side=186,h_side=205;
    char tl_corner=201,tr_corner=187;
    char br_corner=188,bl_corner=200;

    //top left corner
    cursorJump(x,y,false);
    cout<<tl_corner;
    //lefthand and righthand sides
    for (int i=y+1;i<height+y;i++)
    {
        cursorJump(x,i,false);
        cout<<v_side;
        cursorJump(x+width,i,false);
        cout<<v_side;
    }
    //bottom left corner
    cursorJump(x,y+height,false);
    cout<<bl_corner;
    //top and bottom sides
    for (int i=x+1;i<width+x;i++)
    {
        cursorJump(i,y+height,false);
        cout<<h_side;
        cursorJump(i,y,false);
        cout<<h_side;
    }
    //bottom right corner
    cursorJump(x+width,y+height,false);
    cout<<br_corner;
    //top right coner
    cursorJump(x+width,y,false);
    cout<<tr_corner;
}