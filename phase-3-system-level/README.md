# Phase 3 - System-Level C

## Goals

Master UNIX/Linux system programming.

## 01-file-descriptors

- [ ] open, read, write, close
- [ ] File modes
- [ ] Blocking vs non-blocking I/O
- [x] The stdio layer on top (`fopen` / `fprintf`)

## 02-process-control

- [ ] fork
- [ ] exec family
- [ ] wait and zombies
- [ ] Environment variables
- [x] Program arguments
- [x] Exit status

## 03-signals

- [ ] `SIGINT`, `SIGKILL`
- [ ] Signal handlers
- [ ] Async-signal safety

## 04-pipes-and-ipc

- [ ] pipe()
- [ ] dup2()
- [ ] Redirect stdout
- [ ] Build a simple pipeline: `cmd1 | cmd2`

## 05-error-handling

- [ ] errno
- [ ] strerror
- [ ] Robust error checking

## 06-buffers

- [ ] Fully buffered
- [ ] Line buffered
- [ ] Unbuffered
- [ ] Flushing

See also `phase-1-language-core/05-io-basics/stdout-buffering-fflush.c`.

## 07-binary-io

- [x] `fread`, `fwrite`
- [ ] Writing structs to files

## 08-threads

- [x] C11 `<threads.h>`: `thrd_create`, `thrd_join`

## exercises

- [ ] Implement `cat` in C
- [ ] Implement `cp` in C (started: `07-binary-io/cp-fread-fwrite.c`)
- [ ] Write a mini `echo`
- [ ] Write a program that forks twice
- [ ] Manually create the pipeline `ls | wc -l`
- [ ] Write your own `getline`
