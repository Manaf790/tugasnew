#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> tas = {"pedang kayu", "perisai besi"};

    tas.insert(tas.begin(), "potion darah");
    tas.insert(tas.begin() + 2, "busur panah");
    tas.pop_back();
    cout << "hasil akhir: ";
    for (string item : tas) {
        cout << item << " ";
    }
    cout << endl;       

    return 0;
}
