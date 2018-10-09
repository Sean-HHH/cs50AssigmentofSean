# Questions

## What's `stdint.h`?

A standard library that declares sets of integars types having specicifid width.

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

It makes clear that how many bytes a unit account for.

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

1,4,4,2

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

The first two bytes of a BMP is a WORD and denotes bfType, which specifies the file type.

## What's the difference between `bfSize` and `biSize`?

biSize specifies the width and height of a image
bfSize specifies total size of a file, including pixels, padding, and headers

## What does it mean if `biHeight` is negative?

if biHeight is positive, the bitmap is a bottom-up DIB with the origin at the lower left corner.
If biHeight is negative, the bitmap is a top-down DIB with the origin at the upper left corner

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

The biBitCount member of the BITMAPINFOHEADER structure determines the number of bits that define each pixel and the maximum number of colors in the bitmap.

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?

If it cannot create the outfile to write to

## Why is the third argument to `fread` always `1` in our code?

Because we only read one element(one RGB triple) at a time.

## What value does line 65 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?

The math equation will be (4 - (3*3)%4)%4 and the output is 3

## What does `fseek` do?

Skips over any padding and looks for the next pixel (RGB triple)

## What is `SEEK_CUR`?

his is an integer constant which, when used as the whence argument to the fseek or fseeko function, specifies that the offset provided is relative to the current file position

## Whodunit?

Professor Plumn!
