all:
	g++ -o main main.cpp myList.cpp -Wall -g
clean:
	rm main *~ -rf
