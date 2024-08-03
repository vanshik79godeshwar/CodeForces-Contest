#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long x,y,z,k;
        cin>>x>>y>>z>>k;
        long long a=0,b=0,c=0;
        long long ans=0;
        for(long long i=1;i<=x;i++)
        {
            for(long long j=1;j<=y;j++)
            {
                if((k%(i*j)==0) && k/(i*j)<=z)
                {
                    ans = max(ans,(x-i+1)*(y-j+1)*(z-k/(i*j)+1));
                }
            }
        }
        cout<<ans<<endl;
    }
}