# LIBCOUTILS :gear: :pick:

![GitHub CI](https://github.com/alyxshang/libcoutils/actions/workflows/c.yml/badge.svg)

***A small library for C containing some utility functions. :gear: :pick:***

## ABOUT :books:

This repository contains the source code for a small library for the C programming language. This library contains a few useful and versatile utility functions. This library aims to be usable in a cross-platform way and easy to use for C developers of various skill levels.

## USAGE :hammer:

### Compiling and Linking

To use this library in your own C project, please follow these steps:

- 1.) Clone this repository.
- 2.) Depending on your platform, run either of the Make rules for your system. The rule `make_win` is written for Windows and the rule `make_unix` is written for Mac OS, Linux, and similar systems.
- 3.) These rules will both generate a shared-object library.
- 4.) Place the generated `.so` or `.dll` file in a location convenient for your project and copy the header file ***LibCoutils*** provides in the "src" directory into the same location.
- 5.) The functions this library provides can be brought into scope by adding the line `#include "/path/to/coutils.h"` to your C file(s), where `path/to/coutils.h` specifies the path where you copied the ***LibCoutils*** header file to.
- 6.) To compile your C project including ***LibCoutils***, run the following command: `clang main.c /path/to/coutils.{so,dll}`, where `/path/to/coutils.{so,dll}` is the path to the shared-object library of ***LibCoutils***.

To run the tests, you can run either of the following two Make rules, depending on your system: `test_win` or `test_unix`.

### API Documentation

To understand how to use the functions this library provides, please refer to the comments and functions in the file `src/coutils.c`.

## CHANGELOG :black_nib:

### Version 0.1.0

- Initial release.
- Upload to GitHub.

## NOTE :scroll:

- *LibCoutils :gear: :pick:* by *Alyx Shang :black_heart:*.
- Licensed under the [FSL v1](https://github.com/alyxshang/fair-software-license).
