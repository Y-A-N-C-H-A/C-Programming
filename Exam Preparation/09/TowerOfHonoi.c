#include <stdio.h>

void towerOfHanoi(int n, char from_peg, char to_peg, char aux_peg) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from_peg, to_peg);
        return;
    }
    // Крок 1: Перемістити n-1 дисків з from_peg на aux_peg
    towerOfHanoi(n - 1, from_peg, aux_peg, to_peg);
    // Крок 2: Перемістити найбільший диск з from_peg на to_peg
    printf("Move disk %d from %c to %c\n", n, from_peg, to_peg);
    // Крок 3: Перемістити n-1 дисків з aux_peg на to_peg
    towerOfHanoi(n - 1, aux_peg, to_peg, from_peg);
}

int main() {
    int n = 3; // Кількість дисків
    towerOfHanoi(n, 'A', 'C', 'B'); // Переміщаємо диски з стержня A на стержень C
    return 0;
}
