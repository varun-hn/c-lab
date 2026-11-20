# DIY Exercises (ECE121 C++ Lab Manual)

This folder contains **39 Do-It-Yourself (DIY) C++ programs** across 13 core modules. Each exercise addresses the practical challenge problems specified in the lab manual, applying the concepts through hands-on implementation.

## Structure & Programs

| Module | Exercise | File | Description |
|---|---|---|---|
| **1. From C to C++** | 1.1 | `1.1_Vowel_Consonant_Counter.cpp` | Count vowels, consonants, and characters in a line using `getline` and `cctype` |
| | 1.2 | `1.2_Anagram_Test.cpp` | Case-insensitive anagram detector using frequency maps |
| | 1.3 | `1.3_Reverse_Words.cpp` | Reverses words in a sentence while preserving word order |
| **2. Functions & Overloading** | 2.1 | `2.1_Overloaded_Volume.cpp` | Function overloading to calculate volumes of cubes, cylinders, and boxes |
| | 2.2 | `2.2_Default_Argument_Power.cpp` | Power function with default exponent argument (`exp = 2`) |
| | 2.3 | `2.3_Inline_Min.cpp` | High-performance inline function to compute minimum of three values |
| **3. Classes & Encapsulation** | 3.1 | `3.1_Rectangle_Class.cpp` | Rectangle class with validated setters (rejects negatives) and metrics |
| | 3.2 | `3.2_Counter_Array.cpp` | Array of objects tracking multiple independent counter instances |
| | 3.3 | `3.3_Complex_Number_Class.cpp` | Complex number class with addition, subtraction, and formatted printing |
| **4. Memory & Constructors** | 4.1 | `4.1_Dynamic_Matrix.cpp` | 2D dynamic memory matrix allocation, addition, and memory cleanup |
| | 4.2 | `4.2_Dynamic_Stack.cpp` | LIFO dynamic stack with manual memory management and resizing |
| | 4.3 | `4.3_Lifetime_Logger.cpp` | Object lifetime tracing via constructor/destructor execution logging |
| **5. Static & Friends** | 5.1 | `5.1_Static_Object_Counter.cpp` | Tracks active vs total created instances using static member variables |
| | 5.2 | `5.2_Friend_Time_Comparison.cpp` | Friend function comparing two private `Time` object instances |
| | 5.3 | `5.3_Unique_Order_Id_Factory.cpp` | Auto-incrementing order ID generator using static members |
| **6. Operator Overloading** | 6.1 | `6.1_Money_Arithmetic.cpp` | Overloaded `+` and `-` operators with rupee/paise carry & borrow |
| | 6.2 | `6.2_Fraction_IO_GCD.cpp` | Fraction class with overloaded arithmetic and stream `<<` / `>>` operators |
| | 6.3 | `6.3_Safe_Array.cpp` | Safe bounds-checked array indexing using overloaded `operator[]` |
| **7. Inheritance** | 7.1 | `7.1_Employee_Hierarchy.cpp` | Base `Employee` with derived `FullTimeEmployee` and `PartTimeEmployee` |
| | 7.2 | `7.2_Multilevel_Shapes.cpp` | Multilevel inheritance hierarchy (`Shape` -> `TwoDShape` -> `Circle`/`Rectangle`) |
| | 7.3 | `7.3_Diamond_Virtual_Inheritance.cpp` | Resolves the diamond problem using virtual base classes |
| **8. Polymorphism** | 8.1 | `8.1_Abstract_Account.cpp` | Pure virtual functions and abstract base class for bank accounts |
| | 8.2 | `8.2_Polymorphic_Logger.cpp` | Runtime swappable logger interface (`ConsoleLogger` & `FileLogger`) |
| | 8.3 | `8.3_Virtual_Destructor_Leak_Proof.cpp` | Memory-leak prevention in polymorphic base pointers via virtual destructors |
| **9. Exception Handling** | 9.1 | `9.1_Safe_Withdrawal_Exception.cpp` | Custom `InsufficientFundsException` with detailed balance feedback |
| | 9.2 | `9.2_Stack_Exceptions.cpp` | Stack bounds safety handling `StackOverflowException` & `StackUnderflowException` |
| | 9.3 | `9.3_Exception_Order_Demo.cpp` | Demonstrates correct ordering of derived vs base catch handlers |
| **10. File Input / Output** | 10.1 | `10.1_Number_Stats_File.cpp` | Reads numbers from file to calculate count, sum, average, min, and max |
| | 10.2 | `10.2_Line_Numbered_Copy.cpp` | Line-by-line file copy with 1-based line number prefixes |
| | 10.3 | `10.3_Student_Records_Topper.cpp` | Persists and parses student records, calculating class topper |
| **11. Templates & STL** | 11.1 | `11.1_Generic_Utilities.cpp` | Function templates for `swapValues()`, `findMax()`, and `printArray()` |
| | 11.2 | `11.2_Generic_Queue.cpp` | Class template implementing a generic FIFO Queue |
| | 11.3 | `11.3_Frequency_Counter_Map.cpp` | Word frequency counting using `std::map` |
| **12. Algorithms & Lambdas** | 12.1 | `12.1_Sort_Pairs_Lambda.cpp` | `std::sort` on pairs with custom lambda comparator |
| | 12.2 | `12.2_Top_K_Heap.cpp` | Finds top-k largest elements using `std::priority_queue` |
| | 12.3 | `12.3_Custom_Aggregate_Lambda.cpp` | Custom reductions using `std::accumulate` and lambda expressions |
| **13. Modern C++ & Threads** | 13.1 | `13.1_Raw_To_Smart_Pointer.cpp` | Replaces raw `new`/`delete` allocations with `std::unique_ptr` |
| | 13.2 | `13.2_Shape_Factory_V2.cpp` | Modern Factory Pattern returning `std::unique_ptr<Shape>` |
| | 13.3 | `13.3_Race_Condition_Lock.cpp` | Multithreaded counter synchronization using `std::thread` and `std::mutex` |

## How to Build and Run

### Run all 39 DIY programs:
```bash
chmod +x run_all_diy.sh
./run_all_diy.sh
```

### Clean build artifacts:
```bash
./run_all_diy.sh clean
```

### Run an individual program:
```bash
g++ -std=c++17 1_From_C_to_CPP/1.1_Vowel_Consonant_Counter.cpp -o 1.1.out -pthread
./1.1.out
```
