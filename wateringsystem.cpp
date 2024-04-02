#include <bits/stdc++.h>

// https://codeforces.com/problemset/problem/967/B
// 967B - Watering System
// It's obvious that we should block several largest holes. Let's first sort them. After that, let's iterate through the number of blocked holes, maintaining the sum of sizes of non-blocked holes S
// . With the value S
//  it is easy to compute if the flow from the first hole is large enough or not. Just output the number of blocked pipes at the first moment when the flow is large enough. The complexity is O(n)
// .
using namespace std;
int main (void)// i like to be cool and different "i have autism"
{
    int n , a , b , sum =0 ;
    cin >> n >> a >> b;
    vector <int > pipesize;
    for(int i = 0 ; i < n ; i++)
    {
        int temp ;
        cin >> temp;
        sum += temp;
        pipesize.push_back(temp);
    }
    if(a == b)
    {
        cout << n -1;
        return 0;
    }
    if(b <= (pipesize[0] * a / sum ))
    {
        cout << 0 ;
        return 0 ;
    }

    int go = pipesize[0] * a;
    int holeclose = 0 , k= 1;
    sort(pipesize.begin() + 1 , pipesize.end() , greater <int>());
    while(b> go / sum)
    {

        sum -= pipesize[k++];
        holeclose++;
    }
    cout << holeclose;
    return 0 ;

}