# dmenu - dynamic menu
dmenu is an efficient dynamic menu for X.


## Requirements
In order to build dmenu you need the Xlib header files.


## Installation
Edit config.mk to match your local setup (dmenu is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dmenu
(if necessary as root):

    make clean install

## Running dmenu
See the man page for details.

## Patches
- Alpha patch ([dmenu-alpha-20200618.diff](https://gist.github.com/oibind/d17b79025765f53e99716fb1ee780c88))
- Center patch ([dmenu-center-20200111-8cd37e1.diff](https://tools.suckless.org/dmenu/patches/center/))
- Border patch ([dmenu-borderoption-20200217-bf60a1e.diff ](https://tools.suckless.org/dmenu/patches/border/))
	- Border is added on the outside, i.e if width is 800px and border width is 1px then with the border total width is 802px.
- Fuzzy match patch ([dmenu-fuzzymatch-4.9.diff](https://tools.suckless.org/dmenu/patches/fuzzymatch/))
- Fuzzy highlight patch (disabled due to issues with transparency) ([dmenu-fuzzyhighlight-4.9.diff](https://tools.suckless.org/dmenu/patches/fuzzyhighlight/))
- Case insensitive patch ([dmenu-caseinsensitive-5.0.diff](https://tools.suckless.org/dmenu/patches/case-insensitive/))
- Line height patch ([dmenu-lineheight-5.0.diff](https://tools.suckless.org/dmenu/patches/line-height/))
- Password patch ([dmenu-password-4.9.diff](https://tools.suckless.org/dmenu/patches/password/))
