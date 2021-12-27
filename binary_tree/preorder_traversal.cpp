#include <iostream>
using namespace std;
// input 
// output : 1 2 4 5 7 3 6
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int d){
        data=d;
        left=right=NULL;
    }
};
Node* buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
Node* n=new Node(d);
n->left = buildTree();
n->right = buildTree();
return n;
}
void printPreorder(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
    
}
int main(){
// 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
Node * root = buildTree();
printPreorder(root);
return 0;
}