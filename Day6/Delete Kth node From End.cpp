#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *removeKthNode(LinkedListNode<int> *head, int K)
{
    if (!head || K == 0)
        return head;
    LinkedListNode<int> *kth = head;
    while (K--)
    {
        kth = kth->next;
    }
    if (!kth)
        return head->next;
    LinkedListNode<int> *h = head;
    while (kth && (kth->next))
    {
        h = h->next;
        kth = kth->next;
    }
    //     cout << h->data << "\n";
    h->next = h->next->next;
    return head;
}