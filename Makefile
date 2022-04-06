OS := $(shell uname)
OPTIONS:=

ifeq ($(OS),Darwin)
	OPTIONS += -framework OpenCL
else
	OPTIONS += -l OpenCL
endif

all: main.cpp
	g++ main.cpp -o main.exe $(OPTIONS)

clean:
	rm -rf main