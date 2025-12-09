# CodeForcesProblems

Repository for CodeForces Problems done by Swarup

All problems are solved by Swarup


## Problemset directory

All directories are Top-Level and named after their problemset.

### Problemset file
Each problemset directory has a markdown with the number of the problemset,
Such problemset file also contains details about each problem and example or potential inputs.

### Problem file

Each problemset directory has potentially multiple files named as the probems.
All problems must be in C files.

## Input

Input must somehow be redirected from a top=level .input file.

`./myprogram < .in`

## Output

While the main required-by-codeforces output must be directly sent to stdout, 
other output (such as stderr) may be somehow redirected to other files.

`gcc -o myprogram myprogram.c 2> .out`

## Test

The test directory includes C files that are used for testing and safekeeping purposes.

## Licence

MIT Licence

## Compilation

Each file is completely self-sufficient except for the use of libc packages. 

Therefore, there is no need for build systems such as makefiles. 

However, programs should be compiled in `gcc` with no additional flags.

There is no strict limit in the compilation target.

For example,
`gcc -Wall -Werror /1/A.c -o A`

## Running

If a certain executable is runnable in a certain system, then it is okay to run.

For example,
`./A`