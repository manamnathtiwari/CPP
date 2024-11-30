// Day2 of me learning the C++ coding lets learn about various loop in the c++ ,its syntax and implementation

// Codeforces Problem statement 
// Difficulty Level - 3300

// Problem statement requires me to construct a graph and then find the shortest path between any two nodes and then removing one connection from the node and then doing the same thing 
//  Bi-directional paths
// Cost thing
/*
Input 
5 3  ({n}nmber of states , {m}not fesible railway construction)
1 2 1 1 1 (cost of each state/node)
1 4 (m,1)
1 5 (m,2)
2 5 (m,3)
meaning except these connection we can connect any other combination of connection
*/


#include<bits/stdc++.h>
using namespace std;

// Graph represented through an adjacency list
typedef vector<vector<pair<int,int>>> Graph ;

// Function to add an bidirectional edge 
void addEdge(Graph &graph,int u, int v,int weight){
    graph[u].push_back({v,weight});
    graph[v].push_back({u,weight});// Bidirectional edge
}


// Function to find the shortest path using the Dijkstra's Algorithm
vector<int> dijkstra (const Graph &graph ,int start){
    int n = graph.size();
    vector<int> distance(n,INT_MAX);//Using INT_MAX as representing infinity
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;

    distance[start] = 0;
    pq.push({0,start});

    while(!pq.empty()){
        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (dist>distance[node]) continue;

        for(auto neighbor : graph[node] ){
            int nextNode = neighbor.first;
            int weight  = neighbor.second;
            if  (distance[node]+ weight < distance[nextNode]) {
                distance[nextNode] = distance[node]+weight ;
                pq.push({distance[nextNode],nextNode});
            }
        }
    }
    return distance;
}


// Function to delete the node from the graph
void deleteNode(Graph &graph,int node){
    for(auto &neighbors : graph){
        neighbors.erase(
            remove_if(neighbors.begin(),neighbors.end(),
            [node](pair<int,int> edge){return edge.first == node ; }),neighbors.end()
        );
    }
    graph[node].clear();
}

int main(){
    int n = 5; // Number of nodes
    Graph graph(n);

    // Add bidirectional edges with weights
    addEdge(graph, 0, 1, 4);
    addEdge(graph, 0, 2, 1);
    addEdge(graph, 2, 1, 2);
    addEdge(graph, 1, 3, 1);
    addEdge(graph, 2, 3, 5);
    addEdge(graph, 3, 4, 3);

    // Find shortest path from node 0
    vector<int> distances = dijkstra(graph, 0);
    cout << "Shortest distances from node 0:" << endl;
    for (int i = 0; i < distances.size(); ++i) {
        cout << "Node " << i << ": " << distances[i] << endl;
    }

    // Delete node 2
    deleteNode(graph, 0);
    cout << "\nGraph after deleting node 2:" << endl;
    for (int i = 0; i < graph.size(); ++i) {
        cout << "Node " << i << ": ";
        for (auto edge : graph[i]) {
            cout << "(" << edge.first << ", " << edge.second << ") ";
        }
        cout << endl;
    }






    return 0;
}