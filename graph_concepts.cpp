// A template for the Graph Concepts Exercise in C++.

#include <iostream>
#include <queue>
#include "digraph.h"
using namespace std;

// this is the breadthfirstsearch developed in class
// unordered_map<int, int> breadthFirstSearch(const Digraph &graph, int startVertex, bool &visited)
// {
//     unordered_map<int, int> searchTree; // map each vertex to its predecessor

//     searchTree[startVertex] = -1;

//     queue<int> q;
//     q.push(startVertex);

//     while (!q.empty())
//     {
//         int v = q.front();
//         q.pop();

//         for (auto iter = graph.neighbours(v); iter != graph.endIterator(v); iter++)
//         {
//             if (searchTree.find(*iter) == searchTree.end())
//             {
//                 searchTree[*iter] = v;
//                 q.push(*iter);
//             }
//         }
//     }

//     return searchTree;
// }

// count how many connected graphs
int count_components(Digraph *g)
{
    // int numofvert = g->size();

    // // create a dynamic array to keep track of visited vertex
    // bool *visited = new bool[numofvert];

    // // set all vertex initially as not visited
    // for (int i = 0; i < numofvert; i++)
    // {
    //     visited[i] = false;
    // }

    // // find the nodes that visited using breadthFirstSearch
    // for (int i = 0; i < numofvert; i++)
    // {
    //     if (visited[i] == false)
    //     {
    //         visited[i] = true;
    //         unordered_map<int, int> searchTree = breadthFirstSearch(*g, i, *visited);
    //     }
        
    // }

    return 0;
}

int main(int argc, char *argv[])
{
    // Digraph graph;
    // int nodes[] = {1, 2, 3, 4, 5, 6};
    // for (auto v : nodes)
    //     graph.addVertex(v);
    // int edges[][2] = {{1, 2}, {3, 4}, {3, 5}, {4, 5}};
    // for (auto e : edges)
    // {
    //     graph.addEdge(e[0], e[1]);
    //     graph.addEdge(e[1], e[0]);
    // }

    // // printing the result out before and after adding the new edges.
    // cout << count_components(&graph) << endl;
    // graph.addEdge(1, 4);
    // graph.addEdge(4, 1);
    // cout << count_components(&graph) << endl;

    return 0;
}

// void depthfirstsearch(int u, int prev, const Digraph& g)
// {
//     if (searchTree.find(u) == searchTree.end())
//     {
//         return;
//     }
//     searchTree[u] = prev;
//     for (auto iter = g.neighbours(u); iter != g.endIterator(u); iter++)
//     {
//         depthfirstsearch(*iter,u,g);
//     }
// }