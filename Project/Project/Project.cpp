#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

int main()
{
    LinkedList list;
    list.append(7);
    list.append(1);
    list.append(9);
    list.insert(2, 8);
    list.print();

    return 0;
}
