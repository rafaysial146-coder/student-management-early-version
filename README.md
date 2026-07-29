# 🎓 Student Records & Topper Analyzer (C++)

![Language](https://img.shields.io/badge/language-C%2B%2B-blue)
![Framework](https://img.shields.io/badge/framework-None%20(Standard%20Library)-lightgrey)
![Platform](https://img.shields.io/badge/platform-Cross--platform-success)
![Version](https://img.shields.io/badge/version-1.0.0-informational)
![License](https://img.shields.io/badge/license-MIT-yellow)
![Status](https://img.shields.io/badge/status-Educational%2FPrototype-orange)

---

## 📖 Overview

This is a simple **console-based C++ program** that collects academic records for a fixed set of students (name, age, and 5 subject marks each) and produces a summary report. It was built as a learning exercise to practice:

- Using **structs** to model real-world entities (a student record)
- Passing **arrays of structs** into functions
- Basic **pass/fail evaluation logic** based on a marks threshold
- Simple **comparison logic** to determine the top-performing student

The problem it solves (at a small scale): rather than tracking a student's name, age, and marks in separate parallel arrays — which is error-prone and hard to read — this program bundles each student's data into a single unit, then processes that unit consistently across the program.

---

## ✨ Features

- Collects name, age, and 5 subject marks for 3 students via console input
- Displays a formatted summary of all entered student records
- Calculates each student's total marks
- Determines **pass/fail** status using a fixed threshold (> 250 out of 500)
- Identifies the **topper** (highest scorer) among the students
- Detects and reports a **tie** if no single student has the highest total

---

## 🛠️ Tech Stack

| Category      | Details                          |
|---------------|-----------------------------------|
| Language      | C++                               |
| Framework     | None — uses only the C++ Standard Library (`iostream`, `string`) |
| Libraries     | `<iostream>`, `<string>`          |
| Build Tools   | Any standard C++ compiler (e.g. `g++`, `clang++`) |
| Database      | None (in-memory data only, no persistence) |
| Deployment    | Runs locally as a compiled console executable |

---

## 🧩 Functions / Methods — Grouped by Role

| Function       | Purpose |
|----------------|---------|
| `main()`       | Entry point; prompts the user for each student's name, age, and 5 marks, then calls `display()` and `topper()` |
| `display(ep s[3])` | Iterates over the student array and prints each student's name, age, and marks |
| `topper(ep s[3])`  | Computes each student's total marks, prints pass/fail status per student, and determines who has the highest total (or reports a tie) |

**Data structure used:**

| Type | Fields | Purpose |
|------|--------|---------|
| `struct sudent` (aliased `ep`) | `name` (string), `age` (int), `marks[5]` (float array) | Groups one student's complete record into a single unit |

---

## 🔄 Program Flow

```
                ┌───────────────────────┐
                │        main()         │
                └───────────┬───────────┘
                            │
                            ▼
        ┌───────────────────────────────────────┐
        │  Loop i = 0 to 2 (3 students)          │
        │  ─────────────────────────────────     │
        │  • Read name                           │
        │  • Read age                            │
        │  • Loop j = 0 to 4: read 5 marks       │
        └───────────────────┬────────────────────┘
                            │
                            ▼
                ┌───────────────────────┐
                │     display(studen)   │
                │  Print each student's │
                │  name, age, marks     │
                └───────────┬───────────┘
                            │
                            ▼
                ┌───────────────────────────────┐
                │        topper(studen)         │
                │  ────────────────────────────  │
                │  For each student:             │
                │   • Sum 5 marks → total        │
                │   • total > 250 → "pass"       │
                │   • else        → "fail"       │
                │  Compare totals[0..2]:         │
                │   • Highest → print name       │
                │   • Equal   → print "tied"     │
                └───────────┬────────────────────┘
                            │
                            ▼
                      Program ends
```

---

## 📝 Notes

- This project currently has a single implementation approach (no v1/v2 or basic/optimized variants), so no comparison table or old-vs-new architecture diagram is included.
- Class/student counts (3 students, 5 subjects) are currently hardcoded; a natural next step would be to make these configurable (e.g. via `std::vector` and a runtime-specified count).
