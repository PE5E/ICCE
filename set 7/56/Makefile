#!/usr/bin/make
# 
# Handmade Makefile, for easy insertion into a little C++ project,
# heavily commented for educational use. Requires GNU g++ and GNU Make.
# Supports some use of git, flexc++ and bisonc++
# Intended for use as a single Makefile.
# (see http://aegis.sourceforge.net/auug97.pdf)
#
# Author: Jurjen Bokma <j.bokma@rug.nl>
#
# FEATURES:
# - If you update a header file, all sources that include it
#   will be rebuilt. This results in many fewer runs of 'make clean'.
#   In two cases, 'make clean' is still required though:
#   - when you *remove* a header file from the tree, and
#   - when you turn off precompiled headers after having used them.
# - Will generate *.cc, *.hh *.ih, *.fc++, *.bc++ from skeletons.
# - Will update header and source from newer scanner spec or parser spec.
#

# Extensions are IMPORTANT:
# Use .cc for sources, .hh for headers, .ih for internal headers,
# .fc++ for scanner/lexer specifications,
# .bc++ for parser specifications.

# Usage:
# The source must be arranged like this:
#   .
#   ├── someclass
#   │   ├── someclass.hh
#   │   ├── someclass.ih
#   │   ├── ctor.cc
#   │   ├── etc.
#   ├── otherclass
#   │   └── etc.
#   ├── main.cc
#   ├── otherprog.cc
#   ├── Makefile
#   └── test
#       ├── sometest.cc
#       ├── anothertest.cc
#       └── etc.
#
# The Makefile can be used as-is, without editing.
# Source files having a 'main' function are assumed to be program sources.
# The sources in the 'test' directory are assumed to be such program sources.
# The most important program is supposed to be called 'main.cc'.
# All other source files are compiled into a static convenience library.
# The program objects are linked against the convenience library to
# create executables.

#################################
# Edit to taste in this section #
#################################

# By default, the project is named after the current directory
# This allows us to use the Makefile without even editing it.
BASEDIR := $(shell basename $$(pwd)|sed 's/-[0-9.].*//')
# Using ':=' means that BASEDIR is assigned to *once*.
# A variable assigned to with '=' is expanded every time it is used.

# To rename the project, change PROJECT, not BASEDIR
PROJECT := $(BASEDIR)

# The version specified here will be overridden by Git if you use that.
# But you will have to tag releases like this:
# v0.1.2 or r0.1.2. Underscores instead of dots also works.
MAJOR := 0
MINOR := 0
BUGFIX := 0
# MAJOR, MINOR and BUGFIX are available in the sources as if they were
# specified there with a preprocessor #define

# The executable and the static convenience library are both
# named after the project.
EXECUTABLE := $(PROJECT)
LIBNAME := $(PROJECT)
# If you don't name your most important program 'main.cc',
# it will still be built.

# Uncomment to debug (or just define DEBUG in the environment)
DEBUG += 1

# To show compilation commands, define VERBOSE in the environment
ifndef VERBOSE
QUIET := @
endif

# Any environment variables are extended, not replaced
CXX=g++-7
# So either edit here, or set in the environment
#CXXFLAGS += -Wall -std=c++17
# -fabi-version=7 -Wabi
COMMON_FLAGS = -Wall -Wextra -std=c++17 -fopenmp -fexceptions
#-O3 -floop-unroll-and-jam -floop-nest-optimize -fgraphite-identity -ftree-loop-linear -floop-interchange -floop-strip-mine -floop-block -floop-nest-optimize  -ftree-coalesce-vars -ftree-loop-if-convert -ftree-loop-distribution -ftree-loop-im -funswitch-loops -ftree-loop-ivcanon -fivopts -ftree-parallelize-loops=$(shell getconf _NPROCESSORS_ONLN) -ftree-vectorize -fvariable-expansion-in-unroller -floop-parallelize-all
LDFLAGS += -L.
LDLIBS += -l$(LIBNAME)

# If calling 'make' should not build all tests programs,
# remove 'tests' from the following line
ALL = $(EXECUTABLE) progs tests

