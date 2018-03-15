#define __RINGBUFS_INIT_C
include  <string.h>
#include  "ringBufS.h"


void ringBufS_init (ringBufS *_this)
{
    /*****
      The following clears:
        -> buf
        -> head
        -> tail
        -> count
      and sets head = tail
    ***/
    memset (_this, 0, sizeof (*_this)); // starting address of memory to fill, value to fill, #bytes to fill in
}
