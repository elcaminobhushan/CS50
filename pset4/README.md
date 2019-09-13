# Questions

## What's `stdint.h`?

stdint.h is a library file which is included in bmp.h

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

typedef unsigned char --uint8_t
typedef unsigned short int-- uint16_t
typedef unsigned int-- uint32_t
typedef int -- int32_t

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

BYTE-1 bytes
DWORD-4 bytes
LONG-4 bytes
WORD-2 bytes

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

42 4D [BM] or bf.bfType != 0x4d42


## What's the difference between `bfSize` and `biSize`?
bi size - the number of bytes required by the structure 
bf size - the number of bytes required by the bitmap file
 
## What does it mean if `biHeight` is negative?

biheight is negative then it means that the origin is upper left corner and the orientation is top to bottom.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

biBitCount

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?

if the file name that we specified is wrong or no such file exists then fopen will return NULL.


## Why is the third argument to `fread` always `1` in our code?

the 3rd argument is maximum items to be read which in our case is 1 always as we are just reading the RGBTriple.

## What value does line 65 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?

3

## What does `fseek` do?

Moves the file pointer to a specified location.

## What is `SEEK_CUR`?

Current position of the file pointer

## Whodunit?

It was Proffesor plum with candlestick in the library.