# For small projects, the gain of a shorter compile time usually does not
# compensate for the loss of precompiling the headers in the first place.
# Nevertheless, if headers must be precompiled, uncomment the next line.
# USE_PRECOMPILED_HEADERS = nonempty
# NB: when switching away from using precompiled headers,
# a 'make clean' IS REQUIRED!
# (Lest the precompiled headers stay around, and the compiler reads
#  those instead of the actual headers, which you may have updated.)

# Other tools
FCPP = flexc++
BISONCPP = bisonc++
CLANG++ ?= clang++-4.0
LLC ?= llc-4.0
LD ?= ld
LLVM_LINK ?= llvm-link-4.0
LLVM_CONFIG ?= llvm-config-4.0

####################################################################
# NO EDITING below this line, please.                              #
# If you do, back up your filesystems before you run 'make' again. #
####################################################################

ifeq ($(shell $(CXX) --version|grep -o clang),clang)
  LDFLAGS += $(shell $(LLVM_CONFIG) --ldflags)
  # -glldb is for debugging with lldb
  # -stdlib=libc++ and -stdlib=libstdc++ are for linking with clang and gcc libc++ respectively
  # -### is for showing intermediate steps
  CXXFLAGS += $(COMMON_FLAGS) $(shell $(LLVM_CONFIG) --cxxflags)
  CPPFLAGS += $(shell $(LLVM_CONFIG) --cppflags) -I$(SRC_DIR)
else
  CXXFLAGS += -Wall -std=c++17 -fopenmp
endif

PACKAGE_TARNAME=$(PROJECT)

DEFINES := -DPROJECT='"$(PROJECT)"' -DEXECUTABLE='"$(EXECUTABLE)"' -DLEVEL1_DCACHE_LINESIZE='$(shell getconf LEVEL1_DCACHE_LINESIZE)' -D_NPROCESSORS_ONLN='$(shell getconf _NPROCESSORS_ONLN)'

ifdef DEBUG
  DEFINES += -DDEBUG=1
endif

# See if git is available, *and* we are under Git control...
GIT_EXIT := $(shell git rev-parse --is-inside-work-tree >/dev/null 2>&1 && echo true || echo false)
# If so, Git versioning overrides handcoded above
# Most git-related info goes straight to version/git_info.ih
ifeq ($(GIT_EXIT),true)
  GIT_BRANCH := $(shell git rev-parse --abbrev-ref HEAD)
  GIT_CLEAN := $(shell test "x$$(git status --porcelain)" = "x" && echo true || echo false)
  ifeq ($(GIT_CLEAN),true)
    BUILD_COUNT = 0
    $(file > .build_count,$(BUILD_COUNT))
  else
    # BUILD_COUNT only increases at 'make clean'
    BUILD_COUNT = $(shell cat .build_count 2>/dev/null || echo 0)
  endif
  GIT_HASH := $(shell git rev-parse HEAD)
  GIT_TAG = $(shell git describe --exact-match HEAD 2>/dev/null || echo "untagged")
  GIT_LAST_TAG := $(shell git tag|egrep [vr]?[0-9]+[.-][0-9]+[.-][0-9]+|sort -r|head -1)
  ifeq (x$(GIT_LAST_TAG),x)
    GIT_COMMIT_COUNT := $(shell git rev-list --count HEAD)
  else
    GIT_LAST_TAG_VERSION := $(strip $(subst r, ,$(subst v, ,$(subst -, ,$(subst ., ,$(GIT_LAST_TAG))))))
    GIT_MAJOR := $(word 1,$(GIT_LAST_TAG_VERSION))
    GIT_MINOR := $(word 2,$(GIT_LAST_TAG_VERSION))
    GIT_BUGFIX := $(word 3,$(GIT_LAST_TAG_VERSION))
    GIT_COMMIT_COUNT := $(shell echo $$(( $$(git rev-list --count HEAD) - $$(git rev-list --count $(GIT_LAST_TAG) ) )) )
  endif
  # Write Git information to file
  $(file > .GIT_NEWINFO,\
	constexpr char const *git__info = "\
Git Information:\n\
  Clean build: $(GIT_CLEAN)\n\
  Hash: $(GIT_HASH)\n\
  Current tag: $(GIT_TAG)\n\
  Last tag: $(GIT_LAST_TAG)\n\
  Commits since last tag: $(GIT_COMMIT_COUNT)\n\
  Clean build count: $(BUILD_COUNT)\n\
	";\
)
  $(shell cmp .GIT_NEWINFO GIT_INFO >/dev/null 2>/dev/null || cp .GIT_NEWINFO GIT_INFO):
