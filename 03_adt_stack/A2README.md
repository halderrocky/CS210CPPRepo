## Reflection Questions

1. **What value does topIndex hold immediately after construction, and why does that specific value make isEmpty() return the right answer with no special-casing?**
* The value that topIndex holds immediately after construction is -1. The array has indices from 0 to 99, and every index has one stack element. If topIndex were -1, 
then this becomes an invalid index, and there is no top element. Therefore, isEmpty checks if topIndex is -1 to determine the emptiness of the stack.
2. **Walk through push step by step, in words: what happens to data and topIndex, in what order, and why would swapping that order break the stack?**
* At first, topIndex increases by one, and then that data gets written. Now, the new value gets written as data[topIndex]. Initially, topIndex is -1, which is an empty 
stack, but after ‘topIndex++’, topIndex becomes 0 and it stores a value contained in data[0]. If I were to swap topIndex++ and data[topIndex], then the program would try 
data[-1] before the topIndex would change from -1 to 0, where the program will throw bizarre values after running it, which breaks the stack.
3. **Give the time complexity of push, pop, peek, isEmpty, isFull, and size, individually, in Big-O. For each one, justify it by describing what your code actually does, not by naming the general rule for stacks.**
* isEmpty(): O(1) -> Using the if statement, the program checks if topIndex is -1, and if the program discovers that the stack is empty, it returns true 
and terminates to prevent the program from returning values below the valid index. It compares topIndex to -1 only one time, so the time complexity is O(1).
* isFull(): O(1) -> The program checks if the topIndex met the maximum size of the stack, using the if statement MAX_SIZE - 1 to determine if the stack’s full. 
If the program discovers the overflow of indices, it returns true before the program returns values beyond the valid indices. It compares topIndex to MAX_SIZE - 1 only one time, 
so the time complexity is O(1).
* pop: O(1) -> When the stack isn’t empty, the program checks the stack using the isEmpty. If it is empty, or if topIndex is -1, then the program prints that the stack’s empty. 
The time complexity is still O(1) because it doesn’t matter how many times are in the stack. We are not iterating through anything, we are just checking the top element.
* push: O(1) -> When the stack isn’t full, the program checks the stack using the isFull. If the stack is full, then the else branch gets triggered, so the program
  prints that the stack’s full. Since it doesn't matter how many items are in the stack, and the stack only concentrates on the top value first, the operations happen
  a constant number of times, so the time complexity is O(1).
* peek: O(1) -> When the program is peeking, it is checking for the specific value without adding or removing any values. 
The time complexity is still O(1) because we can have multiple elements, but still, we aren’t iterating through anything.
* size: O(1) -> The program checks the value for topIndex and adds one. It returns the number of elements in the data. No matter how many values are pushed or how large 
the stack is, the value is picked in the toppest stack, so the runtime is constant.
4. **Exactly what happens in your code when push is called while the stack is full? State what prints (if anything), what gets returned (if anything), and whether topIndex changes. Then say why you chose that behavior.**
* If push is called while the stack’s full, the isFull returns true. Therefore, the program prints “push() called while stack is full!” and terminates. Since the return type is void, then push() doesn’t return a value, but it 
receives an integer. When the program proves that the stack is full, then topIndex doesn’t execute any further after 99, so topIndex doesn’t change. I chose that behavior because if push() still increments topIndex and writes another 
value when the stack’s full, then it’ll potentially output bizarre values because everything after data[99] are not valid array indices.
5. **Exactly what happens when pop or peek is called while the stack is empty? Same level of detail as above.**
* If pop is called while the stack’s empty, then isEmpty returns as true, and therefore, the else branch executes and prints “pop() called while stack is empty!” The same thing happens if peek is called, then isEmpty still returns true and prints 
“peek() called while stack is empty!” After attempting to pop or peek on an empty stack, the topIndex doesn’t change and remains -1, which prevents topIndex from executing below that value. Somehow, if pop were to continue executing below -1, it becomes 
problematic because -1 yet is outside one of the valid array indices.
6. **Your array is fixed at 100 slots. If a caller needed more room than that, what would have to change in your class to support it, and what would it likely cost in terms of the time complexity you gave in question 3?**
* If I ever had to class in my class to support it, I would tweak the define statement by inputting a value larger than a 100. The time complexity would not change and still remain constant, because the stack can hold an 
indefinite amount of elements yet if the program were to pick a value in a specific element, it picks the top value of the stack.
7. **Without looking anything up: if this stack were built on a linked list instead of an array, name one advantage and one disadvantage that trade-off would bring, based on what you already know about how arrays and pointers behave differently.**
* One disadvantage about that trade-off is that when working with linked lists, a linked-list node has to store both a value and a pointer to another node, where the program would take longer to run and use a lot of memory. However, one advantage is that 
I can keep adding the nodes or elements in a linked list without worrying about the max, whereas an array contains a limited number of elements.