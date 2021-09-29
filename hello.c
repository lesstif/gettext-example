#include <stdio.h>
#include <libintl.h>

#define _(String) gettext (String)
#define gettext_noop(String) String
#define N_(String) gettext_noop (String)

int main(int argc, char** argv)
{
    char* my_name;

    if (argc > 1) {
        my_name = argv[1];
    } else {
        my_name = "not set";
    }

    printf(gettext("my name is %s.\n"), my_name);
    printf(_("my name is %s.\n"), my_name);

    return 0;
}
