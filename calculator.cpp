#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a , b ;
    char s;
    cout<<"Enter first Number : "<<endl;
    cin >> a;
    cout<<"Enter Second Number : "<<endl;
    cin >> b;
    cout << "Choose from  (+)\t(-)\t(*)\t(/) : " << endl;
    cin >> s;
    switch (s)
    {
        case '+' : cout << a + b;
            break;
        case '-' : cout << a - b;
            break;
        case '*' : cout << a * b;
            break;
        case '/' : if(b == 0)
            {
            cout << "Cannot divide by zero";
                break;
            }
            else
            {
                cout << a / b;
                break;
            }
    }
    return 0;
}