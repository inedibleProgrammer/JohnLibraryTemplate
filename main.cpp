#include <iostream>
#include <string>

#include "SinglyLinkedList.hpp"

int main(void)
{
    std::cout << "Beginning of main()\n\n\n";

    #if 0
    Node<std::string> node = Node<std::string>("HELLO!");
    std::cout << node.GetData();
    #endif

    #if 0
    SinglyLinkedListNode<std::string> node = SinglyLinkedListNode<std::string>("Test SinglyLinkedListNode");
    std::cout << node.GetData();
    #endif

    #if 1
    SinglyLinkedList<int> list = SinglyLinkedList<int>();
    #endif

    std::cout <<"\n\n\nEnd of main()\nPress any key to continue. . ." << std::endl;
    std::cin.get();
}