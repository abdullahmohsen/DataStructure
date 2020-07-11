#include <iostream>
#include <string>
//#include "Stack.h"
//#include "Stack.cpp"
//#include "Queue.h"
//#include "Queue.cpp"
//#include "LinkedList.h"
//#include "LinkedList.cpp"
#include "Vector.h"
#include "Vector.cpp"
#include "BST.h"
#include "BST.cpp"
using namespace std;

int main()
{
    /*LinkedList<int> list;
    list.append(7);
    list.append(1);
    list.append(9);
    list.insert(2, 8);
    list.removeAt(0);
    list.print();
    cout << endl;*/
    
    /*Stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.top() << endl;
    if (st.empty() == true)
    {
        cout << "Sales" << endl;
    }
    else
    {
        st.pop();
        cout << st.top() << endl;
    }
    cout << endl;*/
    
    //Loop to print and pop all values in the stack
    /*while (st.empty() == false)
    {
        cout << st.top() << endl;
        st.pop();
    }
    cout << endl;

    Queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;*/

    Vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(7);
    cout << v[0] << endl;
    v[0] = 100;
    cout << v[0] << endl;
    cout << v.back() << endl;
    v.pop_back();
    cout << v.back() << endl;

    BST<int> bst;
    bst.insert(5);
    bst.insert(4);
    bst.insert(3);
    bst.insert(7);
    bst.insert(6);
    if (bst.find(8))
    {
        cout << "Worng Answer" << endl;
    }
    else
    {
        cout << "Nice" << endl;
    }
    bst.insert(8);
    if (bst.find(8))
    {
        cout << "Nice" << endl;
    }
    else
    {
        cout << "Worng Answer" << endl;
    }
    bst.remove(8);
    if (bst.find(8))
    {
        cout << "Worng Answer" << endl;
    }
    else
    {
        cout << "Nice" << endl;
    }

    return 0;
}