all:	heart
heart:	heart.cpp	heart_test.cpp
	g++ heart.cpp heart_test.cpp -lgtest -lgtest_main -lpthread -o all.out
run:
	./all.out
clean:
	rm *.out
