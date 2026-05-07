#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, steps = 0;
    cin >> n;
    while(n > 0){
    	n = n-5;
    	steps++;
    }
    
    cout << steps << endl;
}
