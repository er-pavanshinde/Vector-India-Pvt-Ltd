obj-m := char_driver_demo.o

KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD     := $(shell pwd)
modules :
	$(MAKE) -C $(KERNELDIR) M=$(PWD)
clean:
	rm -fr *.o modules.order Module.symvers char_driver_demo.mod.c *.ko

