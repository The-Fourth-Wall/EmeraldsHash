#include "../libs/cSpec/export/cSpec.h"
#include "fnv_1a_64/fnv_1a_64.module.spec.h"
#include "komihash/komihash.module.spec.h"
#include "komihash/komirand.module.spec.h"
#include "xxh3/xxh3.module.spec.h"

spec_suite({
  T_fnv_1a_64();
  T_komihash();
  T_komirand();
  T_xxh3();
});

int main(void) { run_spec_suite("all"); }
