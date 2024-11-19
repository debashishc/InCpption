/**
 * C++ program using the Cube's one arugment constructor.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
#include <iostream>

int main() {
  // uiuc::Cube c;  // !!!
  uiuc::Cube c(2);  // corrected to include argumane length
  std::cout << "Volume: " << c.getVolume() << std::endl;
  return 0;
}