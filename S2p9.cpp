// 9. Pointer to Array of Pointers 
// Create an array of string pointers (e.g., names of 5 students) and print them using 
// pointer notation. 

#include <iostream>
using namespace std;

int main() {
    
    const char *names[5] = {
        "Asnhuman",
        "Nitan",
        "Anmol",
        "Rajat",
        "Saksham"
    };

    const char **p = names;

    cout << "Student Names:\n";
    for (int i = 0; i < 5; i++) {
        cout << * (p + i) << endl;   
    }

    return 0;
}
