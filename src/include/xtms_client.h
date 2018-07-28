#ifndef XTMS_CLIENT_H
#define XTMS_CLIENT_H

#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <netdb.h>
#include <errno.h>

typedef int (*MsgCb)(const char *from, const char *msgid, const char *message);

int send_single_message(const char *ip, const char *port, const char *from, const char *pass, const char *to, const char *msg);
int send_message(const char *from, const char *to, const char *msg);
int start_sender(const char *ip, const char *port, const char *from, const char *pass);
int start_receiver(const char *ip, const char *port, const char *from, const char *pass, MsgCb cb);

#endif
