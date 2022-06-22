// The '#include' statement inserts the contents of the specified C++ file into this file during compilation.
// In this case we include the 'iostream' a.k.a. input output stream library. this is a library which is part of C++.
// The 'iostream' library provides ways to output strings/text to the CLI (command line interface) window.   
#include <iostream>

// Every C++ application must have a 'int main() {}' function. This is the starting function for every applications execution
// the 'int' keyword specifies what kind of value the 'main' function returns after its done running.
// If the main function returns a 0 value it means execution was succesfull, if it returns any other number, execution has failed.
// This number then indicates what error caused the program to fail.
int main()
{
    // This is where the actual printing of the "Hello World" text happens.
    // There are multiple elements here which might require some explanation:
    // 
    // The keyword 'std' stands for 'standard', without going into to many details, for now its useful to know
    // that all standard C++ library features can only be accessed by prepending 'std::' before the name of the feature.
    // why: if this would not be necessary, the C++ developer could not simply create their own C++ code element called 'cout',
    // because one already exists. In this way your own 'cout' definition can coexists together with the standard library's 'std::cout'
    //
    // 'std::cout << ' is the C++ standard way of printing output to the console window. 
    // '<< std::endl' is a very non-interesting element of the C++ standard, it makes sure there is a new-line/enter after the printed statement.   
    // Not that all C++ lines of code must be closed by a ';' character, this lets the compiler know when a new code line starts and ends
	std::cout << "Hello world" << std::endl;

    // Optional exercise:
    // add code to print your own text to the console window here below. 

    // The value that is returned to the CLI (command-line interface). We return 0, indication this program executed succesfully.
    return 0;
}
