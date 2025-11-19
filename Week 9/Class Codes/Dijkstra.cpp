#include<bits/stdc++.h>
using namespace std;

void dijkstra(int n, vector<vector<pair<int, int>>>& adj, int src){
    vector<int> dist(n, INT_MAX);
    dist[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<>> pq;
    pq.push({0, src});
    while(!pq.empty()){
        //auto [d, u] = pq.top();
        pair<int, int> temp = pq.top();
        int d = temp.first;
        int u = temp.second;
        pq.pop();

        if(d > dist[u]) continue;

        for(auto it : adj[u]){
            int v = it.first;
            int w = it.second;
            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    for(int i = 1; i < n; i++){
        cout << "Node " << i << " distance " << dist[i] << endl;
    }
}


int main(){
    int n = 7;
    vector<vector<pair<int,int> > > adj(n);
    adj[1].push_back({2, 4});
    adj[1].push_back({3, 2});

    adj[2].push_back({3, 6});
    adj[2].push_back({4, 5});

    adj[3].push_back({4, 10});
    adj[3].push_back({5, 7});

    adj[4].push_back({6, 9});
    adj[4].push_back({5, 8});

    adj[5].push_back({6, 10});

    dijkstra(n, adj, 1);


    /*
    there are n edges. the following n lines contain u, v, w.
    5
    1 3 4
    1 8 2
    2 8 1
    3 8 5
    4 1 3 adj[4].push_back({1,3})
    */


    return 0;
}
