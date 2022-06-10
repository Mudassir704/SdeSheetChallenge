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

bool isPalindrome(LinkedListNode<int> *head)
{
    if (!head || !head->next)
        return true;
    stack<int> st;
    auto h = head;
    while (h)
        st.push(h->data), h = h->next;
    while (head && !st.empty())
    {
        if (head->data != st.top())
            return false;
        st.pop();
        head = head->next;
    }
    return true;
}