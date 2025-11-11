#include <stdio.h>
#include "soma.h"
#include "subtrai.h"
#include "multiplica.h"
#include "divide.h"
#include "absoluto.h"
#include "fatorial.h"

int main(void) {
    int s, sub, mul, div, neg, fat;
    s = soma(4, 6);
    sub = subtrai(10, 7);
    mul = multiplica(2, 2);
    div = divide(10, 5);
    neg = absoluto(-5);
    fat = fatorial(3);
    printf("soma = %d\nsubtracao = %d\nmultiplicacao = %d\ndivisao = %d\nabsoluto (-5)= %d\nfatorial = %d", s, sub, mul, div, neg, fat);

    return 0;
}