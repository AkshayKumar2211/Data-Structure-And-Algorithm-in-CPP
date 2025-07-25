#include<iostream>
#include<string>
std::string skip(std::string s,std::string ans,int i,int n){

    if(i>n) return ans;
    
    if(s[i]!='a')
    return skip(s,ans+=s[i],i+1,n);
    else
    return skip(s,ans,i+1,n);

}
int main()
{
    std::string s="adsabasm";
    std::string ans="";
    std::cout<<skip(s,ans,0,s.size()-1);
}