endif

# In the worst case, this gives a mixture of git-tag based and manual versioning.
_MAJOR := $(if $(GIT_MAJOR),$(GIT_MAJOR),$(MAJOR))
_MINOR := $(if $(GIT_MINOR),$(GIT_MINOR),$(MINOR))
_BUGFIX := $(if $(GIT_BUGFIX),$(GIT_BUGFIX),$(BUGFIX))
VERSION := $(_MAJOR).$(_MINOR).$(_BUGFIX)
DEFINES += -DMAJOR=$(_MAJOR) -DMINOR=$(_MINOR) -DBUGFIX=$(_BUGFIX)

# Recursive function. We use it to search for sources in the entire tree.
rwildcard = $(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2)\
$(filter $(subst *,%,$2),$d))

# Function that runs flexc++ on its argument
# The *.ih indirectly includes the *base.hh, which depends on *.fc++. So indirectly, *.ih depends on *.fc++.
# And running flexc++ doesn't update the *.ih, so flexc++ runs every time Make is invoked.
# We break this loop by touching the *.ih, and the *.hh as well.
define flexcpp
echo Generating scanner from $1 
$(FCPP) \
--target-directory="$(dir $1)" \
--baseclass-header="$(notdir $(patsubst %.fc++,%base.hh,$1))" \
--class-header="$(notdir $(patsubst %.fc++,%.hh,$1))" \
--implementation-header="$(notdir $(patsubst %.fc++,%.ih,$1))" \
--lex-source="$(notdir $(patsubst %.fc++,%.cc,$1))" \
$1
touch $(patsubst %.fc++,%.hh,$1) $(patsubst %.fc++,%.ih,$1)
endef

# Function that checks if all files have been generated from the scanner spec
define flexcpp_did_run
   test -e $(patsubst %.fc++,%base.hh,$1) \
&& test -e $(patsubst %.fc++,%.hh,$1) \
&& test -e $(patsubst %.fc++,%.ih,$1) \
&& test -e $(patsubst %.fc++,%.cc,$1) \
&& echo true
endef

# Function that runs bisonc++ on its argument
define bisoncpp
$(BISONCPP) \
--target-directory="$(dir $1)" \
--baseclass-header="$(notdir $(patsubst %.bc++,%base.hh,$1))" \
--class-header="$(notdir $(patsubst %.bc++,%.hh,$1))" \
--implementation-header="$(notdir $(patsubst %.bc++,%.ih,$1))" \
--parsefun-source="$(notdir $(patsubst %.bc++,%.cc,$1))" \
--verbose \
$1
endef

# Function that checks if all files have been generated from the parser spec
define bisoncpp_did_run
   test -e $(patsubst %.bc++,%base.hh,$1) \
&& test -e $(patsubst %.bc++,%.hh,$1) \
&& test -e $(patsubst %.bc++,%.ih,$1) \
&& test -e $(patsubst %.bc++,%.cc,$1) \
&& echo true
endef

# Find source files by extension
FOUNDSOURCES = $(call rwildcard,,*.cc)

# Unit tests should be kept in TESTDIR
TESTDIR = test
TESTSOURCES = $(filter $(TESTDIR)/%,$(FOUNDSOURCES))
TESTS = $(patsubst %.cc,%,$(TESTSOURCES))
TESTOBJS = $(patsubst %.cc,%.o,$(TESTSOURCES))

