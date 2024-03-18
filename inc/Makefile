SRCDIR = .

VPATH = $(SRCDIR)
TOPDIR = $(SRCDIR)/..

include $(SRCDIR)/../Make.defaults

all:

clean:

install:
	mkdir -p $(INSTALLROOT)$(PREFIX)/include/efi
	mkdir -p $(INSTALLROOT)$(PREFIX)/include/efi/protocol
	mkdir -p $(INSTALLROOT)$(PREFIX)/include/efi/$(ARCH)
	$(INSTALL) -m 644 $(SRCDIR)/*.h $(INSTALLROOT)$(PREFIX)/include/efi
	$(INSTALL) -m 644 $(SRCDIR)/protocol/*.h $(INSTALLROOT)$(PREFIX)/include/efi/protocol
	$(INSTALL) -m 644 $(SRCDIR)/$(ARCH)/*.h $(INSTALLROOT)$(PREFIX)/include/efi/$(ARCH)
ifeq ($(ARCH),ia64)
	mkdir -p $(INSTALLROOT)$(PREFIX)/include/efi/protocol/ia64
	$(INSTALL) -m 644 $(SRCDIR)/protocol/ia64/*.h $(INSTALLROOT)$(PREFIX)/include/efi/protocol/ia64
endif

include $(SRCDIR)/../Make.rules
