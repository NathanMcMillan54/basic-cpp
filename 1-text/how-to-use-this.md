Compile using ``g++`` command.

```commandline
make clean
make all
```

##

``print.cpp``:

```c++
#include <iostream>
```

``iostream`` is used for input and output in C++.

Here is a print statement
```c++
std::cout << "Text goes here" << std::endl;
```

Anything put between the arrows will be printed in the terminal.

##

``input.cpp``:

```c++
int i;
cin >> i;
```

Same with the print statement you'll need ``iostream`` because it's used for input and output in C++.
``cin`` is a input function from ``iostream``, anything after the arrows will have it's value set to what the user 
typed.

##

``int.cpp`` and ``char.cpp``:

These files show how to print a int value or a char value. It's the same as a normal print statement but instead of 
using quotes we just use the name of the int or char.

```c++
int i;
std::cout << i << std::endl;
```
