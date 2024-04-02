#include <bits/stdc++.h>
//https://codeforces.com/problemset/problem/831/B
// 831B - Keyboard Layouts
// At first we need to support the correspondence of letters on keyboards. For example, it can be done with help of map < char, char > . Let's call it conformity.

// Let the first layout equals to s1 and the second — s2. Now we need to iterate through the first string and make conformity[s1[i]] = s2[i]. Also we need to make conformity[toupper(s1[i])] = toupper(s2[i]), where function toupper(c) gives the lowercase letter c to the corresponding uppercase letter.

// After that simply iterate through the given text. Let the current symbol is c. If c is a digit we need to print it. Otherwise, c is a letter, so we need to print conformity[c].

using namespace std;
constexpr int alphabitsize = 26;
int main(void)
{
    string alphabitused, alphabitintended, textused, textintended;
    cin >> alphabitused >> alphabitintended >> textused;
    for (int i = 0, k = textused.size(); i < k; i++)
    {
        if (isalpha(textused[i]))
        {

            for (int j = 0; j < alphabitsize; j++)
            {

                if (textused[i] == alphabitused[j])
                {
                    textintended.push_back(alphabitintended[j]);
                }
                else if (textused[i] == toupper(alphabitused[j]))
                {
                    textintended.push_back(toupper(alphabitintended[j]));
                }
            }
        }
        else
        {
            textintended.push_back(textused[i]);
        }
    }
    cout << textintended;
    return 0;
}