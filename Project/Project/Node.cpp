#include "Node.h"

template <class T>
Node<T>::Node(T val) : value(val), next(nullptr), left(nullptr), right(nullptr)
{
}
