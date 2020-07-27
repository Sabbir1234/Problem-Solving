#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


char str[1212], temp[1212],idx = 0;

int main(){

    scanf("%s",str);
    int len = strlen(str);
    for(int i=0;i<len;i++) if(isalpha(str[i])) str[i] += 3;
    for(int i=len-1;i>=0;i--) temp[idx++] = str[i];
    int k = (len - 1) / 2;
    for(int i=0,l=1;i<len;i++,l++) if(l>k) temp[i] -= 1;
    puts(temp);

}
