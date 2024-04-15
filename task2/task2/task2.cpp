#include <iostream>
using namespace std;

class Gcd {
private:
    int a, b;
public:
    Gcd(int n, int n1) {
        a = n;
        b = n1;
    }

    int findGcd() {
        int temp;
        while (b != 0) {
            temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main() {
    int n, n1;
   
    cin >> n >> n1;
    if (n < 0 || n1 < 0) {
        return 1;
    }
    Gcd gcdObject(n, n1);
    int result = gcdObject.findGcd();
    cout << result;
    return 0;
}
