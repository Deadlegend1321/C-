#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int t=0,i=0;
    while(t<n)
    {
        t=pow(8,i+1);
        i++;
    }
    int r=1;
    int value=0;
    i=i-1;
    while(i>=0){
        r=pow(8,i);
        int q=n/r;
        int remain = n%r;
        n=remain;
        value=value*10+q;
        i--;
    }
    cout<<value;
}
