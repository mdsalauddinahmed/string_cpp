#include<bits/stdc++.h>
using namespace std;


#define MAX 10000
vector<int>edges[MAX];
//      1
//    / | \
//   2  5  3
//    \ | /
//      4
bool visited[MAX];
void bfs(){
visited[node]=true;
cout<<node<<" ";
for(int i;i<=edges[node].size();i++){
    if(!visited[i]){
        dfs(i);
    }
}
}


int main(){


edges[1].emplace_back(2);
edges[1].emplace_back(5);
edges[5].emplace_back(1);
edges[2].emplace_back(1);
edges[1].emplace_back(3);
edges[3].emplace_back(1);
edges[2].emplace_back(4);
edges[4].emplace_back(2);
edges[3].emplace_back(4);
edges[4].emplace_back(3);
edges[5].emplace_back(4);
edges[4].emplace_back(5);

 for(int i=1;i<=6;i++){
    if(!visited[i]){
        dfs(i);
    }
 }

return 0;
}

