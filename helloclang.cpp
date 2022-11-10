#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    //sudo apt install libc++-dev
    //brew install llvm
    //optional: cmake ninja
    // Extensions: clangd, CodeLLDB
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}