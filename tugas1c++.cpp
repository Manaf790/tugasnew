#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> buah = {"mangga", "jeruk"};

    cout << buah[0] << endl; 

    buah.insert(buah.begin(), "apel");
    buah.insert(buah.begin() + 2, "semangka");  
    buah.push_back("pisang");
    cout << "setelah ditambah:";
    for (string item : buah) {
        cout << item << " ";
    }
    cout << endl;

    buah.erase(buah.begin());
    buah.erase(buah.begin() + 1);
    buah.pop_back();
    cout << "setelah dihapus:";
    for (string item : buah) {
        cout << item << " ";
    }
    cout << endl;

    vector<string> orang = {"Budi", "Siti"};

    cout << orang[0] << endl;
    orang.insert(orang.begin(), "Roni");
    orang.push_back("Dewi");
    orang.erase(orang.begin());
    cout << "hasil akhir: ";
    for (string item : orang) {
        cout << item << " ";
    }
    cout << endl;
return 0;
}
