#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
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
Node* findMin(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
void printInorder(Node *root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
Node* deleteNode(Node *root,int key){
    if(root==NULL){
        return NULL;
    }
    else if(key < root->data){
        // traverse to the left subtree and find that node
        root->left = deleteNode(root->left,key);
    }
    // traverse to the right subtree
    else if(key > root->data){
        root -> right = deleteNode( root->right,key);
    }
    else{
        // cases
        // no children
        
        if(root->left==NULL && root->right==NULL){
        // delete the node 
        delete root;
        root=NULL;
        }
        // single child
        else if(root->left==NULL){
            // i.e root right is not null
            Node* temp=root;
            root=root->right;
            delete temp; 
        }
        else if(root->right==NULL){
            // i.e root left is not null
            Node* temp=root;
            root=root->left;
            delete temp; 
        }
        // 2 children
        // trickiest 
        else{
            // find inorder successor , i.e smalleste elemt
            Node* temp = findMin(root->right);
            root->data=temp->data;
            root->right = deleteNode(root->right,temp->data);
        }
    }
    return root;
}

int main(){
    Node * root = NULL;
    int arr[]={1,2,7,3,5,10,4};
    for(int x:arr){
        root = insert(root,x);
    }
    printInorder(root);
    int key = 7;
     root=deleteNode(root,key);
    cout<<endl;
    printInorder(root);
   // cout<<search(root,key);
    return 0;
}