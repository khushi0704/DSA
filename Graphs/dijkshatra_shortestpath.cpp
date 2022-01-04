#include <iostream>
#include <queue>
#include <list>
#include <vector>
#include <climits>
#include <set>
using namespace std;
class Graph{
    int V; // no. of vertices in the graph
    list<pair<int,int>> *l; // pointer to an array of linked lists
    public:
    Graph(int v){
        V=v; // vertices
        l = new list<pair<int,int>>[V]; // memory allocation for V no. of Linked lists
    }
    void addEdge(int u,int v,int wt,bool undir = true){
        // by default we're considering it as undirectional graph
        l[u].push_back({wt,v});
        if(undir){
            l[v].push_back({wt,u});
        }
    }
    int dijkshatra_shortest_path(int src,int dest){
        // a vector v to store distances 
        vector <int> dist(V,INT_MAX);
        // set to keep weights of respective vertices
        set<pair<int,int>> s;

        // INIT
        dist[src]=0;
        // distance and vertex pairs
        s.insert({0,src});
        // travere through the set
        while(!s.empty()){
            auto it = s.begin();
            int node = it->second;
            int distTillNow = it->first;
            // set would be updated each time a node is visited
            s.erase(it);
            // iterate over the neihnours of node
            for(auto nbrPair : l[node]){
                // ......
                int nbr = nbrPair.second;
                int currentEdge = nbrPair.first;
                if(distTillNow + currentEdge < dist[nbr]){
                    // remove if nbr already exists
                    auto f = s.find({dist[nbr],nbr});
                        if(f!=s.end()){
                            s.erase(f);
                        }
                    // insert the updated value of distances
                    dist[nbr] = distTillNow+currentEdge;
                    s.insert({dist[nbr],nbr});
                }
            }
        }
        // single source shortest distance to all other nodes

        for(int i=0;i<V;i++){
            cout<<"Node i "<<i<<" Dist "<<dist[i]<<endl;
        }
        return dist[dest];
    }
};
int main(){
    Graph g(5);
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(0,2,4);
    g.addEdge(0,3,7);
    g.addEdge(3,2,2);
    g.addEdge(3,4,3);
    cout<<g.dijkshatra_shortest_path(0,4)<<endl;
  //  g.topological_sort();
  //  g.printAdjList();
  //  g.bfs(1);
    return 0;
}