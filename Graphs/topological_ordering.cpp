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
    void addEdge(int i,int j,bool undir = false){
        // by default we're considering it as undirectional graph
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }

    void topological_sort(){

        // calculate indegree of all nodes and put it in a vector
        vector<int> indegree(V,0);

        // traverse through the adjacency list and incremeent indegree resp
        for(int i=0;i<V;i++){
            for(auto nbr : l[i]){
                indegree[nbr]++;
            }
        }

        // create a queue and perform bfs traversal
        queue<int> q;

        // push inside the queue if indegree is 0
        for(int i=0;i<V;i++){
        if(indegree[i]==0){
            q.push(i);
        }
        }

        // we've initialized the queue , now traverse through the queue to print it

        while(!q.empty()){
            int node = q.front();
            cout<<node<<" ";
            q.pop();
            // push neighbours inside if they have indegree 0 
            for(auto nbrs : l[node]){
                indegree[nbrs]=indegree[nbrs]-1;
                if(indegree[nbrs]==0){
                    q.push(nbrs);
                }
            }
        }
        cout<<endl;  
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
    Graph g(6);
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(4,5);
    g.addEdge(1,4);
    g.addEdge(1,2);
    g.topological_sort();
    g.printAdjList();
  //  g.bfs(1);
    return 0;
}