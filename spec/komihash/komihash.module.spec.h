#include "../../libs/cSpec/export/cSpec.h"
#include "../../src/komihash/komihash.h"

module(T_komihash, {
  describe("#komihash", {
    it("hashes small strings", {
      assert_that_size_t(komihash_hash("a") equals to 0xa9cb00f1f8e133e3);
      assert_that_size_t(komihash_hash("ab") equals to 0xfb6b11b0cbe38e68);
      assert_that_size_t(komihash_hash("abc") equals to 0xd4106f3ebb74a844);
      assert_that_size_t(komihash_hash("abcd") equals to 0xf9032d5e074193d4);
      assert_that_size_t(komihash_hash("abcde") equals to 0x1c1390c791aba2be);
      assert_that_size_t(komihash_hash("abcdef") equals to 0x7674f480a7a03d16);
      assert_that_size_t(komihash_hash("abcdefg") equals to 0x5ddabccf460093b1);
      assert_that_size_t(komihash_hash("abcdefgh") equals to 0x5169681af4fab7dc
      );
    });

    it("hashes medium sized strings", {
      assert_that_size_t(komihash_hash("abcdefghi") equals to 0x379bc6b1199c8011
      );
      assert_that_size_t(komihash_hash("abcdefghij")
                           equals to 0xde3cb6b9fe957747);
      assert_that_size_t(komihash_hash("abcdefghijk")
                           equals to 0x8da521c32c02eee1);
      assert_that_size_t(komihash_hash("abcdefghijkl")
                           equals to 0x866301bc2bf7e6e4);
      assert_that_size_t(komihash_hash("abcdefghijklm")
                           equals to 0xffc2e6e691c40eb2);
      assert_that_size_t(komihash_hash("abcdefghijklmn")
                           equals to 0x540d0093e0bcb8e3);
      assert_that_size_t(komihash_hash("abcdefghijklmno")
                           equals to 0xe1662727cd666237);
      assert_that_size_t(komihash_hash("abcdefghijklmnop")
                           equals to 0x8fe1f62b64188956);
    });

    it("hashes long strings", {
      assert_that_size_t(komihash_hash("abcdefghijklmnopqrst")
                           equals to 0x7b47a04740a44326);
      assert_that_size_t(komihash_hash(
        "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed do "
        "eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim "
        "ad minim veniam."
      ) equals to 0xa503670a6d10c0ba);
    });
  });
})
