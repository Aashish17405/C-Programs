#include <iostream>
using namespace std;

class BinaryTree
{
public:
    int a[20];
    int top;

    BinaryTree(int root)
    {
        a[0] = root;
        top = 0;
    }

    void setLeft(int rootIndex, int element)
    {
        a[(rootIndex * 2) + 1] = element;
        top += 1;
    }

    void setRight(int rootIndex, int element)
    {
        a[(rootIndex * 2) + 2] = element;
        top += 1;
    }

    int size()
    {
        return top + 1;
    }

    int getParentIndex(int childIndex)
    {
        return (childIndex - 1) / 2;
    }
    int getleftelement(int rootindex){
        return  a[(rootIndex * 2) + 1]
    }
    int getrightelement(int rootindex){
        return a[(rootindex * 2)+2]
    }
    int delete(){
        while(i<top){
            int i=0;
            int left=(2*i)+1;
            int right=(2*i)+2;
            if(a[right]>a[left]){
                a[i]=a[left];
                i=left;
            }
            else{
                a[i]=a[right];
                i=right;
            }
        }
    }
    void printTree()
    {
        for (int i = 0; i < 7; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    void heapifyUpMaxHeap(int index)
    {
        while (index > 0)
        {
            int parentIndex = getParentIndex(index);
            if (a[index] <= a[parentIndex])
            {
                break; 
            }

            swap(a[index], a[parentIndex]);
            index = parentIndex;
        }
    }

    void heapifyUpMinHeap(int index)
    {
        while (index > 0)
        {
            int parentIndex = getParentIndex(index);
            if (a[index] >= a[parentIndex])
            {
                break; 
            }

            swap(a[index], a[parentIndex]);
            index = parentIndex;
        }
    }

    void insertMaxHeap(int element)
    {
        int index = top + 1;
        a[index] = element;
        top += 1;
        heapifyUpMaxHeap(index);
    }

    void insertMinHeap(int element)
    {
        int index = top + 1;
        a[index] = element;
        top += 1;
        heapifyUpMinHeap(index);
    }
};

int main()
{
    BinaryTree *maxHeapTree = new BinaryTree(45);
    maxHeapTree->insertMaxHeap(47);
    maxHeapTree->insertMaxHeap(40);
    maxHeapTree->insertMaxHeap(23);
    maxHeapTree->insertMaxHeap(16);
    maxHeapTree->insertMaxHeap(22);
    maxHeapTree->insertMaxHeap(30);

    cout << "Max Heap: ";
    maxHeapTree->printTree();

    cout << "Size of Max Heap: " << maxHeapTree->size() << endl;
    cout << "Parent Index for index 3 in Max Heap: " << maxHeapTree->getParentIndex(3) << endl;

    return 0;
}