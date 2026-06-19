# Learning C++ 🚀

A personal collection of well-commented C++ programs covering the language from the basics through Object-Oriented Programming and the Standard Template Library (STL). Each file is self-contained, runnable, and documented inline — built as a study log while learning C++ from scratch.

## 📁 Repository Structure

```
Learning-CPP/
├── Basic.cpp                  # Hello World, basic cout/cin
├── Variable&Datatype.cpp      # Variable declaration, initialization & data types
├── controlflow.cpp            # if / else-if / else statements
├── switch.cpp                 # switch-case statements
├── Functions.cpp              # Prototypes, overloading, default & inline functions
├── Recursion.cpp              # Recursion basics (base case & recursive case)
├── Pointer.cpp                # Pointers, references & pointer arithmetic
│
├── OOPS/                      # Object-Oriented Programming concepts
│   ├── Basics.cpp             #   Classes & objects
│   ├── Encapsulation.cpp      #   Encapsulation
│   ├── Abstraction.cpp        #   Abstraction
│   ├── Inheritance.cpp        #   Single, multilevel & multiple inheritance
│   └── Polymorphism.cpp       #   Compile-time & run-time polymorphism
│
└── STL/                        # Standard Template Library
    ├── Containers/             #   vector, list, deque, stack, queue,
    │                           #   priority_queue, set, map
    ├── Iterators/              #   Input, Output, Forward, Bidirectional & Random
    │                           #   access iterators
    ├── Algorithms/             #   sorting, searching, min/max, heap, numeric,
    │                           #   set operations & general iteration
    └── Functors/                #   built-in functors & custom functors
```

## 📚 Topics Covered

- **Fundamentals** — variables, data types, operators, control flow (`if-else`, `switch`)
- **Functions** — prototypes, overloading, default arguments, inline functions
- **Recursion** — base cases and recursive problem solving
- **Pointers & References** — address-of/dereference operators, pointer arithmetic, pointers to pointers, passing pointers to functions
- **Object-Oriented Programming** — classes & objects, encapsulation, abstraction, inheritance, polymorphism
- **STL** — containers, iterators, algorithms, and functors

## 🛠️ How to Run

Each `.cpp` file is independent and can be compiled and run on its own using any standard C++ compiler (g++, clang++, etc.).

```bash
# Compile
g++ Basic.cpp -o basic

# Run
./basic
```

On Windows (with MinGW):

```bash
g++ Basic.cpp -o basic.exe
basic.exe
```

To try a file inside a subfolder, just point the compiler at its path, e.g.:

```bash
g++ OOPS/Inheritance.cpp -o inheritance
./inheritance
```

## ✅ Prerequisites

- A C++ compiler supporting C++11 or later (g++ / clang++ / MSVC)
- Basic familiarity with the command line

## 🎯 Purpose

This repository is meant as a learning reference and revision resource — each file focuses on one concept at a time with comments explaining *what* the code does and *why*, making it easy to revisit specific topics.

## 🤝 Contributing

This is primarily a personal learning log, but suggestions, corrections, and improvements are welcome — feel free to open an issue or submit a pull request.

## 📄 License

No license has been specified for this repository. Feel free to reach out to the repository owner if you'd like to use this code.
