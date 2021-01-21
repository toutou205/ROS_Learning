
// #include <iostream>
// using namespace std;
 
// int main()
// {
//     cout << "hello" << endl;
//     return 0;
// }


#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    vector<string> msg = {"Hello", "C++", "World", "from", "VS Code!"};
    
    
    for (const string& word : msg) {
        cout << word << " "; 
    }
    cout << endl;
    cout << "this is the test" << endl;
    cout << "this is the test" << endl;
    cout << "this is the test" << endl;
    cout << endl;
}