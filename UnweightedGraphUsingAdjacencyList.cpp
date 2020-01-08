/*This code gives an Unweighted graph using an adjacency list
The adjacency list is an array of linked lists
but this program uses STL <vector> instead of linked lists*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void addedge(vector<int> adj[],int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printgraph(vector<int> adj[],int V)
{
    for (int v=0;v<V;v++)
    {
        cout<<"\nThe adjacent nodes of node "<<v<<" is ";
        vector<int>:: iterator x =adj[v].begin();
        while(x!=adj[v].end())
        {
            cout<<"  "<<*x++;
        }
    }
}


//driver code
int main()
{
    int V=5;
    vector <int> adj[5];
    addedge(adj,3,4);
    addedge(adj,1,2);
    addedge(adj,1,4);
    addedge(adj,0,2);
    addedge(adj,0,4);
    addedge(adj,4,2);

    printgraph(adj,V);
    return 0;
}
