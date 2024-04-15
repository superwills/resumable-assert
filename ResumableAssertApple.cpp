#include "ResumableAssertApple.h"

void __appleDebugBreak() {
  asm( "SVC 0" );
}
