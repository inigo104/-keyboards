#pragma once

#include "quantum.h"

#define ___ KC_NO
#define LAYOUT_h(\
    K00, K01, K02, K03, K04, \
    K05, K06, K07, K08, ____  \
) \
  { \
    { K00,K01,K02,K03,K04,}, \
	{ K05,K06,K07,K08, ____ }  \
}
#define LAYOUT LAYOUT_h