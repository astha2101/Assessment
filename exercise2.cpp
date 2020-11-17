#include<iostream>
using namespace std;
#include<unordered_set>
void findSubstrings(string str1,string str2)
{
int len1,len2;
len1=str1.length();
len2=str2.length();
if(len2>len1) return;
unordered_multiset<char> charset, substring;
for(int i=0;i<len2;i++) charset.insert(str2[i]);
for(int i=0;i<len1;i++)
{
if(i<len2) substring.insert(str1[i]);
else
{
if(substring==charset)
{
cout<<"substring '"<<str1.substr(i-len2,len2)<<"' present at index "<<(i-len2)<<endl;
}
auto iter=substring.find(str1[i-len2]);
if(iter!=substring.end())
{
substring.erase(iter);
}
substring.insert(str1[i]);
} 
}
if(substring==charset)
{
cout<<"substring '"<<str1.substr(len1-len2,len2)<<"' present at index "<<(len1-len2)<<endl;
}
}
int main()
{
string str1,str2;
cin>>str1>>str2;
findSubstrings(str1,str2);
return 0;
}