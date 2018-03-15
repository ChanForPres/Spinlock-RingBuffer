#define __RINGBUFS_EMPTY_C
include  "ringBufS.h"

/****************************************************************************/
/*                            CODE STARTS HERE                              */
/****************************************************************************/
int ringBufS_empty (ringBufS *_this)
{
    // 1 if true
    // 0 if false
    return (0==_this->count);
}







