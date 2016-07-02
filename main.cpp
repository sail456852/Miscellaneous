#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

int main()
{
    int temp ;
    std::fstream myfileout("f.txt",std::ios_base::out); //using fstream to write



    srand (time(NULL));
    for(int r = 0 ; r < 101 ; r++)
    {
        for(int c = 0 ; c < 100 ; c++)
        {

            temp = rand()%10 ;
            myfileout << temp  << " ";
        }
        myfileout << std::endl ;
    }


    return 0 ;
}
