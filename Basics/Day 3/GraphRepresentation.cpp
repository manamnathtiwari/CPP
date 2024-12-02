// Pushing this code on 1st December 


// My objective is to solve atleast one problem everyday related to programming ; so that next time when i see code atleast i wont be tensed thinking 
// what the hell does this mean

// Welcome to Day 3 of c++ daily solving one problem 

// Today's aim is to understand Graph Representation in c++ ; because it seems interesting 

// Usual header files anyone out of Quantum possibilities and entanglement from now on comment so that you can understand this in the most easiest way 
#include<bits/stdc++.h>
using namespace std;

// Yes i have a knack to become physisct and statistician expert at the same time 
// Lol

/*
    There are mainly two ways to represent the Graph in programmming 

    1. Adjacency Matrix
    2. Adjacency List

    Just two and trust me the Adjacency Matrix is the only important because the Adjacency List when you delete a node it does something 
    which will make the worst which we will understand later 

*/

void printMatrix(int matrix[5][5], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void printGraph(const vector<vector<int>> &adjList){
    for (int i=0;i<adjList.size();i++){
        cout<<i<<"->";
        for(int j :adjList[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


int main(){

    /*
    Adjacency Matrix : 
    */

   cout << "This Adjacency Matrix representation";

   int n = 5; // Number of vertices
    int matrix[5][5] = {0}; // Initialize with 0

    // Adding edges
    matrix[0][1] = 1;
    matrix[1][2] = 1;
    matrix[2][3] = 1;
    matrix[3][4] = 1;
    matrix[4][0] = 1;

     // Print adjacency matrix
    cout << "Adjacency Matrix:" << endl;
    printMatrix(matrix, n);

    cout << " The Adjacency List ";

     vector<vector<int>> adjList(n);

    // Adding edges (undirected graph)
    adjList[0].push_back(1);
    adjList[1].push_back(0);
    adjList[1].push_back(2);
    adjList[2].push_back(1);
    adjList[2].push_back(3);
    adjList[3].push_back(2);
    adjList[3].push_back(4);
    adjList[4].push_back(3);

    // Print adjacency list
    cout << "Adjacency List:" << endl;
    printGraph(adjList);
   

    return 0;
}
