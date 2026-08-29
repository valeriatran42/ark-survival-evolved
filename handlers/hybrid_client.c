#include <stdio.h>
#include <stdlib.h>

static int flush_gateway(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 32) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", flush_gateway(32, 32));
    return 0;
}
