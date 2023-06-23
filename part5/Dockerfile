FROM nginx
USER root
COPY ./nginx/nginx.conf /etc/nginx/nginx.conf
COPY ./server.c /home/server.c
COPY ./entrypoint.sh /home/entrypoint.sh
RUN apt update && apt install -y gcc libfcgi-dev spawn-fcgi && rm -rf /var/lib/apt/lists && \
    mkdir -p /var/cache/nginx/client_temp && \
    chown -R nginx:nginx /var/cache/nginx && \
    chmod -R 755 /var/cache/nginx && \
    chmod +x /home/entrypoint.sh
WORKDIR /home/
CMD ["/home/entrypoint.sh"]
HEALTHCHECK NONE