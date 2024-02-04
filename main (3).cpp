#include <cstdlib>

int main() {
 
    int mkdirResult = system("mkdir new_folder");    // Create a new directory named "new_folder"
    if (mkdirResult != 0) {
        // Handle error if directory creation fails
        // For example, print an error message or exit the program
        return 1;
    }

    int delResult = system("rmdir /s /q old_folder");  // Remove an existing directory named "old_folder" and its contents recursively
    if (delResult != 0) {
        // Handle error if directory deletion fails
        // For example, print an error message or exit the program
        return 1;
    }

    return 0; 
}