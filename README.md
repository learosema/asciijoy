# ASCIIJOY

Just a plain C project exploring VGA text mode.

## Building

### 32bit DOS4GW

The only 32 bit platform tested so far is 32Bit DOS with DOS4GW and Watcom C.

Type `wmake`. It will create an ASCIIJOY.EXE and copy
DOS4GW.EXE into the current dir.

## Real mode

Type `wmake /f makefile.16`

### Is DJGPP supported?

Not yet. I need to understand how video ram access works and put together the makefile.
I guess this is a good place to start: <https://www.delorie.com/djgpp/doc/ug/compiling/port16.html>

## Why?

Yeah, there are perfect textmode libraries out there. I still wanted to code
something like that myself, for educational purposes.

Like the hard mode in Monkey Island.
