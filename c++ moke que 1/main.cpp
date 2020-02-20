#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float  a, s;
        int  sum,x,y;
        cin>>a>>s;
        sum=a/s;
        x=pow(10,9);
        y=x+9;
        sum=sum%y;
        cout<<sum<<endl;
    }
    return 0;
}
