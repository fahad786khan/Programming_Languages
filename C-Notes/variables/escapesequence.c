#include <stdio.h>
/* 1. An escape sequence in C programming language is a sequence of characters.
   2. It doesn't represent itself when used inside string literal or character.

| Escape Sequence | Meaning            |
| --------------- | ------------------ |
| \a              | Alarm or Beep      |
| \b              | Backspace          |
| \f              | Form Feed          |
| \n              | New Line           |
| \r              | Carriage Return    |
| \t              | Tab(Horizontal)    |
| \v              | Vertical Tab       |
| \\              | Backslash          |
| \\'             | Single Quote       |
| \\"             | Double Quote       |
| \\?             | Question Mark      |
| \nnn            | Octal number       |
| \xhh            | Hexadecimal number |
| \0              | Null               |

*/
int main()
{
    printf("Hello C \n");
    printf("Hello C \n");
    printf("programming \t was hard");
    return 0;
}