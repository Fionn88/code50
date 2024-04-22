# week2

## `make` is actually implemented at the lower level using `clang`.

> `clang -o hello hello.c`

```
/usr/bin/ld: /tmp/hello-c4f87f.o: in function `main':
hello.c:(.text+0x16): undefined reference to `get_string'
clang: error: linker command failed with exit code 1 (use -v to see invocation)
```

> `clang -o hello hello.c -lcs50`

## We collectively refer to the compilation process as having four steps.

### preprocessing

```
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
```

### compiling

- `pushq`, `movq`, `subq`... are CPU instructions for transferring data in and out of memory.
```
...
main:
    .cfi_startproc
# BB#0
    `pushq`   %rbp
.Ltmp0:
    .cfi_offset %rbp, 16
.Ltmp1:
    .cfi_offset %rbp, -16
    `movq` %rsp, %rbp
.Ltmp2:
    .cfi_def_cfa_register %rbp
    `subq`    $16, %rsp
    `xorl`    %eax, %eax
    `movl`    %eax, %edi
    `movabsp`     %.L.str, $rsi
    `movb`    $0, %al
    `callq`   get_string
    `movabsq`     %.L.str.1, $rdi
    `movq`    %rax, -8(%rbp)
    `movq`    -8(%rbp), %rsi
    `movb`    %0, %al
    `callq`   printf
    ...
```

### assembling

- Convert 'hello.c' to 0 and 1

### linking

1. Convert 'cs50.h' to 0 and 1
2. Convert 'stdio.h' to 0 and 1
3. links them(hello, cs50, stdio) all together

