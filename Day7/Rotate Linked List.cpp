#include <bits/stdc++.h>
/********************************

    Following is the class structure of the Node class:

    class Node
    {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
    };

********************************/

Node *rotate(Node *head, int k)
{
    int cnt = 0;
    Node *h = head;
    while (h)
        cnt++, h = h->next;
    k %= cnt;
    h = head;
    while (h && k--)
        h = h->next;
    Node *h1 = head;
    while (h->next)
        h1 = h1->next, h = h->next;

    h->next = head;
    head = h1->next;
    h1->next = NULL;
    return head;
}