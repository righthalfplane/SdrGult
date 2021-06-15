#ifndef __glutbitmap_h__
#define __glutbitmap_h__

/* Copyright (c) Mark J. Kilgard, 1994, 1998. */

/* This program is freely distributable without licensing fees 
   and is provided without guarantee or warrantee expressed or 
   implied. This program is -not- in the public domain. */

/* #define GLUT_NO_LIB_PRAGMA */ /* Avoid auto library linking when building
                               the GLUT library itself. */
#include <GL/glut.h>

typedef struct {
  const GLsizei width;
  const GLsizei height;
  const GLfloat xorig;
  const GLfloat yorig;
  const GLfloat advance;
  const GLubyte *bitmap;
} BitmapCharRec, *BitmapCharPtr;

typedef struct {
  const char *name;
  const int num_chars;
  const int first;
  const BitmapCharRec * const *ch;
} BitmapFontRec, *BitmapFontPtr;

typedef void *GLUTbitmapFont;

#endif /* __glutbitmap_h__ */