# The grep expression below finds sources that contain a main() function.
# Only the following forms (mostly whitespace-insensitive) are supported:
# int main()
# int main(int argc, char *argv[])
# int main(int argc, char **argv)
# Any comment inside the function header will spoil detection
PROGSOURCESFOUND = $(subst ./,,$(shell find -type f -iname \*.cc -exec grep -qE '^\s*int\s+main\s*\(\s*(int\s*argc\s*,\s*char\s*(\*\s*argv\s*\[\s*\]|\*\s*\*\s*argv)\s*)?\)(s*\{)?\s*' {} \; -print))
PROGSOURCES = $(filter-out $(TESTSOURCES),$(PROGSOURCESFOUND))
PROGS = $(patsubst %.cc,%,$(PROGSOURCES))

# The rest of the sources go in the convenience library
LIBSOURCES = $(filter-out main.cc,$(filter-out $(PROGSOURCES),$(filter-out $(TESTSOURCES),$(FOUNDSOURCES))))
LIBOBJECTS = $(patsubst %.cc,%.o,$(LIBSOURCES))
# ALLOBJFILES is just for cleaning up
ALLOBJFILES = $(call rwildcard,,*.o)

# NB: with pch's *all* headers are always precompiled, regardless of whether
# any goals have them as targets.
# NB: Precompiled headers are HUGE. Too large for tarballs or slow transfers.
ifdef USE_PRECOMPILED_HEADERS
    # Find headers and internal headers as well
    FOUNDHEADERS = $(call rwildcard,,*.hh)
    FOUNDINTERNALHEADERS = $(call rwildcard,,*.ih)
    PRECOMPILEDHEADERS = $(patsubst %,%.gch,$(FOUNDINTERNALHEADERS) $(FOUNDHEADERS))
    PCHEXTRADEPS = $(patsubst %.ih,$(DEPDIR)/%.d,$(FOUNDINTERNALHEADERS)) $(patsubst %.hh,$(DEPDIR)/%.d,$(FOUNDHEADERS))
else
    # Just for cleaning up
    PRECOMPILEDHEADERS = $(call rwildcard,,*.gch)
endif

# Find scanners: a newer scanner spec needs to generate a new scanner header and source.
FOUNDSCANNERS = $(call rwildcard,,*.fc++)
SCANNERDEPS = $(patsubst %,$(DEPDIR)/%.d,$(FOUNDSCANNERS))
# Do the same to parser specifications. (See further down for the actual dependency generating.)
FOUNDPARSERS = $(call rwildcard,,*.bc++)
PARSERDEPS = $(patsubst %,$(DEPDIR)/%.d,$(FOUNDPARSERS))


# GNU gcc can generate dependencies. We use those to determine
# which source file needs which headers, and consequently to
# update dependent source files when the header has changed.
# This saves on manual `make clean' commands, and hence on rebuilding
# whatever was cleaned.
# NB: dependencies lag behind one round of Make. This is hardly ever a problem.
DEPDIR := .d
DEPFILES = $(patsubst %.cc,$(DEPDIR)/%.d,$(FOUNDSOURCES)) $(PCHEXTRADEPS)
DEPDIRS = $(sort $(dir $(DEPFILES)  $(SCANNERDEPS) $(PARSERDEPS)))
DEPFLAGS = -MT $@ -MMD -MP -MF $(DEPDIR)/$*.Td
# Make the dependency tree right now, except the leaves.
$(shell mkdir --parent $(DEPDIRS) > /dev/null 2>&1)
# If compilation fails, we don't want to be left with a broken dependency file,
# so we put the dependency in a temporary, and after compilation move it to the
# actual included file.
POSTCOMPILE = mv -f $(DEPDIR)/$*.Td $(DEPDIR)/$*.d
HEADERPOSTCOMPILE = $(POSTCOMPILE)
SRCPOSTCOMPILE = $(POSTCOMPILE)
ifdef USE_PRECOMPILED_HEADERS
    # This sed command changes '.ih' and '.hh' into '.gch' in the prerequisites
    # of any rule with a target *.o, conveniently using the fact that the
    # generated dependencies are seperated by empty lines.
    SRCPOSTCOMPILE += && sed -i '/^[^:]*.o:/,/^$$/ s/.[ih]h/&.gch/g' $(DEPDIR)/$*.d
