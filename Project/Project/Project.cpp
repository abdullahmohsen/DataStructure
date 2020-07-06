#include <iostream>
#include <string>
#include "Stack.h"
#include "Stack.cpp"
#include "Queue.h"
#include "Queue.cpp"
//#include "LinkedList.h"
//#include "LinkedList.cpp"
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
    
    Stack<int> st;
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
    cout << endl;
    
    //Loop to print and pop all values in the stack
    while (st.empty() == false)
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
    cout << q.front() << endl;
    return 0;
}
