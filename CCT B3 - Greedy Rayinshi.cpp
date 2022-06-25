#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<cmath>
#include<utility>
#include<set>
#include<vector>
#include<map>
#include<deque>
#include<queue>
#include<stack>
#define maxn 1005
#define INF 0x3f3f3f3f
#define LL long long
#define ULL unsigned long long
#define E 1e-8
#define mod 1000000007
#define P pair<int,int>
#define MID(l,r) (l+(r-l)/2)
#define lson(o) (o<<1)
#define rson(o) (o<<1|1)
using namespace std;


int main()
{
    int n,x;
    deque<int> dq;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=1; i<=n; ++i)
        {
            scanf("%d",&x);
            dq.push_back(x);
        }
       // for(int i=0;i<dq.size();++i) cout<<dq[i]<<endl;
        int sum1=0, sum2 = 0;
        for(int i=1; i<=n; ++i)
        {
            int fir = dq.front();
            int las = dq.back();
            if(i%2==1)
            {
                if(fir>las)
                {
                    sum1 += fir;
                    dq.pop_front();
                }
                else
                {
                    sum1 += las;
                    dq.pop_back();
                }
            }
            else
            {
                if(fir>las)
                {
                    sum2 += fir;
                    dq.pop_front();
                }
                else
                {
                    sum2 += las;
                    dq.pop_back();
                }
            }
        }
        printf("%d %d\n",sum1,sum2);
    }
    return 0;
}