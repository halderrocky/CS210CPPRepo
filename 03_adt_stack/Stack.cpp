// TASK 03 -- The Stack ADT's implementation
//
// This is where "how" lives. We chose std::vector as the backing
// storage: push_back is our push, back() is our top, pop_back() is our
// pop. A student could rewrite this whole file to use a raw fixed-size
// array instead, and as long as push/pop/top/isEmpty/size still behave
// the same way, nothing calling this class would ever notice.

#include "Stack.h"

#include <iostream>
#include <ostream>

#define MAX_SIZE 100

Stack::Stack() {
    topIndex = -1;
}

void Stack::push(int value) {
    // TODO: add value to the top of data_ (vector has a method for this)

    if (!isFull()) {
        topIndex++;
        data[topIndex] = value;
    }
    //TODO: What happens if user calls push() while stack is full?
    else {
        std::cout << "push() called while stack is full! " << std::endl;
        exit(0);
    }

}

int Stack::pop() {
    // TODO: if data_ isn't empty, remove the top element
    int top;
    if (!isEmpty()) {
        top = data[topIndex];
        topIndex--;
        return top;
    }
    // TODO: What happens if user calls pop() while stack is empty?
    else {
        std::cout << "pop() called while stack is empty! " << std::endl;
        exit(1);
    }
    
}

int Stack::peek() const {
    if (!isEmpty()) {
        return data[topIndex];
    }
    else {
        std::cout << "peek() called while stack is empty! " << std::endl;
        exit(1);
    }
}

int Stack::top() const {
    // TODO: return the top element of data_
    // undefined if empty -- callers should check isEmpty() first. We'll
    // harden this kind of thing later in the course.
    if (!isEmpty()) {
        return data[topIndex];
    } else {
        std::cout << "top() called while stack is empty!" << std::endl;
        exit(0);
    }
}

bool Stack::isEmpty() const {
    // TODO: return whether data_ has zero elements

    if (topIndex == -1) {
        return true;
    }
    return false;
}

bool Stack::isFull() const {

    if (topIndex == MAX_SIZE - 1) {
        return true;
    }
    return false;
}

int Stack::size() const {
    // TODO: return how many elements are in data_ (cast to int)
    return topIndex + 1;
}
