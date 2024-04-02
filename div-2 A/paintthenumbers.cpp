#include <bits/stdc++.h>
// //https://codeforces.com/problemset/problem/1209/A
// //1209A — Paint the Numbers
// Author: MikeMirzayanov

// Consider the smallest element x
//  in the array. We need to paint it in some color, right?

// Observe, that we can paint all elements divisible by x
//  in that color as well.

// So we can perform the following while the array is not empty:

// find the minimum element x
// ,
// assign new color and remove all elements divisible by x
// Complexity: O(n2)
// .

using namespace std;


int main(void)
{
    int n ; 
    cin >> n ;
    vector <int > nums , poped(n,0);
    for(int i = 0 ; i < n ; i++)
    {
        int num  ; 
        cin >> num ;
        nums.push_back(num);
    }
    int groupcount = 0;
    sort(nums.begin() , nums.end());
    for(int i = 0 ; i < n ;  i ++)
    {
        if(!poped[i])
        {
            groupcount++;
            for(int j = i ; j < n ; j++)
            {
                if(nums[j] % nums[i] == 0)
                {
                   poped[j]++; 
                }
            }
        }
    }
    cout << groupcount << endl;
    return 0 ;
}