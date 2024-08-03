//Binary Tree using linked list
#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
class Tree{
    public:
    Node* root=NULL;
    Tree(int data){
        Node* n=new Node(data);
        root=n;
    }
    void levelOrderTraversal(){
        cout<<"Level Order traversal: "<<endl;
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            Node* temp=q.front();
            q.pop();
            if(temp==NULL){
                cout<<endl;
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                cout<<temp->data<<" ";
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
        }
    }
    void preorder(Node* root){ // L R N
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    void inorder(Node* root){// L N R
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    void postorder(Node* root){ // N L R
        if(root==NULL){
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
};
int main(){
    Tree b;
    Node* n1=new Node(10);
    Node* n2=new Node(20);
    Node* n3=new Node(30);
    Node* n4=new Node(40);
    Node* n5=new Node(50);
    Node* n6=new Node(60);
    Node* n7=new Node(70);
    n1->left=n2;
    n1->right=n3;
    n2->left=n4;
    n2->right=n5;
    n3->left=n6;
    n3->right=n7;
    cout<<"Tree creation succesful."<<endl;
    b.levelOrderTraversal();
    cout<<"Inorder traversal: ";
    b.inorder(n1);
    cout<<endl<<"Post order travesal: ";
    b.postorder(n1);
    cout<<endl<<"Preorder traversal: ";
    b.preorder(n1);
    return 0;
}

//Binary tree using array
#include<iostream>
using namespace std;
class BinaryTree
{
public:
    int *a;
    int top;

    BinaryTree(int size,int root)
    {
        a=new int[size];
        a[0]=root;
        top=0;
    }

    void setLeft(int rootIndex, int element)
    {
        a[(rootIndex * 2) + 1]=element;
        top +=1;
    }

    void setRight(int rootIndex, int element)
    {
        a[(rootIndex * 2) + 2]=element;
        top +=1;
    }

    int size()
    {
        return top + 1;
    }

    int getParentIndex(int childIndex)
    {
        if (childIndex % 2==0)
        {
            return (childIndex) / 2;
        }
        return (childIndex - 1) / 2;
    }

    void printTree()
    {
        for (int i=0; i<=top; i++)
        {
            cout<< a[i]<< " ";
        }
        cout<< endl;
    }

    void insert(int element)
    {
        int index=top + 1;
        int pi=getParentIndex(index);
        a[index]=element;
        while (index> 0)
        {
            int pi=getParentIndex(index);
            if (a[pi]< a[index])
            {
                swap(pi, index);
                index=pi;
            }
            else
            {
                break;
            }
        }
    }

    void swap(int a1, int b)
    {
        int temp=a[a1];
        a[a1]=a[b];
        a[b]=temp;
    }

    void heapifyDown(int i) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int largest = i;

        if (left <= top && a[left] > a[largest]) {
            largest = left;
        }

        if (right <= top && a[right] > a[largest]) {
            largest = right;
        }

        if (largest != i) {
            swap(a[i], a[largest]); 
            heapifyDown(largest);
        }
    }
    int deleteRoot()
    {
        if (top< 0)
        {
            cout<< "Heap is empty, cannot delete."<< endl;
            return -1;
        }
        int deletedValue=a[0];
        a[0]=a[top];
        top--;
        heapifyDown(0);
        return deletedValue;
    }
};

// int main()
// {
//     BinaryTree b(20,45);
//     b.setLeft(0, 34);
//     b.setRight(0, 40);
//     b.setLeft(1, 23);
//     b.setRight(1, 16);
//     b.setLeft(2, 22);
//     b.setRight(2, 30);

//     cout<< "Before inserting:"<< endl;
//     b.printTree();

//     b.insert(69);
//     cout<< "After inserting 69:"<< endl;
//     b.printTree();

//     cout<< "Deleted root: "<< b.deleteRoot()<< endl;
//     cout<< "After deleting root:"<< endl;
//     b.printTree();

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class ToDoList
// {
// public:
//     struct Task
//     {
//         string description;
//         int priority;
//     };
//     Task tasks[20];
//     int top;
//     ToDoList()
//     {
//         top=-1;
//     }
//     void addTask(string description, int priority)
//     {
//         if (top< 19)
//         {
//             top++;
//             tasks[top].description=description;
//             tasks[top].priority=priority;
//             heapifyUp(top);
//             cout<< "Task added: "<< description<< endl;
//         }
//         else
//         {
//             cout<< "Todo list is full. Cannot add more tasks."<< endl;
//         }
//     }

//     void heapifyUp(int i)
//     {
//         while (i> 0)
//         {
//             int parent=(i - 1) / 2;
//             if (tasks[i].priority> tasks[parent].priority)
//             {
//                 swap(i, parent);
//                 i=parent;
//             }
//             else
//             {
//                 break;
//             }
//         }
//     }

//     void swap(int a, int b)
//     {
//         Task temp=tasks[a];
//         tasks[a]=tasks[b];
//         tasks[b]=temp;
//     }

//     Task getHighestPriorityTask()
//     {
//         if (top>=0)
//         {
//             return tasks[0];
//         }
//         else
//         {
//             cout<< "Todo list is empty."<< endl;
//             Task emptyTask;
//             emptyTask.description="";
//             emptyTask.priority=-1;
//             return emptyTask;
//         }
//     }

//     Task removeHighestPriorityTask()
//     {
//         Task task=getHighestPriorityTask();
//         if (top>=0)
//         {
//             tasks[0]=tasks[top];
//             top--;
//             heapifyDown(0);
//         }

//         return task;
//     }

//     void heapifyDown(int i)
//     {
//         int left=2* i+1;
//         int right=2*i+2;
//         int highest=i;

//         if (left<=top && tasks[left].priority> tasks[highest].priority)
//         {
//             highest=left;
//         }

//         if (right<=top && tasks[right].priority> tasks[highest].priority)
//         {
//             highest=right;
//         }

//         if (highest !=i)
//         {
//             swap(i, highest);
//             heapifyDown(highest);
//         }
//     }

//     void printToDoList()
//     {
//         if (top>=0)
//         {
//             for (int i=0; i<=top; i++)
//             {
//                 cout<<tasks[i].description<<"--->"<< tasks[i].priority<< endl;
//             }
//         }
//         else
//         {
//             cout<< "Todo list is empty."<< endl;
//         }
//     }
// };

// int main()
// {
//     ToDoList todoList;

//     todoList.addTask("Complete homework", 2);
//     todoList.addTask("Buy groceries", 4);
//     todoList.addTask("Read a book", 3);
//     todoList.addTask("Call mom", 1);

//     cout<< "Current Todo List:"<< endl;
//     todoList.printToDoList();

//     ToDoList::Task nextTask=todoList.removeHighestPriorityTask();
//     cout<< "Removed Task: "<< nextTask.description<< endl;

//     cout<< "Updated Todo List:"<< endl;
//     todoList.printToDoList();

//     return 0;
// }