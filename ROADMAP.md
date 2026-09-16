# C Language Roadmap

The plan this repository is organised around.
Each heading maps to a folder; the per-phase `README.md` files carry the
checkboxes and track what is done.

Source: `~/Documents/notes/clang/C language Roadmap.md`

## Phase 0 - Foundation Expansion

The essentials that are often skipped.
Do these before or alongside Phase 1.

Core datatypes, storage classes, lvalues and expressions, the full operator set,
control flow internals, function internals, and build system basics.

Folder: `phase-0-foundations/`

## Phase 1 - Fix the Foundation

Understand the language properly and stop guessing while coding.
Clear up `stdin` / `stdout` / buffers.

Compilation model, types and memory representation, pointers in depth, arrays and
strings for real, I/O basics, structs.

Folder: `phase-1-language-core/`

## Phase 2 - Deep Memory Mastery (3 weeks)

Master the hardest part of C.
This is where real cybersecurity and system-level skill begins.

`malloc` / `free` / `realloc` / `calloc`, heap vs stack vs BSS vs data, memory
layout, pointer aliasing, void pointers, flexible array members, advanced
function pointers, dynamic arrays and strings, linked lists.

Folder: `phase-2-memory-mastery/`

## Phase 3 - System-Level C (3 weeks)

Master UNIX/Linux system programming.

File descriptors, process control, signals, pipes and IPC, error handling,
buffers, binary I/O.

Folder: `phase-3-system-level/`

## Phase 4 - Data Structures and Algorithms (2 weeks)

Arrays, stacks, queues, linked lists, hash tables, binary trees, recursion,
searching, sorting.
Implement every one by hand.

Folder: `phase-4-data-structures/`

## Phase 5 - Real Low-Level Projects (2 weeks)

Text editor, your own `malloc`, ELF parser, your own `grep`, a complete shell, a
raw TCP packet builder, a keylogger, a toy compiler.
Pick two or do all of them.

Folder: `phase-5-projects/`

## Resources

1. https://roadmap.sh/ai/course/c-language-course-building-new-projects-from-scratch
2. https://learn-c.org
3. https://www.cs.sfu.ca/~ashriram/Courses/CS295/assets/books/C_Book_2nd.pdf
