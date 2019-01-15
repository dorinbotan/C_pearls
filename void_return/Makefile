IDIR := include
LDIR := lib
ODIR := build
SDIR := src

AS       :=
ASFLAGS  :=
CC       := gcc
CFLAGS   := -std=c99
CXX      := g++
CPPFLAGS :=

LIBS := 

EXEC := main



#SRCS := $(shell find $(SDIR) -name *.c -or -name *.cpp -or -name *.s)
SRCS := $(shell find $(SDIR) -name *.c) $(shell find $(SDIR) -name *.cpp) $(shell find $(SDIR) -name *.s)
OBJS := $(SRCS:$(SDIR)/%=$(ODIR)/%.o)
DEPS := $(OBJS:.o=.d)

I_FLAG := $(addprefix -I,$(shell find $(IDIR) -type d))
L_FLAG := $(addprefix -L,$(shell find $(LDIR) -type d))

ASFLAGS  += 
CFLAGS   += -MMD -MP $(I_FLAG)
CPPFLAGS += -MMD -MP $(I_FLAG)

# asm source compilation
$(ODIR)/%.s.o: $(SDIR)/%.s
	@mkdir -p $(dir $@)
	$(AS) $(ASFLAGS) -c $< -o $@

# C source compilation
$(ODIR)/%.c.o: $(SDIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# C++ source compilation
$(ODIR)/%.cpp.o: $(SDIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) -c $< -o $@

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ $(L_FLAG) $(LIBS)

run: $(EXEC)
	@./$(EXEC)

clean:
	rm -rf *~ $(EXEC) $(ODIR)

.PHONY: run clean #$(EXEC)

-include $(DEPS)
