#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int h, m, s;
    
    // Leer la hora, minuto y segundo en formato hora:minuto:segundo
    scanf("%d:%d:%d", &h, &m, &s);
    
    // Aumentar un segundo
    s++;
    
    // Si los segundos llegan a 60, ponerlos en 0 y aumentar el minuto
    if (s == 60) {
        s = 0;
        m++;
    }
    
    // Si los minutos llegan a 60, ponerlos en 0 y aumentar la hora
    if (m == 60) {
        m = 0;
        h++;
    }
    
    // Si las horas llegan a 24, ponerlas en 0
    if (h == 24) {
        h = 0;
    }
    
    // Imprimir la nueva hora en formato hora:minuto:segundo
    printf("%02d:%02d:%02d\n", h, m, s);
    
    return 0;
}
