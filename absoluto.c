#include "absoluto.h"

int absoluto(int x)
{   
    if (x < 0){
        return ~x+1;
    }
    return x;
}

