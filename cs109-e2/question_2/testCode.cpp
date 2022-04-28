#include "DynamicArray.h"

int main()
{
    LinkedList ll;

    int value = 8;
    int* operand = &value;

    LinkedList::Node node1;
    BufferedChange buff_change(operand, BufferedChange::DIV, 4);
    node1.bufferedChange = &buff_change;

    node1.bufferedChange->execute();

    int value2 = 5;
    int* operand2 = &value2;

    LinkedList::Node node2;
    BufferedChange buff_change2(operand2, BufferedChange::ADD, 4);
    node2.bufferedChange = &buff_change2;

    ll.appendTail(&node1);
    ll.appendTail(&node2);
    ll.print();
}