# file      : buildfile
# license   : LGPLv2.1; see accompanying COPYING file

./: {*/ -build/} doc{COPYING INSTALL README} manifest

# Don't install tests or the INSTALL file.
#
tests/:          install = false
doc{INSTALL}@./: install = false
