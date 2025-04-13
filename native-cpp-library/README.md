# C++ Matrix Multiplication Library

This repository contains the code for a matrix multiplication application, developed following the [Arm Learning Path: Matrix Multiplication](https://learn.arm.com/learning-paths/cross-platform/matrix/) tutorial.

## Overview

This project implements matrix multiplication in C++17, exploring different optimization techniques and cross-platform development.

## Key Learning Objectives

- Building C++ applications from source
- Implementing matrix multiplication algorithms
- Code optimization techniques
- Cross-platform development for different architectures

## Prerequisites

- Arm arcitecture
- C++ compiler (gcc, clang, etc.)
- CMake (for build automation)
- A build system: GNU Make or Ninja
- Basic understanding of linear algebra and C++ programming

## Building the Project

```bash
mkdir build && cd build
CXX=clang++ cmake -G Ninja -B build -S .
ninja
```

## Usage

```bash

```

## Project Structure

- `src/` - Source code files
- `include/` - Header files
- `test/` - Unit tests
- `build/` - Build directory (generated)

## Future objectives

[] Type conversion: the library only supports operations with the same type for now, and this is enforced by the compiler. Avoiding silent conversions is desirable, but there are cases where data have different types and explicit conversion is necessary.

[] Transposition, that is swapping the rows and columns, is another important operation, with some room for optimization in the implementation. Can you think of different ways to implement the transpose operator for the Matrix class?

[] Broadcasting: these are useful shortcuts for the Matrix users, as they allow to transform a scalar or a row-vector/column-vector by replicating it to make it look like a 2-D matrix. Again, on top of syntactic sugar for the users, this provides a large performance improvement, especially in memory usage, as one can play with how the elements are accessed rather than duplicating the matrix content.

[] Resize: to be able to dynamically change a matrix dimensions.

[] Extract: to be able to extract part of a matrix.

## Optimization

The code written so far is relatively high level and allows the compiler to perform a large number of optimizations, from propagating constants to unrolling loops to name but a few most basic ones.

The applyEltWiseUnaryOp and applyEltWiseBinaryOp helper routines from the Matrix library process one element at a time. The compiler may make use of Arm specific SIMD (Single Instruction, Multiple Data) instructions to process several elements at a time with one instruction. This is an optimization named vectorization, that can either be done automatically by the compiler (this is named autovectorization) or it can be done manually by the developper with the use of intrinsics functions. You can learn more about the compiler’s autovectorization capabilities with the Learn about [Autovectorization](https://learn.arm.com/learning-paths/cross-platform/loop-reflowing/) learning path and about other vectorization tricks with the [Optimize SIMD code with vectorization-friendly data layout](https://learn.arm.com/learning-paths/cross-platform/vectorization-friendly-data-layout/) learning path.

You can also learn how to [Accelerate Matrix Multiplication Performance with SME2](https://learn.arm.com/learning-paths/cross-platform/multiplying-matrices-with-sme2/).
