#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void fxn(vector<int> a, int n, int c)
{
    long long prev = -1;
    long long prevans = 0;
    long long mx = *max_element(a.begin(), a.end());
    for(long long i=0; i<n; i++)
    {
        long long ans = 0;
        vector<int> aa(n);
        long long cc = c;
        long long vkans = -1;
        for(long long j=0;j<n;j++)
        {
            aa[j] = a[j];
        }
        if(a[i]==prev)
        {
            for(long long j=i-1;j>=0;j--)
            {
                if(a[j]==a[i])
                {
                    cc+=a[j];
                    ans++;
                    aa[j] = -1;
                }
                else{
                    break;
                }
            }
        }
        for(long long j=0;j<i;j++)
        {
            if(a[j]>a[i])
            {
                ans++;
                cc+=a[j];
                aa[j] = -1;
            }
        }
        for(long long j=0;j<i;j++)
        {
            if(aa[j]!=-1 && a[j]+cc<a[i])
            {
                break;
            }
            else if(aa[j]!=-1)
            {
                cc += aa[j];
                aa[j] = -1;
                ans++;
            }
        }
        if(ans==i)
        {
            if(a[i]+cc >= mx)
            {
                if(vkans==-1)
                {
                    vkans = ans;
                }
                
            }
            for(long long j=i+1;j<n;j++)
            {
                long long m = *max_element(aa.begin(), aa.end());
                if(a[i]+cc >= m)
                {
                    break;
                }
                else{
                    ans++;
                    cc += m;
                    aa.at(distance(aa.begin(), max_element(aa.begin(), aa.end()))) = -1;
                }
            }
            if(vkans==-1)
            {
                vkans = ans;
            }
        }
        for(long long j=0;j<i;j++)
        {
            if(aa[j]!=-1)
            {
                if(a[j]+cc >= a[i])
                {
                    ans++;
                    cc += a[j];
                }
                else{
                    break;
                }
            }
        }
        if(vkans==-1)
        {
            vkans = ans;
        }
        cout<<vkans<<" ";
        prev = a[i];
        prevans = vkans;
    }
}
int main() {
    long long t;
    cin >> t;
    while(t--) 
    {
        long long n,c;
        cin >> n >> c;
        vector<int> a(n);
        for(long long i=0; i<n; i++)
        {
            cin >> a[i];
        }
        fxn(a,n,c);
        cout<<endl;
    }
    return 0;
}