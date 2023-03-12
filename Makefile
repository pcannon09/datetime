# Makefile 08/03/2023
# Last edit 08/03/2023

INCS = 
OBJS = main.o dt.o
EXE  = main

TESTDIR = tests
DTDIR = src
OBJDIR = obj

CXXFLAGS = -Wall -Wextra -Wconversion -g -MMD -MP -std=c++11
INCLUDES = -Iinclude
LIBS = 

_INCS = $(patsubst %,$(INCDIR)/%,$(INCS))
_OBJS = $(patsubst %,$(OBJDIR)/%,$(OBJS))

# Compile

$(OBJDIR)/%.o: $(DTDIR)/%.cpp $(_INCS)
	@echo "Compiling $@ from $<..."
	$(CXX) -c -o $@ $< $(CXXFLAGS) $(INCLUDES)
	@echo

$(OBJDIR)/%.o: $(TESTDIR)/%.cpp $(_INCS)
	@echo "Compiling $@ from $<..."
	$(CXX) -c -o $@ $< $(CXXFLAGS) $(INCLUDES)
	@echo

###

$(EXE): $(_OBJS)
	@echo "Compiling... "
	@echo "Linking $@ from $^..."
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LIBS)
	@echo

.PHONY: clean

# Commands

all: $(EXE)

create:
	@echo "Creating dir 'obj'"
	@mkdir obj
	@echo "Done!"

clean:
	@echo "Cleaning..."
	@rm -f $(OBJDIR)/*
	@rm -f $(EXE)
	@echo "Done."

show_obj:
	@echo "Finding..."
	@ls obj
	@echo "Done!"

reset: clean $(EXE)

###
