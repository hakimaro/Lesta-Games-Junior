#include <iostream>

bool isEven1(int value) { return value % 2; }
bool isEven2(int value) { 
    bool b = 1;
    return value & b; 
}

using namespace std;
int main()
{
    int value = 4;
    cout << isEven1(value) << endl;
    cout << isEven2(value) << endl;
}