#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,sum=0,i=1,P,M;
    cin>>t;
    while(sum<t){
        P=i;
        M=2*i;
        sum+=P;
        if (sum>=t){
            cout<<"Patlu";
            break;
        }
        else{
            sum+=M;
            if (sum>=t){
                cout<<" Motu";
                break;
            }
            else{
                i++;
            }
        }
    }
}
