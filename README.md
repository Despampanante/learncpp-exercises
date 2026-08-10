# learncpp-exercises

Warm-up exercises and small projects following [learncpp.com](https://www.learncpp.com/), covering
Phase A (Modern C++ Foundations) of the quant-dev roadmap.

## Structure

Each topic is its own folder under `src/`. Every `.cpp` file in a folder is built as its own
standalone executable named after the file — drop in a new file and it's picked up automatically
on the next build.

- `01-fundamentals`
- `02-references-pointers`
- `03-object-lifetime-raii`
- `04-move-semantics`
- `05-templates-stl`
- `06-smart-pointers`
- `07-csv-parser` — warm-up project, not a portfolio piece

## Build

```sh
cmake -S . -B build
cmake --build build
```

Binaries land in `build/src/<topic>/<name>`.

## Adding an exercise

Drop a new `.cpp` file (with a `main()`) into the relevant topic folder and rebuild.
