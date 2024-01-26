#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std; 

class Graph {
    private:
        int v; // no of vertices
        int e; //no of edges
        vector<int>* graph; // this store adjacency list
        int* discovered; //nodes visited in bfs
        int* explored; //nodes explored in dfs
        int ccc = 0; // count of connected components
    public:
        Graph(int vertices , int edges);
        void makeGraph();
        void DFS(int root);
        void DFStraversal();
        int findconnectedcomponent();
};

Graph :: Graph(int vertices , int edges) {
    v = vertices;
    e = edges;
}

void Graph :: makeGraph() {
    graph = new vector<int>[v+1];
    int n1 , n2;
    for(int i=0 ; i<e ; i++) {
        cin>>n1>>n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }
}

void Graph :: DFS(int root) {
    //int explored[v+1] = {0};
    stack<int> s;
    s.push(root);
    explored[root] = 1;
    while(!s.empty()) {
        int curr = s.top();
        cout<<curr<<" ";
        s.pop();
        for(int x : graph[curr]) {
            if(explored[x] == 0) {
                explored[x] = 1;
                s.push(x);
            }
        }
    }
    cout<<endl;
}

void Graph :: DFStraversal() {
    int count = 0;
    explored = new int[v+1];
    for(int i=0 ; i<=v ; i++) {
        explored[i] = 0;
    }
    for(int i=1 ; i<=v ; i++) {
        if(!explored[i]) {
            DFS(i);
            count++;
        }
    }
    ccc = count;
}

int Graph :: findconnectedcomponent() {
    return ccc;
}

int main()
{
    int vertices , edges;
    cout<<"Enter no of vertices in graph : ";
    cin>>vertices;
    cout<<"Enter no of edges in graph : ";
    cin>>edges;
    Graph g1(vertices , edges);
    g1.makeGraph();
    cout<<"DFS : ";
    g1.DFStraversal();
    cout<<"Connected components : "<<g1.findconnectedcomponent();

    return 0;
}