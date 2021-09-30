#include <stdio.h>
#include <libintl.h>
#include <locale.h>

#define _(String) gettext (String)
#define gettext_noop(String) String
#define N_(String) gettext_noop (String)

#define THIS_PACKAGE_NAME "hello"

int main(int argc, char** argv)
{
    char* my_name;
    char* locale_dir = "locale";

    if (argc > 1) {
        my_name = argv[1];
    } else {
        my_name = "not set";
    }
     
    setlocale (LC_ALL, "");
    bindtextdomain (THIS_PACKAGE_NAME, locale_dir);
    textdomain (THIS_PACKAGE_NAME);

    printf(gettext("my name is %s.\n"), my_name);
    printf(_("my name is %s.\n"), my_name);

    return 0;
}
