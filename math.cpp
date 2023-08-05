#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i, j, k, l, m, n;
    string e;
    
    for (;;)
    {
        cin >> i;
        cin >> e >> j;
        if (e == "+")
        {
            i += j;
        }
        else if (e == "-")
        {
            i -= j;
        }
        else if (e == "*")
        {
            i *= j;
        }
        else if (e == "/")
        {
            if (j !=0)
            {
                i /= j;
            }
            else
            {
                cout << "\x1d[38;2;255;0;0m" << "error" << endl;
                getchar();
                getchar();
                break;
            }
        }
        else if (e == "^")
        {
            cout << pow(i,j) << endl;
            getchar();
            break;
        }
        cout << i << endl;
        cout << endl;
        cout << "" << endl;
        getchar();

        string s;
        cin >> s;
        if (s == "r");
        else if (s == "e") {
            break;
        }
    }
}