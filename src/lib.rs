use rand::prelude::*;

#[no_mangle]
pub extern "C" fn random_i8() -> i8 {
  let mut rng = thread_rng();
  let num: i8 = rng.gen();
  num
}

#[no_mangle]
pub extern "C" fn random_i16() -> i16 {
  let mut rng = thread_rng();
  let num: i16 = rng.gen();
  num
}

#[no_mangle]
pub extern "C" fn random_i32() -> i32 {
  let mut rng = thread_rng();
  let num: i32 = rng.gen();
  num
}

#[no_mangle]
pub extern "C" fn random_i64() -> i64 {
  let mut rng = thread_rng();
  let num: i64 = rng.gen();
  num
}

#[no_mangle]
pub extern "C" fn random_u8() -> u8 {
  let mut rng = thread_rng();
  let num: u8 = rng.gen();
  num
}

#[no_mangle]
pub extern "C" fn random_u16() -> u16 {
  let mut rng = thread_rng();
  let num: u16 = rng.gen();
  num
}

#[no_mangle]
pub extern "C" fn random_u32() -> u32 {
  let mut rng = thread_rng();
  let num: u32 = rng.gen();
  num
}

#[no_mangle]
pub extern "C" fn random_u64() -> u64 {
  let mut rng = thread_rng();
  let num: u64 = rng.gen();
  num
}

#[no_mangle]
pub extern "C" fn random_range_i8(min: i8, max: i8) -> i8 {
  let mut rng = thread_rng();
  rng.gen_range(min..max)
}

#[no_mangle]
pub extern "C" fn random_range_i16(min: i16, max: i16) -> i16 {
  let mut rng = thread_rng();
  rng.gen_range(min..max)
}

#[no_mangle]
pub extern "C" fn random_range_i32(min: i32, max: i32) -> i32 {
  let mut rng = thread_rng();
  rng.gen_range(min..max)
}

#[no_mangle]
pub extern "C" fn random_range_i64(min: i64, max: i64) -> i64 {
  let mut rng = thread_rng();
  rng.gen_range(min..max)
}

#[no_mangle]
pub extern "C" fn random_range_u8(min: u8, max: u8) -> u8 {
  let mut rng = thread_rng();
  rng.gen_range(min..max)
}

#[no_mangle]
pub extern "C" fn random_range_u16(min: u16, max: u16) -> u16 {
  let mut rng = thread_rng();
  rng.gen_range(min..max)
}

#[no_mangle]
pub extern "C" fn random_range_u32(min: u32, max: u32) -> u32 {
  let mut rng = thread_rng();
  rng.gen_range(min..max)
}

#[no_mangle]
pub extern "C" fn random_range_u64(min: u64, max: u64) -> u64 {
  let mut rng = thread_rng();
  rng.gen_range(min..max)
}
