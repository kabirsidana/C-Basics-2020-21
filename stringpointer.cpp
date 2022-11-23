#include <iostream>
using namespace std;
int main()
{
    char s[] = {'k', 'a', 'b', 'i', 'r'};
    // string address in pointer p
    char *p = &s[0];
    // Finding length of the string using pointers
    int count = 0;
    while (*p != '\0')
    {
        count++;
        p++;
    }
    cout << count;

    return 0;
}