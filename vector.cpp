#include<bits/stdc++.h>
using namespace std;


int main()
{
  input 1
  vector<int> v{1,2,3,4,5};

  input 2
  vector<int> v;

  int n;
  cin>>n; n->size

  for(int i=0; i<n; i++)
  {
    int x;
    cin>>x;
    v.push_back(x);

  }
  for print

  //1
  for(auto it=v.begin() ;it!=v.end(); it++)
  {
     cout<<*it<<" ";
  }

 //2
  for(auto it :v)
  {
    cout<<it<<" ";
  }
  //3
  for(int i=0; i<n; i++)
  {
   cout<<v[i]<<" ";
  }

/***************************************************************/
//OPERATIONS ON VECTORS

  vector<int> v;

  1.input for the elements
     int x;
     cin>>x;
   v.push_back(x);





  2. delete for the last element
      v.pop_back();





  3. insert element

     vector<int> v{1,2,3,4,5};
   
   v.insert(v.begin(),2,63);
   here 2->number of times repeatation
   for(auto it :v)
   {
       cout<<it<<" ";
   }      
   ->->
   63 63 1 2 3 4 5 

   if v.begin()+1 then insert will be after 0th element 

     
     
     
     
     
 4. sorting

 -> sort(v.begin(),v.end())
  it will be sort in accending order

 ->sort(v.begin(),v.end(),greater<int>())
  it will be sort in descending order
   
  ->->-> sort(v.begin(),v.end(),mycomp)

  -> bool mycomp(int a,int b)
  {

      return a<b; ->accending
      return a>b; ->descending
  }
 
  
  
  
  
 5. searching

 after sorting or before sorting 
auto it= find(v.begin(),v.end(),value)
it will return iterator

-> after sorting <-
binary_search(v.begin(),v.end(),value)
note->it will not take iterator
it will return bool value 
/*&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&*/
   
   
   
   
   
6. upper_bound & lower_bound
->->->after sorting<-<-<- 
note->these are returns iterators

for value->*iterator
 
->->->->example

vector<int> v{1,2,3,4,5,3,16,9,7,8,7};
   sort(v.begin(),v.end());
   /*1,2,3,3,4,5,7,7,8,9,16*/
   
   auto a1=lower_bound(v.begin(),v.end(),6);
   auto a2=lower_bound(v.begin(),v.end(),3);
   auto a3=upper_bound(v.begin(),v.end(),3);
   auto a4=upper_bound(v.begin(),v.end(),15);
   auto a5=upper_bound(v.begin(),v.end(),31);
   
      cout<<a1-v.begin()<<" "<<*a1<<endl;--->6 7
      cout<<a2-v.begin()<<" "<<*a2<<endl;--->2 3
      cout<<a3-v.begin()<<" "<<*a3<<endl;--->4 4 
      cout<<a4-v.begin()<<" "<<*a4<<endl;--->10 16
      cout<<a5-v.begin()<<" "<<*a5<<endl;--->11 0

        
        
        
        
        
        
        
7. others 

// add of all vector elements 

  vector<int> v{1,2,3,4};
  cout<<accumulate(v.begin(),v.end(),2); 

  output->->->10+2=12

//  reverse
  reverse(v.begin(),v.end())     

//count elements

  vector<int> v{1,2,3,4,3,3};
  cout<<count(v.begin(),v.end(),3);
 
 output->-> 3

// maximum and minimum elements
 
  vector<int> v{1,2,3,4,3,3};
  auto it1=max_element(v.begin(),v.end());
  auto it2=min_element(v.begin(),v.end());
  
  
  cout<<it1-v.begin()<<" "<<*it1<<endl;
  cout<<it2-v.begin()<<" "<<*it2<<endl;

  output
  10
  3
  1 5 2 3 4 8 9 7 10 6

  
  


}
