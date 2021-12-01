all: clean day1-1 day1-2

clean:
	rm -rf day1-1 day1-2

day1-1:
	g++ day1-1.cpp -o day1-1

day1-2:
	g++ day1-2.cpp -o day1-2

test-1:
	cat test.txt | ./day1-1

test-2:
	cat test.txt | ./day1-2

solve-1:
	cat input.txt | ./day1-1

solve-2:
	cat input.txt | ./day1-2

