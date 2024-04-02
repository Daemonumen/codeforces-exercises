#include <bits/stdc++.h>
//https://codeforces.com/problemset/problem/71/A?csrf_token=ba8e5dd7e7d8f94d3bc21b6e2b9497
//A. In this problem you can just do what is written in the statement. Let read all words. For each of them compute its length L, its the first and the last letter. If L > 10, output word without any changes, otherwise output the first letter, next L - 2 and finally the last letter.
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        int k = word.size();
        if (k > 10)
        {

            string news;
            news.push_back(word[0]);
            news.push_back(word[k - 1]);
            cout << news[0] << k - 2 << news[1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }
    return 0;
}