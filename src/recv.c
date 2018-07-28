#include <stdio.h>
#include <stdlib.h>
#include "xtms_client.h"

int notifyToClient(const char *from, const char *msgid, const char *message)
{
	fprintf(stderr, "notifyToClient message. from=%s, msgid=%s, message=%s\n", from, msgid, message);
	
	return 0;
}

int main(int argc, char* argv[])//ip, port, from, pass
{
	int reg_res;
	
	if(argc != 5)
	{
		fprintf(stderr, "Usage: %s ip port from pass !\n", argv[0]);
		exit(-1);
	}
	
	reg_res = start_receiver(argv[1], argv[2], argv[3], argv[4], notifyToClient);
	
	if(reg_res != 0)
	{
		fprintf(stderr, "start_receiver failed reg_res: %d !\n", reg_res);
		exit(-2);
	}
	
	while(1)
	{
		usleep(1*1000*1000);
	}
	
	return 0;
}



