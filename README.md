# Everything You Need to Learn C

My working repository for learning C properly, from the language basics through
memory, the UNIX system call layer, data structures, and real low-level projects.

The folder structure follows my C language roadmap: six phases, each one broken
into the topics it covers.
Every phase has a `README.md` with the topic checklist for that phase, so the
repository doubles as the progress tracker.

## Layout

| Path | What is in it |
| --- | --- |
| `phase-0-foundations/` | Types, storage classes, operators, control flow, functions, build basics |
| `phase-1-language-core/` | Compilation model, pointers, arrays and strings, I/O, structs |
| `phase-2-memory-mastery/` | Memory layout, malloc/free/realloc, void pointers, dynamic structures |
| `phase-3-system-level/` | File descriptors, processes, signals, pipes, buffers, binary I/O, threads |
| `phase-4-data-structures/` | Stacks, queues, lists, hash tables, trees, recursion, searching, sorting |
| `phase-5-projects/` | The end-of-roadmap projects |
| `docs/` | Reference PDFs |
| `vendor/libcs50/` | The CS50 helper library, used by a handful of examples |
| `tools/` | Third-party installers kept out of the way |

Within a phase, folders are numbered in the order the roadmap teaches them.
File names say what the example demonstrates, so `grep` and tab completion both
work: `pointer-arithmetic.c`, `stack-overflow-vla.c`, `realloc-grow-array.c`.

## Building and running

Everything compiles through the root `Makefile` with `-std=c17 -Wall -Wextra -g`.

```bash
# compile and run one example
make run FILE=phase-1-language-core/03-pointers/pointer-basics.c

# pass arguments to the program
make run FILE=phase-3-system-level/02-process-control/argv-greet.c ARGS="world"

# link an extra translation unit (only needed when the header name does not
# match the .c file name, which is rare here)
make run FILE=driver.c EXTRA="helper.c"

# compile every example in the repo, keep going, report failures
make check

# list every example that has a main()
make list

make clean
```

Two things are worked out automatically, so they never need to be passed by hand:

- a local `#include "foo.h"` pulls in a sibling `foo.c` if one exists
- `#include <cs50.h>` pulls in `vendor/libcs50`

Binaries land in `build/`, which is gitignored.

## Known-noisy examples

`make check` is expected to pass with zero failures.
A few files still emit warnings on purpose:

- `phase-0-foundations/01-datatypes/primitive-types.c` and friends are
  declaration catalogues, so `-Wunused-variable` fires by design
- `phase-1-language-core/03-pointers/uninitialized-pointer-segfault.c` and
  `uninitialized-memory.c` exist to demonstrate undefined behaviour

## Roadmap

`ROADMAP.md` holds the full plan this structure is built from.
