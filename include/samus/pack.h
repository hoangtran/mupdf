/*
 * Metro Package and Parts
 */

typedef struct sa_package_s sa_package;

fz_error *sa_openpackage(sa_package **packp, char *filename);
char *sa_accesspart(sa_package *pack, char *partname);
fz_error *sa_openpart(fz_stream **filep, sa_package *pack, char *partname);
void sa_closepackage(sa_package *pack);
