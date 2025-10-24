CC = gcc
CFLAGS = -g 

EXECS = 01_biton 02_bitoff 03_bitflip 04_bitcheck 05_swap 06_power2 \
         07_evenoddcheck 08_twoscomplement 09_equal 10_MSB 11_LSB \
         12_LSBoff 13_LSB 14_multipleof8 7_count1

all: $(EXECS)

%: %.c phong.c phong.h
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(EXECS)

