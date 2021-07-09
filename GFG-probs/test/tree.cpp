#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
vector< vector<int>>temp;
typedef struct node{
    int data;
    node* left;
    node *right;
}node;

node* new_node(int val){
    node* temp = (node*)malloc(sizeof(node));
    temp->data = val;
    temp->left = temp->right= NULL;
    return temp;
}

void insert_util(node* root, int val){
    if(root->data > val){
        if(!root->left)
            root->left = new_node(val);
        else
            insert_util(root->left, val);
    }
    else{
        if(!root->right)
            root->right = new_node(val);
        else
            insert_util(root->right, val);
    }
}

node* insert(node* root, int val){
    if(root==NULL){
        return new_node(val);
    }
    insert_util(root, val);
    return root;
}

void inorder(node* root){
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int height(node *root)
{
    if(root==NULL) return 0;
    return max( height(root->left),height(root->right) )+1;
}
void print_lvl ( node* root,int H)
{
    if(root ==NULL) return;
    else if(H==1) return ans.push_back(root->data);
    else
    {
        print_lvl(root->left,H-1);
        print_lvl(root->right,H-1);
    }
}

void left_child(node* root)
{
    node* n = root;

    queue<node *> q;
    q.push(n);
    do
    {
        int c =  q.size();
        for(int i=0;i<c;i++)
        {
            n = q.front();
            if(i==0) ans.push_back(n->data);
            
            q.pop();
            if(n->left) q.push(n->left);
            if(n->right) q.push(n->right);
        }
    } while (!q.empty());
    
}


vector<int> leftR(node* root)
{
    int h = height(root);
    
    vector <int> x;
    if(!root) return x;
    for (int i = 1; i <= h; i++)
    {
        print_lvl(root,i);
        x.push_back(ans[0]);
        ans = vector<int>();
    }
    return x;
}


void lvl (node *root)
{
    int h = height(root);
    cout<<"height:"<<h<<endl;
    for(int i=1;i<=h;i++)
    {
        print_lvl(root,i);
        temp.push_back(ans);
        ans = vector<int>();
    }
    return;
}
int maxx = 0;
void leftR_optimal(node* root,int lvl)
{
    if(!root) return;
    if(maxx<lvl)
    {
        ans.push_back(root->data); maxx = lvl;
    }
    leftR_optimal(root->left,lvl+1);
    leftR_optimal(root->right,lvl+1);

}

void ques(node *root)
{

    return;
}


int main(){
    node* root=NULL;
    vector <int> tree_input {10,8,9,7,12,11,13};
    for(auto x:tree_input)
    {
        root = insert(root, x);
    
    }

    ans = vector<int>();
    lca(root,1);
    for(auto i:ans) 
    {
        cout<<i<<" ";
    }
    ans = vector<int>();
    cout<<endl;

}