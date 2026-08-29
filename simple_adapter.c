#include <stdio.h>
#include <stdlib.h>

static int fetch_builder(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 15) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", fetch_builder(15, 15));
    return 0;
}
