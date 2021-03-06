// Copyright (c) 2015, Tamas Csala

#ifndef ENGINE_OGLWRAP_ALL_H_
#define ENGINE_OGLWRAP_ALL_H_

#ifndef OGLWRAP_USE_IMAGEMAGICK
  #define OGLWRAP_USE_IMAGEMAGICK 1
#endif

#ifndef OGLWRAP_INCLUDE_EVERYTHING
  #define OGLWRAP_INCLUDE_EVERYTHING 1
#endif

#ifndef OGLWRAP_DEFAULT_SHADER_PATH
  #define OGLWRAP_DEFAULT_SHADER_PATH "src/glsl/"
#endif

#ifdef OGLWRAP_SYSTEM_HEADERS
  #include <oglwrap/glew.h>
  #include <oglwrap/oglwrap.h>
  #include <oglwrap/debug/insertion.h>
#else
  #include "oglwrap/glew.h"
  #include "oglwrap/oglwrap.h"
  #include "oglwrap/debug/insertion.h"
#endif

#endif
