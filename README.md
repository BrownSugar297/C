# 📘 C Programming 

![Language](https://img.shields.io/badge/Language-C-blue?style=flat-square&logo=c)
![Level](https://img.shields.io/badge/Level-Beginner%20to%20Intermediate-green?style=flat-square)
![Compiler](https://img.shields.io/badge/Compiler-GCC-orange?style=flat-square)
![License](https://img.shields.io/badge/License-MIT-lightgrey?style=flat-square)

> A structured collection of C programming exercises covering core language concepts — from variables and control flow to arrays, functions, and pointers.

---

## 📁 Folder Structure

```
c codes/
│
├── hello.c                  # First program — Hello World
├── var.c                    # Variables and data types
├── int .c                   # Integer operations
├── char.c                   # Character handling
├── temp.c                   # Temperature conversion
├── grade.c                  # Grade calculator
├── clause.c                 # Clause / conditional logic
├── extra.c                  # Miscellaneous exercises
│
├── Conditional/
│   ├── cond 1.c             # Basic if-else
│   ├── cond 2.c             # Nested conditions
│   └── cond 3.c             # Switch / multi-branch logic
│
├── Loops/
│   ├── for.c                # For loop examples
│   └── while.c              # While loop examples
│
├── Array/
│   ├── Array_1.c            # Array declaration & sum
│   ├── Array_2.c            # Array traversal
│   ├── Array_3.c            # Array manipulation
│   ├── Array_4.c            # Multi-dimensional concepts
│   └── Untitled1.c          # Extra array practice
│
├── Function/
│   ├── sum.c                # Function for sum calculation
│   ├── Recursion.c          # Recursive function basics
│   └── Recursion Demo.c     # Recursion demonstration
│
└── Pointer/
    ├── swap.c               # Pointer-based value swap
    ├── swap func .c         # Swap using function & pointers
    ├── bsa.c                # Pointer arithmetic
    ├── ashik.c              # Pointer practice
    ├── graph.c              # Graph representation
    ├── tree.c               # Tree structure using pointers
    └── infix to postfix.c   # Infix to postfix conversion
```

---

## 🧠 Topics Covered

| Topic | Description |
|---|---|
| **Basics** | Hello World, variables, data types, I/O |
| **Conditionals** | `if`, `else`, `else-if`, `switch` |
| **Loops** | `for`, `while`, `do-while` |
| **Arrays** | Declaration, traversal, summation, manipulation |
| **Functions** | User-defined functions, recursion |
| **Pointers** | Address operators, dereferencing, pointer functions |
| **Data Structures** | Stack (infix-postfix), tree, graph via pointers |

---

## ⚙️ Prerequisites

- A C compiler such as **GCC** (GNU Compiler Collection)
- Any code editor — [VS Code](https://code.visualstudio.com/), Code::Blocks, or Dev-C++

---

## 🚀 Getting Started

### 1. Clone or download the repository

```bash
git clone https://github.com/your-username/c-codes.git
cd "c codes"
```

### 2. Compile a file

```bash
gcc hello.c -o hello
```

### 3. Run the compiled program

```bash
./hello          # Linux / macOS
hello.exe        # Windows
```

---

## 💡 Example — Pointer Swap

```c
#include <stdio.h>

int main() {
    int x = 10, y = 20, z;
    int *p1, *p2;

    p1 = &x;
    p2 = &y;

    z  = *p1;
    *p1 = *p2;
    *p2 = z;

    printf("x = %d\n", x);  // x = 20
    printf("y = %d\n", y);  // y = 10

    return 0;
}
```

---

## 📌 Notes

- All `.exe` and `.o` files are compiled artifacts for Windows/Linux — they can be safely ignored or deleted.
- Source `.c` files are the only files needed to study or recompile.
- Programs are beginner-friendly and focus on concept clarity over complexity.

---

## 👨‍💻 Author

**Ashik** — BSc in Computer Science & Engineering  
*Learning C programming, one concept at a time.*

---

## 📄 License

This project is open-source and available under the [MIT License](LICENSE).

