# Simple-Cpp-Setup

Welcome to this minimalist C++ project!

## If you use the Dev Container

If you install [ms-vscode-remote.remote-containers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers) and [Docker](https://www.docker.com/products/docker-desktop), you will be able to run your code inside a Linux container (kind of like a virtual machine, but faster). Also, you will get static analyzers, code formatters and useful extensions installed out of the box! It is a great option to get started with C++ quickly.

(Unfortunately, if you want to do GUI applications they don't work well from within a container and you might have to do a proper setup on your own desktop instead. But for simple command-line applications this works amazingly well!)

NB: the container might take a while to build the first time.

## If you don't use the Dev Container

### Compiling

You need to install [CMake](https://cmake.org/download/).

To use CMake I recommend this VS Code extension : [ms-vscode.cmake-tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools). You will need to setup the extension with a compiler. Here is [the tutorial](https://code.visualstudio.com/docs/cpp/cmake-linux). It is based on Linux but at the bottom of the page you will find the explanations to adapt it for [Windows](https://code.visualstudio.com/docs/cpp/config-msvc) and [Mac](https://code.visualstudio.com/docs/cpp/config-clang-mac).

Alternatively you can just create a *build* folder at the root of this project, open a terminal and run `cmake ..`; chances are it will detect what compiler you have installed and generate the appropriate Makefile / Visual Studio solution / Xcode project.

### Auto-formatting

[Check this out](https://julesfouchy.github.io//Learn--Clean-Code-With-Cpp/lessons/formatting-tool) to learn why you would want to use a code formatter and how to do it.

### Static analysis

[Check this out](https://julesfouchy.github.io/Learn--Clean-Code-With-Cpp/lessons/static-analysis-and-sanitizers) to learn why you would want to use static analysis and how to do it.

# Progress

Level 1

- [x] Install a compiler

- [x] Use an IDE

- [x] Use Git

- [x] Use a debugger

- [x] Use a formatting tool

- [x] Use static analysers

- [x] Naming

- [x] Stack vs Heap

- [x] Consistency in style

Level 2

- [x] Make it work, then make it good

- [x] Prefer free functions

- [ ] Design cohesive classes

- [ ] Use structs to group data

- [ ] Write small functions

- [ ] DRY: Don't Repeat Yourself

- [ ] Enums

- [ ] Split problems in small pieces

- [ ] Composition over Inheritance

Level 3

- [ ] std::vector

- [ ] Documentation

- [ ] Use libraries

- [ ] assert

- [ ] auto

- [ ] Testing

- [ ] Type design

- [ ] Dependencies

- [ ] Lambda functions

- [ ] Master your IDE

- [ ] std::optional

- [ ] Single Source of Truth

- [ ] Strong Typing

- [ ] Code reviews

- [ ] const

- [ ] Don't overfocus on performance

- [ ] Git submodules

- [ ] STL algorithms

- [ ] Debug vs Release

- [ ] Immediately Invoked Function

- [ ] Markdown

- [ ]Range-based for loop

- [ ] Smart Pointers

- [ ] std::function

- [ ] Error Handling

- [ ] Git Pull Requests

- [ ] Advanced Git features

- [ ] CMake

- [ ] Functional programming

- [ ] Move semantics

- [ ] The Rule of 5

- [ ] State and Strategy

- [ ] std::variant

- [ ] Cache and Branches

- [ ] Multithreading

- [ ] Polymorphism

