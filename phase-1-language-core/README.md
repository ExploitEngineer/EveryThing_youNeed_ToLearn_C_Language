# Phase 1 - Fix the Foundation

## Goals

Understand the C language properly.
Stop guessing while coding.
Clear up the confusion about `stdin` / `stdout` / buffers.

## 01-compilation-model

- [ ] Preprocessing
- [ ] Compilation
- [ ] Linking
- [ ] `.h` vs `.c`
- [ ] `static` vs `extern`

Nothing here yet.
A good first exercise is to take one of the `.c` / `.h` pairs in `03-pointers`
and run it through `gcc -E`, `gcc -S`, `gcc -c` and the linker by hand, looking
at the output of each stage.

## 02-types-and-memory

- [ ] Integer sizes
- [ ] Signed vs unsigned
- [ ] `char` as a number
- [ ] Endianness

Nothing here yet.
Write a program that prints `sizeof` for every integer type, and one that detects
the machine's endianness by casting an `int*` to a `char*`.

## 03-pointers

- [x] Pointer basics
- [x] Pointer arithmetic
- [ ] Pointers to arrays
- [x] Pointers to structs
- [x] Double pointers
- [ ] Function pointers

`swap-ints.c`, `swap-strings.c`, `double-pointer-allocate.c` and
`array-of-struct-pointers.c` have no `main`, so they compile but do not link on
their own.
Write a driver for each, then build it with
`make run FILE=driver.c EXTRA="swap-ints.c"`.

## 04-arrays-and-strings

- [x] Char arrays
- [ ] Null termination
- [ ] Stack vs heap strings
- [x] String literals vs allocated strings

## 05-io-basics

- [x] stdin, stdout, stderr
- [x] Buffered vs unbuffered I/O
- [x] Why `printf` sometimes does not print (see `stdout-buffering-fflush.c`)
- [x] Why `scanf` sucks (see `scanf-string.c` and `scanf-multiple-types.c`)

## 06-structs-unions-enums

- [x] typedef
- [ ] Nested structs
- [ ] Alignment and padding
- [x] Unions and tagged unions
- [x] Enumerations

## exercises

The must-do list for this phase.
Nothing written yet.

- [ ] Reverse a string without library functions
- [ ] Implement `strlen`, `strcmp`, `strcpy`, `strcat`
- [ ] Build a small calculator using functions and a struct
- [ ] Debug 5 segfaults using gdb
- [ ] Visualise stack and heap memory for 10 small programs
