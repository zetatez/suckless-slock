/* user and group to drop privileges to */
static const char *user  = "shiyi";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "cyan",     /* after initialization */
	[INPUT] =  "green",     /* during input */
	[FAILED] = "blue",      /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Crazy Leads to Genius!";

/* text color */
static const char * text_color = "yellow";

/* text size (must be a valid size: slock -f) */
/* static const char * font_name = "-misc-dejavu sans mono-bold-r-normal--0-0-0-0-m-0-iso8859-16"; */
static const char * font_name = "-misc-dejavu sans condensed-bold-o-semicondensed--0-0-0-0-p-0-iso8859-1";

/* slock -f */
/* -arphic-ar pl new kai extb-medium-r-normal--0-0-0-0-p-0-iso10646-1 */
/* -arphic-ar pl new kai-medium-r-normal--0-0-0-0-p-0-big5-0 */
/* -arphic-ar pl new kai-medium-r-normal--0-0-0-0-p-0-big5.eten-0 */
