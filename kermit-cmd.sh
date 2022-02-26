#!/usr/bin/env bash
set -eou pipefail

S="${1:-k11}"
rc="/root/.bin/sb -n $S /bin/zsh ||true; /root/.bin/sb -a $S"
cmd="/usr/bin/env ssh -qAtt -oRemoteCommand='$rc' f36"
eval "$cmd"


