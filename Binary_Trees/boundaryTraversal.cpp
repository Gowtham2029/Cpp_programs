#include<bits/stdc++.h>
using namespace std;

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

bool isLeaf(TreeNode<int>* root)
{
    return (!(root->left)&&!(root->right));
}

void leftBoundary(TreeNode<int>* root, vector<int> &res)
{
    TreeNode<int>*node = root->left;
    while(node){
        if(!isLeaf(node)){
            cout<<"LeftBoundary: "<<node->data<<endl;
        res.push_back(node->data);
       }
       if(node->left)node=node->left;
       else node = node->right;
    }
    
   
}

void RightBoundary(TreeNode<int>*root, vector<int> &res)
{
    vector<int>v;
    TreeNode<int>*node = root->right;
    while(node)
    {
        if(!isLeaf(node)){
            
            v.push_back(node->data);
        }
        if(node->right)node = node->right;
        else node=node->left;
    }
    for(int i=v.size()-1; i>=0; i--)
    {
        cout<<"Right boundary: "<<v[i]<<endl;
        res.push_back(v[i]);
    }

}

void LeafNodes(TreeNode<int>*root, vector<int>&res)
{
    if(isLeaf(root)){
        res.push_back(root->data);
        cout<<"leaf nodes: "<<root->data<<endl;
        return;
    }
    if(root->left)LeafNodes(root->left, res);
    if(root->right)LeafNodes(root->right, res);
}

vector<int> traverseBoundary(TreeNode<int> *root)
{
	// Write your code here.
    vector<int>res;
    if(!root)return res;
    if (!isLeaf(root)) {
        res.push_back(root->data);
       
    }
    leftBoundary(root, res);
    LeafNodes(root, res);
    RightBoundary(root, res);
    

    return res;

}

int main()
{
    TreeNode<int>*root = new TreeNode<int>(10);
    root->left = new TreeNode<int>(5);
    root->right = new TreeNode<int>(20);
    root->left->left = new TreeNode<int>(3);
    root->left->right = new TreeNode<int>(8);
    root->left->right->left = new TreeNode<int>(7);
    root->right->right = new TreeNode<int>(25);
    root->right->left = new TreeNode<int>(18);
    vector<int>res = traverseBoundary(root);
    for(int i=0; i<res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
    delete root;
    return 0;
}







