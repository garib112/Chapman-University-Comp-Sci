#include <iostream>

using namespace std;

int main(int argc, char * argv[]) {

    int um = 0;
    int jazz = 0;
    string input;

    cout << "Press u for um, j for jazz." << endl;

    while (true) {
        cout << "Um Counter: " << um << endl;
        cout << "Jazz Counter: " << jazz << endl;
        cin >> input;

        if (input == "u") {
            um++;
        }
        else if (input == "j") {
            jazz++;
        }
    }



    return 0;
}