endif

# List scanner specs as dependency of base class and implementation
$(foreach SCANNERSPEC,$(FOUNDSCANNERS),\
  $(file > $(patsubst %,$(DEPDIR)/%.d,$(SCANNERSPEC)),$(patsubst %.fc++,%base.hh,$(SCANNERSPEC)) $(patsubst %.fc++,%.cc,$(SCANNERSPEC)): $(SCANNERSPEC) ) )
# Do teh same for parsers
$(foreach PARSERSPEC,$(FOUNDPARSERS),\
  $(file > $(patsubst %,$(DEPDIR)/%.d,$(PARSERSPEC)),$(patsubst %.fc++,%base.hh,$(PARSERSPEC)) $(patsubst %.fc++,%.cc,$(PARSERSPEC)): $(PARSERSPEC) ) )


# When just linking and not compiling, the DEPFLAGS will be ignored.
CXXFLAGS += $(DEPFLAGS) $(DEFINES)

# This serves to 'make foo/bar.hh' and saves some typing
define HEADER_SKELETON
#ifndef def_h_include_$(notdir $*)_hh
#define def_h_include_$(notdir $*)_hh
#endif //def_h_include_$(notdir $*)_hh
endef
# Export to the environment for easy retrieval in a shell command.
export HEADER_SKELETON

define INTERNAL_HEADER_SKELETON
#include "$(notdir $*).hh"

using namespace std;
endef
# Export to the environment for easy retrieval in a shell command.
export INTERNAL_HEADER_SKELETON

define SOURCE_SKELETON
#include "$(subst /,,$(dir $*)).ih"

endef
# Export to the environment for easy retrieval in a shell command.
export SOURCE_SKELETON

define SCANNER_SKELETON
// %case-insensitive
// %class-name = "className"
// %debug
// %input-interface = "interface"
// %interactive
// %no-lines
// %namespace = "identifer"
// %print-tokens
// %s namelist
// %x namelist
%%
[a-zA-Z]+	return 256;
// Mind the final newline

endef
export SCANNER_SKELETON

# ToDo: make scanner and parser skeletons that will cooperate when defined
# in 'scanner/scanner.fc++' and 'parser/parser.bc++', respectively.
define PARSER_SKELETON
//%baseclass-preinclude cmath
%stype double

%token NUM

%%

nums:
        // empty
|
        NUM NUM
;
endef
export PARSER_SKELETON

# To precreate main.cc
define MAIN_CC
#include <iostream>

using namespace std;

int main(int argc, char **argv)
try
  {
  }
 catch (...)
   {
     cerr << "Something bad happened\\n";
   }
endef
export MAIN_CC

# By convention, 'all' is the first and default target,
# made if one runs 'make' without arguments.
all: $(EXECUTABLE) $(TESTS)

test: $(TESTS)
	$(QUIET) for T in $$(echo $(TESTS)|tr ' ' '\n'|sort -n) ; do \
	    echo "Running: $${T}" ;\
	    $${T} || echo "Error: $${T} FAILED!" ;\
	done

# The executable is merely a copy of main
#  This is a normal, explicit rule. It tells Make
#  - $(EXECUTABLE) can be made from main,
#  - if $(EXECUTABLE) is desired, it must be remade if main is newer, and
#  - a recipe for doing just that.
$(EXECUTABLE): main
	$(QUIET) cp $< $@

# 'make tests' makes only the test programs
#   This is a prerequisite-only rule. The recipe for making a test program
#   is supplied further down.
tests: $(TESTS)

doc:
	$(QUIET) doxygen

progs: $(PROGS)

# All executables need the convenience library
main $(TESTS) $(PROGS): lib$(LIBNAME).a

# The convenience library is built from all the objects
lib$(LIBNAME).a: $(LIBOBJECTS)
	$(QUIET) ar rcs $@ $^

# Cancel the built-in rules that don't use post-compile
%: %.cc
%.o: %.cc

