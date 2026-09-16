# Phase 0 - Foundation Expansion

The basics that are easy to skip and expensive to skip.
Work through this before or alongside Phase 1.

Run anything here with `make run FILE=<path>` from the repo root.

## 00-getting-started

- [x] A first program and what `main` returns
- [x] `#include <...>` vs `#include "..."`
- [x] Comment syntax

## 01-datatypes

- [x] Primitive types: `int`, `char`, `float`, `double`
- [x] Signed vs unsigned types
- [x] Short, long, long long
- [ ] Fixed-width types: `int8_t`, `uint32_t`, `int64_t`
- [x] Boolean type (`_Bool`, `<stdbool.h>`)
- [ ] Real meaning of `char` (signedness, ASCII)
- [x] Integer promotions
- [ ] Usual arithmetic conversions
- [ ] Type casting (implicit and explicit)
- [ ] Why C is not type-safe

Note: `primitive-types.c`, `initialization-forms.c` and `typedef-basics.c` are
declaration catalogues, so they compile with `-Wunused-variable` warnings on
purpose.

## 02-storage-classes-and-qualifiers

- [x] `auto`
- [x] `static`
- [x] `extern`
- [x] `register`
- [x] Thread storage (`_Thread_local`)
- [x] Qualifiers: `const`, `volatile`, `restrict`, `_Atomic`

## 03-operators

- [x] Arithmetic operators
- [ ] Logical operators
- [ ] Bitwise operators (`& | ^ ~ << >>`)
- [ ] Comparison operators
- [x] Ternary operator (`?:`)
- [ ] `sizeof` operator (deep understanding)
- [ ] Operator precedence and associativity

Still missing from this folder, and worth writing yourself: lvalues vs rvalues,
modifiable vs non-modifiable lvalues, why `a = b = c` works, sequence points,
and undefined behaviour from expressions.

## 04-control-flow

- [x] if/else
- [x] switch (and how jump tables may work)
- [x] for, while, do-while
- [x] goto and labels

## 05-functions

- [x] Function declaration vs definition
- [x] Return types
- [x] Parameter passing (by value vs by pointer)
- [ ] The call stack, stack frames, return addresses (see phase 2)
- [x] Inline functions (`inline` keyword)
- [x] Variadic functions

## 06-build-system

- [ ] Using `gcc` properly
- [ ] Multi-file compilation
- [ ] `make` basics

The root `Makefile` is the working example for this topic.
Read it, then try writing a small one for a two-file program of your own.

## practice

Small complete programs that use the whole of this phase at once rather than one
topic at a time.
