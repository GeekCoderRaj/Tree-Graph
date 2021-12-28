#include<iostream>
using namespace std;
struct node{
  int data;
  node* left;
  node* right; 
};
node* newnode(int data){
    node* element = new node();
    element->data=data;
    element->left=NULL;
    element->right=NULL;

    return element;
}
// Another way of using name as struct6
// node* newnode(int data){
//     node* node = new struct node();
//     node->data=data;
//     node->left=NULL;
//     node->right=NULL;

//     return node;
// }
int main(){

    node* root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
       
    return 0;
}