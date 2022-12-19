#include <iostream>
using namespace std;

struct binary_tree_node{
    char data;
    binary_tree_node *leftNode;
    binary_tree_node *rightNode;
};

typedef struct binary_tree_node node;
node *root;
root = (node*)malloc(sizeof(node));
root->left = NULL;
root->right = NULL;

node *a;
a = (node*)malloc(sizeof(node));
a.data = 5;
node *b;
b = (node*)malloc(sizeof(node));
b.data = 4;
node *c;
c = (node*)malloc(sizeof(node));
c.data = 6;
a->left = b;
a->right = c;
