# 🧠 Apna College Sigma DSA in C++ — Lecture Notes & Code

> A structured, chapter-by-chapter record of my **Data Structures & Algorithms** learning in **C++** through the **Apna College Sigma** course — covering core C++ fundamentals, STL, OOP, and Recursion, with all lecture practice code preserved as-is.

> **Note:** LeetCode solutions are tracked separately → [leetcode-cpp](https://github.com/Partha500/leetcode-cpp)

---

## 📁 Repository Structure

```
sigma-dsa-cpp/
├── LECTURES/
│   ├── DATA STRUCTURES IN C++ 1/   # Ch 14-17: Arrays, Sorting, Basics (day2–day8)
│   ├── DATA STRUCTURES IN C++ 2/   # Ch 15-17 cont: 2D Arrays, More DS (day9–day14 + practice)
│   ├── 18 CHAR AND STRINGS/        # Ch 18: Char Arrays & Strings (1one–3three)
│   ├── 19-VECTORS/                 # Ch 19: Vectors STL (one–five)
│   ├── 20-BIT MANIPULATION/        # Ch 20: Bit Manipulation (1one–3three)
│   ├── 21 OOPS/
│   │   └── PART 1/                 # Ch 21: OOP Part 1 (A–G)
│   └── 23 - RECURSION/             # Ch 23: Recursion Part 1 (A–H)
├── RESOURCES/
│   └── DSA NOTES FROM LINKDIN.pdf  # Reference DSA notes
└── README.md
```

> ⚠️ LEETCODE/ is intentionally excluded — tracked in its own repo: [leetcode-cpp](https://github.com/Partha500/leetcode-cpp)

---

## 📊 Lecture Progress Tracker

### ✅ Completed Chapters

| Chapter | Topic | Folder | Files | Status |
| :---: | :--- | :--- | :--- | :-: |
| Ch 14–15 | Arrays Part I & II | `DATA STRUCTURES IN C++ 1/` | day2–day5 series | ✅ Done |
| Ch 16 | Basic Sorting | `DATA STRUCTURES IN C++ 1/` | day7 series | ✅ Done |
| Ch 17 | 2D Arrays | `DATA STRUCTURES IN C++ 1/` | day8a | ✅ Done |
| Ch 15–17 cont. | DS Practice & More Arrays | `DATA STRUCTURES IN C++ 2/` | day9–day14 + zpractice series | ✅ Done |
| Ch 18 | Char Arrays & Strings | `18 CHAR AND STRINGS/` | 1one, 2two, 3three | ✅ Done |
| Ch 19 | Vectors (STL) | `19-VECTORS/` | one, two, three, four, five | ✅ Done |
| Ch 20 | Bit Manipulation | `20-BIT MANIPULATION/` | 1one, 2two, 3three | ✅ Done |
| Ch 21 | OOP Part 1 | `21 OOPS/PART 1/` | A, B, C, D, E, F, G | ✅ Done |
| Ch 23 | Recursion Part 1 | `23 - RECURSION/` | A, B, C, D, E, F, G, H | ✅ Done |

### 🔄 Upcoming (October–December 2026)

| Chapter | Topic | Status |
| :---: | :--- | :-: |
| Ch 24 | Recursion Part 2 | 🔜 Next |
| Ch 25 | Divide & Conquer | 🔜 |
| Ch 26–27 | Time & Space Complexity | 🔜 |
| Ch 28 | Backtracking | 🔜 |
| Ch 29–30 | Linked Lists | 🔜 |
| Ch 31–33 | Stacks & Queues | 🔜 |
| Ch 34–43 | Greedy, Trees, BSTs, Heaps, Hashing | 🔜 Nov |
| Ch 44–57 | Tries, Graphs, DP, Segment Trees | 🔜 Dec |

---

## 📂 Lecture File Guide

### `DATA STRUCTURES IN C++ 1/`
| File | Topics Covered |
| :--- | :--- |
| `boilerplatecode.cpp` | Hello World, data types, sizeof |
| `day2.cpp` | Input/Output, variables |
| `day3.cpp` | Conditionals, operators |
| `day4.cpp` / `day4a.cpp` / `day4b.cpp` | Loops, patterns |
| `day5.cpp` → `day5f.cpp` | Functions, recursion intro |
| `day7a.cpp` → `day7e.cpp` | Arrays — declaration, traversal, sorting |
| `day8a.cpp` | 2D Arrays |

### `DATA STRUCTURES IN C++ 2/`
| File | Topics Covered |
| :--- | :--- |
| `day9a–day9d.cpp` | More 2D Arrays, matrix operations |
| `day10a–day10k.cpp` | Strings, char arrays deep dive |
| `day11a–day11f.cpp` | Pointers |
| `day12a–day12b.cpp` | Dynamic Memory Allocation |
| `day13a–day13e.cpp` | Structures |
| `day14f.cpp` | Advanced practice |
| `zpractice1–6.cpp` | Mixed practice problems |

### `18 CHAR AND STRINGS/`
| File | Topics Covered |
| :--- | :--- |
| `1one.cpp` | char arrays, strlen, getline |
| `2two.cpp` | String manipulation |
| `3three.cpp` | C++ `string` class |

### `19-VECTORS/`
| File | Topics Covered |
| :--- | :--- |
| `one.cpp` | Vector basics, push_back |
| `two.cpp` | Iterators |
| `three.cpp` | 2D vectors |
| `four.cpp` | Vector functions (sort, find) |
| `five.cpp` | Advanced STL usage |

### `20-BIT MANIPULATION/`
| File | Topics Covered |
| :--- | :--- |
| `1one.cpp` | AND, OR, XOR — odd/even check |
| `2two.cpp` | Bit shifting, set/clear bit |
| `3three.cpp` | Power of 2, count set bits |

### `21 OOPS/PART 1/`
| File | Topics Covered |
| :--- | :--- |
| `A.cpp` | Classes & Objects |
| `B.cpp` | Constructors |
| `C.cpp` | Encapsulation, getters/setters |
| `D.cpp` | `this` pointer |
| `E.cpp` | Static members |
| `F.cpp` | Copy constructor |
| `G.cpp` | Destructors |

### `23 - RECURSION/`
| File | Topics Covered |
| :--- | :--- |
| `A.cpp` | Factorial |
| `B.cpp` | Fibonacci |
| `C.cpp` | Power (x^n) |
| `D.cpp` | Sum of digits |
| `E.cpp` | Print 1 to N / N to 1 |
| `F.cpp` | Reverse array |
| `G.cpp` | String palindrome check |
| `H.cpp` | Binary search (recursive) |

---

## 🛠️ How to Compile & Run

```bash
# Using g++ (MinGW / GCC)
g++ -std=c++17 "LECTURES/23 - RECURSION/A.cpp" -o factorial
./factorial
```

---

## 📝 Notes & Conventions
- Folder names follow the **Apna College Sigma** chapter numbering exactly — no renaming.
- Files are named as they were during the lecture session (e.g., `1one.cpp`, `A.cpp`, `day2.cpp`).
- This is a **live learning journal** — code is raw and iterative, not polished production code.

---

## 👤 Author

**Partha Pratim Choudhury**
- 🌐 **GitHub**: [@Partha500](https://github.com/Partha500)
- 💼 **LinkedIn**: [partha-choudhury-dev](https://www.linkedin.com/in/partha-choudhury-dev)
- 📦 **LeetCode Repo**: [leetcode-cpp](https://github.com/Partha500/leetcode-cpp)
