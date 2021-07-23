#include<bits/stdc++.h>
using namespace std;


int main()
{

  pair<string,int> p;

  //input 1
   p={"ashu",10}; OR p=make_pair("ashu",10);
  cout<<p.first<<" "<<p.second; 

  // input 2
  string s;
  int n;
  cin>>s>>n;

  p={s,n};

  cout<<p.first<<" "<<p.second;

  //input 3

  string s;
  int n;
  cin>>s>>n;
  p.first=s;
  p.second=n;

 cout<<p.first<<" "<<p.second;

   return 0;

}
