/ Author Reise Young
// Description: Hello World in C++
//============================================================

#include <iostream>
using namespace std;

// Function Prototypes
int hello1Function(string name1);

int main() {
string name1="Reise Young";
hello1Function(name1);
return 0;
}

int hello1Function(string name1)
{
cout << "Hello: " << name1 << endl;
return 0;
}
