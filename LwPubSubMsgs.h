#ifndef LWPUBSUBMSGS_H
#define LWPUBSUBMSGS_H

#include "message.h"

#define TIME_TO_LOSS 5000
#define MSG_QUEUE_SIZE 32
#define PUB_SUB_MSG_SIZE sizeof(pub_sub_msg_t)

typedef nx_struct pub_sub_msg{
	nx_uint8_t type;
	nx_uint8_t sender;
	nx_uint8_t topic;
	nx_uint16_t payload;
} pub_sub_msg_t;


enum{
	AM_PUBSUB_MSG = 6,
};

enum msg_type {CONNECT = 0, SUBSCRIBE, PUBLISH};

enum topics {TEMPERATURE = 0, HUMIDITY, LUMINOSITY};

#endif
