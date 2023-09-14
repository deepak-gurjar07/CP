#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;

    while (t--)
    {
        int n;
        cout << "enter the number of characters: ";
        cin >> n;
        char str[n];
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        int q = 0, a = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'Q' || str[i] == 'q')
                q++;
            else
                q = max(0, q - 1);
        }
        if (q == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}