int main() // Enters main; its local variables typically use this function's stack frame.
{
    int x; // x is an automatic local variable, typically on the stack; its value is uninitialized.
    int *ptr1 = &x; // ptr1 itself is typically on the stack; it points to x, which is also typically on the stack.
    int *ptr2 = new int; // ptr2 itself is typically on the stack; the int it points to is dynamically allocated on the heap.
    int *ptr3 = new int; // ptr3 itself is typically on the stack; the int it points to is dynamically allocated on the heap.
    int *ptr4 = NULL; // ptr4 itself is typically on the stack; it points to no object.
    delete ptr2; // Frees the int allocated for ptr2; ptr2 remains on the stack but now holds a dangling pointer.
    delete ptr3; // Frees the int allocated for ptr3; ptr3 remains on the stack but now holds a dangling pointer.
} // Ends main; its automatic local variables' lifetimes end.