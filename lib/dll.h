#pragma once

#include <Corrade/Utility/VisibilityMacros.h>

#ifdef lib_EXPORTS
#define lib_EXPORTS CORRADE_VISIBILITY_EXPORT
#else
#define lib_EXPORTS CORRADE_VISIBILITY_IMPORT
#endif

lib_EXPORTS int sum(int a, int b);