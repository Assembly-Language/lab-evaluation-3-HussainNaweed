#include <stdio.h>
#include <conio.h> // For getch()

#ifdef __cplusplus
extern "C" {
#endif

void __stdcall asmfunc(int* arr, int* num);

#ifdef __cplusplus
}
#endif

int main() {
    system("cls");

    int arr[10] = {12, 1, 34, 45, -56, 9, -4, -3, -34, -13};
    int num = 0;

    printf("Assembly procedure called from C!\n");
    getch();

    printf("Array elements: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    asmfunc(arr, &num); // Call the assembly procedure

    getch();

    printf("The total number of positive values is: %d\n", num);
}
