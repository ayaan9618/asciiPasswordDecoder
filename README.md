

**Password Decoder**

**-by ayaan**

This C program can help you recover forgotten passwords if you know the ASCII values of the characters in reverse order.


This decoder  decode a password based on a given string of digits. The digits represent the ASCII values of the password characters in reverse order. The challenge lies in correctly grouping the digits into valid ASCII value ranges and converting them to their corresponding characters.

**How to use:**

1. Save the code as a `.c` file .
2. Compile it using a C compiler .
3. Run the executable .
4. Enter the ASCII values of the password in reverse order when prompted.

**Example:**

Input: `100,108,114,111,119,32,111,108,108,101,104`

Output: `hello world`

**Note:**

* The program assumes the input string contains 8 values.
* The program assumes the input string contains only valid ASCII values.
* For more complex passwords or non-ASCII characters, additional considerations may be necessary.
