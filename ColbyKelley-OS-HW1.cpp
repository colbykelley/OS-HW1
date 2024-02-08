#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;       // variable to store users choice
    int returnCode;   // variable to store return code of system command

    do {              //do-while loop for menu
        // Display menu
        cout << "Menu:\n";
        cout << "1. List directory contents (dir)\n";
        cout << "2. Print working directory (cd)\n";
        cout << "3. Create a new directory (mkdir)\n";
        cout << "4. Display a message (echo)\n";
        cout << "5. Concatenate and create a new text file with content of files (type into)\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;                          //cin users input

        switch (choice) {                       //switch statement based on users choice
       

        //dir implementation
        case 1:                                   
            cout << "Executing command: dir\n";     // cout executing the command dir
            returnCode = system("dir");             // run the command
            if (returnCode == 0) {                  // if ran successfully... (returns 0)
                cout << "Execution ran successfully.\n";    // cout execution ran succesfully
            }
            else {                                          // if no 0 return, means ran unsuccessfully so... 
                cout << "Execution ran unsuccessfully.\n";  // cout ran unseccessfully
            }
            break;                                          // end case
      

        //cd implementation
        case 2:                                     
            cout << "Executing command: cd\n";               // cout executing the command cd
            returnCode = system("cd");                       // run the command
            if (returnCode == 0) {                           // if ran successfully... (returns 0)
                cout << "Execution ran successfully.\n";     // cout execution ran succesfully
            }
            else {                                           // if no 0 return, means ran unsuccessfully so... 
                cout << "Execution ran unsuccessfully.\n";   // cout ran unseccessfully
            }
            break;                                           // end case
        

        //mkdir implementation
        case 3:                                  
        {
            cout << "Executing command: mkdir\n";        // cout executing the command mkdir
            returnCode = system("mkdir new_folder");     // crete new folder named new_folder using the mkdir command
            if (returnCode == 0) {                                              // if ran successfully... (returns 0)
                cout << "Execution ran successfully. Created new_folder.\n";    // cout execution ran seuccesfully
            }
            else {                                                              // if no 0 return, means ran unsuccessfully so... 
                cout << "Execution ran unsuccessfully.\n";                      // cout ran unseccessfully
                break;                                                          // end mkdir case
            }
            cout << "Executing command: rmdir\n";                               // cout executing the command rmdir
            int delResult = system("rmdir /s /q old_folder");                   // declaring int delresult, and removing old_folder
            if (delResult == 0) {                                               // if ran successfully... (returns 0)
                cout << "Successfully removed old_folder.\n";                   // cout ran successfully
            }
            else {                                                              // if no 0 return, means ran unsuccessfully so... 
                cout << "Error: Failed to delete old_folder.\n";                // cout ran unseccessfully
            }   
            break;                                                              //end rmdir case
        }
       

        //echo implementation
        case 4:                                           
            cout << "Executing command: echo\n";            // cout executing the command echo
            returnCode = system("echo Hello, World!");      // run command, followed by "Hello, World!" which is what will be outputted 
            if (returnCode == 0) {                          // if ran successfully... (returns 0)
                cout << "Execution ran successfully.\n";    // cout execution ran seuccesfully
            }
            else {                                          // if no 0 return, means ran unsuccessfully so... 
                cout << "Execution ran unsuccessfully.\n";  // cout ran unseccessfully
            }
            break;                                          //end echo case
       

        //type implementation
        case 5:
            cout << "Executing command: type into\n";                                         // cout executing the command echo
            returnCode = system("type file1.txt file2.txt > concatenated.txt");               // run command, followed by the two file names that are going to be concatenated, create a new file named concatenated.txt to output the concatenated files
            if (returnCode == 0) {                                                            // if ran successfully... (returns 0)
                cout << "Concatenation ran successfully. Created 'concatenated.txt'.\n";      // cout execution ran seuccesfully
            }
            else {                                                                            // if no 0 return, means ran unsuccessfully so... 
                cout << "Concatenation ran unsuccessfully.\n";                                // cout ran unseccessfully
            }
            break;                                                                            //end type case
       
     
        //exiting program case
        case 6:
            cout << "Exiting program.\n";           // cout executing the end program command
            return 0;                               // end the program with return 0
                                                    // if any other number / letter is used, default to invalid choice so....
        default:                
            cout << "Invalid choice. Please try again.\n";      //cout invalid choice
            break;                                  // end exiting program case
        }

    } while (choice != 6);                          // if choice is not case 6, loop again

    return 0;                                   // finish program
}
