# learning_c_cpp
My collection of useful code snippets when learning/refreshing C/C++ based on various toturials and own experience

## Compiling?

Many C++ compilers are also C compilers

### C

gcc

### C++

clang

g++

cling (interactive, based on clang)

clang (and cling) has often more user-friendly error messages, when compared to g++

Depends on arguments used.

### Examples

clang on C/C++ code, threading enabled

```bash
clang -std=c++14 -pthread -o exefile <src>.cpp
```
