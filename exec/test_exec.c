#include <unistd.h>
#include <stdio.h>

int main(int argc, char* argv) {
	char *args[] = {"hoge", "fuga", NULL};
	execv("./test_exec2", args);
}



