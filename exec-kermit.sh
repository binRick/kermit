#!/usr/bin/env bash
set -eou pipefail
TITLE="title 123"
SHELL=/bin/zsh
./kermit -t "$TITLE" -d -c ~/.config/kermit.conf -w "$(pwd)" "$SHELL"
#-e ./kermit.sh
