#include<iostream>
using namespace std;
int main() {
	long long n,d,r=0;
	cin>>n;
	for(long long i=n;i!=0;i=i/10)
	{
       d=i%10;
	   r=(r*10)+d;
	}
	cout<<r;
	return 0;
}
