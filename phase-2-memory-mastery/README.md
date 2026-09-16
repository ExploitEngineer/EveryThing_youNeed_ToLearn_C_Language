# Phase 2 - Deep Memory Mastery

## Goals

Master the hardest part of C: memory management.
This is where the real cybersecurity and system-level skill starts.

## 01-memory-layout

- [x] Stack frames and how locals sit in them
- [x] Stack overflow from an oversized local
- [x] Heap allocation basics
- [ ] Heap vs stack vs BSS vs data
- [ ] Full memory layout of a running process

## 02-malloc-and-free

- [x] `malloc`
- [x] `free`
- [x] `realloc`
- [ ] `calloc`
- [x] Out-of-bounds writes and what they corrupt

`malloc-scalar-array.c` and `free-scalar-list.c` have no `main`.
`free-scalar-list-driver.c` drives the second one, and `make` links the pair
automatically because the driver includes `free-scalar-list.h`.

## 03-void-and-function-pointers

- [x] void pointers
- [ ] Pointer aliasing
- [ ] Function pointers (advanced)
- [ ] Flexible array members

## 04-dynamic-structures

- [x] Linked lists
- [ ] Managing dynamic arrays
- [ ] Dynamic strings
- [ ] Dynamic structs

## exercises

- [ ] Implement a dynamic array (like C++ vector)
- [ ] Implement a dynamic string
- [ ] Implement singly and doubly linked lists
- [ ] Build a small heap-allocated JSON parser
- [ ] Create a memory leak, then find it with valgrind
- [ ] Bonus: write a custom allocator
