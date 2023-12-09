Binary to Decimal Converter (C++)
Overview
This Binary to Decimal Converter is a simple C++ program that allows users to convert binary numbers to decimal format. The program provides a command-line interface for easy interaction and conversion.

Features
Single Conversion: Convert a single binary number to its decimal equivalent.
Batch Conversion: Convert multiple binary numbers at once by providing a list or file.
User-Friendly: Intuitive command-line interface with clear instructions for usage.
Usage
Prerequisites
Ensure you have a C++ compiler installed on your system.
Compilation
Clone the repository:

bash
Copy code
git clone https://github.com/yourusername/binary-to-decimal-converter-cpp.git
Navigate to the project directory:

bash
Copy code
cd binary-to-decimal-converter-cpp
Compile the program:

bash
Copy code
g++ converter.cpp -o converter
Usage Example
Single Conversion
bash
Copy code
./converter 1101
Output:

bash
Copy code
Binary: 1101
Decimal: 13
Batch Conversion
bash
Copy code
./converter -f input.txt
Input file (input.txt):

plaintext
Copy code
1010
1100
1111
Output:

plaintext
Copy code
Binary: 1010, Decimal: 10
Binary: 1100, Decimal: 12
Binary: 1111, Decimal: 15
Options
-h or --help: Display help information.
-f FILE or --file FILE: Specify an input file containing a list of binary numbers.
License
This Binary to Decimal Converter (C++) is open-source software licensed under the MIT License.

Contributions
Contributions are welcome! If you find a bug or have suggestions for improvement, please open an issue or submit a pull request.

Author
PRIYANKA DHINAKAR

Acknowledgments
Inspired by the need for a simple binary to decimal conversion tool.
Implemented in C++.
