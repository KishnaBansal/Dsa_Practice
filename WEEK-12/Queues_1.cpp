#include<iostream>
#include<queue>
#include<deque>
using namespace std;


// int main() {
//     //Creation
//     queue<int>q;

//     //Inserting
//     q.push(10);
//     //Size of the queue
//     cout<<"Size of queue: "<<q.size()<<endl;
//     //Queue is empty or not
//     if(q.empty()) {
//         cout<<"queue is empty"<<endl;
//     }
//     else {
//         cout<<"queue is not empty"<<endl;
//     }
//     //Remove
//     q.pop();

//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     cout<<"Front element of queue is: "<<q.front()<<endl;
//     cout<<"Rear element of queue is: "<<q.back()<<endl;

//     return 0;
// }


// class Queue{
//     public:
//         int *arr;
//         int size;
//         int front;
//         int rear;

//         Queue(int size){
//             arr = new int[size];
//             this -> size = size;
//             front = -1;
//             rear = -1;
//         }
//         void push(int data) {
//             //Check overflow
//             if(rear == size-1) {
//                 cout<<"Overflow\n";
//                 return ;
//             } 
//             //Queue is empty
//             else if(front == -1 && rear == -1) {
//                 front++;rear++;
//                 arr[rear] = data;
//             }
//             //Normal Case
//             else {
//                 rear++;
//                 arr[rear] = data;
//             }
//         }

//         void pop() {
//             //check underflow
//             if(front==-1 && rear==-1) {
//                 cout<<"Underflow\n";
//             }
//             //Single element
//             else if(front == rear) {
//                 arr[front] = -1;
//                 front = -1;
//                 rear = -1;
//             }
//             //normal case
//             else {
//                 arr[front] = -1;
//                 front++;
//             }
//         }

//         bool isEmpty() {
//             if(front==-1 && rear==-1) {
//                 return true;
//             }
//             else {
//                 return false;
//             }
//         }

//         int getSize() {
//             //ATTENTION!!!
//             if(front==-1 && rear==-1) {
//                 return 0;
//             }
//            return rear-front+1; 
//         }

//         int getFront() {
//             if(front==-1) {
//                 cout<<"Queue is empty\n";
//                 return 0;
//             }
//             else {
//                 return arr[front];
//             }
//         }

//         int getRear() {
//             if(front==-1 && rear==-1) {
//                 cout<<"Queue is empty\n";
//                 return -1;
//             }
//             else {
//                 return arr[rear];
//             }
//         }

//         void print() {
//             for(int i=0;i<size;i++) {
//                 cout<<arr[i]<<" ";
//             }
//             cout<<endl;
//         }
// };

// int main() {
//     Queue q(5);
//     q.print();
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     q.print();
//     cout<<"Size: "<<q.getSize()<<endl;
//     q.pop();
//     q.print();
//     cout<<"Size: "<<q.getSize()<<endl;
//     // q.push(10);
//     cout<<q.getFront()<<endl;
//     cout<<q.getRear()<<endl;
//     q.pop();
//     q.pop();
//     q.pop();
//     cout<<q.getRear()<<endl;
//     q.pop();
//     cout<<q.getRear()<<endl;
//     q.print();

//     cout<<"Size: "<<q.getSize()<<endl;
// }


//Circular Queue


// class Cqueue{
//     int *arr;
//     int front;
//     int size;
//     int rear;
//     public:
//         Cqueue(int size) {
//             arr = new int[size];
//             this -> size = size;
//             front = -1;
//             rear = -1;
//         }

//         void push(int data) {
//             //Overflow
//             if((front==0 && rear==size-1) || rear == front-1) {
//                 cout<<"Overflow\n";
//             }
//             //Empty
//             else if(front==-1 && rear==-1) {
//                 front++;
//                 rear++;
//                 arr[rear] = data;
//             }
//             //Circular
//             else if(rear == size-1 && front != 0) {
//                 rear = 0;
//                 arr[rear] = data;
//             }
//             //Normal
//             else {
//                 rear++;
//                 arr[rear] = data;
//             }
//         }

//         void pop() {
//             //Underflow
//             if(front==-1 && rear==-1) {
//                 cout<<"Underflow\n";
//             }
//             //Single element
//             else if(front==rear) {
//                 arr[front] = -1;
//                 front = -1;
//                 rear = -1;
//             }
//             //Circular
//             else if(front==size-1) {
//                 arr[front] = -1;
//                 front = 0;
//             }
//             //Normal
//             else {
//                 arr[front] = -1;
//                 front++;
//             }
//         }

//         void print() {
//             for(int i=0;i<size;i++) {
//                 cout<<arr[i]<<" ";
//             }
//             cout<<endl;
//         }
// };

// int main() {
//     Cqueue q(5);
//     q.print();

//     q.push(10);
//     q.print();
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.print();
//     q.push(60);
//     q.pop();
//     q.pop();
//     q.pop();
//     q.print();
//     q.push(100);
//     q.print();
//     q.push(110);
//     q.print();
//     q.push(120);
//     q.print();
//     q.push(130);
//     q.print();
// }


//Doubly ended Queue

// int main() {
//     //creation
//     deque<int>dq;
//     dq.push_back(10);
//     dq.push_front(20);
//     dq.pop_back();
//     cout<<dq.front()<<endl;
//     cout<<dq.back()<<endl;
//     cout<<dq.size()<<endl;

// }


//Using arrays

class Deque{
    int *arr;
    int size;
    int front;
    int rear; 
    public:
        Deque(int size) {
            arr = new int[size];
            this -> size = size;
            front = -1;
            rear = -1;
        }
        void pushBack(int data) {
            //Overflow
            if((front==0 && rear==size-1) || rear == front-1) {
                cout<<"Overflow\n";
            }
            //Empty
            else if(front==-1 && rear==-1) {
                front++;
                rear++;
                arr[rear] = data;
            }
            //Circular
            else if(rear == size-1 && front != 0) {
                rear = 0;
                arr[rear] = data;
            }
            //Normal
            else {
                rear++;
                arr[rear] = data;
            }
        }

        void pushFront(int data) {
            //Overflow
            if((front==0 && rear==size-1) || rear == front-1) {
                cout<<"Overflow\n";
            }
            //Single
            else if(front==-1 && rear==-1) {
                front++;
                rear++;
                arr[front] = data;
            }
            //Circular
            else if(front == 0 && rear != size-1) {
                front = size-1;
                arr[front] = data;
            }
            //Normal
            else {
                front--;
                arr[front] = data;
            }
        }

        void popFront() {
            //Underflow
            if(front==-1 && rear==-1) {
                cout<<"Underflow\n";
            }
            //Single element
            else if(front==rear) {
                arr[front] = -1;
                front = -1;
                rear = -1;
            }
            //Circular
            else if(front==size-1) {
                arr[front] = -1;
                front = 0;
            }
            //Normal
            else {
                arr[front] = -1;
                front++;
            }
        }

        void popBack() {
            //Underflow
            if(front==-1 && rear==-1) {
                cout<<"Underflow\n";
            }
            //Single
            else if(front==rear) {
                arr[rear] = -1;
                front=-1;
                rear=-1;
            }
            //Circular
            else if(rear == 0) {
                arr[rear] = -1;
                rear = size-1;
            }
            //Normal
            else {
                arr[rear] = -1;
                rear--;
            }
        }
};

int main() {

}