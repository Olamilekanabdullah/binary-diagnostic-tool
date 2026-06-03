# Binary Diagnostic Tool

A command-line tool written in C that lets you analyze and manipulate 
integers at the bit level.

## Features

- 16-bit binary display
- Count set bits (popcount)
- Even/odd detection using bitwise AND
- Power of 2 check
- Left and right bit shifting
- Set, clear, and toggle specific bits
- Check if a specific bit is set
- Input validation for unsigned 16-bit range (0–65535)
- Menu loops until user quits

## Concepts Used

- Bitwise operators (`&`, `|`, `^`, `~`, `<<`, `>>`)
- Loops (`while`, `do-while`, `for`)
- `switch` statements
- Input validation
- C macros and constants

## How to Run

Compile with any C compiler:
```bash
gcc binarydiagnostic.c -o binarydiagnostic
./binarydiagnostic
```

## Background

Built as a practice project while learning C programming, 
with a focus on bit manipulation — a core skill in embedded systems development.
