#include <stdio.h>
#include "ft_printf.h"

void test_basic_printf(void) {

    int ret1, ret2;

    printf("Test 1: Basic tests\n");

    ret1 = ft_printf("Hello, %s! The number is %d.\n", "Marouane", 42);
    ret2 = printf("Hello, %s! The number is %d.\n", "Marouane", 42);

    if (ret1 == ret2)
        printf("✅ Test Passed\n");
    else
        printf("❌ Test Failed\n");
}

void test_edge_cases(void) {

    int ret1, ret2;

    int *pointer = &ret1;

    printf("\nTest 2: Edge cases\n");

    ret1 = ft_printf("Character: %c, String: %s, Pointer: %p\n", 'A', "Test", pointer);
    ret2 = printf("Character: %c, String: %s, Pointer: %p\n", 'A', "Test", pointer);

    if (ret1 == ret2)
        printf("✅ Test Passed\n");
    else
        printf("❌ Test Failed\n");
}

void test_hexadecimal(void) {

    int ret1, ret2;

    printf("\nTest 3: Hexadecimal output\n");

    ret1 = ft_printf("Hex: %x, %X\n", 255, 255);
    ret2 = printf("Hex: %x, %X\n", 255, 255);

    if (ret1 == ret2)
        printf("✅ Test Passed\n");
    else
        printf("❌ Test Failed\n");
}

void test_unsigned(void) {

    int ret1, ret2;

    printf("\nTest 4: Unsigned integer output\n");

    ret1 = ft_printf("Unsigned: %u\n", 4294967295);
    ret2 = printf("Unsigned: %lu\n", 4294967295);

    if (ret1 == ret2)
        printf("✅ Test Passed\n");
    else
        printf("❌ Test Failed\n");
}

void test_percent(void) {

    int ret1, ret2;

    printf("\nTest 5: Percent sign\n");

    ret1 = ft_printf("Percent sign: %%\n");
    ret2 = printf("Percent sign: %%\n");

    if (ret1 == ret2)
        printf("✅ Test Passed\n");
    else
        printf("❌ Test Failed\n");
}

void test_multiple_formats(void) {

    int ret1, ret2;

    printf("\nTest 6: Multiple formats\n");

    ret1 = ft_printf("Char: %c, String: %s, Int: %d, Hex: %x\n", 'A', "Hello", 1234, 255);
    ret2 = printf("Char: %c, String: %s, Int: %d, Hex: %x\n", 'A', "Hello", 1234, 255);
    
    if (ret1 == ret2)
        printf("✅ Test Passed\n");
    else
        printf("❌ Test Failed\n");
}

void test_large_input(void) {

    int ret1, ret2;

    printf("\nTest 7: Large input\n");

    ret1 = ft_printf("Large input: %s\n", "This is a very large string that will test the function's ability to handle larger inputs without issues.");
    ret2 = printf("Large input: %s\n", "This is a very large string that will test the function's ability to handle larger inputs without issues.");
    
    if (ret1 == ret2)
        printf("✅ Test Passed\n");
    else
        printf("❌ Test Failed\n");
}

int main() {

    test_basic_printf();
    test_edge_cases();
    test_hexadecimal();
    test_unsigned();
    test_percent();
    test_multiple_formats();
    test_large_input();

}
