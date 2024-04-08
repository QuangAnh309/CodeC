#include <stdio.h>

//Function returns the values of row n, column k in triangle.
int binomialCoefficient(int n, int k){
    //Two values are on bound having value 1;
    if (k == 0 || k == n){
        return 1;
    }else{
        // Parameter (n - 1, k - 1) ensures that k will equal to 0 after some recursion.
        // Parameter (n - 1, k) ensures that k will equal to n after some recursion.
        // Each number is the sum of 2 numbers above it.
        return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
    }
}

// Function to print Pascal's Triangle
void printPascalsTriangle(int rows){
    // ++i or i++ in for loop is the same.
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%d ", binomialCoefficient(i, j));
        }
        printf("\n");
    }
}

int main() {
    int numRows;
    scanf("%d", &numRows);
    printPascalsTriangle(numRows);
    return 0;
}
