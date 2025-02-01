#ifndef BYTE_ORDER_H
#define BYTE_ORDER_H

#include <stdint.h>
#include <string.h>

static inline uint16_t read_uint16_big_endian(const uint8_t* buffer) {
    return ((uint16_t)buffer[0] << 8) |
           ((uint16_t)buffer[1]);
}

static inline void write_uint16_big_endian(uint8_t* buffer, uint16_t value) {
    buffer[0] = (uint8_t)(value >> 8);
    buffer[1] = (uint8_t)(value);
}

static inline uint16_t read_uint16_little_endian(const uint8_t* buffer) {
    return ((uint16_t)buffer[1] << 8) |
           ((uint16_t)buffer[0]);
}

static inline void write_uint16_little_endian(uint8_t* buffer, uint16_t value) {
    buffer[1] = (uint8_t)(value >> 8);
    buffer[0] = (uint8_t)(value);
}

static inline uint32_t read_uint32_big_endian(const uint8_t* buffer) {
    return ((uint32_t)buffer[0] << 24) |
           ((uint32_t)buffer[1] << 16) |
           ((uint32_t)buffer[2] << 8) |
           ((uint32_t)buffer[3]);
}

static inline void write_uint32_big_endian(uint8_t* buffer, uint32_t value) {
    buffer[0] = (uint8_t)(value >> 24);
    buffer[1] = (uint8_t)(value >> 16);
    buffer[2] = (uint8_t)(value >> 8);
    buffer[3] = (uint8_t)(value);
}

static inline uint32_t read_uint32_little_endian(const uint8_t* buffer) {
    return ((uint32_t)buffer[3] << 24) |
           ((uint32_t)buffer[2] << 16) |
           ((uint32_t)buffer[1] << 8) |
           ((uint32_t)buffer[0]);
}

static inline void write_uint32_little_endian(uint8_t* buffer, uint32_t value) {
    buffer[3] = (uint8_t)(value >> 24);
    buffer[2] = (uint8_t)(value >> 16);
    buffer[1] = (uint8_t)(value >> 8);
    buffer[0] = (uint8_t)(value);
}

static inline uint64_t read_uint64_big_endian(const uint8_t* buffer) {
    return ((uint64_t)buffer[0] << 56) |
           ((uint64_t)buffer[1] << 48) |
           ((uint64_t)buffer[2] << 40) |
           ((uint64_t)buffer[3] << 32) |
           ((uint64_t)buffer[4] << 24) |
           ((uint64_t)buffer[5] << 16) |
           ((uint64_t)buffer[6] << 8) |
           ((uint64_t)buffer[7]);
}

static inline void write_uint64_big_endian(uint8_t* buffer, uint64_t value) {
    buffer[0] = (uint8_t)(value >> 56);
    buffer[1] = (uint8_t)(value >> 48);
    buffer[2] = (uint8_t)(value >> 40);
    buffer[3] = (uint8_t)(value >> 32);
    buffer[4] = (uint8_t)(value >> 24);
    buffer[5] = (uint8_t)(value >> 16);
    buffer[6] = (uint8_t)(value >> 8);
    buffer[7] = (uint8_t)(value);
}

static inline uint64_t read_uint64_little_endian(const uint8_t* buffer) {
    return ((uint64_t)buffer[7] << 56) |
           ((uint64_t)buffer[6] << 48) |
           ((uint64_t)buffer[5] << 40) |
           ((uint64_t)buffer[4] << 32) |
           ((uint64_t)buffer[3] << 24) |
           ((uint64_t)buffer[2] << 16) |
           ((uint64_t)buffer[1] << 8) |
           ((uint64_t)buffer[0]);
}

static inline void write_uint64_little_endian(uint8_t* buffer, uint64_t value) {
    buffer[7] = (uint8_t)(value >> 56);
    buffer[6] = (uint8_t)(value >> 48);
    buffer[5] = (uint8_t)(value >> 40);
    buffer[4] = (uint8_t)(value >> 32);
    buffer[3] = (uint8_t)(value >> 24);
    buffer[2] = (uint8_t)(value >> 16);
    buffer[1] = (uint8_t)(value >> 8);
    buffer[0] = (uint8_t)(value);
}

#endif /* BYTE_ORDER_H */
