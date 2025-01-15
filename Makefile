CC= g++
CFLAGS= -g -std=c++17 -Wall
RM= rm -f

LIBS = -lm -lpthread -lmstch -static
INCS = -I./src/ -I./lib/crow/include/

OBJ = $(patsubst %.cc,%.o,$(shell find src/ -name *.cc))

all: hivemind

hivemind: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

package: hivemind
	tar --gzip -cf hivemind-release.tar.gz hivemind resource/

%.o: %.cc
	$(CC) -c -o $@ $(CFLAGS) ${INCS} $<

.PHONY: clean
clean:
	-$(RM) $(shell find . -name *.o) hivemind
