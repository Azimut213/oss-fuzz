FROM gcr.io/oss-fuzz-base/base-builder

RUN apt-get update && \
    apt-get install -y make autoconf automake libtool pkg-config \
    libmbedtls-dev libsodium-dev libpcre3-dev libc-ares-dev libev-dev

RUN git clone --depth 1 https://github.com/shadowsocks/shadowsocks-libev.git

COPY build.sh json_fuzzer.c $SRC/
WORKDIR shadowsocks-libev
