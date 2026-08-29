#include <stdio.h>
#include <stdlib.h>

static int build_loader(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 38) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", build_loader(38, 38));
    return 0;
}
