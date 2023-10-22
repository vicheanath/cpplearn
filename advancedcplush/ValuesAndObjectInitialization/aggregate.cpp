#include <iostream> 

struct short_array_3
{
    int data3[3];
};

struct short_array_5
{
   int data5[5];
};

struct tow_arrays
{
    short_array_3 _3;
    short_array_5 _5;
    int x;
};

void main(){

    constexpr tow_arrays two = {{3,2,1},{5,4,3,2,1},324};
    static_assert(two.x == 324, "");


    // Aggregates in real life

    constexpr std::array<unsigned, 3> bounds{{3,4,5}};
    static_assert(bounds[1] == 4,"");
}