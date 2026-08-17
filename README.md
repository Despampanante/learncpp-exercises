# learncpp-exercises

Warm-up exercises and small projects following [learncpp.com](https://www.learncpp.com/), covering
Modern C++ Foundations.

## Structure

Each folder under `src/` mirrors one chapter of the learncpp.com table of contents, in reading
order. Every `.cpp` file in a folder is built as its own standalone executable named after the
file — drop in a new file and it's picked up automatically on the next build.

| Folder | learncpp.com chapter |
| --- | --- |
| `00-getting-started` | Ch 0 — Introduction / Getting Started |
| `01-cpp-basics` | Ch 1 — C++ Basics |
| `02-functions-and-files` | Ch 2 — C++ Basics: Functions and Files |
| `03-debugging` | Ch 3 — Debugging C++ Programs |
| `04-fundamental-types` | Ch 4 — Fundamental Data Types |
| `05-constants-and-strings` | Ch 5 — Constants and Strings |
| `06-operators` | Ch 6 — Operators |
| `07-bit-manipulation` | Ch O — Bit Manipulation (optional) |
| `08-scope-duration-linkage` | Ch 7 — Scope, Duration, and Linkage |
| `09-control-flow` | Ch 8 — Control Flow |
| `10-error-handling` | Ch 9 — Error Detection and Handling |
| `11-type-conversion-and-deduction` | Ch 10 — Type Conversion, Type Aliases, and Type Deduction |
| `12-function-overloading-and-templates` | Ch 11 — Function Overloading and Function Templates |
| `13-constexpr-functions` | Ch F — Constexpr Functions |
| `14-references-and-pointers` | Ch 12 — Compound Types: References and Pointers |
| `15-enums-and-structs` | Ch 13 — Compound Types: Enums and Structs |
| `16-intro-to-classes` | Ch 14 — Introduction to Classes |
| `17-more-classes` | Ch 15 — More on Classes |
| `18-vector` | Ch 16 — Dynamic Arrays: std::vector |
| `19-array-and-cstyle-arrays` | Ch 17 — Fixed-size Arrays: std::array and C-style Arrays |
| `20-iterators-and-algorithms` | Ch 18 — Iterators and Algorithms |
| `21-dynamic-allocation` | Ch 19 — Dynamic Allocation |
| `22-functions-advanced` | Ch 20 — Functions (pointers, stack/heap, recursion, lambdas) |
| `23-operator-overloading` | Ch 21 — Operator Overloading |
| `24-move-semantics-and-smart-pointers` | Ch 22 — Move Semantics and Smart Pointers |
| `25-object-relationships` | Ch 23 — Object Relationships |
| `26-inheritance` | Ch 24 — Inheritance |
| `27-virtual-functions` | Ch 25 — Virtual Functions |
| `28-templates-and-classes` | Ch 26 — Templates and Classes |
| `29-exceptions` | Ch 27 — Exceptions |
| `30-io` | Ch 28 — Input and Output (I/O) |

`projects/csv-parser` is a standalone warm-up project (not a portfolio piece) and isn't tied to a
single chapter — it lives outside the `src/` chapter numbering.

## Build

```sh
cmake -S . -B build
cmake --build build
```

Binaries land in `build/src/<chapter>/<name>` (or `build/projects/<name>` for standalone projects).

## Adding an exercise

Drop a new `.cpp` file (with a `main()`) into the relevant chapter folder and rebuild.
