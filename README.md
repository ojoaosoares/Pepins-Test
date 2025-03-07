# Pepin Primality Test

## Introduction

This project performs primality tests on Fermat numbers, defined as:

$$
F_n = 2^{(2^n)} - 1
$$

## Features

- **Pepin Test**: Using group theory to discover if a Fermat Number is prime. A Fermat Number is prime if and only if
  
$$
5^{\frac{F_n - 1}{2}} \equiv -1 \pmod{F_n}
$$
- **Optional Output**: Supports a flag to print the corresponding Fermat number.


## Prerequisites

### Compiler
- **C++ Compiler** (e.g., `g++`)

### Dependencies
- **GMP Library** (GNU Multiple Precision Arithmetic Library)
- **Installation Script** Run install.sh to install dependencies automatically

## How to Compile and Run

### Using Makefile

The project includes a `Makefile` to simplify the compilation process. Below are the available commands:

1. **Compile the Program**:
To compile the program, run:
```bash
make
```

This will generate the executable in the ./bin/ folder.

2. **Clean Build Files**:
To remove all compiled object files and the executable, run:

```bash
make clean
```

### Execution

After compiling, run the program using:
```bash
./bin/pepin_test -i [FERMAT INDEX] -n
```

where

- **-i [FERMAT INDEX]**: Index of the Fermat number to be tested.
- **-n**: Optional flag to print the corresponding Mersenne number.

## Program Output

The program will output whether the Fermat Number is Prime or not, and if specified, the Fermat Number.
