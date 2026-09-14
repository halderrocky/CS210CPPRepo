# Error 1

* Date: Thursday, 9/10/2026
* Error text:

> ====================[ Build | 03_adt_stack | Debug ]============================
C:\Users\rames\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe --build C:\Users\rames\CLionProjects\CS210CPPRepo\cmake-build-debug --target 03_adt_stack -- -j 10
[ 33%] Building CXX object CMakeFiles/03_adt_stack.dir/03_adt_stack/Stack.cpp.obj
C:\Users\rames\CLionProjects\CS210CPPRepo\03_adt_stack\Stack.cpp: In member function 'int Stack::pop()':
C:\Users\rames\CLionProjects\CS210CPPRepo\03_adt_stack\Stack.cpp:23:1: warning: control reaches end of non-void function [-Wreturn-type]
23 | }
| ^
C:\Users\rames\CLionProjects\CS210CPPRepo\03_adt_stack\Stack.cpp: In member function 'int Stack::top() const':
C:\Users\rames\CLionProjects\CS210CPPRepo\03_adt_stack\Stack.cpp:32:1: warning: control reaches end of non-void function [-Wreturn-type]
32 | }
| ^
[ 66%] Linking CXX executable 03_adt_stack.exe
**C:/Users/rames/AppData/Local/Programs/CLion/bin/mingw/bin/../lib/gcc/x86_64-w64-mingw32/15.2.0/../../../../x86_64-w64-mingw32/bin/ld.exe: CMakeFiles\03_adt_stack.dir/objects.a(main.cpp.obj): in function `main':
C:/Users/rames/CLionProjects/CS210CPPRepo/03_adt_stack/main.cpp:11:(.text+0x1e): undefined reference to `Stack::Stack()'**
collect2.exe: error: ld returned 1 exit status
mingw32-make[3]: *** [CMakeFiles\03_adt_stack.dir\build.make:117: 03_adt_stack.exe] Error 1
mingw32-make[2]: *** [CMakeFiles\Makefile2:180: CMakeFiles/03_adt_stack.dir/all] Error 2
mingw32-make[1]: *** [CMakeFiles\Makefile2:187: CMakeFiles/03_adt_stack.dir/rule] Error 2
mingw32-make: *** [Makefile:149: 03_adt_stack] Error 2

* Cause of error: 
The error message pointed at line 11, quoted "undefined reference to 'Stack::Stack()'". 
I realized that in stack.cpp, I didn't initialize a constructor function.

* What I did to fix it:
It ran after adding the constructor function on Stack.cpp.


# Error 2

* Date: Friday, 9/11/2026
* Error text:

> ====================[ Build | 03_adt_stack | Debug ]============================
C:\Users\rames\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe --build C:\Users\rames\CLionProjects\CS210CPPRepo\cmake-build-debug --target 03_adt_stack -- -j 10
[ 33%] Building CXX object CMakeFiles/03_adt_stack.dir/03_adt_stack/Stack.cpp.obj
**C:\Users\rames\CLionProjects\CS210CPPRepo\03_adt_stack\Stack.cpp: In member function 'bool Stack::isFull() const':
C:\Users\rames\CLionProjects\CS210CPPRepo\03_adt_stack\Stack.cpp:63:29: error: expected primary-expression before ')' token
63 |     if (topIndex == MAX_SIZE) {
|                             ^**
C:\Users\rames\CLionProjects\CS210CPPRepo\03_adt_stack\Stack.cpp: In member function 'int Stack::pop()':
C:\Users\rames\CLionProjects\CS210CPPRepo\03_adt_stack\Stack.cpp:35:1: warning: control reaches end of non-void function [-Wreturn-type]
35 | }
| ^
C:\Users\rames\CLionProjects\CS210CPPRepo\03_adt_stack\Stack.cpp: In member function 'int Stack::peek() const':
C:\Users\rames\CLionProjects\CS210CPPRepo\03_adt_stack\Stack.cpp:41:1: warning: control reaches end of non-void function [-Wreturn-type]
41 | }
| ^
C:\Users\rames\CLionProjects\CS210CPPRepo\03_adt_stack\Stack.cpp: In member function 'int Stack::top() const':
C:\Users\rames\CLionProjects\CS210CPPRepo\03_adt_stack\Stack.cpp:50:1: warning: control reaches end of non-void function [-Wreturn-type]
50 | }
| ^
mingw32-make[3]: *** [CMakeFiles\03_adt_stack.dir\build.make:92: CMakeFiles/03_adt_stack.dir/03_adt_stack/Stack.cpp.obj] Error 1
mingw32-make[2]: *** [CMakeFiles\Makefile2:180: CMakeFiles/03_adt_stack.dir/all] Error 2
mingw32-make[1]: *** [CMakeFiles\Makefile2:187: CMakeFiles/03_adt_stack.dir/rule] Error 2
mingw32-make: *** [Makefile:149: 03_adt_stack] Error 2

* Cause of error: I added a semicolon in the line defining the
  MAX_SIZE macro.

* What I did to fix it: Removing the semi-colon.