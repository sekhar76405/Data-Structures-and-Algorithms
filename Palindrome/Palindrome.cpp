#include<iostream>
using namespace std;
int main()
{
    int n,rem,rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    int temp = n;
    while(temp != 0)
    {
        rem = temp % 10;
        temp = temp / 10;
        rev = (rev * 10) + rem;
    }
    if(rev != n)
    {
        cout << "Entered number is not palindrome." << endl;
    }
    else
    {
        cout << "Entered number is palindrome." << endl;
    }
    return 0;
}
