#include <iostream>
using namespace std;

class Matrix{
    int m[3][3];
    public:
    void read(void){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cout << "m["<< i <<"][" << j <<"] = ";
                cin >> m[i][j];
                cout << "\n";
            }
        }
    }
    const void display(void){  // const keyword is used for the member function which doesnot changes the data value
        for(int i = 0; i < 3; i++){
            cout << "\n";
            for(int j = 0; j < 3; j++){
                cout << m[i][j] << "\t";
            }
        }
    }
    friend Matrix transpose(Matrix);
};

Matrix transpose(Matrix m1){
    Matrix m2;
        for(int i = 0; i < 3; i++){
            cout << "\n";
            for(int j = 0; j < 3; j++){
                m2.m[i][j] = m1.m[j][i];
            }
        }
    return m2;
}

int main(void){
    Matrix mat1, mat2;
    mat1.read();
    cout << "Before Transpose" << "\n";
    mat1.display();
    mat2 = transpose(mat1);
    cout << "After Transpose" << "\n";
    mat2.display();
    return 0;
}