#include <stdio.h>

int topla(int a, int b);

int main()
{
    int sonuc = topla(10, 20);
    printf("Sonuc=%d", sonuc);
    return 0;
}

int topla(int a, int b){
    return a + b;
}