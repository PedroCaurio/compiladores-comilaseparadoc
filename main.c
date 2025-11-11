#include <stdio.h>
#include "soma.h"
#include "subtrai.h"
#include "multiplica.h"
#include "divide.h"

int main(void)
{
    int s, sub, mul, div;
    s = soma(4, 6);
    sub = subtrai(10, 7);
    mul = multiplica(2, 2);
    div = divide(10, 5);
    printf("soma = %d\nsubtracao = %d\nmultiplicacao = %d\ndivisao = %d", s, sub, mul, div);

    return 0;
}
