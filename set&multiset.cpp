#include<bits/stdc++.h>
using namespace std;


int main()
{
############################################################################   
unordered_set<int> s;

int n;
cin>>n;

for(int i=0; i<n; i++)
{
    int x;
    cin>>x;

    s.insert(x);
}

for(auto it :s)
{
   cout<<it<<endl;
}




input 
6
1
23
4
1
66
345

output
66
1
23
345
4

############################################################################



multiset<int> s;

int n;
cin>>n;

for(int i=0; i<n; i++)
{
    int x;
    cin>>x;

    s.insert(x);
}

for(auto it :s)
{
   cout<<it<<endl;
}




input
6
1
23
4
1
66
345

output
1
1
4
23
66
345



  return 0;
}
