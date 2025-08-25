//#include <iostream>
//using namespace std;
//
//class List {
//public:
//    virtual void insert(int value) = 0;
//    virtual void remove() = 0;   
//    virtual void display() = 0;  
//};
//
//class Stack : public List {
//    int arr[10];
//    int top;
//public:
//    Stack() { top = -1; }
//
//    void insert(int value) override {
//        arr[++top] = value;   
//    }
//
//    void remove() override {
//        top--; 
//    }
//
//    void display() override {
//        for (int i = 0; i <= top; i++) {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//};
//
//class Queue : public List {
//    int arr[10];
//    int front, rear;
//public:
//    Queue() { front = 0; rear = -1; }
//
//    void insert(int value) override {
//        arr[++rear] = value;
//    }
//
//    void remove() override {
//        front++;
//    }
//
//    void display() override {
//        for (int i = front; i <= rear; i++) {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    Stack s;
//    s.insert(1);
//    s.insert(2);
//    s.insert(3);
//    cout << "Стек: ";
//    s.display();
//    s.remove();
//    cout << "Стек після видалення: ";
//    s.display();
//
//    Queue q;
//    q.insert(10);
//    q.insert(20);
//    q.insert(30);
//    cout << "Черга: ";
//    q.display();
//    q.remove();
//    cout << "Черга після видалення: ";
//    q.display();
//
//    return 0;
//}
//
