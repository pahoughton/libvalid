# 2017-05-09 (cc) <paul4hough@gmail.com>
#
ACLOCAL_AMFLAGS = '-Im4'

SUBDIRS = cxx/valid tests/unit
dist_doc_DATA = README.md

test: all
	cd tests && ./validator.bash
