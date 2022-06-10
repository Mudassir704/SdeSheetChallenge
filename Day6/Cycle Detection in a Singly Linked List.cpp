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

bool detectCycle(Node *head)
{
    Node *f = head;
    Node *s = head;
    while (f && f->next)
    {
        s = s->next;
        f = f->next->next;
        if (s == f)
            return true;
    }
    return false;
}