#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    // Replace 'file1.txt' and 'file2.txt' with the desired file paths
    const char* files[] = {"file1.txt", "file2.txt"};        // array of type constant character named files declared & initialized w/ the paths of the files we want to concatenate and display

    // Build the command to concatenate and display content
    string command = "type ";            // declare string named command & initialize it with the initial part of the command which is 'type'
    for (const char* file : files) {     // loop iterates over each file in the 'files' array and appends its path to the 'command' string
        command += file;
        command += " ";
    }

    try {
        // Execute the command using system function
        int result = system(command.c_str());     // try block with system function called with the concatenated command (command.c_str()), result storedin varaible 'result'

        // Check for execution success
        if (result == 0) {                                              // if result is 0, command is successful, so cout command executed succesfully
            cout << "Command executed successfully." << endl;
        } else {                                                        // if result not 0, command failed so cout error executing command
            cerr << "Error executing command." << endl;
        }
    } catch (const exception& e) {                                      // in case of exception, cout an unexpected error occured
        cerr << "An unexpected error occurred: " << e.what() << endl;
    }

    return 0;
}
