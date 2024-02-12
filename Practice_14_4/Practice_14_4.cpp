#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void userString() {
    cout << "Введите строку: ";
    string myString = "";
    getline(cin, myString);

    if (!myString.empty()) {
        int stringLength = myString.length();
        char ch1 = myString[0];
        char ch2 = myString[(myString.length()) - 1];

        string firstChar(1, ch1);
        string lastChar(1, ch2);

        if (firstChar == " ") {
            firstChar = "пробел";
        }

        if (lastChar == " ") {
            lastChar = "пробел";
        }

        cout << "\n Длина строки: " << stringLength << "\n первый символ: " << firstChar << "\n последний символ: " << lastChar << "\n";
        
    } 
    else {
        cout << "\n Ничего не введено \n";
    }
}


int main()
{
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    userString();

    return 0;    
}

