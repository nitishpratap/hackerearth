#include <iostream>

using namespace std;

int main()
{
   // cout << "Hello world!" << endl;
    long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        while(1)
        {
            if(n%2==0)
            {
                n=n/2;
            }
            else if(n%2!=0)
            {
                n=3*n+1;
            }
            if(n==1)
            {
                cout<<"YES"<<endl;
                break;
            }
            if(n<1)
            {
               cout<<"NO"<<endl;
               break;
            }
        }
    }
    return 0;
}
