#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Edge {
    int u, v, w;
};

bool comparator(const Edge &a, const Edge &b) {
    return a.w < b.w;
}

int findParent(int parent[], int a) {
    if (parent[a] == a) {
        return a;
    } else {
        return findParent(parent, parent[a]);
    }
}

void unionVertices(int parent[], int a, int b) {
    int u = findParent(parent, a);
    int v = findParent(parent, b);
    if (u != v) {
        parent[u] = v;
    }
}

void mstKruskal(int V, int E, vector<Edge>& edgesVector) {
    int parent[100];
    vector<Edge> A;
    for (int i = 1; i <= V; i++) {
        parent[i] = i;
    }

    sort(edgesVector.begin(), edgesVector.end(), comparator);
    for (Edge e : edgesVector) {
        int u = e.u;
        int v = e.v;
        if (findParent(parent, u) != findParent(parent, v)) {
            A.push_back(e);
            unionVertices(parent, u, v);
        }
    }

    cout << "The selected edges:" << endl;
    for (Edge e : A) {
        cout << "(" << e.u << "," << e.v << "," << e.w << ")" << endl;
    }
}

int main() {
    int V, E;
    cin >> V >> E;
    vector<Edge> edgesVector;

    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edgesVector.push_back({u, v, w});
    }


    for (Edge e : edgesVector) {
        cout << "(" << e.u << "," << e.v << "," << e.w << ")" << endl;
    }
    mstKruskal(V, E, edgesVector);
}



/*
5 7
1 2 2
1 3 1
2 3 4
2 4 3
3 4 1
3 5 5
4 5 1
*/


