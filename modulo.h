#ifndef __MODULO_H
    #define  __MODULO_H
/****************************************************************************/
/*  FILE: modulo.h                                                          */
/*                                                                          */
/*  These files contain the attributes and methods for managing the         */
/*  modulus arithmetic                                                      */
/*                                                                          */
/****************************************************************************/

  #ifdef __cplusplus
    extern "C"  {
  #endif
    unsigned int modulo_inc (const unsigned int value, const unsigned int modulus);
    unsigned int modulo_dec (const unsigned int value, const unsigned int modulus);
  #ifdef __cplusplus
    }
  #endif
#endif
