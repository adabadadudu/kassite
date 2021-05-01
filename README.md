# The Kassite Programming Language
**Kassite** is a embedded scripting language, designed to be used in IoT & Cloud projects.

<p align="center">
 
![draw](https://img.shields.io/github/last-commit/kassite-lang/kassite)
![draw](https://img.shields.io/github/license/kassite-lang/kassite)
[![Gitter chat](https://badges.gitter.im/kassite-lang/community.png)](https://gitter.im/kassite-lang/community)
![badge](https://tokei.rs/b1/github/kassite-lang/kassite)
![draw](https://img.shields.io/github/languages/code-size/kassite-lang/kassite?label=Code%20Size)

</p>
 
## Features
- CrossPlatform(Linux,Windows,MacOS,iOS,Android,Web)
- Object-oriented
- Support functional programming
- Lightweight
- Fast & Powerful & Portable
- Easy to embed
- Inspired by C++,C#,Golang
- Kassite Package Manager(kpm)
## Documentation
> See Documentation [Here](Documentation.md)

## Examples
> See Examples [Here](Examples.md)
```c#
// recursively find Fibonacci number at index n:
func fib(n) {
    if (n < 2) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}
print(fib(12);
```
# Build From Source
Prequiste :
- A C++ Compiler(should support `c++17` standard,gcc 8.1 is recommended)

for build :
```
make
```

for install(Linux):
```
make
make install
```

## TODO
- [ ] Create importing system
- [ ] Write IoT modules
- [ ] Optimize interpreter for Arduino Boards
- [ ] Write Cloud modules

## About
This project development by **Kassite Team**.

Copyright (c) 2021 **Kassite Team**, \
all rights reserved.

## License
***MIT***
