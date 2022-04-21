#include <vte/vte.h>
#define TERM_NAME "kermit"
#define TERM_VERSION "3.7"
#define TERM_FONT "Monospace"
#define TERM_FONT_DEFAULT_SIZE 9
#define TERM_LOCALE "en_US.UTF-8"
#define TERM_OPACITY 0.96
#define TERM_WORD_CHARS "-./?%&#_=+@~"
#define TERM_BACKGROUND 0x000000
#define TERM_FOREGROUND 0xffffff
#define TERM_BOLD_COLOR 0xffffff
#define TERM_CURSOR_COLOR 0xffffff
#define TERM_CURSOR_FG 0xffffff
#define TERM_PALETTE_SIZE 256
#define TERM_CONFIG_LENGTH 64
#define TERM_CONFIG_DIR "/.config/"
#define TERM_ATTR_OFF "\x1b[0m"
#define TERM_ATTR_BOLD "\x1b[1m"
#define TERM_ATTR_COLOR "\x1b[34m"
#define TERM_ATTR_DEFAULT "\x1b[39m"

static GtkWidget *getTerm();
static void parseSettings();
static int configureTerm(GtkWidget *term);
static int setTermFont(GtkWidget *term, int fontSize);
static gboolean termOnChildExit(VteTerminal *term,
                                gint status, gpointer userData);
static gboolean termOnKeyPress(GtkWidget *widget,
                               GdkEventKey *key, gpointer gptr);
static gboolean termOnTitleChanged(GtkWidget *term,
                                   gpointer gptr);
static gboolean termOnResize(GtkWidget *widget,
                             GtkAllocation *allocation,
                             gpointer userData);
