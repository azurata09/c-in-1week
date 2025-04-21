mkfile_path = $(dir $(lastword $(MAKEFILE_LIST)))

CC = g++
CFLAGS = -std=c++11
TARGET = test_all

GTEST_INCLUDES = -I$(mkfile_path)external/googletest/googletest/include
GTEST_LIBDIR = -L$(mkfile_path)external/googletest/build/lib

SRCS    = src/*.cc test/*.cc
OBJS    = $(patsubst %.cc,objs/%.o,$(wildcard $(SRCS)))
INCLUDES += $(GTEST_INCLUDES) -Isrc/includes
LIBDIR  += $(GTEST_LIBDIR)
LIBS    = -lgtest -lgtest_main

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LIBDIR) $(LIBS)

objs/%.o: %.cc
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all: clean $(OBJS) $(TARGET)

clean:
	@rm -f $(OBJS) $(TARGET)
