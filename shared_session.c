#include <stdio.h>
#include <stdlib.h>

static int build_adapter(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 20) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", build_adapter(20, 20));
    return 0;
}
