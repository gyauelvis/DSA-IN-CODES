template <typename type>
class Node
{
public:
    type data;
    Node<type> *left;
    Node<type> *right;
    Node() : data(NULL), left(NULL), right(NULL){};
};

template <typename type>
class Tree
{
private:
    Node<type> *root;

public:
    Tree() : root(NULL){};
    Node *find(type key)
    {
        Node<type> *currentNode = root;
        if (key == currentNode->data)
            return root;
        else
        {
            while (currentNode->data != key)
            {
                if (currentNode == NULL)
                    return NULL;
                if (key < currentNode->data)
                    currentNode = currentNode->left;
                else
                    currentNode = currentNode->right;
            }
        }
        return currentNode;
    }
    void insert(type data)
    {
        Node<type> *new_node = new Node<type>();
        Node<type> *prevNode = NULL;
        new_node->data = data;

        Node<type> *currentNode = root;
        if (currentNode == NULL)
            root = new_node;
        else
        {
            while (currentNode != NULL)
            {
                prevNode = currentNode;
                if (data < currentNode->data)
                    currentNode = currentNode->left;
                else
                    currentNode = currentNode->right;
            }
            if (data < prevNode->data)
                prevNode->left = new_node;
            else
                prevNode->right = new_node;
        }
    }
    
};