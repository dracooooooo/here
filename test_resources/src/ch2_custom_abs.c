#include "io.h"
#include "custom_ops.h"

int main() {
    TEST_START(__BASE_FILE__);
    printf("Before CUSTOM_ABS call\n");
    custom_abs(-7);
    printf("After CUSTOM_ABS call (recognition only)\n");
    pass();
    return 0;
}
