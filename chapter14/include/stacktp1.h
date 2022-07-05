#ifndef STACKTP1_H_
#define STACKTP1_H_

template <typename StackType>
class Stack
{
private:
    enum
    {
        SIZE = 10
    };
    int stacksize;
    StackType *items;
    int top;

public:
    explicit Stack(int ss = SIZE);
    // 内联函数直接使用类头定义的模板
    Stack(const Stack &st);
    ~Stack() { delete[] items; }

    bool isempty() { return top == 0; }
    bool isfull() { return top == stacksize; }
    bool push(const StackType &item);
    bool pop(StackType &item);

    Stack &operator=(const Stack &st);
};

template <typename StackType>
Stack<StackType>::Stack(int ss) : stacksize(ss), top(0)
{
    items = new StackType[stacksize];
}

template <typename StackType>
Stack<StackType>::Stack(const Stack &st)
{
    stacksize = st.stacksize;
    top = st.top;
    items = new StackType[stacksize];
    for (int i = 0; i < top; i++)
        items[i] = st.items[i];
}

template <typename StackType>
bool Stack<StackType>::push(const StackType &item)
{
    if (top < stacksize)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

template <typename StackType>
bool Stack<StackType>::pop(StackType &item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false;
}

template <typename StackType>
Stack<StackType> &Stack<StackType>::operator=(const Stack &st){
    if (this == &st)
        return *this;
    stacksize = st.stacksize;
    top = st.top;
    delete[] items;
    items = new StackType[stacksize];
    for (int i = 0; i < top; i++)
        items[i] = st.items[i];
    return *this;
}

#endif