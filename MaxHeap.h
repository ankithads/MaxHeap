//header file for maxHeap
class MaxHeap
{
    int *arr;        // pointer to array of elements in heap
    int capacity;    // maximum possible size of min heap
    int size;        // Current number of elements in min heap
    
    int parent(int i);
    int left(int i);
    int right(int i);
    bool isLeaf(int i);
    void siftup(int i);
    void siftdown(int i);
public:
    class Overflow{};
    class Underflow{};
    MaxHeap(int capacity);
    int getSize();
    int getMax();
    void insert(int k);
    int extractMax();
    int removeAt(int i);
    void heapify(int *array, int len);
};
