#include <iostream>
#include <unordered_map>
using namespace std;
class Node{
    char data;
    unordered_map<char,Node*> m;
    bool isTerminal;
    public:
    Node(int data){
        this->data = data;
        isTerminal = false;
    }
};
class Trie{
    Node*root;
    Trie(){
        root= new Node('\0');
    }
};