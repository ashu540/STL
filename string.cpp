#include<bits/stdc++.h>
using namespace std;


int main()
{


#####################################################################################################
 
 int n;
 cin>>n;
 int m;
 cin>>m;
 
 
  cin>>s;//not for sentances
string s;
cin.get();

getline(cin,s); //for sentances
Note->->use after the cin.get()

cout<<n<<" "<<m<<" "<<s;













###############################->->operations on strings<-<-##########################################################################################################################################
 





1. Remove duplicates from a string using STL in C++

string s="ashutosh";
   
sort(s.begin(),s.end());

--->withot sort functon it will work only consiqutive character <---
s.erase(unique(s.begin(),s.end()),s.end());
cout<<s;

output->->
ahostu
///
 
 
input---->aaaasvhuefiuvefuvbedcedavjnekvnevevia
 without sort
output--->asvhuefiuvefuvbedcedavjnekvnevevia
with sort
output--->abcdefhijknsuv


##############################################################################################################################################################################################





2. remove particular element in hole string



string s="ashutoshrawat";

s.erase(remove(s.begin(),s.end(),'a'),s.end());

cout<<s;

output->->

shutoshrwt






##############################################################################################################################################################################################





3. reverse of the string 

string s="ashutosh";

reverse(s.begin(),s.end());

cout<<s;
output->
hsotuhsa





##############################################################################################################################################################################################





4. convert string in uppercase and lowercase

string s="AsHuToSh";

transform(s.begin(),s.end(),s.begin(), :: tolower);
cout<<s;

output->->->
ashutosh



transform(s.begin(),s.end(),s.begin(),:: toupper);
cout<<s;

output->->->
ASHUTOSH


checking iupper and lower->-> isppper(x) / islower(x) where x is a character it will return bool value
converet upper and lower->-> toppper(x) / tolower(x) where x is a character  it will return a character





##############################################################################################################################################################################################




5.   lower->upper and upper->lower
      
      string s="AsHuToSh";


      for(int i=0 ;i<s.size(); i++)
      {

           char x=s[i];
           if(isupper(x))
           {
              s[i]=tolower(x);
           }

           else
           {
             s[i]=toupper(x);
           }
          
       cout<<s[i];
      }




##############################################################################################################################################################################################

https://leetcode.com/problems/construct-k-palindrome-strings/

bool canConstruct(string s, int k) {
        bitset<26> odd;
        for (char& c : s)
            odd.flip(c - 'a');
        return odd.count() <= k && k <= s.length();
    }







return 0;
}
