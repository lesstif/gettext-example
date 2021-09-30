#include <stdlib.h>
#include "hello.h"

int main(int argc, char** argv)
{
    char* my_name;
    char* locale_dir = "locale";
    int my_age = -1;

    if (argc > 1) {
        my_name = argv[1];
    } else {
        my_name = "not set";
    }
    if (argc > 2) {
        my_age = atoi(argv[2]);
    } 
     
    setlocale (LC_ALL, "");
    bindtextdomain (THIS_PACKAGE_NAME, locale_dir);
    textdomain (THIS_PACKAGE_NAME);

    printf(gettext("my name is %s.\n"), my_name);

    // gettext 대신 _ macro 사용해도 됨.
    printf(_("my age is %d.\n"), my_age);

    return 0;
}
