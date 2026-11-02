#include <iostream>
#include <cstring>
#include "functions.h"

using namespace std;

int main()
{
    char str[101];

    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    cout << "Number of groups: " << Count(str) << endl;

    char* dest = Change(str);

    cout << "Modified string (param): " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    delete[] dest;

    return 0;
}