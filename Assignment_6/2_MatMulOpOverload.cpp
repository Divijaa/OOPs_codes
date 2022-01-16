// Write a C++ program for matrix multiplication with following specifications. (Completed and checked)

#include <iostream>
using namespace std;

class matrix
{
    private:
        int** m;
    public:
        void getdata();
        void show();
        friend matrix operator *(matrix m1, matrix m2);
        matrix()
        {
            m = new int*[3];
            for (int i = 0; i < 3; i++)
            {
                m[i] = new int[3];
            }
        }
};

void matrix::getdata()
{
    cout << "Enter the matrix: \n";
    for (int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0 ; j < 3 ; j++)
        {
            cin >> m[i][j];
        }
    }
}

void matrix::show()
{
    cout << "The matrix is: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
}

matrix operator *(matrix m1, matrix m2)
{
    matrix m3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m3.m [i][j] = 0;
            for (int k = 0 ; k < 3 ; k++)
            {
                m3.m[i][j] += m1.m[i][k] * m2.m[k][j];
            }
        }
    }
    return m3;
}

int main()
{
    matrix m1,m2,m3;
    m1.getdata();
    m1.show();
    m2.getdata();
    m2.show();
    m3 = m1 * m2;
    m3.show();
}