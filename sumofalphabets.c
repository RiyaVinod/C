
ABIRAMI K BTech_AIML
9:45 AM (0 minutes ago)
to me

#include <stdio.h>

int calculate(char a[]) {
    int sum = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        char str = a[i];
        if (str == 'A') {
            sum += 1;
        } else if (str == 'B') {
            sum += 10;
        } else if (str == 'C') {
            sum += 100;
        } else if (str == 'D') {
            sum += 1000;
        } else if (str == 'E') {
            sum += 10000;
        } else if (str == 'F') {
            sum += 100000;
        } else if (str == 'G') {
            sum += 1000000;
        }
    }
    return sum;
}

int main() {
    char a[20] = "ABAABCDEH";
    int n = calculate(a);
    printf("%d\n", n);
    return 0;
}
