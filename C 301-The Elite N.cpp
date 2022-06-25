#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int N,sp,i;
    scanf("%d%d",&sp,&N);
    int a[N];
   
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        if(sp<=a[i])
        {
            printf("-1");
            return 0;
        }
    }
        int day=1;
        int x=sp;   
        for(i=0;i<N;)
        {
            if(a[i]<x)
            {
                x=x-a[i];
                i++;
            }
            else
            {
                day++;
                x=sp;
            }
               
        }
    printf("%d",day);  
   
   
    return 0;
}
