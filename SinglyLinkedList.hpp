
#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include "SinglyLinkedListNode.hpp"

template<typename T>
class SinglyLinkedList
{
    public:
        SinglyLinkedList();

        ~SinglyLinkedList(){}

    private:
        SinglyLinkedListNode<T>* head;
        SinglyLinkedListNode<T>* tail;
};

#include "SinglyLinkedList.cpp" // Templates....

#endif // SINGLY_LINKED_LIST_H