#include <stdint.h>
#include "greatest/greatest.h"

#include "byte_order.h"

TEST test_byte_order(void) {
    uint16_t x = 0x1234;
    uint8_t buf16[2];
    write_uint16_big_endian(buf16, x);
    ASSERT_EQ(read_uint16_big_endian(buf16), x);

    write_uint16_little_endian(buf16, x);
    ASSERT_EQ(read_uint16_little_endian(buf16), x);

    uint32_t y = 0x12345678;
    uint8_t buf32[4];
    write_uint32_big_endian(buf32, y);
    ASSERT_EQ(read_uint32_big_endian(buf32), y);

    write_uint32_little_endian(buf32, y);
    ASSERT_EQ(read_uint32_little_endian(buf32), y);

    float f = 1.23456789;
    uint8_t buf_float[4];
    write_float_big_endian(buf_float, f);
    ASSERT_EQ(read_float_big_endian(buf_float), f);

    write_float_little_endian(buf_float, f);
    ASSERT_EQ(read_float_little_endian(buf_float), f);

    uint64_t z = 0x123456789abcdef0;
    uint8_t buf64[8];
    write_uint64_big_endian(buf64, z);
    ASSERT_EQ(read_uint64_big_endian(buf64), z);

    write_uint64_little_endian(buf64, z);
    ASSERT_EQ(read_uint64_little_endian(buf64), z);

    double d = 1.23456789;
    uint8_t buf_double[8];
    write_double_big_endian(buf_double, d);
    ASSERT_EQ(read_double_big_endian(buf_double), d);

    write_double_little_endian(buf_double, d);
    ASSERT_EQ(read_double_little_endian(buf_double), d);

    PASS();
}

/* Add definitions that need to be in the test runner's main file. */
GREATEST_MAIN_DEFS();

int32_t main(int32_t argc, char **argv) {
    GREATEST_MAIN_BEGIN();      /* command-line options, initialization. */

    RUN_TEST(test_byte_order);

    GREATEST_MAIN_END();        /* display results */
}
