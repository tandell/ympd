#!/bin/bash

repo="$(git rev-parse --show-toplevel)"

pushd "$repo"
prettier --write .
for i in  http_server.c http_server.h json_encode.h mpd_client.c mpd_client.h ympd.c; do
	clang-format -i -style=file "src/$i"
done
popd
