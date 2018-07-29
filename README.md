# OasisPush

---

Welcome to use OasisPush repository!

This software enables businesses to rapidly build and deploy the APP which need high-performance push. Oasis push client uses the fastest push technology with most energy saving.

## INSTALL

	[root@localhost]# rpm -ivh xtms_cli-1.0-1.el7.centos.x86_64.rpm
	
	#There is the rpm file(xtms_cli-1.0-1.el7.centos.x86_64.rpm) in the directory(build/centos7)
	
## VIEW

	[root@localhost]# rpm -ql  xtms_cli-1.0-1.el7.centos.x86_64
	
## RUN

	start xtms receiver
	
	[root@localhost]# xtms_recv 123.56.186.158 8660 test0 123456
		
	send single message to receiver
	
	[root@localhost]# xtms_send_single  123.56.186.158 8660 test1 123456 test0 "hello world"
	
	send loop messages to receiver
	
	[root@localhost]# xtms_send 123.56.186.158 8660 test1 123456 test0 "how are you"
	
## UNINSTALL

	[root@localhost]# rpm -e  xtms_cli-1.0-1.el7.centos.x86_64
	
	

