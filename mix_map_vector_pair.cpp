#include<bits/stdc++.h>
using namespace std;


int main()
{
########################################################################################################################
 vector<pair<string,int>> v;

 int n;
 cin >>n;
 for(int i=0; i<n; i++)
 {
     string s;
     int x;
     cin>>s>>x;

     v.push_back({s,x});
 
 }


for(auto it :v)
{
   cout<<it.first<<" "<<it.second<<endl;
}

 for(auto it =v.begin(); it!=v.end(); it++)
{
    cout<<it->first<<" "<<it->second<<endl;
}

input->
4
asd 4
sev 3
vrf 1
bfg 2

output->
asd 4
sev 3
vrf 1
bfg 2



########################################################################################################################


   map<int,pair<string,int>> m;


   int n;
   cin>>n;

   for(int i=0 ; i<n; i++)
   {
       int x;
       cin>>x;

       string s;
       cin>>s;
       int y;
       cin>>y;

       m.insert({x,{s,y}});
       m[x]={s,y};
   }


for(auto it : m)
{
    cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
}

for(auto it=m.begin(); it!=m.end(); it++)
{
   cout<<it->first<<" "<<it->second.first<<it->second.second<<endl;
}


input->
4
2 asd  4
4 sev  3
3 vrf  1
1 bfg  2

output->
1 bfg 2
2 asd 4
3 vrf 1
4 sev 3








########################################################################################################################


map<pair<string,int>,int> m;

int n;
cin>>n;
for(int i=0; i<n; i++)
{
   string s;
   cin>>s;
   int x;
   cin>>x;
   int y;
   cin>>y;

   m[{s,x}]=y;
}


for(auto it : m)
{
   cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<endl;
}

for(auto it=m.begin(); it!=m.end(); it++)
{
    cout<<it->first.first<<" "<<it->first.second<<" "<<it->second<<endl;
}

input->
4
asd 3 4
sev 2 3
vrf 4 1
bfg 1 2

output->
asd 3 4
bfg 1 2
sev 2 3
vrf 4 1









########################################################################################################################

map<pair<int,string>,int> m;

int n;
cin>>n;
for(int i=0; i<n; i++)
{
  int x;
  cin>>x;
  string s;
  cin>>s;
  int y;
  cin>>y;
  m[{x,s}]=y;
  
}

for(auto it : m)
{
    cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<endl;
}

for(auto it=m.begin(); it!=m.end(); it++)
{
   cout<<it->first.first<<" "<<it->first.second<<" "<<it->second<<endl;
}


input->
4
3 asd 4
2 sev 3
4 vrf 1
1 bfg 2

output->
1 bfg 2
2 sev 3
3 asd 4
4 vrf 1



return 0;
}
