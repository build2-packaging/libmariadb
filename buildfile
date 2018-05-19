# file      : buildfile
# copyright : Copyright (c) 2016-2017 Code Synthesis Ltd
# license   : LGPLv2.1; see accompanying COPYING file

./: {*/ -build/} doc{COPYING INSTALL README} manifest

# Don't install tests or the INSTALL file.
#
dir{tests/}:     install = false
doc{INSTALL}@./: install = false
