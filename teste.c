#include <stdio.h>
#include <assert.h>

int somar(int a, int b) {
    return a + b;
}

void testar() {
    assert(somar(2, 3) == 5);
    assert(somar(-1, 1) == 0);
    printf("Todos os testes passaram!\n");
}

int main() {
    testar();
    return 0;
}
