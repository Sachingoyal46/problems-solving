#include<iostream>
#include<math.h>
using namespace std;

long long power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    else
    return a*power(a,b-1);
    
}
int main()
{
    long long a,b,k,c,d,f,e;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"enter the value of k"<<endl;
    cin>>k;

    c=pow(a,b);
    f=power(10,k);
    e=c%f;
    d=e/power(10,k-1);

    cout<<d;
    return 0;
    



}
