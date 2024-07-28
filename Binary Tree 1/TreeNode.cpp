#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};


void DisplayTree(TreeNode* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    DisplayTree(root->left);
    DisplayTree(root->right);
}

int sum(TreeNode* root){
    if(root==NULL) return 0;
    return root->val+sum(root->left)+sum(root->right);
}

int size(TreeNode* root){
    if(root==NULL) return 0;
    return 1+size(root->left)+size(root->right);
}

int maximum(TreeNode* root) {
    if (root == NULL) return INT_MIN;
    return max(root->val, max(maximum(root->left), maximum(root->right)));
}

int product(TreeNode* root){
    if(root==NULL) return 1;
    return root->val*product(root->left)*product(root->right);
}

 int levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(levels(root->left),levels(root->right));
}

int main(){
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    DisplayTree(a);
    cout<<endl;
    cout<<"The sum of Tree is: "<<sum(a);
    cout<<endl;
    cout<<"The size of Tree is: "<<size(a);
    cout<<endl;
    cout<<"The max of Tree is: "<<maximum(a);
    cout<<endl;
    cout<<"The Product of Tree is: "<<product(a);
    cout<<endl;
    cout<<"The Levels of Tree is: "<<levels(a);


}
