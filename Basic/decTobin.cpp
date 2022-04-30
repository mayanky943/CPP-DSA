#include<bits/stdc++.h>
using namespace std;


string decToBinary(int n)
{
	string s;
    while(n>0){
        int temp=n%2;
        s+=to_string(temp);
        n/=2;
    }
    return s;
}
 
// driver code
int main()
{
    int n;
    cin>>n;
    
    string res=decToBinary(n);
    reverse(res.begin(),res.end());
    cout<<res;
}