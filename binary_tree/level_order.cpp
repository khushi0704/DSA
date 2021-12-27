#include <iostream>
#include <queue>
using namespace std;
// input 
// preorder : output : 1 2 4 5 7 3 6
// inorder : output : 4 2 7 5 1 3 6 
// Postorder : output : 4 7 5 2 6 3 1
// Level Order : output : 1 \n 2 3 \n 4 5 6 \n 7 
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
void levelOrderPrint(Node*root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        // either null or pointer to a node
        // if its a null then print a new line character 
        if(temp==NULL){
            // no child exists
            cout<<"\n";
            q.pop();
            // insert a new null for the next level
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            q.pop();
            cout<<temp->data<<" ";
            // if temp left exists then push elements in the queue
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
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
levelOrderPrint(root);
return 0;
}