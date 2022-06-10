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

int findIntersection(Node *firstHead, Node *secondHead)
{
    // Write your code here
    int n = 0, m = 0;
    Node *f = firstHead;
    Node *s = secondHead;
    while (f != NULL)
    {
        n++;
        f = f->next;
    }
    while (s != NULL)
    {
        m++;
        s = s->next;
    }
    //     cout << n << " " << m <<"\n";
    if (n > m)
    {
        while (n != m)
        {
            firstHead = firstHead->next;
            n--;
        }
    }
    else
    {
        while (n != m)
        {
            secondHead = secondHead->next;
            m--;
        }
    }
    while (firstHead && secondHead)
    {
        if (firstHead == secondHead)
            return firstHead->data;
        firstHead = firstHead->next;
        secondHead = secondHead->next;
    }
    return -1;
}