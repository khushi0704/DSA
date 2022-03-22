#include <iostream>
#include <unordered_map>
using namespace std;\
class Trie;
class Node{
    char data;
    unordered_map<char,Node*> m;
    bool isTerminal;
    public:
    Node(int data){
        this->data = data;
        isTerminal = false;
    }
    friend class Trie;
};
class Trie{
    Node*root;
    Trie(){
        root= new Node('\0');
    }
    //insertion
    void insert(string word){
        Node *temp=root;
        for(char ch:word){
            if(temp->m.count(ch)==0){
                // it doesnt contain the char , so we'll insert
                Node *n = new Node(ch);
                temp->m[ch] = n;
            }
            temp=temp->m[ch];
        }
        temp->isTerminal=true;
    }
    bool search(string word){
        Node *temp = root;
        for(char ch:word){
            if(temp->m.count(ch)==0){
                return false;
            }
            temp=temp->m[ch];
        }
        return temp->isTerminal;
    }
};