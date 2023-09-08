#!/bin/bash

export PROJECT_ROOT=${PWD%/*}
source launch_cfg.sh
export PATH="$PATH:$TRESOS_BASE/bin"
export MAKEFILES=Makefile.mak
make show_rules
bash

