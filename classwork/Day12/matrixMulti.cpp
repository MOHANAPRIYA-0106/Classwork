
/*  

2*2 matrix multiplication
*/


#include <iostream>

using namespace std;

int main() {
   
    int matrix1[2][2] = { {1, 5}, {3,2} };

    int matrix2[2][2] = {{ 4, 6}, {2, 5} };

    int result[2][2] = { 0 };

  
    for (int i = 0,count=0; i < 2; i++)
    
    {
        for (int j = 0,count=0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++) 
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

   
    cout << "Result of Matrix Multiplication:" << endl;


    for (int i = 0; i < 2; i++) {


        for (int j = 0; j < 2; j++) {

            cout << result[i][j] << " ";


        }

        cout << endl;

    }

    return 0;
}
