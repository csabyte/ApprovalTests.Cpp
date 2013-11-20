#!/bin/sh

CURRENT_DIR=$(pwd)
SCRIPT_DIR=$(dirname $0)

if [ -e "Makefile" ]
then 
	echo ""	
else
	cd $SCRIPT_DIR/..	
	make distclean
	cd $CURRENT_DIR
	./$SCRIPT_DIR/../configure
fi
