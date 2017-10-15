objects = test.exe duipai.exe data.exe

all: $(objects)

$(objects): %.exe: %.cpp
	g++ -c -static $< -o $@