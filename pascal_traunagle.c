// #include <stdio.h>

// int main(){
//     int rows;
//     for (int i = 0; i <= rows; i++)
//     {
//         int arr[rows+2];
//         for (int j = 0; j <= i+2; i++)
//         {
//            arr[0]=0;
//            arr[i+1]=0;
//            arr[1]=1;
//            arr[i]=1;

//            for (int k = 2; k <   ; i++)
//            {
//             /* code */
//            }
           
//         }
        

//     }
    
//     return 0;
// }
#include <stdio.h>

void generatePascalsTriangle(int n) {
    // Create a 2D array to store Pascal's triangle
    int triangle[n][n];

    for (int i = 0; i < n; i++) {
        // The first and last values in each row are always 1
        triangle[i][0] = 1;
        triangle[i][i] = 1;

        // Fill the internal values of the row
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    // Print Pascal's triangle
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n = 5;  // Number of rows
    generatePascalsTriangle(n);

    return 0;
}

