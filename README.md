# Everything You Need to Learn C

[![C Standard](https://img.shields.io/badge/C-C17-blue)](https://en.cppreference.com/w/c/17)
[![Build](https://img.shields.io/badge/make%20check-107%20passing-brightgreen)](#building-and-running)
[![License](https://img.shields.io/badge/license-MIT-lightgrey)](LICENSE)

A working repository for learning C from the ground up: the language itself, then
memory, then the UNIX system call layer, then data structures, then real
low-level projects.

It is organised as a curriculum rather than a scrapbook.
The directory tree mirrors the six phases of [`ROADMAP.md`](ROADMAP.md), each
phase is split into the topics it covers, and every phase carries a checklist of
those topics, so the repository also serves as the progress tracker.

It currently holds 107 example programs, 97 of which are directly runnable.

## Contents

- [Repository layout](#repository-layout)
- [Requirements](#requirements)
- [Getting started](#getting-started)
- [Building and running](#building-and-running)
- [Conventions](#conventions)
- [Tracking progress](#tracking-progress)
- [Expected compiler warnings](#expected-compiler-warnings)
- [Reference material](#reference-material)
- [License](#license)

## Repository layout

| Path | Contents | Examples |
| --- | --- | --- |
| [`phase-0-foundations/`](phase-0-foundations) | Datatypes, storage classes, qualifiers, operators, control flow, functions, build basics | 45 |
| [`phase-1-language-core/`](phase-1-language-core) | Compilation model, types and memory, pointers, arrays and strings, I/O, structs and unions and enums | 42 |
| [`phase-2-memory-mastery/`](phase-2-memory-mastery) | Memory layout, `malloc`/`free`/`realloc`, void pointers, dynamic structures | 13 |
| [`phase-3-system-level/`](phase-3-system-level) | File descriptors, process control, signals, pipes and IPC, error handling, buffers, binary I/O, threads | 6 |
| [`phase-4-data-structures/`](phase-4-data-structures) | Stacks, queues, linked lists, hash tables, binary trees, recursion, searching, sorting | 1 |
| [`phase-5-projects/`](phase-5-projects) | End-of-roadmap projects: a shell, an allocator, an ELF parser, a text editor | 0 |
| `docs/` | Reference PDFs | |
| `vendor/libcs50/` | The CS50 helper library, used by a handful of examples | |
| `tools/` | Third-party installers, kept out of the working tree | |

The phases are numbered in the order they should be worked through, and so are
the topic folders inside each one.
Later phases are deliberately sparse: they are the work still ahead.

## Requirements

| Tool | Purpose |
| --- | --- |
| `gcc` or `clang` | Compiling the examples; the Makefile defaults to `gcc` |
| `make` | Driving every build in the repository |
| `gdb` | Required by the Phase 1 debugging exercises |
| `valgrind` | Required by the Phase 2 memory exercises |

On Arch Linux:

```bash
sudo pacman -S base-devel gdb valgrind
```

On Debian or Ubuntu:

```bash
sudo apt install build-essential gdb valgrind
```

## Getting started

```bash
git clone git@github.com:ExploitEngineer/EveryThing_youNeed_ToLearn_C_Language.git
cd EveryThing_youNeed_ToLearn_C_Language

# confirm the toolchain works: compiles all 107 examples
make check

# run the first one
make run FILE=phase-0-foundations/00-getting-started/hello-world.c
```

Then open [`phase-0-foundations/README.md`](phase-0-foundations/README.md) and
work down its checklist.

## Building and running

Every example builds through the root `Makefile` at `-std=c17 -Wall -Wextra -g`.
There is no per-directory build file to maintain.

| Command | Effect |
| --- | --- |
| `make run FILE=<path>` | Compile one example and run it |
| `make run FILE=<path> ARGS="..."` | Same, passing arguments to the program |
| `make build FILE=<path>` | Compile only, leaving the binary in `build/` |
| `make check` | Compile everything, keep going on failure, print a summary |
| `make all` | Compile everything, stopping at the first failure |
| `make list` | List every example that defines a `main()` |
| `make clean` | Remove `build/` |

```bash
make run FILE=phase-1-language-core/03-pointers/pointer-basics.c
make run FILE=phase-3-system-level/02-process-control/argv-greet.c ARGS="world"
make check
```

Three link-time details are handled automatically, so they never have to be
passed by hand:

| Detected in the source | Added to the command line |
| --- | --- |
| `#include "foo.h"` with a sibling `foo.c` | `foo.c` |
| `#include <cs50.h>` | `-Ivendor/libcs50/src vendor/libcs50/src/cs50.c` |
| `#include <threads.h>` or `pthread` | `-pthread` |

For the rare case where a header name does not match its implementation file,
pass the extra translation unit explicitly:

```bash
make run FILE=driver.c EXTRA="helper.c"
```

Compiled binaries are written to `build/`, which is ignored by git.
To use a different compiler, override `CC`:

```bash
make check CC=clang
```

## Conventions

File names describe what the example demonstrates, so both `grep` and shell
completion are useful: `pointer-arithmetic.c`, `stack-overflow-vla.c`,
`realloc-grow-array.c`.

Some examples are library translation units with no `main()`, paired with a
header of the same name, such as `swap-ints.c` and `swap-ints.h`.
These compile but do not link on their own.
Writing the driver program for them is part of the exercise.

## Tracking progress

Each phase README lists that phase's topics as checkboxes.
A ticked box means a working example exists in the repository; an unticked box is
a gap still to fill.
This is the fastest way to see what is left:

```bash
grep -rn '^- \[ \]' phase-*/README.md
```

[`ROADMAP.md`](ROADMAP.md) holds the full plan the structure is derived from,
including the exercise lists and end-of-phase goals.

## Expected compiler warnings

`make check` is expected to report zero failures.
A small number of files still produce warnings deliberately, and should not be
"fixed":

| File | Warning | Reason |
| --- | --- | --- |
| `phase-0-foundations/01-datatypes/primitive-types.c` | `-Wunused-variable` | A catalogue of type declarations; nothing is meant to be used |
| `phase-0-foundations/01-datatypes/initialization-forms.c` | `-Wunused-variable` | Same |
| `phase-0-foundations/01-datatypes/typedef-basics.c` | `-Wunused-variable` | Same |
| `phase-0-foundations/03-operators/arithmetic-operators.c` | `-Wunused-variable` | Operands left in place so the commented-out operators can be tried one at a time |
| `phase-1-language-core/04-arrays-and-strings/array-basics.c` | `-Wunused-variable` | Shows two array declaration forms, only one is iterated |
| `phase-1-language-core/04-arrays-and-strings/string-literal.c` | `-Wunused-variable` | A one-line declaration example |
| `phase-1-language-core/03-pointers/uninitialized-pointer-segfault.c` | `-Wuninitialized` | The undefined behaviour is the lesson |
| `phase-1-language-core/03-pointers/uninitialized-memory.c` | `-Wmaybe-uninitialized` | Same |

Any warning outside this list is a real defect and worth fixing.

## Reference material

- `docs/c-cheatsheet.pdf` for quick syntax lookup
- `docs/c-complete-notes.pdf` for longer explanations
- [learn-c.org](https://learn-c.org) for interactive drills
- [Modern C, 2nd edition](https://www.cs.sfu.ca/~ashriram/Courses/CS295/assets/books/C_Book_2nd.pdf) as the reference text

`vendor/libcs50/` is Harvard's CS50 helper library, vendored because several
examples carried over from CS50 lectures depend on it.
It is third-party code and is not part of the curriculum.

## License

Released under the MIT License.
See [`LICENSE`](LICENSE) for the full text.
