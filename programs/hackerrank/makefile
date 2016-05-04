SUB_DIRS         = $(wildcard */.)
SUB_DIRS_ALL     = $(SUB_DIRS:%=all-%)
SUB_DIRS_COMPILE = $(SUB_DIRS:%=compile-%)
SUB_DIRS_CLEAN   = $(SUB_DIRS:%=clean-%)
SUB_DIRS_DOXYGEN = $(SUB_DIRS:%=doxygen-%)

#
# Standard task
#

# This will call compile, doxygen tool
all: $(SUB_DIRS_ALL)

compile : $(SUB_DIRS_COMPILE) 

clean: $(SUB_DIRS_CLEAN)

doxygen : $(SUB_DIRS_DOXYGEN)

$(SUB_DIRS_ALL):
	@$(MAKE) $(MAKE_FLAGS) -C $(@:all-%=%)

$(SUB_DIRS_CLEAN):
	@$(MAKE) $(MAKE_FLAGS) -C $(@:clean-%=%) clean

$(SUB_DIRS_DOXYGEN):
	@$(MAKE) $(MAKE_FLAGS) -C $(@:doxygen-%=%) doxygen

$(SUB_DIRS_COMPILE):
	@$(MAKE) $(MAKE_FLAGS) -C $(@:compile-%=%) compile
