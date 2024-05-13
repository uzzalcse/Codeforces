#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     ll n;
     cin>>n;
     bool ok=true;
     ll a[n+1];
     ll sum=0,avg=0,sum1=0;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         sum1+=a[i];
     }
     avg=sum1/n;
     if(sum1%n!=0)
        cout<<"NO"<<endl;
     else
     {
        for(int i=0;i<n;i++)
     {

         if(a[i]>=avg)
         sum+=(a[i]-avg);
         else
         {
             ll dif=avg-a[i];
             if(sum>=dif)
                {
                    a[i]=a[i]+dif;
                    sum=sum-dif;
                }
             else
             {
                 ok=false;
                 break;
             }

         }

     }

     if(ok==true)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
     }

    }
}