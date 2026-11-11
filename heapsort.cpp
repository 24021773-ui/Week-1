#include <iostream>
#include <algorithm>
using namespace std;
// Chìm
void sink(int pq[], int k, int N) {
    while (2 * k <= N) {
        int j = 2 * k;
        if (j < N && pq[j] < pq[j + 1])
            j++;
        if (pq[k] >= pq[j])
            break;
        swap(pq[k], pq[j]);
        k = j;
    }
}

void heapSort(int a[], int n) {
    int start = n / 2;
    while (start >= 1) {
        sink(a, start, n);
        start--;
    }
    for (int end = n; end > 1; end--) {
        swap(a[1], a[end]);
        sink(a, 1, end - 1);
    }
}

int main() {
    int a[] = {0, 12, 11, 13, 5, 6, 7};
    int n = 6; 
    heapSort(a, n);
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}
