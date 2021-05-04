# The Kassite Programming Language
**Kassite** is an embedded scripting language, designed to be used in IoT & Cloud projects.

![draw](https://img.shields.io/github/last-commit/kassite-lang/kassite)
![draw](https://img.shields.io/github/license/kassite-lang/kassite)
[![Gitter chat](https://badges.gitter.im/kassite-lang/community.png)](https://gitter.im/kassite-lang/community)
![badge](https://tokei.rs/b1/github/kassite-lang/kassite)
![draw](https://img.shields.io/github/languages/code-size/kassite-lang/kassite?label=Code%20Size)

## Features
- CrossPlatform (Linux,Windows,MacOS,iOS,Android,Web)
- Designed to be used in IoT & Cloud projects
- Object-oriented
- Support functional programming
- Lightweight
- Fast & Powerful & Portable
- Easy to embed
- Inspired by C++,C#,Golang
- Kassite Package Manager(kpm)

## Examples
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
> See Other Examples [Here](docs/Examples.md)

## Documentation
> See Documentation [Here](docs/Documentation.md)

## Build From Source
Prerequisites :
- A C++ Compiler(should support `c++17` standard,gcc 8.1 is recommended)
- Python 3.x
- Pyinstaller

for build interpreter :
```
make
```

for install interpreter(Linux):
```
make
make install
```

for build package manager :
```
build-kpm.bat
```
## Community
You can join to our community on gitter, [Here](https://gitter.im/kassite-lang/community).

## Contributing Guide
> See this [Page](docs/CONTRIBUTING.md)

## About
This project development by **Kassite Team**.

Copyright (c) 2021 **Kassite Team**, \
all rights reserved.

## License
This project is licensed under the [***MIT***](https://github.com/kassite-lang/kassite/blob/master/LICENSE)
