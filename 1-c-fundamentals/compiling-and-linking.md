Once we have a "file.c" we can look to compile
- Usually done in 3 steps

1. Preprocessing
- Program is first given to a preprocessor, which obeys commands that begin with # (known as directives)
- Preprocessor is a bit like an editor, it can add and make modifications

2. Compiling 
- Modified program now goes toa  compiler which translates it into machine instructions (object code)

3. Linking
linker combines the object code produced by the compiler with any additional code needed to yield a complete executable program
- includes library functions like printf that are used in the pgoram

Compilers?
`cc` or `gcc`
