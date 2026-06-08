#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream dosya("index.html");
    if (dosya.is_open()) {
        dosya << "\n";
        // Yukarıdaki HTML kodlarının aynısını buraya ekleyerek C++ ile de üretebilirsin.
        dosya.close();
        cout << "index.html basariyla senkronize edildi!" << endl;
    }
    return 0;
}
