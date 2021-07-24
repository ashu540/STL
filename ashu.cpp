#include<bits/stdc++.h>
using namespace std;


int main()
{
 /************************************************
  ***********************************************
  **********************************************/
deque<int> dq;
//double ended queue



dq.push_back(6);
dq.push_back(3);
dq.push_back(9);
dq.push_back(0);
//6<-3<-9<-0
dq.push_front(1);
dq.push_front(37);
dq.push_front(55);
dq.push_front(42);
//42->55->37->1



for(int i=0; i<4; i++)
{
    cout<<dq.back()<<" ";
    dq.pop_back();
}
//0 9 3 6
cout<<endl;



for(int i=0; i<4; i++)
{
    cout<<dq.front()<<" ";
    dq.pop_front();
}

cout<<endl<<endl;
//42 55 37 1


->so output is
6 3 9 0
1 37 55 42

/************************************************************************
 ***********************************************************************
 ***********************************************************************/

deque<int> dq;
input 2.



//6 3 9 0
 for(int i=0; i<4; i++)
 {
     int x;
     cin>>x;
     dq.push_back(x);
 }
//6<-3<-9<-0




//1 37 55 42
for(int i=0; i<4; i++)
 {
     int x;
     cin>>x;
     dq.push_front(x);
 }
//42->55->37->1




for(int i=0; i<4; i++)
{
   cout<<dq.back()<<" ";
   dq.pop_back();

}
O->6 3 9 0



cout<<endl;
for(int i=0; i<4; i++)
{
   cout<<dq.front()<<" ";
   dq.pop_front();
}
O->1 37 55 42

input
6 3 9 0
1 37 55 42

output
0 9 3 6 
42 55 37 1 

  return 0;
}
