    💡ft_printf💡

**💡Overview💡**

`ft_printf` is a custom implementation of the C standard library function `printf`. The goal of this project is to replicate the behavior of the original `printf`, with support for a subset of format specifiers and some basic formatting options. This project helps improve understanding of variadic functions and formatted output in C.

**💡Features💡**
- Supports a subset of the standard `printf` format specifiers:
  - `%c` : Prints a single character
  - `%s` : Prints a string
  - `%d` : Prints a decimal (integer) number
  - `%i` : Prints an integer
  - `%u` : Prints an unsigned integer
  - `%x` : Prints a number in hexadecimal (lowercase)
  - `%X` : Prints a number in hexadecimal (uppercase)
  - `%%` : Prints a percent sign (`%`)

**💡Installation💡**

* 💡Step 1: Clone the repository💡

    ```bash
    git clone https://github.com/marouaneaddou/ft_printf.git
    ```

* 💡Step 2: Compile the project💡
    ```bash
    make
    ```
* 💡Step 3: Link with your project💡

    
    Now, you can link `ft_printf` with your C project. For example, if you have a main.c file in your project, you can compile and link it like this:

    ```bash 
    gcc your_file.c -L. -lftprintf -o your_program
    ```
    Here’s what this command does:

    * `your_file.c` is the source code file for your project.

    * `-L.` tells the compiler to look in the current directory (where `libftprintf.a` is located) for libraries.

    * `-lftprintf` links the `libftprintf.a` library to your program.

    * `-o your_program` specifies the name of the final executable (you can replace `your_program` with your desired name).

    Note:
    
    When you use the `-L.` option, make sure the path points to the directory where `libftprintf.a` is located. The `-lftprintf` option tells the compiler to link with the `libftprintf` library, where `libftprintf.a` is the static library file. The `-L.` flag ensures that the linker can find the library file in the current directory.


**💡Example:💡**

If you have a `main.c`file that uses ft_printf, here's a minimal example:
        
```C
#include "ft_printf.h"

int main() {
    ft_printf("Hello, world! The number is %d.\n", 42);
    return 0;
}
```
* Compile and link it with ft_printf:
    ```bash
    gcc main.c -L. -lftprintf -o your_program_name

* Then run your program:
    ```bash
    ./your_program_name
    ```
* Expected Output:
    ```bash 
    Hello, world! The number is 42.
    ```

**💡Testing💡**

To test the implementation of `ft_printf`, a `tester.c` file is included. The `tester.c` file compares the output of `ft_printf` with the standard `printf` function.

* 💡Step 1: Compile the tester program💡

    The `Makefile` includes a target for compiling the tester program. Simply run the following command to compile the tester:

    ```bash
    make tester
    ```
    This command compiles tester.c along with the necessary object files to create the executable tester.

* 💡 Step 2: Run the tester 💡

    After compilation, run the `tester` executable:
    ```bash
    ./tester
    ```
    This will execute the tests and display the results, comparing the outputs of ft_printf and the original printf.

**💡 Test Results 💡**

![Image](https://github.com/user-attachments/assets/4ab57569-ff46-4c95-ac97-7992d19f22ed)


**💡 Cleanup 💡**

After compiling and testing, you can remove the generated object files and executables using the following commands:

* To remove only object files (*.o):

    ```bash
    make clean
    ```
* To remove object files and the compiled library/executable:
    ```bash
    make fclean
    ```
* To rebuild everything from scratch:
    ```bash 
    make re
    ```

