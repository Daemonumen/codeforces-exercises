#include <bits/stdc++.h>

// https://codeforces.com/problemset/problem/746/B
// 746B - Decoding
// To find the answer we can iterate through the given string from the left to the right and add each letter in the answer string — one letter to the begin, next letter to the end, next letter to begin and so on. If n is even than the first letter must be added to the begin and the second letter to the end. In the other case, the first letter — to the end, second — to the begin. We need to make it until we do not add all letters from the given string.

using namespace std;
void fix(int k, int n, string &use, string used)
{
    for (int i = k-1, j = n/2 - 1; i < n - 1; i++)
    {

        use[j] = used[i];
        j += k;
        k++;

        use[j] = used[++i];
        j -= k;
        k++;
    }
    // cout << real <<"j";
}

int main()
{
    int n, k = 1;

    cin >> n;
    string coded, real(n , ' ');
    cin >> coded;
    if (n < 2)
    {
    }
    if (n % 2 == 0)
    {
        int k = 1;
        fix(k, n, real, coded);
    }
    else
    {
        real[n/2] = coded[0];
        int k = 2;
        fix(k ,n , real , coded);
    }
    cout << real << "";
    return 0;
}