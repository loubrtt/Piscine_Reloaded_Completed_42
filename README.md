# Piscine Reloaded 🔄

A refresher of C programming fundamentals and Shell scripting from the 42 Piscine, designed to ensure solid foundations before starting the Common Core.

## 📊 Score

**100/100** ✅ Perfect Score!

## 🎯 Description

Piscine Reloaded is a project that revisits key concepts from the 42 Piscine in a condensed format. It covers essential C programming skills, Shell scripting, and introduces the coding standards (Norm) that will be required throughout the curriculum.

## 📋 Project Structure

The project is divided into multiple exercises covering different aspects of programming:

### Shell Exercises (ex00-ex03)
- File and directory manipulation
- Permission management
- Basic shell commands
- File creation and modification

### C Programming Exercises (ex06-ex27)
- Basic functions implementation
- String manipulation
- Memory allocation
- Pointers and arrays
- Function pointers
- File operations
- Makefile creation

## 🔧 Key Exercises

### Basic Functions
- `ft_print_alphabet` - Display the alphabet
- `ft_is_negative` - Check if a number is negative
- `ft_print_numbers` - Display digits 0-9
- `ft_swap` - Swap two integer values
- `ft_putstr` - Display a string
- `ft_strlen` - Calculate string length
- `ft_strcmp` - Compare two strings

### Advanced Functions
- `ft_strdup` - Duplicate a string (with malloc)
- `ft_range` - Create an array of integers
- `ft_count_if` - Count elements that satisfy a condition
- File I/O operations
- Display file content (similar to cat command)

### Makefile
Creation of a library (`libft.a`) with proper compilation rules following these guidelines:
- Recompilation only when necessary
- No relinking
- Standard rules: `all`, `clean`, `fclean`, `re`

## 🛠️ Compilation

Each exercise can be compiled individually:

```bash
# Basic function
gcc -Wall -Wextra -Werror ft_print_alphabet.c -o test

# With main file
gcc -Wall -Wextra -Werror ex12/ft_iterative_factorial.c main.c -o factorial

# Library compilation
cd ex27 && make
```

## 💡 Usage Examples

### ft_swap
```c
#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
    int x = 42;
    int y = 24;
    
    printf("Before: x=%d, y=%d\n", x, y);
    ft_swap(&x, &y);
    printf("After: x=%d, y=%d\n", x, y);
    return (0);
}
```

### ft_strdup
```c
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int main(void)
{
    char *original = "Hello, 42!";
    char *copy = ft_strdup(original);
    
    printf("Original: %s\n", original);
    printf("Copy: %s\n", copy);
    
    free(copy);
    return (0);
}
```

### ft_count_if
```c
int ft_count_if(char **tab, int(*f)(char*));

int is_valid(char *str)
{
    return (str[0] == 'H');
}

int main(void)
{
    char *tab[] = {"Hello", "World", "Hi", "42", NULL};
    int count = ft_count_if(tab, &is_valid);
    
    printf("Count: %d\n", count); // Output: 2
    return (0);
}
```

## 🧰 Technical Requirements

- **Language:** C, Shell
- **Compilation flags:** `-Wall -Wextra -Werror`
- **Norm:** Compliant with 42's coding standard
- **Forbidden functions:** Varies by exercise (specified in each subject)
- **Memory Management:** No memory leaks (checked with valgrind)

## 📚 Concepts Covered

### C Programming
- Variables and data types
- Control structures (if/else, loops)
- Functions and prototypes
- Pointers and memory addresses
- Arrays and strings
- Dynamic memory allocation (malloc/free)
- Function pointers
- File descriptors and I/O operations

### Shell Scripting
- File manipulation commands
- Permission management (chmod)
- File creation and editing
- Basic shell operations

### Development Tools
- GCC compiler and flags
- Makefile creation and usage
- Norm checker
- Memory leak detection

## 🎯 Skills Developed

- Writing clean, normalized C code
- Understanding memory management
- Working with pointers effectively
- Creating reusable functions
- Building libraries with Makefiles
- Shell scripting basics
- Debugging and testing strategies

## 💭 What I Learned

- Reinforced C programming fundamentals
- Mastered 42's coding standard (Norm)
- Improved understanding of pointers and memory
- Learned to create efficient Makefiles
- Practiced writing modular, reusable code
- Developed attention to detail in code formatting

## 🧪 Testing

Test your functions thoroughly:
- Edge cases (NULL pointers, empty strings, etc.)
- Memory leaks with valgrind
- Norm compliance with norminette
- Compare behavior with standard library functions

```bash
# Check for memory leaks
valgrind --leak-check=full ./your_program

# Check Norm compliance
norminette *.c *.h
```

## 📝 Tips for Success

1. **Read the subject carefully** - Each exercise has specific requirements
2. **Test edge cases** - Don't just test the happy path
3. **Check the Norm** - Run norminette frequently
4. **No memory leaks** - Always free allocated memory
5. **Understand, don't copy** - Make sure you understand each concept

## 🏆 Perfect Score Achievement

Achieved 100/100 by:
- Following the Norm strictly
- Testing all edge cases
- Ensuring no memory leaks
- Writing clean, efficient code
- Proper Makefile implementation
- Attention to detail in each exercise

## 📝 License

This project is part of the 42 school curriculum.

---

Made with ☕ at 42
