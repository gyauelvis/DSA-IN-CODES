// Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

// Example 1:

// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]

// Example 2:

// Input: head = [1], n = 1
// Output: []

// Example 3:

// Input: head = [1,2], n = 1
// Output: [1]


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include <iostream>
using namespace std;

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int length = 1;
        int value = head->val;
        ListNode *node = head->next;
        while (node != nullptr)
        {
            length++;
            node = node->next;
        }
        int location = length - (n);
        if (length == 1)
            return head->next;
        else if (location == 0)
            return head->next;
        ListNode *nodeI = head;
        for (int i = 1; i < location; i++)
        {
            nodeI = nodeI->next;
        }
        ListNode *nodeII = nodeI->next;
        ListNode *nodeIII = nodeII->next;
        nodeI->next = nodeIII;
        cout << nodeI->val;
        return head;
    }
};

int main(){
    return 0;
}