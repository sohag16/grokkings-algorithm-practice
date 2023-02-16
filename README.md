# grokkings-algorithm-practice
this folder is dedicated to my practice for algorithm code
//longest substring brute force method


#include<bits/stdc++.h>
using namespace std;
int unique_ele(string& s,int start,int end);
int main()
{
    string s;
    cin>>s;
    int n=s.length(); 
    int r=0;
    for(int i=0;i<n;i++)
    {  

        for(int j=i;j<n;j++)
        {
            if(unique_ele(s,i,j))
            { 
             r=max(r,j-i+1);
            }

        }
    }
    cout<<r;
}
int unique_ele(string& s,int start,int end)
{    unordered_set<char> uset;

    for(int i=start;i<=end;i++)
    {   
        char c=s[i];
        if(uset.count(c))
            return 0;
        else
            uset.insert(c);
    }
    return 1;
}
