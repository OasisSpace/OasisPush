EXECS=xtms_send xtms_recv xtms_send_single
GCC=gcc -I ./include/ -o

all:$(EXECS)

xtms_send:send.c
	$(GCC) $@ $< -L ./libs/ -lxtmsclient -lpthread

xtms_send_single:send_single.c
	$(GCC) $@ $< -L ./libs/ -lxtmsclient -lpthread

xtms_recv:recv.c
	$(GCC) $@ $< -L ./libs/ -lxtmsclient -lpthread

clean:
	@rm -f $(EXECS)
	
install:
	cp $(EXECS) /usr/bin/
