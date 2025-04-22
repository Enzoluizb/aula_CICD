#include <stdio.h>
#include <assert.h>

void testar() {
    // Função de teste simples
    assert(1 == 1);  // Verifica se 1 é igual a 1
    printf("Teste passou!\n");
}

int main() {
    testar();
    return 0;
}
