## C-programming and CPP
- #### Header Files:
    - The following directory, contains, code relevant to c language, and cpp (code with harry)

    - Typically, header files have an include guard or a #pragma once directive to ensure that they are not inserted multiple times into a single .cpp file.

```cpp
// my_class.h
#ifndef MY_CLASS_H // include guard
#define MY_CLASS_H

namespace N
{
    class my_class
    {
    public:
        void do_something();
    };
}

#endif /* MY_CLASS_H */
```


- #### goto() function in C:
```cpp
#include<stdio.h>
#include<conio.h>
#include<windows.h>
void gotoxy(short x,short y);
void gotoxy(short x,short y)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
int main()
         {
            int x,y;
           x=10;
           y=19;
           goto(x,y);
         }
```



- #### References:
    - [cpp reference gradle](https://docs.gradle.org/current/samples/sample_building_cpp_libraries.html)
    - [cpp library](https://yangyushi.github.io/code/2020/06/26/cpp-library.html)
    - [static library in cpp](https://learn.microsoft.com/en-us/cpp/build/walkthrough-creating-and-using-a-static-library-cpp?view=msvc-170)