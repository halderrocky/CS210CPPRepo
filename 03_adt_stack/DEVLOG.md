# Entry #1

* Date: 9/11/2026
* What I worked on: Tweaking the constructor function
* Decision made: I initialized the TopIndex with -1 rather than 0.
* Why: Initially, I set TopIndex to 0. After I went through the slides,
I realized that TopIndex should start at -1 to indicate an empty stack. 
In isEmpty(), I changed the condition from topIndex == 0 to topIndex == -1.
In the isFull() condition, topIndex == MAX_SIZE; I changed MAX_SIZE to MAX_SIZE - 1.
* What I would do differently:

# Entry #2

* Date: 9/11/2026
* What I worked on: Tweaking the push() function.
* Decision made: I swapped the steps so that the function can increment
  topIndex first before adding an element. After that, I added an if
  statement to check if the stack is full.
* Why: If the stack is full and if I push an element to it, it is out of the normal bounds.
* What I would do differently: 

# Entry #3

* Date: 9/11/2026
* What I worked on: Full/empty behavior in push(). pop(), and peek()
* Decision made: I added the print statements that specifies the called function which
the stack is full or empty. Then, I exited the program with error 'exit(1)'
* Why: It's hard to return a regular integer that is a "sentinel value"
* What I would do differently: