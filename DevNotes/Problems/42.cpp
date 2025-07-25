#include <vector>
#include <iostream>

using namespace std;

class Node
{
    public:
        int val;
        Node* right, *left;
    
    Node(int key)
    {
        val = key;
        right = nullptr;
        left = nullptr;
    }
};

class BST
{
    private:
        Node* root;
    
        Node* insertNode(Node* node, int key)
        {
            if(node == nullptr)
            {
                return new Node(key);
            }

            if(key < node->val)
            {
                node->left = insertNode(node->left,key);
            }
            else
            {
                node->right = insertNode(node->right,key);
            }

            return node;
        }

        bool SearchNode(Node*node, int key)
        {
            if(node == nullptr)
            {
                return false;
            }

            if(key == node->val)
            {
                return true;
            }

            if(key < node->val)
            {
                return SearchNode(node->left,key);
            }
            else
            {
                return SearchNode(node->right,key);
            }
            
        }
    
    public:
        BST()
        {
            root = nullptr;
        }

        void insert(int key)
        {
            root = insertNode(root, key);
        }

        bool Search(int key)
        {
            return SearchNode(root, key);
        }

};

vector<bool> solution (vector<int> lst, vector<int> search_list)
{
    BST bst;
    vector<bool> result;

    for(auto c : lst)
    {
        bst.insert(c);
    }

    for(auto num : search_list)
    {
        result.push_back(bst.Search(num));
    }

    return result;
}

int main()
{
    vector<int> lst = {5,3,8,4,2,1,7,10};
    vector<int> search_list  = {1,2,5,6};

    vector<bool> result = solution(lst, search_list);

    for(auto b : result)
    {
        cout << b << endl;
    }

    return 0;
}

