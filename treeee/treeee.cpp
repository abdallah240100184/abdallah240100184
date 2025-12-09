#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* left, * right;

    node(int value) {
        data = value;
        left = right = NULL;
    }

};
class BST {
public:
    node* root;
    BST() {
        root = NULL;
    }
    node* insert(node* r, int item)
    {
        node* newnode = new node(item);
        r = newnode;
    };
    else if (item < r->data) {
        r->left = insert(r->left, item);
    }
    else {
        r->right = insert(r->right, item);
        return r;
    }
    void insert(int item) {
        root = insert(root, item);
    };
    void preorder(node* r) {
        if (r == NULL)
            return;
        cout << r->data << " ";
        preorder(r->left);
        preorder(r->right);
    }
    void inorder(node* r) {
        if (r == NULL)
            return;
        inorder(r->left);
		cout << r->data << " ";
		inorder(r->right);
    };

    int main() {




        return 0;
    }
};