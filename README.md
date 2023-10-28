# _printf Function

The `_printf` function is a custom implementation of the C standard library's `printf` function with limited format specifiers. It is designed to provide basic formatting for various data types. It also returns the count of the printed format.

## Supported Format Specifiers

The `_printf` function currently supports the following format specifiers:

- `%d` and `%i`: Display signed integers.
- `%p`: Display memory addresses.
- `%%`: Display % when passed.
- `%u`: Display integers in unsigned int format.
- `%o`: Display integers in octal format.
- `%S`: Display strings with non-printable characters converted to its ASCII
- `%s`: Display strings.
- `&r`: Display strings in reverse
- `%c`: Display characters.
- `%b`: Display integers in binary format.
- `%x` and `%X`: Display integers in hexadecimal format (lowercase and uppercase, respectively).

## Usage

To use the `_printf` function, include the header file and call it as follows:

#include "main.h"

int main() {
    int len;

    len = _printf("This is an integer: %formatspecifier...", arg...);
    _printf("\n%d\n", len);
    
    return (0);
}
