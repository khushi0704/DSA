#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int key){
        this->data = key;
        left=NULL;
        right=NULL;
    }
};
    Node* insert(Node* root,int key){
        if(root==NULL){
            // create a new node
            return new Node(key);
        }
        else{
            if(key>root->data){
                // traverse right subtree recur till this condition is true
               root->right= insert(root->right,key);
            }
            else{
               root->left = insert(root->left,key);
            }
        }
        return root;
    }
// printing a bst tree : traversal
// three types : inorder , postorder , preorder
// O(H)
bool search(Node *root,int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    if(key<=root->data){
        return search(root->left,key);
    }
        return search(root->right,key);
}
void printInorder(Node *root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
int main(){
    Node *root = NULL;
    int arr[]={1,2,7,3,5,10,4};
    for(int x:arr){
        root = insert(root,x);
    }
    printInorder(root);
    int key = 7;
    cout<<endl;
    cout<<search(root,key);
    return 0;
}