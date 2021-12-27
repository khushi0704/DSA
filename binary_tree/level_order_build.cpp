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
// build a tree when the tree is given in a level order fashion
// 1 2 3 4 5 -1 -1 7 -1 -1 -1 -1 -1
void levelOrderBuild(){
    queue<Node*> q;

}
int main(){
int arr[13]={1, 2, 3, 4, 5, -1 ,-1, 7, -1 ,-1 ,-1 ,-1, -1};

Node * root = buildTree();
cout<<"Preorder Traversal :"<<endl;
levelOrderBuild();
return 0;
}