# Building an object from source needs the postcompile, because it also
# generates a dependency file.
#  This is a pattern rule, so it provides a recipe, but doesn't generate
#  dependencies. It tells Make how *.o can be made from *.cc, but
#  doesn't tell it that if someclass/someclass.cc is newer,
#  someclass/someclass.o must be remade.
#  That must be told by the generated dependency file.
%.o: %.cc $(PRECOMPILEDHEADERS)
	$(QUIET) echo "   [Compiling] $<"
	$(QUIET) $(CXX) $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<
	$(QUIET) $(SRCPOSTCOMPILE)

# This is for programs. Double colon, because it the .cc isn't there, don't bother making it.
%: %.cc $(PRECOMPILEDHEADERS)
	$(QUIET) echo "   [Compiling] $<"
	$(QUIET) $(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $< $(LDFLAGS) $(LDLIBS)
	$(QUIET) $(SRCPOSTCOMPILE)
%: %.cc $(DEPDIR)/%.d

# Flexc++ can generate from a scanner specification
# - a base class header (that will be regenerated)
# - a scanner implementation
%base.hh %.cc:: %.fc++
	$(QUIET) $(call flexcpp,$<)
# It can also generate
# - a header file and
# - an internal header file
# But both are generated once, then never again
%.hh %.ih::| %.fc++
	$(QUIET) $(call flexcpp,$<)

# Bisonc++ can also generate those files, from a parser specification
#%base.hh %.cc %.hh %.ih: %.bc++
# %.hh and %.ih are also made, but must not be prerequisistes once generated
%base.hh %.cc:: %.bc++
	$(QUIET) $(call bisoncpp,$<)
%.hh %.ih::| %.bc++
	$(QUIET) $(call bisoncpp,$<)

# Building executables requires the convenience library.
# The LDFLAGS and LDLIBS are therefore added, *at*the*end* of the g++ invocation!
# The prefix '@' tells Make not to echo the command.
# Just linking here, so no postcompile
%: %.o lib$(LIBNAME).a
	$(QUIET) echo "   [Linking] $<"
	$(QUIET) $(CXX) $(CXXFLAGS) $< -o $@ $(LDFLAGS) $(LDLIBS)

ifdef USE_PRECOMPILED_HEADERS
# A precompiled header *.hh.gch can be made from *.hh. Or from *.ih.
# Or actually from *. Better not call the rule on non-headers, though.
%.gch:: %
	$(QUIET) echo "   [Precompiling header] $< into $@"
	$(QUIET) $(CXX) $(CPPFLAGS) $(CXXFLAGS) -x c++-header -c -o $@ $<
	$(QUIET) $(HEADERPOSTCOMPILE)
## If the rules that generate *.d below are uncommented, *all* .d files will be
## generated before Make starts making other targets
## If dependency files are needed, they can be made from headers ...
#$(DEPDIR)/%.d: %.hh
#	$(QUIET) echo "   [Precompiling header] $< (side effect of making dependency file)"
#	$(QUIET) $(CXX) $(CPPFLAGS) $(CXXFLAGS) -x c++-header -o $*.hh.gch $<
#	$(QUIET) $(HEADERPOSTCOMPILE)
## ... from internal headers...
#$(DEPDIR)/%.d: %.ih
#	$(QUIET) echo "   [Precompiling internal header] $< (side effect of making dependency file)"
#	$(QUIET) $(CXX) $(CPPFLAGS) $(CXXFLAGS) -x c++-header -o $*.ih.gch $<
#	$(QUIET) $(HEADERPOSTCOMPILE)
## ... and from sources, in which case the object file is also generated.
#$(DEPDIR)/%.d: %.cc
#	$(QUIET) echo "   [Compiling] $< (side effect of making dependency file)"
#	$(QUIET) $(CXX) $(CPPFLAGS) $(CXXFLAGS) -c -o $(subst .cc,.o,$<) $<
#	$(QUIET) $(SRCPOSTCOMPILE)

# Keep those precompiled header files around.
.PRECIOUS: %.gch
endif

# Empty rule, so that a missing .d generates no error.
# This causes the dependency lag (see above), but saves a lot of
# needless recompiling.
$(DEPDIR)/%.d: ;

# Phony targets are considered for remaking, even if their targets already exist,
# and if they don't actually make their targets, that's ok as well.
.PHONY: all clean depclean docclean distclean tests progs tar tests doc install uninstall scanners parsers view

# Prevent Make from creating %.fc++, then %.cc, then % for just any file
.INTERMEDIATE: %.fc++ %.bc++

# To generate scanners from all scanner specs that have never been processed
scanners:
	$(QUIET) $(foreach SCANNER,$(FOUNDSCANNERS),$(and $(call flexcpp_did_run,$(SCANNER)),$(call flexcpp,$(SCANNER))))
# Idem dito for parsers
parsers:
	$(QUIET) $(foreach PARSER,$(FOUNDPARSERS),$(and $(call bisoncpp_did_run,$(PARSER)),$(call bisoncpp,$(PARSER))))

# Remove all generated files. (NB: don't bother with generated scanner/parser headers/sources)
clean:
	$(QUIET) rm -f $(EXECUTABLE) main $(TESTS) $(PROGS) lib$(LIBNAME).a $(ALLOBJFILES) $(PRECOMPILEDHEADERS)
	$(QUIET) rm -rf $(DEPDIR)
	$(QUIET) echo $$(( $(BUILD_COUNT) + 1)) > .build_count

docclean:
	$(QUIET) rm -rf doc/*

distclean: clean docclean
	$(QUIET) ind -iname \*~ -delete

# We prefer to err on the safe side of caution: anything that
# isn't obviously junk goes in the tarball.
tar: $(PROJECT)-$(VERSION).tgz

# Well, we exclude precompiled headers, among other things.
$(PROJECT)-$(VERSION).tgz: clean
	$(QUIET) tar cvzf /tmp/$(PROJECT)-$(VERSION).tgz \
	--transform='s%^./%$(PROJECT)-$(VERSION)/%' \
	--exclude=*~ \
	--exclude=./.git \
	--exclude=./.gitignore \
	--exclude=*.gch \
	--exclude=./$(DEPDIR) \
	--exclude=./$(PROJECT)-$(VERSION).tgz\
	 ./
	$(QUIET) mv /tmp/$(PROJECT)-$(VERSION).tgz ./

# ToDo: support $(DESTDIR)
install: $(EXECUTABLE)
	$(QUIET) install -m 755 $(EXECUTABLE) $(DESTDIR)/bin/

uninstall:
	$(QUIET) rm -f $(DESTDIR)/bin/$(EXECUTABLE)

# This is a dangerous rule: Make can use it to generate a header file wherever
# it thinks it needs one, and clutter the source tree with empty headers.
# But it's convenient to be able to say: make someclass/someclass.hh
hh\:%:
	$(QUIET) test -e $*.hh || echo "$$HEADER_SKELETON" > $*.hh

ih\:%:
	$(QUIET) test -e $*.ih || echo "$$INTERNAL_HEADER_SKELETON" > $*.ih

main.cc:
	$(QUIET) test -e $@ || echo "$$MAIN_CC" > $@

cc\:%:
	$(QUIET) test -e $*.cc || echo "$$SOURCE_SKELETON" > $*.cc

scanner\:%:
	$(QUIET) test -e $*.fc++ || echo "$$SCANNER_SKELETON" > $*.fc++

parser\:%:
	$(QUIET) test -e $*.bc++: || echo "$$PARSER_SKELETON" > $*.bc++
	$(QUIET)echo
	$(QUIET)echo "Parser generated. In the class definition in the parser header file,"
	$(QUIET)echo "you will likely want to add the following member"
	$(QUIET)echo
	$(QUIET)echo Scanner d_scanner;
	$(QUIET)echo

__all_targets__: ; #no-op

# Include generated dependencies, but don't bother when cleaning up.
ifneq ($(MAKECMDGOALS),clean)
    -include $(DEPFILES)
endif

define recipe
$(FCPP) $1
endef
