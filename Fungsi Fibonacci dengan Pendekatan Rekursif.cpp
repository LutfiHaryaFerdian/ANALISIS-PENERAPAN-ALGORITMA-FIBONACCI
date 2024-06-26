#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int fibonacciRekursif(int n) {
    if (n <= 1)
        return n;
    return fibonacciRekursif(n - 1) + fibonacciRekursif(n - 2);
}

void hitungDanCetakFibonacciRekursif(int n) {
    auto start = high_resolution_clock::now();
    int result = fibonacciRekursif(n);
    auto end = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>(end - start).count();
    
    cout << "Fibonacci ke-" << n << " adalah " << result << endl;
    cout << "Waktu eksekusi: " << duration << " mikrodetik" << endl;
}

int main() {
    int nilaiFibonacci[] = {10, 25, 30, 40, 50};
    for (int n : nilaiFibonacci) {
        hitungDanCetakFibonacciRekursif(n);
        cout << endl;
    }
    
    return 0;
}
