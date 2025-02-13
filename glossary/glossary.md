## Glossary

###### Directives: 
eg.
`#include <stdio.h>`
- States the information to be included into the program before its compiled (in this example `stdio.h` (which is known as a header file))
- Directives always begin with a `#`
- Always one line long

###### Functions
- like procedures or subroutines from other languages, they are building blocks from which programs are constructed. 
- A C program is little more than a collection of functions
- Can be split into two categories
1. Those written by the prgrammer
2. Those written as part of the C implementation (aka `library functions`)
eg. a function that adds 1 to its argument
`return x + 1;`

A function that computes the difference of the squares of its arguments:
`return y * y - z * z;`

A C program may consist of many functions, only the `main` function is madatory.
- Main is special, it gets called automatically when the pgoram is executed

###### main
- is always `main`
- no it cant be `begin`, or `start`.
- `main` returns a value, a status code that is given to the OS when the program terminates
- Consider the `return 0` at the end of a `main` function that gets returned
- If `return 0` is omitted the pgoram will still terminate, however some compilers may produce warning messages

###### statements
A statement is a command to be executed when the program runs
- Asking a function to perform its assigned task is known as `calling` the function.
eg. calling the printf function to display a string
`printf("To C, or not to C: that is the question.\n");`
- Note that C requires each statement end with a semicolon
- - The exception being compound statements

###### Directives
tbd
- Dont need a semicolon at the end

###### Comments
srsly?
1. `/* blah */`
2. `// blah`
3.
```
/* 
blah 
*/
```

Apparently you can preform boxes with `*` i guess thats neat

###### Types
every variable needs a type

int: can store a whole number 0, 53, -43
float: can store numbers with decimals 432.234
- can be slower with math
- Can also have rounding errors as floats are just approximations (lol what?) 

###### Declaration
eg.
int height;
float profit;

can combine with multiple 

int heigh, length, width;
float profit, loss;

(if possible leave a blank line between delcarations and statements for style points)

##### Assignment
height = 8;
you have to declare before you assign

int height;
height = 8;

when you use `floats` its good habit to append a `f`, it will still compile but you may get an error from the compiler

profit = 2150.48f;

###### Initialization
Try an initialize your variables so they dont get full of junk data
- cool fact you can delcare in one line if you want
`int height = 8, length = 12, width = 10;`

###### Constants

_Macro Definition_
- We can use `#define` which is a preprocessing directive (just like `#include`)
- We also do not need a `;` at the end
eg.
`#define INCHES_PER_POUND 166`
- allowing us to have a constant of 166 when we say INCHES_PER_POUND

or

`#define RECIPROCAL_OF_PI (1.0f / 3.14159f)`

- Using captials for macro names is common convention

#### Functions

###### Printf
- ensure you have the write call `%d` for int `%f` for float
- check your `;`

###### scanf
- apparently kinda sketchy and dangerous
- same as print of with the `%f`

basic tldr? `scanf("%f", &x);` 
- reads a float balue and stores into x


