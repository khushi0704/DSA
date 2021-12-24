#include <iostream>
#include <queue>
#include <list>
using namespace std;
class Graph{
    int V; // no. of vertices in the graph
    list<int> *l; // pointer to an array of linked lists
    public:
    Graph(int v){
        V=v; // vertices
        l = new list<int>[V]; // memory allocation for V no. of Linked lists
    }
    void addEdge(int i,int j,bool undir = true){
        // by default we're considering it as undirectional graph
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }
    void printAdjList(){
        // iterate over all the rows
        for(int i=0;i<V;i++){
            // iterate over the linkedlists in each row
            cout<<i<<"-->";
            // auto keyword automatically detects the data type
            for(auto node:l[i]){
                cout<<node<<",";
            }
            cout<<endl;
        }
    }
    void bfs(int source){
        queue<int> q;
        bool *visited = new bool[V]{0}; //initialize the bool array of size = V with zero
        q.push(source);
        visited[source] = true;
        while(!q.empty()){
            int f=q.front();
            cout<<f<<endl;
            q.pop();
            // push the nbrs of current node
            for(auto nbrs : l[f]){
                if(!visited[nbrs])
                {
                    q.push(nbrs);
                    visited[nbrs]=true;
                }
            }
        }
    }
};
int main(){
    Graph g(7);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(5,6);
    g.addEdge(4,5);
    g.addEdge(0,4);
    g.addEdge(3,4);
    g.printAdjList();
    g.bfs(1);
    return 0;
}