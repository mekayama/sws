//Workaround for missing winres.h for Visual Studio Express
#include <winresrc.h>

#ifdef IDC_STATIC
#undef IDC_STATIC
#endif
#define IDC_STATIC      (-1)
