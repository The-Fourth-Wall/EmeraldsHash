#include "../../libs/cSpec/export/cSpec.h"
#include "../../src/fnv_1a_64/fnv_1a_64.h"

module(T_fnv_1a_64, {
  describe("#fnv_1a_64", {
    it("hashes small strings", {
      assert_that_size_t(fnv_1a_64_hash("a") equals to 0xaf63dc4c8601ec8c);
      assert_that_size_t(fnv_1a_64_hash("ab") equals to 0x089c4407b545986a);
      assert_that_size_t(fnv_1a_64_hash("abc") equals to 0xe71fa2190541574b);
      assert_that_size_t(fnv_1a_64_hash("abcd") equals to 0xfc179f83ee0724dd);
      assert_that_size_t(fnv_1a_64_hash("abcde") equals to 0x6348c52d762364a8);
      assert_that_size_t(fnv_1a_64_hash("abcdef") equals to 0xd80bda3fbe244a0a);
      assert_that_size_t(fnv_1a_64_hash("abcdefg") equals to 0x406e475017aa7737
      );
      assert_that_size_t(fnv_1a_64_hash("abcdefgh") equals to 0x25da8c1836a8d66d
      );
    });

    it("hashes medium sized strings", {
      assert_that_size_t(fnv_1a_64_hash("abcdefghi")
                           equals to 0xfb321124e0e3a8cc);
      assert_that_size_t(fnv_1a_64_hash("abcdefghij")
                           equals to 0xb9bbc7aa22d79212);
      assert_that_size_t(fnv_1a_64_hash("abcdefghijk")
                           equals to 0x71a6bf19344de39b);
      assert_that_size_t(fnv_1a_64_hash("abcdefghijkl")
                           equals to 0x6c3aaed3e05a5cb5);
      assert_that_size_t(fnv_1a_64_hash("abcdefghijklm")
                           equals to 0x4213ea06398bc308);
      assert_that_size_t(fnv_1a_64_hash("abcdefghijklmn")
                           equals to 0xd39a0e93c87d0652);
      assert_that_size_t(fnv_1a_64_hash("abcdefghijklmno")
                           equals to 0x0bcd021dac7199a7);
      assert_that_size_t(fnv_1a_64_hash("abcdefghijklmnop")
                           equals to 0x7ef46f6c05086855);
    });

    it("hashes long strings", {
      assert_that_size_t(fnv_1a_64_hash("abcdefghijklmnopqrst")
                           equals to 0x540532bba32d3e4d);
      assert_that_size_t(fnv_1a_64_hash(
        "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed do "
        "eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim "
        "ad minim veniam."
      ) equals to 0x02c6ace0b1c25dca);
    });
  });
})
