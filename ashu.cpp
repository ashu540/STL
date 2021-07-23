#include<bits/stdc++.h>
using namespace std;


int main()
{
 

 /*******************************************************************/
  #######  unordered map   #########




 unordered_map<string,int> m;

  it will take only int,string,char,float, long
  mean not take pair vector nested map

  time complexity will be O(1)

  it is just like a map

  int n;
  cin>>n;

  for(int i=0; i<n; i++)
  {
      string s;
      int x;
      cin>>s>>x;

      m[s]=x;
  }

  for(auto it :m)
  {
     cout<<it.first<<" "<<it.second<<endl;
  }








 /********************************************************************/
  

  #######  multimap   #########

  multimap <string,int> m;


  it can take same keys and also print of them

 
  int n;
  cin>>n;



  for(int i=0; i<n; i++)
  {
      string s;
      int x;
      cin>>s>>x;
   int the input the m[s]=x;
   not works here
     

     so we can use here
      m.insert({s,x});
  }

  for(auto it :m)
  {
     cout<<it.first<<" "<<it.second<<endl;
  }



input      
4
abc 5
sxc 4
abc 9
jkl 0

output
abc 5
abc 9
jkl 0
sxc 4





NOTE->-> if i apply erase option without iterator then all keys will be delete 
of same type(name)

so we use iterator here because it will delete first only in same keys


  return 0;
}