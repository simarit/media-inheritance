# Polymorphic Media Inheritance and Selection Sort

A C++ project that models an object-oriented media catalog using class inheritance, runtime polymorphism, and operator overloading. The application organizes distinct media types into an array of base-class pointers, sorts them alphabetically by title using a custom pointer-based selection sort, and dynamically executes overridden display methods at runtime:

> `[Superclass Pointer (media*)] -> [Subclass Instance (movie / book)] -> Dynamic Binding (print())`

Each media entity encapsulates shared attributes like name and price, while specialized derived classes extend functionality with unique fields (such as movie ratings and book authors). The system evaluates items using an overloaded `<` operator and efficiently organizes the collection by swapping pointer memory addresses rather than copying underlying object data.

## Objectives

- **Class Hierarchy & Inheritance:** Designing a base `media` superclass with `protected` members that are inherited and extended by specialized `movie` and `book` derived classes.
- **Polymorphism & Dynamic Binding:** Declaring `virtual` functions to ensure member function calls resolve dynamically at runtime through an array of base-class pointers (`media* m[]`).
- **Operator Overloading:** Overloading the relational `<` operator within the superclass to enable direct alphabetical string comparisons between diverse media objects.
- **Pointer-Based Selection Sort:** Adapting a traditional selection sort algorithm to compare dereferenced objects (`*mm[j] < *mm[min]`) and reorder items by swapping pointer addresses.

## Features

- **Heterogeneous Collection Handling:** Stores multiple distinct derived object types (`movie`, `book`) uniformly within a single array of base-class pointers.
- **Alphabetical Catalog Sorting:** Reorders the entire media catalog from A to Z based on title using the overloaded comparison operator.
- **Context-Aware Object Display:** Uses dynamic binding to automatically invoke each derived class's specific `print()` routine, presenting specialized attributes alongside base fields.
- **Formatted Currency Output:** Leverages `<iomanip>` stream manipulators (`ios::fixed`, `ios::showpoint`, `setprecision(2)`) to display formatted pricing.
```
