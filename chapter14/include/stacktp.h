#ifndef STACKTP_H_
#define STACKTP_H_

template <class StackType>
class Stack{
private:
    enum {MAX = 10};
    StackType items[MAX];
    int top;

public:
    Stack();
    bool isempty();
    bool isfull();
    bool push(const StackType &item);
    bool pop(StackType &item);
};

template <class StackType>
Stack<StackType>::Stack(){
    top = 0;
}

template <class StackType>
bool Stack<StackType>::isempty(){
    return top == 0;
}

template <class StackType>
bool Stack<StackType>::isfull(){
    return top == MAX;
}

template <class StackType>
bool Stack<StackType>::push(const StackType &item){
    if (top < MAX){
        items[top++] = item;
        return true;
    }
    else
        return false;
}

template <class StackType>
bool Stack<StackType>::pop(StackType &item){
    if (top > 0){
        item = items[top--];
        return true;
    }
    else
        return false;
}


#endif