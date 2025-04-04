#include <iostream>
using namespace std;

class Matrix{
    int **p;
    int d1,d2;
    public:
    Matrix(int x, int y);
    void get_element(int i, int j, int value){
        p[i][j] = value;
    }
    int &put_element(int i, int j){
        return p[i][j];
    }
};
Matrix :: Matrix(int x, int y){
    d1 = x;
    d2 = y;
    p = new int *[d1];
    for(int i = 0; i < d1; i++){
        p[i] = new int[d2];
    }
}

int main(void){
    int m,n;
    cout << "Enter the values of m and n: " << endl;
    cin >> m >> n;
    Matrix A(m,n);
    cout << "Enter matrix elements row by row" << endl;
    int i,j,value;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            cin >> value;
            A.get_element(i,j,value);
        }
    }
    cout <<"\n" ;
    cout <<  A.put_element(1,1);
    return 0;
}