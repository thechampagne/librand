#ifndef __RAND_H__
#define __RAND_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Generate random 8-bit signed number.
 *
 * Example:
 * * *
 * int main()
 * {
 *  int8_t num = random_i8();
 *  printf("%d\n", num);
 *  return 0;
 * }
 * * *
 *
 * @return random int8_t
 */
extern int8_t random_i8();


/**
 * Generate random 16-bit signed number.
 *
 * Example:
 * * *
 * int main()
 * {
 *  int8_t num = random_i16();
 *  printf("%d\n", num);
 *  return 0;
 * }
 * * *
 *
 * @return random int16_t
 */
extern int16_t random_i16();


/**
 * Generate random 32-bit signed number.
 *
 * Example:
 * * *
 * int main()
 * {
 *  int8_t num = random_i32();
 *  printf("%d\n", num);
 *  return 0;
 * }
 * * *
 *
 * @return random int32_t
 */
extern int32_t random_i32();


/**
 * Generate random 64-bit signed number.
 *
 * Example:
 * * *
 * int main()
 * {
 *  int8_t num = random_i64();
 *  printf("%d\n", num);
 *  return 0;
 * }
 * * *
 *
 * @return random int64_t
 */
extern int64_t random_i64();


/**
 * Generate random 8-bit unsigned number.
 *
 * Example:
 * * *
 * int main()
 * {
 *  int8_t num = random_u8();
 *  printf("%d\n", num);
 *  return 0;
 * }
 * * *
 *
 * @return random uint8_t
 */
extern uint8_t random_u8();


/**
 * Generate random 16-bit unsigned number.
 *
 * Example:
 * * *
 * int main()
 * {
 *  int8_t num = random_u16();
 *  printf("%d\n", num);
 *  return 0;
 * }
 * * *
 *
 * @return random uint16_t
 */
extern uint16_t random_u16();


/**
 * Generate random 32-bit unsigned number.
 *
 * Example:
 * * *
 * int main()
 * {
 *  int8_t num = random_u32();
 *  printf("%d\n", num);
 *  return 0;
 * }
 * * *
 *
 * @return random uint32_t
 */
extern uint32_t random_u32();


/**
 * Generate random 64-bit unsigned number.
 *
 * Example:
 * * *
 * int main()
 * {
 *  int8_t num = random_u64();
 *  printf("%d\n", num);
 *  return 0;
 * }
 * * *
 *
 * @return random uint64_t
 */
extern uint64_t random_u64();


/**
 * Generate random 8-bit signed number from the
 * giving range.
 *
 * Example:
 * * *
 * int main()
 * {
 *  int8_t num = random_range_i8(1,100);
 *  printf("%d\n", num);
 *  return 0;
 * }
 * * *
 *
 * @param min minimum number
 * @param max maximum number
 * @return random int8_t
 */
extern int8_t random_range_i8(int8_t min, int8_t max);


/**
 * Generate random 16-bit signed number from the
 * giving range.
 *
 * Example:
 * * *
 * int main()
 * {
 *  int8_t num = random_range_i16(1,100);
 *  printf("%d\n", num);
 *  return 0;
 * }
 * * *
 *
 * @param min minimum number
 * @param max maximum number
 * @return random int16_t
 */
extern int16_t random_range_i16(int16_t min, int16_t max);


/**
 * Generate random 32-bit signed number from the
 * giving range.
 *
 * Example:
 * * *
 * int main()
 * {
 *  int8_t num = random_range_i32(1,100);
 *  printf("%d\n", num);
 *  return 0;
 * }
 * * *
 *
 * @param min minimum number
 * @param max maximum number
 * @return random int32_t
 */
extern int32_t random_range_i32(int32_t min, int32_t max);


/**
 * Generate random 64-bit signed number from the
 * giving range.
 *
 * Example:
 * * *
 * int main()
 * {
 *  int8_t num = random_range_i64(1,100);
 *  printf("%d\n", num);
 *  return 0;
 * }
 * * *
 *
 * @param min minimum number
 * @param max maximum number
 * @return random int64_t
 */
extern int64_t random_range_i64(int64_t min, int64_t max);


/**
 * Generate random 8-bit unsigned number from the
 * giving range.
 *
 * Example:
 * * *
 * int main()
 * {
 *  int8_t num = random_range_u8(1,100);
 *  printf("%d\n", num);
 *  return 0;
 * }
 * * *
 *
 * @param min minimum number
 * @param max maximum number
 * @return random uint8_t
 */
extern uint8_t random_range_u8(uint8_t min, uint8_t max);


/**
 * Generate random 16-bit unsigned number from the
 * giving range.
 *
 * Example:
 * * *
 * int main()
 * {
 *  int8_t num = random_range_u16(1,100);
 *  printf("%d\n", num);
 *  return 0;
 * }
 * * *
 *
 * @param min minimum number
 * @param max maximum number
 * @return random uint16_t
 */
extern uint16_t random_range_u16(uint16_t min, uint16_t max);


/**
 * Generate random 32-bit unsigned number from the
 * giving range.
 *
 * Example:
 * * *
 * int main()
 * {
 *  int8_t num = random_range_u32(1,100);
 *  printf("%d\n", num);
 *  return 0;
 * }
 * * *
 *
 * @param min minimum number
 * @param max maximum number
 * @return random uint32_t
 */
extern uint32_t random_range_u32(uint32_t min, uint32_t max);


/**
 * Generate random 64-bit unsigned number from the
 * giving range.
 *
 * Example:
 * * *
 * int main()
 * {
 *  int8_t num = random_range_u64(1,100);
 *  printf("%d\n", num);
 *  return 0;
 * }
 * * *
 *
 * @param min minimum number
 * @param max maximum number
 * @return random uint64_t
 */
extern uint64_t random_range_u64(uint64_t min, uint64_t max);

#ifdef __cplusplus
}
#endif

#endif // __RAND_H__
