#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
string s,a;
cin>>t;
while(t--){
    cin>>s;
    a=s;
    for(int i=1;i<a.length();i++){
        if(a[i]==a[i-1]){

             s[i]='#';
        }

    }
    cout<<s<<endl;
}

}
