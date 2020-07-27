#include <bits/stdc++.h>
#define maxn 200005
//using namespace std;
std::vector<int>conj[maxn];
int n,k,u,v,depth[maxn]={0},size[maxn]={0},det[maxn],vis[maxn]={0};
long long ans=0;
int cmp(int a,int b){return a>b;}
int dfs(int u,int f)
{
    depth[u]=depth[f]+1;size[u]=1; vis[u]=1;
	for (int i=0;i<conj[u].size();++i)
    {
        v=conj[u][i];
		if(vis[v]==0)
		size[u]+=dfs(v,u);
	}

	det[u]=size[u]-depth[u];
	printf("depth of %d %d size of %d %d det of %d %d\n",u,depth[u],u,size[u],u,det[u]);
	return size[u];
}
int main(){
	scanf("%d%d",&n,&k);
	for (int i=1;i<n;++i){
		scanf("%d%d",&u,&v);conj[u].push_back(v);conj[v].push_back(u);
	}
	dfs(1,0);
	std::nth_element(det+1,det+n-k,det+n+1,cmp);
	for (int i=1;i<=n-k;++i)
       {
           printf("det[i] = %d ",det[i]);
       }
    printf("\n");
	return 0;
}
