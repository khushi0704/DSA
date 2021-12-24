#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
using namespace std;
class Node{
    public:
    string name;
    list<string> nbrs;
    Node(string name){
        this->name=name;
    }
};
class Graph{
    // All Nodes
    // Hashmap (String,Node *)
    unordered_map<string,Node*> m;
    public:
    Graph(vector<string> cities){
        for(auto city:cities){
            m[city] = new Node(city);
        }
    }
    void addEdge(string x,string y,bool undir=false){
        m[x]->nbrs.push_back(y);
        if(undir){
            m[y]->nbrs.push_back(x);
        }
    }
    void printAdjList(){
        for(auto cityPair : m){
            auto city = cityPair.first;
            cout<<city<<"-->";
            Node *node = cityPair.second;
            for(auto nbr : node->nbrs){
                cout<<nbr<<",";
            }
            cout<<endl;
        }
    }

};
int main(){
    vector <string> cities= {"Delhi","London","Paris","NewYork"};
    Graph g(cities);
    g.addEdge("Delhi","London");
    g.addEdge("NewYork","London");
    g.addEdge("Delhi","Paris");
    g.addEdge("Paris","NewYork");
    g.printAdjList();
    return 0;
}