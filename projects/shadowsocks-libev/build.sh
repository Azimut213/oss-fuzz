#!/bin/bash -eu

cd $SRC/shadowsocks-libev

# Only compile json.c — no need to build the full project
$CC $CFLAGS -I src -c src/json.c -o /tmp/json.o

$CC $CFLAGS -I src \
    $SRC/json_fuzzer.c \
    /tmp/json.o \
    -o $OUT/json_fuzzer \
    $LIB_FUZZING_ENGINE
