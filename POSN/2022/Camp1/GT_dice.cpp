#include <bits/stdc++.h>
#define MxN 1e5 + 10
#define pii(a, b) pair<int a, int b>

using namespace std;
using ll = long long;
const int di[4] = {1, -1, 0, 0}, dj[4] = {0, 0, 1, -1};

// string k;
int main()
{
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while (q--)
    {
        string k;
        cin >> k;
        int sz = k.size();
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 0; j < sz; j++)
            {
                if (i == 1 || i == 3)
                {
                    if (j != sz-1)
                    {
                        if (k[j] == '1')
                            cout << "...";
                        if (k[j] == '2')
                            cout << ".*.";
                        if (k[j] == '3')
                            cout << ".*.";
                        if (k[j] == '4')
                            cout << "*.*";
                        if (k[j] == '5')
                            cout << "*.*";
                        if (k[j] == '6')
                            cout << "***";
                        cout << '|';
                    }
                    if (j == sz-1)
                    {
                        if (k[j] == '1')
                            cout << "...";
                        if (k[j] == '2')
                            cout << ".*.";
                        if (k[j] == '3')
                            cout << ".*.";
                        if (k[j] == '4')
                            cout << "*.*";
                        if (k[j] == '5')
                            cout << "*.*";
                        if (k[j] == '6')
                            cout << "***";
                    }
                }
                else
                {
                    if (j != sz-1)
                    {
                        if (k[j] == '1' || k[j] == '3' || k[j] == '5')
                            cout << ".*.";
                        else
                            cout << "...";
                        cout << '|';
                    }
                    if (j == sz-1)
                    {
                        if (k[j] == '1' || k[j] == '3' || k[j] == '5')
                            cout << ".*.";
                        else
                            cout << "...";
                    }
                }
            }
            cout << '\n';
        }
    }
    return 0;
}