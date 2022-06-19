// Flag USA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    int width = 130;
    int height = 26;

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (x < width * 2 / 5 && y < height * 7 / 13) {
                if (
                    (y == ceil((height * 7 / 13 - 9) / 2) || y == ceil((height * 7 / 13 - 9) / 2) + 2 || y == ceil((height * 7 / 13 - 9) / 2) + 4 || y == ceil((height * 7 / 13 - 9) / 2) + 6 || y == ceil((height * 7 / 13 - 9) / 2) + 8)
                    &&
                    (x == ceil((width * 2 / 5 - 48) / 2) + 3 || x == ceil((width * 2 / 5 - 48) / 2) + 4 || x == ceil((width * 2 / 5 - 48) / 2) + 11 || x == ceil((width * 2 / 5 - 48) / 2) + 12 || x == ceil((width * 2 / 5 - 48) / 2) + 19 || x == ceil((width * 2 / 5 - 48) / 2) + 20 || x == ceil((width * 2 / 5 - 48) / 2) + 27 || x == ceil((width * 2 / 5 - 48) / 2) + 28 || x == ceil((width * 2 / 5 - 48) / 2) + 35 || x == ceil((width * 2 / 5 - 48) / 2) + 36 || x == ceil((width * 2 / 5 - 48) / 2) + 43 || x == ceil((width * 2 / 5 - 48) / 2) + 44))
                {
                    SetConsoleTextAttribute(h, 7);
                    cout << (char)178;
                }

                else if (
                    (y == ceil((height * 7 / 13 - 9) / 2) + 1 || y == ceil((height * 7 / 13 - 9) / 2) + 3 || y == ceil((height * 7 / 13 - 9) / 2) + 5 || y == ceil((height * 7 / 13 - 9) / 2) + 7)
                    &&
                    (x == ceil((width * 2 / 5 - 40) / 2) + 3 || x == ceil((width * 2 / 5 - 40) / 2) + 4 || x == ceil((width * 2 / 5 - 40) / 2) + 11 || x == ceil((width * 2 / 5 - 40) / 2) + 12 || x == ceil((width * 2 / 5 - 40) / 2) + 19 || x == ceil((width * 2 / 5 - 40) / 2) + 20 || x == ceil((width * 2 / 5 - 40) / 2) + 27 || x == ceil((width * 2 / 5 - 40) / 2) + 28 || x == ceil((width * 2 / 5 - 40) / 2) + 35 || x == ceil((width * 2 / 5 - 40) / 2) + 36))
                {
                    SetConsoleTextAttribute(h, 7);
                    cout << (char)178;
                }

                else {
                    SetConsoleTextAttribute(h, 1);
                    cout << (char)178;
                }
            }
            else if (x >= width * 2 / 5 && (y < height * 1 / 13 || (y >= height * 2 / 13 && y < height * 3 / 13) || (y >= height * 4 / 13 && y < height * 5 / 13) || (y >= height * 6 / 13 && y < height * 7 / 13)) || (y >= height * 8 / 13 && y < height * 9 / 13) || (y >= height * 10 / 13 && y < height * 11 / 13) || (y >= height * 12 / 13 && y < height)) {
                SetConsoleTextAttribute(h, 12);
                cout << (char)178;
            }
            else {
                SetConsoleTextAttribute(h, 7);
                cout << (char)178;
            }
        }
        cout << endl;
    }
}
