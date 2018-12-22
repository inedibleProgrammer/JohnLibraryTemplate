#ifndef SINGLY_LINKED_LIST_NODE_H
#define SINGLY_LINKED_LIST_NODE_H

#include "Node.hpp"

template<typename T>
class SinglyLinkedListNode : public Node<T>
{
    public:
        SinglyLinkedListNode(T data)
        : Node<T>(data)
        {
            this->next = nullptr;
        }

        ~SinglyLinkedListNode() override 
        {
            if(this->next != nullptr)
            {
                delete this->next;
            }
        }

    private:
        SinglyLinkedListNode* next;
};

#endif // SINGLY_LINKED_LIST_NODE_H