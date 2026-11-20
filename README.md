# C++ Concepts & Experiments

> A hands-on C++ learning journey from the fundamentals to modern programming techniques.

This repository contains **78 focused programs** (39 core lab demonstrations + 39 hands-on DIY exercises) that turn individual C++ concepts into small, readable experiments. Each example is designed to be explored, modified, and used as a stepping stone to the next topic.

## Learning map

| Section | Topics | Core Programs | DIY Exercises |
| --- | --- | --- | --- |
| 1 | C to C++: namespaces, I/O, references, and strings | `Program 1/` (3 programs) | `DIY/1_From_C_to_CPP/` (3 programs) |
| 2 | Functions, overloading, default arguments, and pointers | `program 2/` (3 programs) | `DIY/2_Functions_Overloading_Default_Inline/` (3 programs) |
| 3 | Classes, objects, encapsulation, arrays, and `this` | `program3/` (3 programs) | `DIY/3_Classes_Objects_Encapsulation/` (3 programs) |
| 4 | Constructors, destructors, dynamic memory, and deep copying | `program 4/` (3 programs) | `DIY/4_Constructors_Destructors_Dynamic_Memory/` (3 programs) |
| 5 | Static members and friend functions/classes | `program 5/` (3 programs) | `DIY/5_Static_Members_Friend_Functions/` (3 programs) |
| 6 | Operator overloading | `program 6/` (3 programs) | `DIY/6_Operator_Overloading/` (3 programs) |
| 7 | Inheritance, including multilevel, virtual, and hierarchical inheritance | `program 7/` (3 programs) | `DIY/7_Inheritance/` (3 programs) |
| 8 | Polymorphism, abstract classes, binding, and virtual destructors | `program 8/` (3 programs) | `DIY/8_Polymorphism_Virtual_Functions/` (3 programs) |
| 9 | Exception handling, stack unwinding, and RAII | `program 11/9_Exception_Handling/` (3 programs) | `DIY/9_Exception_Handling/` (3 programs) |
| 10 | File I/O, records, append-only logs, and CSV parsing | `program 10/` (3 programs) | `DIY/10_File_Input_Output/` (3 programs) |
| 11 | Function/class templates and STL containers | `program 11/` (3 programs) | `DIY/11_Templates_STL_Containers/` (3 programs) |
| 12 | Algorithms, lambdas, priority queues, bounds, and permutations | `program 12/` (3 programs) | `DIY/12_STL_Algorithms_Lambdas/` (3 programs) |
| 13 | Smart pointers, design patterns, and multithreading | `program 13/` (3 programs) | `DIY/13_Smart_Pointers_Design_Patterns_Threads/` (3 programs) |

## What makes this collection useful?

- **Progressive structure:** move from syntax and functions to classes, STL, and concurrency.
- **Small experiments:** study one idea at a time without navigating a large application.
- **Practical examples:** work with files, records, CSV data, algorithms, memory, and threads.
- **Built-in prompts & DIY challenges:** test your understanding by working through the complementary DIY implementations in the `DIY/` directory.

## Suggested path

1. Begin with **1-3** to build a foundation in syntax, functions, and classes.
2. Continue through **4-8** to understand object lifetime, relationships, and polymorphism.
3. Explore **9-10** for robust programs and file-based data.
4. Finish with **11-13** for reusable components, algorithms, smart pointers, patterns, and threads.
5. Work through the corresponding **DIY/** exercises after completing each topic.

## Repository layout

```text
├── Program 1/ ... program 13/              # 39 core lab demonstrations
└── DIY/                                    # 39 hands-on DIY lab exercises
    ├── 1_From_C_to_CPP/
    ├── 2_Functions_Overloading_Default_Inline/
    ├── 3_Classes_Objects_Encapsulation/
    ├── 4_Constructors_Destructors_Dynamic_Memory/
    ├── 5_Static_Members_Friend_Functions/
    ├── 6_Operator_Overloading/
    ├── 7_Inheritance/
    ├── 8_Polymorphism_Virtual_Functions/
    ├── 9_Exception_Handling/
    ├── 10_File_Input_Output/
    ├── 11_Templates_STL_Containers/
    ├── 12_STL_Algorithms_Lambdas/
    ├── 13_Smart_Pointers_Design_Patterns_Threads/
    ├── run_all_diy.sh                      # Test runner for all 39 DIY exercises
    └── README.md                           # Detailed DIY exercise guide
```

Every folder contains three self-contained `.cpp` programs, making it easy to compare related techniques and track progress.

## Running the DIY Exercises

You can execute the entire DIY test suite using the included shell script:

```bash
cd DIY
chmod +x run_all_diy.sh
./run_all_diy.sh
```

To clean up compiled binaries and temporary test logs:
```bash
./run_all_diy.sh clean
```

To run any single program directly:
```bash
g++ -std=c++17 "DIY/1_From_C_to_CPP/1.1_Vowel_Consonant_Counter.cpp" -o sample.out -pthread
./sample.out
```

## Notes

- Examples target standard C++ concepts and are suitable for a C++17-compatible environment.
- File-I/O programs may create local data files such as `students.txt`, `marks.csv`, or `run.log`.
- This is a practice and revision repository, not a single production application.

> Read the comments, change the examples, break things safely, and learn by rebuilding them.
