#!/bin/sh

gcc server.c -lfcgi
spawn-fcgi -p 8080 ./a.out
nginx -g "daemon off;"