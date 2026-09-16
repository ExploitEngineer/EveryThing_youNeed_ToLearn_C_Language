# Build any single example in this repo.
#
#   make run FILE=phase-1-language-core/03-pointers/pointer-basics.c
#   make build FILE=...                 compile only, leave binary in build/
#   make run FILE=... EXTRA="other.c"   link extra translation units
#   make run FILE=... ARGS="a b c"      pass arguments to the program
#   make all                            compile every example that has a main()
#   make check                          same as `all`, but keeps going and reports failures
#   make clean

CC      ?= gcc
CFLAGS  ?= -std=c17 -Wall -Wextra -g
LDLIBS  ?= -lm
BUILD   := build

CS50_DIR := vendor/libcs50/src
CS50_SRC := $(CS50_DIR)/cs50.c

# Every .c in the repo that defines a main(), excluding vendored code.
ALL_C   := $(shell find . -name '*.c' -not -path './vendor/*' -not -path './$(BUILD)/*' | sort)
SOURCES := $(shell find . -name '*.c' -not -path './vendor/*' -not -path './$(BUILD)/*' \
                   -exec grep -lE '^[[:space:]]*(int|void)[[:space:]]+main' {} + | sort)
# Translation units with no main() - they are compiled, not linked.
LIB_C   := $(filter-out $(SOURCES),$(ALL_C))

.PHONY: run build all check clean list help

help:
	@sed -n '1,12p' Makefile | sed 's/^# \{0,1\}//'

# Compile $(FILE) into build/<name>. Binary names are flat because every example
# in this repo already has a unique file name.
#
# Two things are worked out automatically so you never have to pass them by hand:
#   - a local `#include "foo.h"` next to the source pulls in a sibling foo.c
#   - `#include <cs50.h>` pulls in vendor/libcs50
define compile
	@mkdir -p $(BUILD)
	@extra="$(EXTRA)"; dir=`dirname "$(1)"`; \
	for h in `grep -oE '#include "[^"]+\.h"' "$(1)" | cut -d'"' -f2`; do \
		sib="$$dir/$${h%.h}.c"; \
		if [ -f "$$sib" ] && [ "$$sib" != "$(1)" ]; then extra="$$extra $$sib"; fi; \
	done; \
	if grep -q '#include <cs50.h>' "$(1)"; then \
		extra="$$extra $(CS50_SRC)"; cs50flags="-I$(CS50_DIR)"; \
	fi; \
	if grep -qE '#include <threads.h>|pthread' "$(1)"; then ldextra="-pthread"; fi; \
	out="$(BUILD)/$(basename $(notdir $(1)))"; \
	echo "$(CC) $(CFLAGS) $$cs50flags $(1)$$extra -o $$out $(LDLIBS) $$ldextra"; \
	$(CC) $(CFLAGS) $$cs50flags "$(1)" $$extra -o "$$out" $(LDLIBS) $$ldextra
endef

build:
	@test -n "$(FILE)" || { echo "usage: make build FILE=path/to/file.c"; exit 2; }
	$(call compile,$(FILE))

run: build
	@echo "--- $(BUILD)/$(basename $(notdir $(FILE)))"
	@./$(BUILD)/$(basename $(notdir $(FILE))) $(ARGS)

all:
	@for f in $(SOURCES); do $(MAKE) --no-print-directory build FILE=$$f || exit 1; done
	@echo "all examples compiled"

check:
	@mkdir -p $(BUILD)
	@fail=0; pass=0; \
	for f in $(SOURCES); do \
		if $(MAKE) --no-print-directory build FILE=$$f >/dev/null 2>$(BUILD)/.err; then \
			pass=$$((pass+1)); \
		else \
			fail=$$((fail+1)); echo "FAIL $$f"; sed 's/^/     /' $(BUILD)/.err | head -5; \
		fi; \
	done; \
	for f in $(LIB_C); do \
		if $(CC) $(CFLAGS) -c $$f -o /dev/null 2>$(BUILD)/.err; then \
			pass=$$((pass+1)); \
		else \
			fail=$$((fail+1)); echo "FAIL $$f (compile only)"; sed 's/^/     /' $(BUILD)/.err | head -5; \
		fi; \
	done; \
	rm -f $(BUILD)/.err; \
	echo "$$pass compiled, $$fail failed"; \
	test $$fail -eq 0

list:
	@for f in $(SOURCES); do echo $$f; done

clean:
	@rm -rf $(BUILD)
	@echo "cleaned"
