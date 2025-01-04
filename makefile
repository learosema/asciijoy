# Compiler and linker settings
CC = owcc
LD = owcc
CFLAGS = -zq -c -bdos4g
LDFLAGS = -zq -bdos4g
CP = copy
RM = del

DOS4GW_RUNTIME = $(%WATCOM)\binw\dos4gw.exe

# Source files
SRCS = main.cpp textmode.cpp

# Object files
OBJS = $(SRCS:.cpp=.obj)

# Executable name
TARGET = asciijoy.exe

# Default target
all: $(TARGET) postbuild .symbolic

postbuild: .symbolic
	$(CP) $(DOS4GW_RUNTIME) .

# Build rule for object files
.cpp.obj: %.cpp
	$(CC) $(CFLAGS) -o $@ $<

# Link rule for the executable
$(TARGET): $(OBJS)
	$(LD) $(LDFLAGS) -o $@ $(OBJS)

# Clean rule
clean: .symbolic
	$(RM) *.obj
	$(RM) *.exe
