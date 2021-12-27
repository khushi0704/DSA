#include <iostream>
#include <queue>
using namespace std;
// input 
// preorder : output : 1 2 4 5 7 3 6
// inorder : output : 4 2 7 5 1 3 6 
// Postorder : output : 4 7 5 2 6 3 1
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
void printInorder(Node * root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
void printPostorder(Node * root){
    if(root==NULL){
        return;
    }
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
}
void root(Node * root){
   // we'll use a queue data structure
   queue<int> q;
   // push root node
    q.push(root->data);
   // insert  null
    q.push(NULL);
    cout<<q.front()<<"\n";
    q.pop();
    q.push(root->left->data);
    q.push(root->right->data);
    q.push(NULL);
   // jump to the next level
    levelorder(q,root->left,root->right);
}
void printlevelorder(queue <int> q){
    while(!q.empty()){
    if(q.front()==NULL){   
        cout<<"\n";
    }
    cout<<q.front()<<" ";
    }
}
void levelorder(queue<int> q,Node *l,Node *r){
    // traverse through the queue and push elements until you get a NULL
    

}
int main(){
// 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
Node * root = buildTree();
cout<<"Preorder Traversal :"<<endl;
printPreorder(root);
cout<<"\nInorder Traversal :"<<endl;
printInorder(root);
cout<<"\nPostorder Traversal :"<<endl;
printPostorder(root);
cout<<"\nLevelorder Traversal :"<<endl;
printPostorder(root);
return 0;
}