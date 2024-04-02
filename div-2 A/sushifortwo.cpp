#include <bits/stdc++.h>

// // https://codeforces.com/problemset/problem/1138/A
// //1138A - Sushi for Two
// It is more or less obvious that the answer is the maximum among the minimums of the length of two consecutive segments of equal elements. As for implementation, just go from left to right and keep the last element, the length of the current segment and the length of the next segment. When the current element is not the same as the last element, update the answer.
using namespace std;

int main(void)
{
    int n ;
    cin >> n ;
    vector <int> sushi ;
    for(int i = 0 ; i != n ; i++)
    {
        int eelotun ;
        cin >> eelotun;
        sushi.push_back(eelotun);
    }
    int best = 1 ,  j = 0;
    while(j  < n)
    { 
        int firstcount = 0 , secondcount  =0 ,second  , first = sushi[j];
        while(first == sushi[j] && j != n)
        {
            firstcount++;
            j++;
        }
        second = sushi[j];
        while(second == sushi[j] && j != n)
        {
            secondcount++;
            j++;
        }
        if(firstcount < secondcount && best  < firstcount)
        {
            best = firstcount;

        }
        else if (secondcount <= firstcount && best < secondcount)
        {
            best = secondcount;
        } 
        j -= secondcount;
    }
    cout << best * 2 ;
    return 0 ;
}