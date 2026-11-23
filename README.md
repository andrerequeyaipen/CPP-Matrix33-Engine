# C++ 3×3 Matrix & 3D Vector Linear Algebra Engine

A lightweight C++ linear algebra library implementing a dynamically allocated 3×3 matrix class (`Matrix33`) and a 3D geometric vector class (`Point3D`) from first principles. Built to practice manual heap memory management, Rule of Five semantics, and operator overloading.

## Features

### `Matrix33`
* **Rule of Five Memory Management:** Full support for copy construction, copy assignment, `noexcept` move construction, `noexcept` move assignment, and deterministic heap deallocation (`int**`).
* **Matrix Arithmetic:** Overloaded `+` and `*` operators supporting matrix addition, matrix-matrix multiplication, and symmetric scalar multiplication (`A * c` and `c * A`).
* **Determinant Computation:** Calculates $3 \times 3$ determinants using Sarrus's rule.
* **Element Access & I/O:** Bounds-checked `(row, col)` call operator overloading for mutable and `const` access, plus `<<` and `>>` stream operators.

### `Point3D`
* **Vector Operations:** Overloaded `+`, `-`, `*`, `/`, `==`, and `!=` operators, Euclidean `magnitude()`, and bounds-checked `(index)` access.
* **Linear Transformations:** Supports matrix-vector multiplication ($A\mathbf{x}$) transforming a `Point3D` through a `Matrix33`.

## Project Structure

```text
├── main.cpp        # Unit tests and usage examples for Matrix33 & Point3D
├── matrix33.h      # Matrix33 class declaration
├── matrix33.cpp    # Matrix33 implementation
├── vector3.h       # Point3D class declaration
├── vector3.cpp     # Point3D implementation
