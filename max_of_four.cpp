#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    return max;
}
int main() {
    int w, x, y, z;
    cin >> w >> x >> y >> z;
    int hasil = max_of_four(w, x, y, z);
    cout << hasil << endl;

    return 0;
}

// 3 4 6 5
//outputnya 6 
//yg keluar hasil max-nya
