#include <iostream>
#include <string>
using namespace std;


static void FindOddNumbers(int limit, string userOdd) {
    
    int isOdd = -1;
    
    if (userOdd == "Y") {
        isOdd = 1;
    }
    else if (userOdd == "N") {
        isOdd = 0;
    }
    else {
        cout << "Type only Y or N character. Try again \n";
        return;
    }

    for (int i = isOdd; i <= limit; i += 2) {
        cout << i << "\n";
    }
}

int main()
{
    int limit;
    string userOdd = "";

    while (userOdd != "Y" && userOdd != "N") {
        cout << "Limit: ";
        cin >> limit;
        cout << "Count odd numbers? (Y/N)";
        cin >> userOdd;

        FindOddNumbers(limit, userOdd);
    }

    return 0;
}

