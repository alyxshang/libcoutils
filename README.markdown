# LIBCOUTILS :gear: :pick:

![GitHub CI](https://github.com/alyxshang/libcoutils/actions/workflows/c.yml/badge.svg)

***A small library for C containing some utility functions. :gear: :pick:***

## ABOUT :books:

This repository contains the source code for a small library for the C programming language. This library contains a few useful and versatile utility functions. This library aims to be usable in a cross-platform way.

## USAGE :hammer:

### Compiling and Linking

To use this library in your own C project, please follow these steps:

- 1.) Clone this repository.
- 2.) Run the following command from the root of this repository: `clang -c src/coutils.c -o coutils.a -Wall`.
- 3.) Move the file `src/coutils.h` and the file `coutils.a` to a directory of your choosing.
- 4.) When you compile your C project, make sure to supply each of these two files to Clang as source files.

### API Documentation

To understand how to use the functions this library provides, please refer to the comments and functions in the file `src/coutils.c`.

## CHANGELOG :black_nib:

### Version 0.1.0

- Initial release.
- Upload to GitHub.

## NOTE :scroll:

- *LibCoutils :gear: :pick:* by *Alyx Shang :black_heart:*.
- Licensed under the [FSL v1](https://github.com/alyxshang/fair-software-license).
