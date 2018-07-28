#include <stdio.h>
#include <stdlib.h>
#include "xtms_client.h"

int main(int argc, char* argv[])//ip, port, from, pass, to, message
{
	int reg_res;
	
	if(argc != 7){
		fprintf(stderr, "Usage: %s ip port from pass to message !\n", argv[0]);
		exit(-2);
	}
	
	reg_res = send_single_message(argv[1], argv[2], argv[3], argv[4], argv[5], argv[6]);
	if(reg_res != 0){
		fprintf(stderr, "send_single_message failed reg_res: %d !\n", reg_res);
		exit(-1);
	}
	fprintf(stderr, "send_single_message success >>> %s\n", argv[6]);
	
	return 0;
}
