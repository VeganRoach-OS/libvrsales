LIB=libvrsales.so
PREFIX=/usr/local
CXX=g++
CXXFLAGS=-Wall

SDIR=src
ODIR=obj
LDIR=lib

CXXSRCS=$(shell ls $(SDIR)/*.cxx;)
CXXTEMP=$(subst $(SDIR),$(ODIR),$(CXXSRCS))
CXXOBJS=$(subst .cxx,.o,$(CXXTEMP))
LPATH=$(LDIR)/$(LIB)

all: library

install: all
	install -D -m755 $(LPATH) $(DESTDIR)$(PREFIX)/lib/$(LIB)

library: $(CXXOBJS)
	mkdir -p $(LDIR)
	$(CXX) -o $(LPATH) $(CXXOBJS)

$(ODIR)/%.o: $(SDIR)/%.cxx
	$(CXX) $(CXXFLAGS) -c $<
	mkdir -p $(ODIR)
	mv *.o $(ODIR)

clean:
	rm -rf $(ODIR)
	rm -rf $(LDIR)
