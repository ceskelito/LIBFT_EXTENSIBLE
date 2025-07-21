# LIBFT Manual Page

This repository now includes a comprehensive Unix-style manual page for the libft library.

## Installation

To install the man page for system-wide use:

```bash
sudo cp libft.3 /usr/share/man/man3/
sudo mandb  # Update the man database
```

## Usage

View the man page:

```bash
# From this directory:
man ./libft.3

# If installed system-wide:
man 3 libft
```

## Compilation

To compile programs using libft:

```bash
gcc -I. your_program.c -L. -lft -o your_program
```

Make sure to include the main header:

```c
#include "headers/libft.h"
```

## Man Page Contents

The manual page includes:

- **NAME**: Library description
- **SYNOPSIS**: Function prototypes and include information  
- **DESCRIPTION**: Detailed description of all functions organized by category
- **RETURN VALUE**: Return values for each function type
- **ERRORS**: Error conditions and return values
- **EXAMPLES**: Usage examples for all major function categories
- **SEE ALSO**: Related manual pages
- **AUTHORS**: Library authors
- **NOTES**: Additional implementation details

## Categories Covered

1. **Character Classification** (ft_is*): Test character properties
2. **Memory Operations** (ft_mem*): Memory manipulation functions
3. **String Manipulation** (ft_str*): String processing functions  
4. **Character Conversion** (ft_to*): Character and string conversion
5. **Output Functions** (ft_put*): Output to file descriptors
6. **Linked Lists** (ft_lst*): Singly-linked list operations
7. **Printf Implementation**: Custom printf with format specifiers
8. **Line Reading**: get_next_line for reading files line by line

The manual page follows standard Unix documentation conventions and is compatible with the man(1) command system.