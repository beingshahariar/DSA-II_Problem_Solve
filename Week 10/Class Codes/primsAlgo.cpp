#include<bits/stdc++.h>
using namespace std;

#define INF INT_MAX

void primsAlgorithm(int n, vector<vector<pair<int, int>>> &adjList, int source){
    vector<int> key(n+1, INF);
    vector<int> parent(n+1, -1);
    vector<bool> inMST(n+1, false);

    key[source] = 0;
    priority_queue< pair<int, int>, vector<pair<int, int>>, greater<> > pq;

    pq.push({0, source});
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();

        if(inMST[u]) continue;
        inMST[u] = true;

        for(auto &adjNode : adjList[u]){
            int v = adjNode.first;
            int w = adjNode.second;
            if(!inMST[v] && w < key[v]){
                key[v] = w;
                parent[v] = u;
                pq.push({key[v], v});
            }
        }
    }

    int totalWeight = 0;
    for(int i = 1; i <= n; i++){
        if(parent[i] != -1){
            cout << parent[i] << " - " << i << " with weight " << key[i] << endl;
            totalWeight += key[i];
        }
    }

    cout << "Total Weight of MST " << totalWeight << endl;
}



int main(){
    int V, E;
    cin >> V >> E;

    vector<vector<pair<int, int>>> adjList(V+1);
    for(int i = 0; i < E; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adjList[u].push_back({v,w});
        adjList[v].push_back({u,w});
    }

    primsAlgorithm(V, adjList, 0);
    return 0;
}

/*
9 14
0 1 4
0 7 8
1 2 8
1 7 11
2 8 2
2 5 4
2 3 7
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6
7 8 7
*/
