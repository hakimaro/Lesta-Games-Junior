#include <iostream>
#include "ListBuffer.h"
#include "VectorBuffer.h"

int main()
{
    int data[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(data) / sizeof(data[0]);
    cout << "Data to check: " << "{1, 2, 3, 4, 5}";
    cout << "\nList Buffer: \n";
    ListBuffer l_buffer;
    for (int i = 0; i < size; ++i) {
        l_buffer.put(i+1);
    }
    
    for (int i = 0; i < l_buffer.getSize(); ++i) {
        cout << l_buffer.get() << " ";
    }
    cout << "\nVector resizable buffer: \n";
    VectorBuffer<4, false> v_buffer1;
    for (int i = 0; i < size; ++i) {
        v_buffer1.put(i+1);
    }

    for (int i = 0; i < v_buffer1.getSize(); ++i) {
        cout << v_buffer1.get() << " ";
    }
    cout << "\nVector not resizable buffer: \n";
    VectorBuffer<4, true> v_buffer2;
    for (int i = 0; i < size; ++i) {
        v_buffer2.put(i+1);
    }

    for (int i = 0; i < v_buffer2.getSize(); ++i) {
        cout << v_buffer2.get() << " ";
    }
}