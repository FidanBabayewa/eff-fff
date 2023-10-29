#include <iostream>
#include <string>
using namespace std;

class double_space {
public:
    double_space() {} // Default constructor, no parameters needed

    // Overloaded operator() to implement the effector behavior
    string operator()(const string& input) const {
        string result;
        for (char ch : input) {
            if (ch == ' ') {
                result += "   "; // Double the space
            } else {
                result += ch; // Keep other characters unchanged
            }
        }
        return result;
    }
};

int main() {
    // Create an instance of the double_space effector
    double_space doubleSpaceEffector;

    // Use the effector to double spaces in the given string
    cout << doubleSpaceEffector(" one space,  two  spaces") << endl;

    return 0;
}
