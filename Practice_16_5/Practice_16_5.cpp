#include <iostream>
#include <time.h>
using namespace std;

const int n = 4;

void sumDivArr () {
    
    //make array
    int myArray[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            myArray[i][j] = i + j;
            cout << myArray[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    
    //get current date
    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);

    //remind of division day/arr size
    int rDivToday = buf.tm_mday % n; 
    cout << "Current day: " << buf.tm_mday << "\n";
    cout <<"Remind of division: " << rDivToday << "\n";

    //print sum of elements
    int sumElements=0;

    for (int i = 0; i < n; ++i)  {
        sumElements += myArray[rDivToday][i];
    }
    cout <<"Sum of elemets in line " << rDivToday << " = " << sumElements << "\n";
}

int main()
{
    sumDivArr();
}

