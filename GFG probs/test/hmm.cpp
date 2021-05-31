#include <bits/stdc++.h>
using namespace std;
struct node
{
    node *left;
    node *right;
    int data;
};
node* getnode(int value)
{
    node* neww = new node;
    neww->left = neww->right = NULL;
    neww->data = value;
    return neww;
}
node* insertnode(node *root,int val)
{
    if(!root) {cout<<getnode(val)->data; return getnode(val);}
    else
    {
        while(1)
        {
            
            if(root->data >= val )
                if(root->left)
                    root=root->left;
                else
                    { root->left = getnode(val); break;}
            else
                if(root->right)
                    root=root->right;
                else
                {
                    root->right = getnode(val); break;}
        }
    }
    return root;
}
void inorder(node* root)
{
    stack<node *> s;
    if(root == NULL) return;
    while(root && !s.empty())
    {
        while(root) s.push(root);
        root = s.top();
        cout<<root->data;
        s.pop();
        root = root->right;
    }

}
int main()
{
    node *root = new node;
    vector<int> x{9,18,23,4,6,8,2,15};
    
    root = insertnode(root,10);
    // for(auto i: x)
    //     insertnode(root,i);
    cout<<root->data;
    inorder(root);
    return 0;
}