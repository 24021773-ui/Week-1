#include 
using namespace std;
int arr[100];
int n = 0;
void insertFirst(int x) {
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
    n++;
}
void insertLast(int x) {
    arr[n] = x;
    n++;
}
void insertAt(int x, int k) {
    if (k < 0 || k > n) return;
    for (int i = n; i > k; i--) {
        arr[i] = arr[i - 1];
    }
    arr[k] = x;
    n++;
}
void deleteFirst() {
    if (n <= 0) return;
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}
void deleteLast() {
    if (n <= 0) return;
    n--;
}
void deleteAt(int k) {
    if (k < 0 || k >= n) return;
    for (int i = k; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}
void printForward() {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void printReverse() {
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    insertLast(10);
    insertLast(20);
    insertLast(30);
    cout << "Mang ban dau: ";
    printForward();
    cout << "Chen 5 vao dau: ";  
    insertFirst(5); 
    printForward();
    cout << "Chen 15 vao vi tri 2: "; 
    insertAt(15, 2); 
    printForward();
    cout << "Xoa dau: "; 
    deleteFirst(); printForward();
    cout << "Xoa cuoi: "; deleteLast(); 
    printForward();
    cout << "Xoa vi tri 1: ";   
    deleteAt(1);   
    printForward();
    cout << "Duyet nguoc: "; 
    printReverse();
    return 0;
}
