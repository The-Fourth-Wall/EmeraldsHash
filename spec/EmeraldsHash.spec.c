#include "../libs/cSpec/export/cSpec.h"
#include "fnv_1a_64/fnv_1a_64.module.spec.h"

spec_suite({ T_fnv_1a_64(); });

int main(void) { run_spec_suite("all"); }
