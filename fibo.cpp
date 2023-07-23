#include<bits/stdc++.h>
using namespace std;
int main(){
int n; 
cin>>n;
int n1=1;
int n2=1;
int n3;
if(n>=1)
{
    cout<<n1<<endl;
}
if(n>=2)
{
    cout<<n2<<endl;
}
///cout << number1<<"," << number2  ;
for(int i=3 ; i<n+1 ; ++i)
{
    n3 = n2+n1;
    cout<<n3<<endl;
    n1=n2;
    n2=n3;
          
}

}