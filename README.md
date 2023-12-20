## install package
```
sudo apt-get install gcc-avr avr-libc avrdude
sudo pacman -S avr-gcc avr-libc avrdude
```

## connect
```
screen /dev/ttyUSB0 115200
```

## making the compile_commands.json
```
bear -- make
```
