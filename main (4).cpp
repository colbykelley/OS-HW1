
#include <cstdlib> 
#include <iostream> 
using namespace std;

int main()
{
    int returnCode = system("echo Hello, World!");  // Executing the system command "echo Hello, World!" and storing return value

  
    if (returnCode == 0) {                                      // Checking if the command was executed successfully
        cout << "Command executed successfully." << endl;       // if yes, cout commant executed succesfully
    }
    else {
        cout << "Command execution failed or returned non-zero: " << returnCode << endl;    // if not, cout execution failed
    }

    return 0;=
}