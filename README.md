## C-programming and CPP
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