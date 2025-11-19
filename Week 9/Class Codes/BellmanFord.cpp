#include<bits/stdc++.h>
using namespace std;

struct Edge{
    int u, v, w;
};

void bellmanFord(int n, vector<Edge>& edges, int src){
    vector<int>dist(n, INT_MAX);
    dist[src] = 0;

    for(int i = 1; i < n; i++){
        for(auto e:edges){
            if(dist[e.u] != INT_MAX and dist[e.u] + e.w < dist[e.v]){
                dist[e.v] = dist[e.u] + e.w;
            }
        }
    }

    for(auto e:edges){
        if(dist[e.u] != INT_MAX and dist[e.u] + e.w < dist[e.v]){
            cout << " Graph Contains Negative Cycle!" << endl;
            return;
        }
    }

    for(int i = 1; i < n; i++){
        cout << "Node" << i << " distance " << dist[i] << endl;
    }

}

int main(){
    int n = 7;
    vector<Edge> edges;
    edges.push_back({1,2,3});
    edges.push_back({2,1,-2});
    edges.push_back({1,3,1});
    edges.push_back({2,4,7});
    edges.push_back({2,3,6});
    edges.push_back({3,5,6});
    edges.push_back({3,4,5});
    edges.push_back({5,3,4});
    edges.push_back({5,4,-2});
    edges.push_back({4,6,4});
    edges.push_back({5,6,9});

    bellmanFord(n, edges, 1);


}
