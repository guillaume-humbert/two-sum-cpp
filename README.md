# TwoSum

TwoSum implementation in C++.
The problem statement can be found here: https://leetcode.com/problems/two-sum/

The goal of this repo is to solve a specific problem, with a CMake setup and 
unit tests, so we can clone this when starting a new project.

## Setup, Build, Run

The unit tests are written using googletest.

We need to download googletest locally:

```bash
$ git clone git@github.com:google/googletest.git
```

Then setup CMake:

```bash
$ mkdir build
$ cd build
$ cmake ..
```

Build & run the tests:

```bash
$ cmake --build .
$ ctest .
# Or alternatively
$ ./tests/testts
```

