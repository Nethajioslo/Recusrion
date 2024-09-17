#include <iostream>
#define STACK_SIZE 4096
#define SIZE sizeof(int)

class stack
{
private:
    int *ptr;
    int size;

public:
    stack();
    ~stack();
    void fill_stack(int data);
    bool is_stack_full();
    void empty_stack();
    void display_stack();
    bool is_empty();
};

stack::stack()
{
    ptr = new int[STACK_SIZE / SIZE];
    size = 0;
}

stack::~stack()
{
    delete[] ptr;
}
bool stack::is_stack_full()
{
    return size == STACK_SIZE - 1;
}
void stack::fill_stack(int data)
{
    if (is_stack_full())
    {
        std::cout << "Stack is full" << std::endl;
        return;
    }
    ptr[size] = data;
    size = size + SIZE;
}
void stack::empty_stack()
{
    // Just making Zero on stack
    ptr[size] = 0;
    size = size - SIZE;
}
bool stack::is_empty()
{
    return size == 0;
}
void stack::display_stack()
{
    if (is_empty())
    {
        std::cout << "Stack is empty" << std::endl;
        return;
    }
    for (int i = 0; i < size; i = i + SIZE)
    {
        std::cout << " " << ptr[i];
    }
    std::cout << std::endl;
}
int main()
{
    stack ops;
    ops.display_stack();
    ops.fill_stack(45);
    ops.fill_stack(45);
    ops.fill_stack(45);
    ops.fill_stack(45);
    ops.fill_stack(590);
    ops.fill_stack(45);
    ops.display_stack();
    ops.empty_stack();
    ops.display_stack();
}
