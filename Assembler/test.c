#include <stdio.h>
#include <assert.h>

#include "functions.h"
#include "test.h"

int main(void) {
  
  test_getOpcode();
  
  puts("Test Success!");
  return 0;
}

void test_getOpcode() {
  puts("getOpode (char * command)");
  assert(getOpcode(“LDD”) == 1);
  assert(getOpcode(“CAT”) == -1);
  assert(getOpcode(“STO”) == 3);
  assert(getOpcode("LDX") == 11);
}

