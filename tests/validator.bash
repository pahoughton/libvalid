#!/bin/bash
# 2017-05-02 (cc) <paul4hough@gmail.com>
#
ver=0.01.01

function DoD {
  if ! $*
  then
    code=$?
    echo error:$code: "$*"
    exit $code
  fi
}
tdir=`pwd`

DoD make -C unit test
DoD make -C .. dist
rm -rf dist
DoD mkdir dist
rm -rf install
DoD mkdir install
DoD cd dist
DoD tar xzf ../../libvalid-${ver}.tar.gz
DoD cd libvalid-${ver}
DoD ./configure --prefix=$tdir/install
DoD make install
echo 'all tests passed'
