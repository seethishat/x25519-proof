CXXFLAGS = -Wall -Wextra -std=c++11
LDFLAGS = -lcryptopp -pthread
     
PROGRAM = gen-x25519-keys
SOURCE  = main.cpp
     
all: $(PROGRAM)
     
$(PROGRAM): $(SOURCE) ; $(CXX) $(CXXFLAGS) -o $(PROGRAM) $(SOURCE) $(LDFLAGS)
     
clean: ; rm -f $(PROGRAM)

