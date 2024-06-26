#include <iostream>
#include <chrono>
#include <vector>

using namespace std;
using namespace std::chrono;

int fibonacciDP(int n) {
    if (n <= 1)
        return n;
    
    vector<int> fib(n + 1);
    fib[0] = 0;
    fib[1] = 1;
    
    for (int i = 2; i <= n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    return fib[n];
}

void hitungDanCetakFibonacciDP(int n) {
    auto start = high_resolution_clock::now();
    int result = fibonacciDP(n);
    auto end = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>(end - start).count();
    
    cout << "Fibonacci ke-" << n << " adalah " << result << endl;
    cout << "Waktu eksekusi: " << duration << " mikrodetik" << endl;
}

int main() {
    int nilaiFibonacci[] = {10, 25, 30, 40, 50};
    for (int n : nilaiFibonacci) {
        hitungDanCetakFibonacciDP(n);
        cout << endl;
    }
    
    return 0;
}
