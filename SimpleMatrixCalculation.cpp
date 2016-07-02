#include <iostream>
#include <fstream>

int main()
{
    std::fstream myfile("f.txt",std::ios_base::in); //using fstream to read
    std::fstream myfileout("f2.txt",std::ios_base::out); //using fstream to write


    int A[100][100] = {0};
    int C[100][100] = {0};
    int x[100] = {0};

    //reading


    for(int r = 0 ; r < 101 ; r++)
    {
        for(int c = 0 ; c < 100 ; c++)
        {
            if( r == 100)
            {
                myfile >> x[c];
            }
            else
                myfile >> A[r][c] ;
        }
    }

    //calculating and writing
    for(int r = 0 ; r < 100 ; r++)
    {
        for(int c = 0 ; c < 100 ; c++)
        {
            C[r][c] = A[r][c]*x[c];
            myfileout << C[r][c] << " ";
        }
        myfileout << std::endl ;
    }


    return 0 ;
}
