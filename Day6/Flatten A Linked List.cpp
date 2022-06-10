#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

class Node {
public:
    int data;
    Node* next;
    Node* child;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->child = NULL;
    }
};

*****************************************************************/

Node *flattenLinkedList(Node *head)
{
    vector<int> v;
    Node *h = NULL;
    Node *ptr = NULL;
    while (head)
    {
        Node *child = head->child;
        v.push_back(head->data);
        while (child)
        {
            v.push_back(child->data);
            child = child->child;
        }
        head = head->next;
    }
    sort(v.begin(), v.end());
    for (int i : v)
    {
        if (!h)
            h = new Node(i), ptr = h;
        else
            ptr->child = new Node(i), ptr = ptr->child;
    }
    return h;
}
