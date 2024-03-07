#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin >> n;
       vector<int>v(n);
       for (int i = 0; i < n; i++)
       {
         cin >> v[i];
       }
       map<int,int>map;
       for(int i =0;i<n;i++)
       {
        map[v[i]]++;
       }
       if(map.size()>2)
       {
        cout << "NO"<<endl;
       }
       else
       {
         if(map.size()==1)
         {
            cout << "YES"<<endl;
         }
         else if(map.size()==2)
         {
            int a,b;
            int c=0;
            for(auto i:map)
            {
                if(c==1)
                {
                    b=i.first;
                    break;
                }
                if(c==0)
                {
                    a=i.first;
                    c++;
                }
            }
            if(n%2==0&&abs(map[a]-map[b])==0)
            {
                cout << "YES"<<endl;
            }
            else if(n%2==0&&abs(map[a]-map[b])!=0)
            {
                cout << "NO"<<endl;
            }
            else if(n%2!=0&&abs(map[a]-map[b])==1)
            {
                cout << "YES"<<endl;
            }
            else
            {
                cout << "NO"<<endl;
            }
         }
       }

    }

    return 0;
}