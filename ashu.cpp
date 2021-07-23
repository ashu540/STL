#include<bits/stdc++.h>
using namespace std;


int main()
{

  it is take keys but not value 
 set<int>s;
1.

   s.insert(23);
   s.insert(2);
   s.insert(289);
   s.insert(29);
   s.insert(1);


  output->
  1
  2
  23
  29
  289







2.



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

set<int> :: iterator it1;

for(it1=s.begin(); it1!=s.end(); it1++)
{
    cout<<*it1<<endl;
}


input   
5
23
289
29
2
1

output
1
2
23
29
289

################################
note->operations like map
  return 0;
}