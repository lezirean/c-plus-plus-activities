#ifndef DESIGN_H_INCLUDED
#define DESIGN_H_INCLUDED

#include <iostream>
#include <windows.h>
#include <string>
#include <conio.h>

#define getch system("pause")

//set color
void color(int color){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// set cursor position
COORD coord = {0, 0};
void gotoxy(int x, int y){
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

std::string changeToUpper(std::string input){
    for(int i = 0; i < (int)input.size(); ++i){
        input[i] = toupper(input[i]);
    }
    return input;
}

std::string changeToLower(std::string input){
    for(int i = 0; i < (int)input.size(); ++i){
        input[i] = tolower(input[i]);
    }
    return input;
}

//prints a border of the symbol passed as argument
void border(std::string symbol){
    int height = 26, width = 114;
    cout << "\n";
    cout << "   ";

    for(int i = 0; i < height; ++i) cout << symbol;

    cout << "\n";

    for(int i = 0; i < height; ++i){
        cout << "   " << symbol << symbol;

        for(int space = 0; space < width - 4; ++space) cout << " ";

        cout << symbol << symbol << "\n";
    }

    cout << "   ";
    for(int i = 0; i < width; ++i) cout << symbol;

    cout << "\n";
}

#endif // DESIGN_H_INCLUDED
