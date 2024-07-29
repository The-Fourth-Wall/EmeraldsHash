#include "../../libs/cSpec/export/cSpec.h"
#include "../../src/xxh3/xxh3.h"

module(T_xxh3, {
  describe("#xxh3", {
    it("hashes small strings", {
      assert_that_size_t(xxh3_hash("a") equals to 0xe6c632b61e964e1f);
      assert_that_size_t(xxh3_hash("ab") equals to 0xa873719c24d5735c);
      assert_that_size_t(xxh3_hash("abc") equals to 0x78af5f94892f3950);
      assert_that_size_t(xxh3_hash("abcd") equals to 0x6497a96f53a89890);
      assert_that_size_t(xxh3_hash("abcde") equals to 0x55c65158ee9e652d);
      assert_that_size_t(xxh3_hash("abcdef") equals to 0xda87bd32d3c47db6);
      assert_that_size_t(xxh3_hash("abcdefg") equals to 0x5a40dc3fd44c052f);
      assert_that_size_t(xxh3_hash("abcdefgh") equals to 0x6f45a76842a96483);
    });

    it("hashes medium sized strings", {
      assert_that_size_t(xxh3_hash("abcdefghi") equals to 0xe0dde4fc174590a0);
      assert_that_size_t(xxh3_hash("abcdefghij") equals to 0xc85ff0a489414010);
      assert_that_size_t(xxh3_hash("abcdefghijk") equals to 0x386cb4f266186f62);
      assert_that_size_t(xxh3_hash("abcdefghijkl") equals to 0x52beba2086c3f6d7
      );
      assert_that_size_t(xxh3_hash("abcdefghijklm") equals to 0xd7b6fd946b75df4b
      );
      assert_that_size_t(xxh3_hash("abcdefghijklmn")
                           equals to 0xaa26cab2afa36140);
      assert_that_size_t(xxh3_hash("abcdefghijklmno")
                           equals to 0xa8edaf6dc2724d85);
      assert_that_size_t(xxh3_hash("abcdefghijklmnop")
                           equals to 0x3d3ccac9af14d8a8);
    });

    it("hashes long strings", {
      assert_that_size_t(xxh3_hash("abcdefghijklmnopqrst")
                           equals to 0x67cb7b2afe010bb6);
      assert_that_size_t(xxh3_hash(
        "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed do "
        "eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim "
        "ad minim veniam."
      ) equals to 0xf5b466629595d109);
    });
  });
})
