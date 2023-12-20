MCU = atmega328p
F_CPU = 16000000
CC = avr-gcc
CFLAGS = -std=c17 -Os -DF_CPU=$(F_CPU) -mmcu=$(MCU)
TARGET = main
SRC = src/$(TARGET).c
all: $(TARGET).hex

$(TARGET).hex: $(TARGET).elf
	avr-objcopy -O ihex -R .eeprom $(TARGET).elf $(TARGET).hex

$(TARGET).elf: $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET).elf $(SRC)

flash: all
	avrdude -p $(MCU) -c arduino -P /dev/ttyUSB0 -b 115200 -U flash:w:$(TARGET).hex

clean:
	rm -f $(TARGET).elf $(TARGET).hex
