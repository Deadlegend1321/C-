#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int c,a,value,seat,row,d;
        cin>>a;
        d=a%12;
        value=a%6;
        if (a%12!=0){
            c=(a/12)+1;
        }
        else{
            c=a/12;
        }
        row=(c-1)*12;
        seat=(a-row);
        seat=row+(13-seat);
        if ((value==1)||(value==0)){
            cout<<seat<<" "<<"WS"<<"\n";
        }
        else if((value==2)||(value==5)){
            cout<<seat<<" "<<"MS"<<"\n";
        }
        else{
            cout<<seat<<" "<<"AS"<<"\n";
        }
    }return 0;
}
