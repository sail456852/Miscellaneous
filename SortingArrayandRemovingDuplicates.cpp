#include <iostream>
#include <algorithm>
#include <vector>

void Print(std::vector<int>& v)
{
    for (size_t i =0 ; i < v.size() ; i++ )
    {
        std::cout << v[i] << std::endl ;
    }
}

int main()
{

    //Why it works okay ,if I make everything inside main() ????
    int a[]  = {9,2,3,4,5,5,6,4,3,2,1};
    int b[]  = {212,21,32,412,5,5};

    int FinalLength = sizeof(a)/sizeof(a[0])+sizeof(b)/sizeof(b[0]);

    int* p =new int[FinalLength];
    //Here you substitute this array with a static one , but I mean ,maybe this can be packed into a class

    //copy
    std::copy(a,a+sizeof(a)/sizeof(a[0]),p);
    std::copy(b,b+sizeof(b)/sizeof(b[0]),p+sizeof(a)/sizeof(a[0]));

    //converting
    std::vector<int> vec(p,p+FinalLength);

    sort( vec.begin(), vec.end() );
    vec.erase( unique( vec.begin(), vec.end() ), vec.end() );

    Print(vec);
    return 0 ;
}
