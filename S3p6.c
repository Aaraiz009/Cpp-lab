#include <iostream>
using namespace std;

class File_Handler{
    public:
    File_Handler(){
        cout << "File Opened" << endl;
    }
    ~File_Handler(){
        cout << "File Closed" << endl;
    }
};
int main() {
    File_Handler f1;
    return 0;
}
