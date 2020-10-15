Compile using ``g++`` command.

```commandline
make clean
make all
```

##

``main.cpp``:

All C/C++ files have a main function that is why ``no_main.cpp`` didn't compile because it does not have a main 
function.

Example:

This compiles
```c++
int main() {

}
```
This does not compile
```c++
int no_main() {

}
```

##

``int.cpp``:

There are different types of functions in C/C++ int and void. int functions have to return something.

Example:
```c
int my_function() {
    printf("int function in C \n");
    return 0;
}
```

In this example we use a return statement that returns 0.

``void.cpp``:

Like I talked about in ``int.cpp`` there are different types of functions, int and void. This will be talking about the
void function.

Example:
```c
void my_function() {
    printf("void function in C \n");
}
```

This void function does not return anything because this type of function doesn't need to return anything.