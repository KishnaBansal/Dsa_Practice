#include<iostream>
#include<queue>
#include<deque>
using namespace std;

//Queues using arrays

// class Queue {
//     int *arr;
//     int front;
//     int rear;
//     int size;
//     public:
//         Queue(int size) {
//             arr = new int[size];
//             this -> size = size;
//             front = -1;
//             rear = -1;
//         }
//         void push(int data) {
//             //Overflow
//             if(rear == size-1) {
//                 cout<<"Overflow\n";
//             }
//             //Single element
//             else if(front == -1 && rear == -1) {
//                 front++;
//                 rear++;
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
//             if(front==-1 && rear == -1) {
//                 cout<<"Underflow\n";
//             }
//             //Single element
//             else if(front == rear) {
//                 arr[front] = -1;
//                 front = -1;
//                 rear = -1;
//             }
//             //Normal
//             else {
//                 arr[front] = -1;
//                 front++;
//             }
//         }
//         bool isEmpty() {
//             if(front==-1 && rear==-1) {
//                 return true;
//             }
//             return false;
//         }
//         int getSize() {
//             //Empty
//             if(front == -1 && rear==-1) {
//                 return 0;
//             }
//             return rear - front + 1;
//         }
//         int getFront() {
//             return arr[front];
//         }
//         int getRear() {
//             return arr[rear];
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
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.print();
//     q.push(60);
//     q.pop();
//     q.print();
//     q.pop();
//     q.print();
//     // q.pop();
//     // q.print();
//     // q.pop();
//     // q.print();
//     // q.pop();
//     // q.print();
//     // q.pop();
//     q.print();
//     cout<<q.isEmpty()<<endl;
//     cout<<q.getFront()<<endl;
//     cout<<q.getRear()<<endl;
//     cout<<q.getSize()<<endl;

// }




// class Cqueue {
//     int *arr;
//     int front;
//     int rear;
//     int size;
//     public:
//         Cqueue(int size) {
//             arr = new int[size];
//             this -> size = size;
//             front = -1;
//             rear = -1;
//         }
//         void push(int data) {
//             //Overflow
//             if(front == 0 && rear == size-1) {
//                 cout<<"Overflow\n";
//             }
//             //Single element
//             else if(front == -1 && rear == -1) {
//                 front++;
//                 rear++;
//                 arr[rear] = data;
//             }
//             //Circular
//             else if(front != 0 && rear == size-1) {
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
//             if(front==-1 && rear == -1) {
//                 cout<<"Underflow\n";
//             }
//             //Single element
//             else if(front == rear) {
//                 arr[front] = -1;
//                 front = -1;
//                 rear = -1;
//             }
//             //Circular
//             else if(front == size-1) {
//                 arr[front] = -1;
//                 front = 0;
//             }
//             //Normal
//             else {
//                 arr[front] = -1;
//                 front++;
//             }
//         }
//         bool isEmpty() {
//             if(front==-1 && rear==-1) {
//                 return true;
//             }
//             return false;
//         }
//         int getSize() {
//             //Empty
//             if(front == -1 && rear==-1) {
//                 return 0;
//             }
//             return rear - front + 1;
//         }
//         int getFront() {
//             return arr[front];
//         }
//         int getRear() {
//             return arr[rear];
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
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.print();
//     q.push(60);
//     q.pop();
//     q.print();
//     q.pop();
//     q.print();q.pop();
//     q.print();q.pop();
//     q.print();q.pop();
//     q.print();
//     q.pop();
//     q.print();
//     q.push(10);
//     q.print();
// }


class Dque {
    int *arr;
    int front;
    int rear;
    int size;
    public:
        Dque(int size) {
            arr = new int[size];
            this -> size = size;
            front = -1;
            rear = -1;
        }

        void pushRear(int data) {
            //Overflow
            if((front == 0 && rear == size-1) || rear == front-1) {
                cout<<"Overflow\n";
            }
            //Single element
            else if(front == -1 && rear == -1) {
                front++;
                rear++;
                arr[rear] = data;
            }
            //Circular
            else if(front != 0 && rear == size-1) {
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
            if((front == 0 && rear == size-1) || rear == front-1) {
                cout<<"Overflow\n";
            }
            //Single element
            else if(front == -1 && rear == -1) {
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
            if(front==-1 && rear == -1) {
                cout<<"Underflow\n";
            }
            //Single element
            else if(front == rear) {
                arr[front] = -1;
                front = -1;
                rear = -1;
            }
            //Circular
            else if(front == size-1) {
                arr[front] = -1;
                front = 0;
            }
            //Normal
            else {
                arr[front] = -1;
                front++;
            }
        }
        void popRear() {
            //Underflow
            if(front==-1 && rear == -1) {
                cout<<"Underflow\n";
            }
            //Single element
            else if(front == rear) {
                arr[rear] = -1;
                front = -1;
                rear = -1;
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
        void print() {
            for(int i=0;i<size;i++) {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};