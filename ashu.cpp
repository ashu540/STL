#include<bits/stdc++.h>
using namespace std;


int main()
{
 /*********************************************/ 
#######  input methods   #########
  


  map<string,int> m;

1.

->->->  m["abc"]=5;
->->->  m.insert({"sxc",4});
->->->  m.insert(make_pair("ghg",9));
->->->  m["jkl"];

 output->
   abc 5
   sxc 4
   ghg 9
   jkl 0





2.

 int n;
 cin>>n;

for(int i=0; i<n; i++)
{
   string s;
   int x;
   cin>>s>>x;
 ->->-> m[s]=x;
 ->->-> m.insert({s,x});
 ->->-> m.insert(make_pair(s,x));
}







 /*********************************************/ 
#######  output methods   #########
 



 1.   

   for(auto it :m)
   {
     cout<<it.first<<" "<<it.second<<endl;
   }
    



 2. 

   map<string,int> :: iterator it1;

   for(it1=m.begin(); it1!=m.end(); it1++)
   {
      cout<<it1->first<<" "<<it1->second<<endl;
   }


    
 OR  for(it1=m.begin(); it1!=m.end(); it1++)
   {
      cout<<(*it1).first<<" "<<(*it1).second<<endl;
   }

  
input->
4
abc 5
sxc 4
ghg 9
jkl 0  //without 0 try yourself OR ignore

output->
abc 5
ghg 9
jkl 0
sxc 4 

/*#########################################################*/
 #######  operations   #########


1.

find operation


map<string,int> m;

 int n;
 cin>>n;

for(int i=0; i<n; i++)
{
   string s;
   int x;
   cin>>s>>x;
   m[s]=x;

}

 int s1;
 cin>>s1;
 
 auto it=m.find(s1);

 if(it!=m.end())
 {
  cout<<(*it).first;
 }



input->   output->
4         abc
abc 5
sxc 4
ghg 9
jkl 0
abc








  return 0;
}