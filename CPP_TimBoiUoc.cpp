#include <iostream>
using namespace std;

int main()
{
    int n;
        cout << "Nhap so: ";
        cin >> n;
        cout << "Uoc so cua " << n << " la: ";
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
        

        cout << "Boi so cua " << n << " la: ";
        for (int i = 1; i <= n; i++) {
                cout << n * i << " ";
            }
        cout << endl;
    
            return 0;
}

