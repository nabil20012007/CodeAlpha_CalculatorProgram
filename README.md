# CodeAlpha_CalculatorProgram
A robust, interactive command-line calculator written in standard C (C99), developed as part of the CodeAlpha C Programming Internship. This program evaluates basic mathematical expressions with built-in input validation, error handling, and high-precision output formatting.

Features
Supported Operations: Addition (+), Subtraction (-), Multiplication (*), and Division (/).

Input Validation: Utilizes sscanf to parse user input safely, ensuring expressions adhere strictly to the format: <number> <operator> <number>.

Error Handling: Detects and prevents division-by-zero errors and catches unsupported operators gracefully.

Precision Formatting: Displays results using %.10g to handle both integers and floating-point numbers neatly without trailing zeros.

Interactive Loop: Runs continuously until the user types q or Q to quit.

Prerequisites
To compile and run this program, you will need a standard C compiler (such as GCC, Clang, or an IDE like Code::Blocks).

GCC Compiler Check:

Bash
gcc --version
Getting Started
1. Clone or Download
Clone this repository or download the calculator.c source file to your local machine:

Bash
git clone https://github.com/nabil20012007/CodeAlpha_CalculatorProgram.git
cd CodeAlpha_CalculatorProgram
2. Compile the Code
Compile the source file using gcc:

Bash
gcc calculator.c -o calculator
3. Run the Program
Execute the compiled binary:

Linux / macOS:

Bash
./calculator
Windows (Command Prompt / PowerShell):

DOS
calculator.exe
Usage Example
Once the program is running, enter an expression separated by spaces, or type q to exit:

Plaintext
============= CODEALPHA CALCULATOR =============
Enter an expression such as  12.5 * 4    (q to quit)

> 12.5 * 4
  12.5 * 4 = 50

> 100 / 3
  100 / 3 = 33.33333333

> 5 / 0
  Error: division by zero is undefined.

> q

Goodbye!

Thank you for using my calculator!

Kind regards to CodeAlpha!
Code Architecture
calculate() Function: Takes two operands and an operator, performs the calculation inside a switch-case block, handles division by zero, and returns a success/error status code.

main() Function: Manages the input buffer using fgets, validates syntax via sscanf, handles the interactive for(;;) loop, and provides a clean termination sequence.

License
This project is developed for educational and professional internship purposes under CodeAlpha.
