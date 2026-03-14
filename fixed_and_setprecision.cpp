//input: 3 12345678912345 a 334.23 14049.30493
//output: 
//3 
//12345678912345 
//a 
//334.23 14049.30493

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    cin >> i >> l >> c >> f >> d;

    cout << i << endl;
    cout << l << endl;
    cout << c << endl;
    cout << fixed << setprecision(3) << f << endl;
    cout << fixed << setprecision(9) << d << endl;

    return 0;
}

//fixed digunakan untuk menguraikan semua bilangan 3.3423e+02 menjadi 334.230
//setprecision digunakan untuk menampilkan jumlah angka dibelkang koma 
//setprecision(3) berarti 3 angka dibelakang koma
