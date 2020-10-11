Compile using ``g++`` command.

```commandline
make clean
make all
```

##

``header_file.cpp``:

In C and C++ there are files labeled as .h the are called header files. Header files are like C/C++ files except they
are just a file that has only one or two functions in them. 

Example:

main.c
```c
#include "header.h"

int main() {
    header_function();
    return 0;
}
```
header.h
```c++
#include <stdio.h>

void header_function() {
    printf("From a header file!");
}
```

##

``text_file.cpp``:

``fstream`` is used in this file. This C++ library is used to work in files like ``.txt`` files.
```c++
ofstream txtFile("files/text.txt");
txtFile << "Some text";
txtFile.close();
```
 
What this does is it sets ``txtFile`` as the path to your file. ``txtFile << "Some text"`` is saying to put the text in
quotes into txtFile. ``txtFile.close()`` is used to close the file because it's not being used.