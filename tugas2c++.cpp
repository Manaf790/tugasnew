#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> daftarlagu = {"Ini abadi", "Monokrom"};

    daftarlagu.insert(daftarlagu.begin() + 1, "Everything u are");
    daftarlagu.push_back("aitakatta");
    daftarlagu.erase(daftarlagu.begin());
    cout << "hasil akhir: ";
    for (string item : daftarlagu) {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
