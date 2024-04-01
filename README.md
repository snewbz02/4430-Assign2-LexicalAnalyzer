#Lexical Analyzer in C++

This is a simple C++ program that serves as a basic lexical analyzer. It reads a text file, tokenizes it, and identifies keywords, operators, integers, identifiers, and punctuations.

## Usage

1. **Compile the Code**:
   - Ensure you have a C++ compiler installed (e.g., g++).
   - Open a terminal and navigate to the directory containing the code.
   - Compile the code with the following command:
     g++ lexical_analyzer.cpp -o lexical_analyzer
     
2. **Run the Program**:
   - Run the compiled program with the following command:
     ./lexical_analyzer
   - The program will prompt you to enter the name of the input file you want to analyze. Provide the file name (e.g., "test1.txt") and press Enter.

3. **Output**:
   - The program will analyze the input file and display the identified tokens along with their types (Keyword, Operator, Integer, Identifier, or Punctuation).

## Supported Features

- Keywords: The program identifies a predefined set of keywords.
- Operators: Recognizes basic arithmetic operators (+, -, *, /, %) and assignment (=).
- Integers: Identifies integer literals.
- Identifiers: Treats any text that doesn't match the above categories as identifiers.
- Punctuation: Anything not recognized as the above categories is treated as punctuation.

## Adding Keywords and Operators

You can expand the keywords, operators, and punctuation sets in the code to include more keywords, operations, and punctuation as needed.

## Sample Test Files

You can create and use your own test files (e.g., test1.txt, test2.txt). Ensure that the file to be analyzed is in the same directory as the executable.

## References

https://www.thecrazyprogrammer.com/2017/02/lexical-analyzer-in-c.html

https://favtutor.com/blogs/lexical-analyzer-cpp


