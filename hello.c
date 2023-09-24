#include <stdio.h>

int main() {

	int a = 2;
	int b = 2;
	int c = a + b;

	printf("C says: Hello, World!\n");
	printf("%d + %d = %d\n",a,b,c);
        char listOfUsers[][10] = {"User1", "User2","User3"};
	for (int i = 0; i < sizeof(listOfUsers) / sizeof(listOfUsers[0]); i++) {
		printf("%s\n", listOfUsers[i]);
}
	return 0;

}
