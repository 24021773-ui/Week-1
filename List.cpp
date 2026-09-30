#include <iostream>
using namespace std;
int arr[100];
int n = 0;
void ChenDau(int x) {
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
    n++;
}
void ChenCuoi(int x) {
    arr[n] = x;
    n++;
}
void ChenViTriK(int x, int k) {
    if (k < 0 || k > n) return;
    for (int i = n; i > k; i--) {
        arr[i] = arr[i - 1];
    }
    arr[k] = x;
    n++;
}
void XoaDau() {
    if (n <= 0) return;
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}
void XoaCuoi() {
    if (n <= 0) return;
    n--;
}
void XoaViTriK(int k) {
    if (k < 0 || k >= n) return;
    for (int i = k; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}
void DuyetXuoi() {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void DuyetNguoc() {
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
