/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar    = 1;    /* -b  option; if 0, dmenu appears at bottom */
static int fuzzy     = 1;    /* -fz option; if 0, dmenu doesn't use fuzzy matching */
static int centered  = 1;    /* -c  option; if 1, centers dmenu on screen */
static int min_width = 500;  /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=14"
};
static const unsigned int bgalpha = 0xc8;
static const unsigned int fgalpha = OPAQUE;
static const char *prompt         = NULL;    /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                         fg         bg       */
	[SchemeNorm]          = { "#bbbbbb", "#222222" },
	[SchemeSel]           = { "#eeeeee", "#005577" },
	[SchemeSelHighlight]  = { "#ffc978", "#005577" },
	[SchemeNormHighlight] = { "#ffc978", "#222222" },
	[SchemeOut]           = { "#000000", "#00ffff" },
};
static const unsigned int alphas[SchemeLast][2] = {
	/*	             fgalpha	bgalpha */
	[SchemeNorm] = { fgalpha, bgalpha },
	[SchemeSel]  = { fgalpha, bgalpha },
	[SchemeOut]  = { fgalpha, bgalpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* -bw option; if > 0, size of the window border. */
static unsigned int border_width = 1;
