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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
{
    LinkedListNode<int> *h = head;
    LinkedListNode<int> *prev = NULL;
    while (h != NULL)
    {
        LinkedListNode<int> *curr = h;
        h = h->next;
        curr->next = prev;
        prev = curr;
    }
    return prev;
}