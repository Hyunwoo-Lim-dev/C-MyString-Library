#include <stdio.h>
#include <string.h>
#include "my_string.h"

int main(void) {
    printf("=== string.h vs my_string.h 기능 비교 테스트 ===\n\n");

    char model1[] = "SK_HYNIX_SSD_P41";
    char model2[] = "SK_HYNIX_SSD_P31";
    printf("[1] strlen 비교: 표준=%d, 내함수=%d\n", (int)strlen(model1), my_strlen(model1));
    printf("[2] strcmp 비교: 표준=%d, 내함수=%d\n\n", strcmp(model1, model2), my_strcmp(model1, model2));
