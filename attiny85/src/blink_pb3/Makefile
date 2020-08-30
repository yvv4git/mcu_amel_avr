.PHONY: build

DIR_BUILD=./build/

build:
	mkdir build
	avr-gcc -Os -DF_CPU=1000000UL -mmcu=attiny85 -c -o $(DIR_BUILD)main.o main.c
	avr-gcc -mmcu=attiny85 $(DIR_BUILD)main.o -o $(DIR_BUILD)main.elf
	avr-objcopy -j .text -j .data -O ihex $(DIR_BUILD)main.elf $(DIR_BUILD)main.hex

install:
	sudo avrdude -v -p t85 -P /dev/ttyS0 -c usbasp -U flash:w:$(DIR_BUILD)main.hex:i

size:
	avr-size --format=avr --mcu=attiny85 $(DIR_BUILD)main.elf

clear:
	rm -rv $(DIR_BUILD)