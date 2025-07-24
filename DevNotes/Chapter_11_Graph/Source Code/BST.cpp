#include <iostream>

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr){};
};

class BinarySearchTree
{
    private: 
        Node* root;

    public:
        BinarySearchTree()
        {
            root = nullptr;
        }

        Node* insert(Node* root, int value)
        {
            if(root == nullptr)
            {
                return new Node(value);
            }

            if(value < root->data)
            {
                root->left = insert(root->left, value);
            }
            else if(value > root->data)
            {
                root->right = insert(root->right,value);
            }
            
            return root;
        }
};