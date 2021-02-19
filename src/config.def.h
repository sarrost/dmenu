/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar    = 1;    /* -b  option; if 0, dmenu appears at bottom */
static int fuzzy     = 1;    /* -fz option; if 0, dmenu doesn't use fuzzy matching */
static int centered  = 1;    /* -c  option; if 1, centers dmenu on screen */
static int min_width = 500;  /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"SauceCodePro Nerd Font Mono:size=16"
};
/* define colors */
static const char col_aqua[]      = "#09e8a5";
static const char col_black[]     = "#000000";
static const char col_cyan[]      = "#00ffff";
static const char col_dark_aqua[] = "#034531";
static const char col_gray[]			= "#222222";
/* transparency */
static const unsigned int bgalpha = 0x64;
static const unsigned int fgalpha = OPAQUE;
static const char *prompt         = NULL;    /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                         fg         bg       */
	[SchemeNorm]          = { col_aqua,  col_black     },
	[SchemeSel]           = { col_black, col_aqua      },
	[SchemeSelHighlight]  = { col_cyan,  col_dark_aqua },
	[SchemeNormHighlight] = { col_cyan,  col_black     },
	[SchemeOut]           = { col_gray,  col_dark_aqua },
};
static const unsigned int alphas[SchemeLast][2] = {
	/*	             fgalpha	bgalpha */
	[SchemeNorm] = { fgalpha, bgalpha },
	[SchemeSel]  = { fgalpha, bgalpha },
	[SchemeOut]  = { fgalpha, bgalpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines          = 10;
/* -h option; minimum height of a menu line */
static unsigned int lineheight     = 36;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* -bw option; if > 0, size of the window border. */
static unsigned int border_width = 1;
