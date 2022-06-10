#include <bits/stdc++.h>
/****************************************************************

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

*****************************************************************/

Node *firstNode(Node *head)
{
    if (!head)
        return head;
    Node *f = head;
    Node *s = head;
    while (f && f->next)
    {
        s = s->next;
        f = f->next->next;
        if (s == f)
            break;
    }
    if (!f || !s || !f->next)
    {
        //         cout << "Hi";
        return NULL;
    }
    s = head;
    int idx = 0;
    while (s != f)
    {
        idx++;
        s = s->next, f = f->next;
    }
    return s;
}