#include <stdio.h>
#include <stdlib.h>
#include "xtms_client.h"

int main(int argc, char* argv[])//ip, port, from, pass, to, message
{
	int reg_res;
	
	if(argc != 7){
		fprintf(stderr, "Usage: %s ip port from pass to message !\n", argv[0]);
		exit(-1);
	}
	
	reg_res = start_sender(argv[1], argv[2], argv[3], argv[4]);
	if(reg_res != 0){
		fprintf(stderr, "start_sender failed reg_res: %d !\n", reg_res);
		exit(-2);
	}
	
	sleep(1);
	
	while(1){
		reg_res = send_message(argv[3], argv[5], argv[6]);
		if(reg_res != 0){
			fprintf(stderr, "send_message failed reg_res: %d !\n", reg_res);
			continue;
		}
		fprintf(stderr, "send_message success >>> %s\n", argv[6]);
		sleep(5);
	}
	
	return 0;
}
