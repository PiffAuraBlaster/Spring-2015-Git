#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <bcfunctions.h>
#include <bctest.h>

int main(int argc, char **argv) {
  
  assert(to_int('1')==1);
  assert(to_int('D')==14);
  assert(to_int('a')==10):
  assert(to_char(12)=='C');
  assert(to_char(2)=='2');
  assert(to_char(16)'G')
  puts("testing complete");
}

