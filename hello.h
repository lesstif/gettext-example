#ifndef _HELLO_H_
#define _HELLO_H_

#include <stdio.h>
#include <libintl.h>
#include <locale.h>

#define _(String) gettext (String)
#define gettext_noop(String) String
#define N_(String) gettext_noop (String)

#define THIS_PACKAGE_NAME "hello"



#endif
