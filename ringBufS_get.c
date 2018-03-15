#define __RINGBUFS_GET_C
#include  "modulo.h"
#include  "ringBufS.h"




// get is supposed to return what value?
//
int ringBufS_get (ringBufS *_this)
{
    int c;
    if (_this->count>0)
    {
      c = _this->buf[_this->tail];
      this->tail = modulo_inc (_this->tail, RBUF_SIZE);
      --_this->count;
    }
    else
    {
      c = -1;
    }
    return (c);
}
