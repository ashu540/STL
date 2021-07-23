#include<bits/stdc++.h>
using namespace std;


int main()
{
 LIFO-> last in first out
 stack<int>s;
input ->1


 s.push(2);
 s.push(3);
 s.push(1);
 s.push(4);
 s.push(5);

for(int i=0; i<n; i++)
{
    int x;
    cin>>x;
    s.push(x);
}

output->
5
4
1
3
2



input ->2
LIFO-> last in first out
stack<int>s;
int n;
cin>>n;

for(int i=0; i<n; i++)
{
    int x;
    cin>>x;
    s.push(x);
}


 while(!s.empty())
 {
    cout<<s.top()<<endl;
    s.pop();
 }


 input
5
2
3
1
4
5

 output
5
4
1
3
2

  return 0;
}
