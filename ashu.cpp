#include<bits/stdc++.h>
using namespace std;


int main()
{
 
1. intput->

 queue<int> q;
FIFO-> first in first out
 q.push(1);
 q.push(5);
 q.push(2);
 q.push(3);
 q.push(4);

 while(!q.empty())
 {
    cout<<q.front()<<endl;
    q.pop();
 }

 output
1
5
2
3
4


/**************************************************************/
2. intput->

queue<int>q;
FIFO-> first in first out
int n;
cin>>n;
for(int i=0; i<n; i++)
{
    int x;
    cin>>x;
    q.push(x);
}

while(!q.empty())
 {
    cout<<q.front()<<endl;
    q.pop();
 }


intput
5
1
5
2
3
4


output
1
5
2
3
4


  return 0;
}
