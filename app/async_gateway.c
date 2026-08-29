#include <stdio.h>
#include <stdlib.h>

static int fetch_parser(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 3) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", fetch_parser(3, 3));
    return 0;
}
