#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;

    string result = "";
    
    for (char c : input) {
        char lowercase_c = tolower(c); // Convert to lowercase
        if (lowercase_c != 'a' && lowercase_c != 'e' && lowercase_c != 'i' && lowercase_c != 'o' && lowercase_c != 'u' && lowercase_c != 'y') {
            result += ".";
            result += lowercase_c;
        }
    }

    cout << result << endl;

    return 0;
}
