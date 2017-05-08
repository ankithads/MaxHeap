//this is the main function for maxHeap function
#include <iostream>
#include "MaxHeap.h"
using namespace std;

int main()
{
    MaxHeap h(11);
    h.insert(4);
    h.insert(7);
    h.insert(15);
    h.insert(10);
    h.insert(4);
    h.insert(45);
    h.removeAt(2);
    cout << h.extractMax() << " "<<endl;
    cout << h.getMax() << endl;
    
    int a[7] = {12, 3, 24, 5, 6, 7, 1};
    MaxHeap h2(7);
    h2.heapify(a, 7);
    cout << h2.extractMax() << " "<<endl;
    cout << h2.getMax() << " " << endl;
    return 0;
}
