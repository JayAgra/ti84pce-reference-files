# ----------------------------
# Makefile Options
# ----------------------------

NAME = AAA
ICON = icon.png
DESCRIPTION = "fuck"
COMPRESSED = NO

CFLAGS = -Wall -Wextra -Oz
CXXFLAGS = -Wall -Wextra -Oz

include $(shell cedev-config --makefile)