#!/usr/bin/env bash
set -eou pipefail
./kermit -d -c ~/.config/kermit.conf -w $(pwd) /bin/zsh
#-e ./kermit.sh
