template <typename T>
class Node
{
private:
    T data;
    Node<T> *nextNode;

public:
    Node(T new_data) : data(new_data){};
};

template <typename T>
class LinkedList
{
private:
    Node<T> *head;

public:
    LinkedList() : head(NULL){};
    bool isEmpty()
    {
        return head == NULL;
    }
    void insertFirst(T data)
    {
        Node<T> *new_node = new Node<T>(data);
        new_node->nextNode = head;
        head = new_node;
    }
    void removeFirst()
    {
        if (!isEmpty)
        {
            Node<T> *temp = head;
            head = temp->nextNode;
            delete temp;
        }
    }

    void displayAllNodes()
    {
        if (isEmpty)
            return;
        Node<T> *currentNode = head;
        do
        {
            cout << currentNode->data;
            currentNode = currentNode->nextNode;
        } while (currentNode != NULL);
    }
    Node<T> *find(T key)
    {
        if (isEmpty)
            return NULL;
        bool isFound = false;
        Node<T> *currentNode = head;

        while (!(key == currentNode->data))
        {
            currentNode = currentNode->nextNode;
            if (currentNode == NULL)
                return NULL;
        }
        return currentNode;
    };

    bool remove(T key)
    {
        if (isEmpty)
            return false;
        Node<T> *currentNode = head;
        Node<T> *previousNode = head;
        while (currentNode->data != key)
        {
            previousNode = currentNode;
            currentNode = currentNode->nextNode;
            if (currentNode == NULL)
                return false;
        }
        if (currentNode == head)
            head = head->nextNode;
        else
        {
            previousNode->nextNode = currentNode->nextNode;
            delete currentNode;
        }
        return true;
    }
};