#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstdio>
#include<numeric>
#include<cstring>
#include<ctime>
#include<cstdlib>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<list>
#include<cmath>
#include<bitset>
#include<cassert>
#include<queue>
#include<stack>
#include<deque>
#include<cassert>
using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    vector<char>st;
    for (int i = 0; i < (int)s.length(); i++)
    {
        if (!st.empty() && st.back() == s[i])
        {
            st.pop_back();
        }
        else
        {
            st.push_back(s[i]);
        }
    }
    if (st.empty())
    {
        printf("Empty String\n");
    }
    else
    {
        for (int i = 0; i < (int)st.size(); i++)
        {
            printf("%c", st[i]);
        }
        printf("\n");
    }
    return 0;
}