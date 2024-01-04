#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int>& A, int l, int r) {
    while (l < r) {
        int temp = A[l];
        A[l] = A[r];
        A[r] = temp;
        l++;
        r--;
    }
    return A;
}

vector<int> rotateNeg(vector<int>& A, int k) {
    int n = A.size();
    if (k < 0)
        k = n + k;
    reverse(A, 0, n - 1);
    reverse(A, 0, k - 1);
    reverse(A, k, n - 1);
    return A;
}

int main() {
    vector<int> A = {3, 4, 1, 2};  // Corrected the initialization syntax
    rotateNeg(A, 2);
    for (int num : A)
        cout << num << " ";
    // your code goes here
    return 0;
}
