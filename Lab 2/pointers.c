#include <stdio.h>

int main() {
    int x =0 , y = 0, *px, *py;
    int arr[10];

    for(int i = 0; i < 10; i++){
        arr[i] = i;
    }

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("x = %p\n", &x);
    printf("y = %p\n", &y);

    // for(int i = 0; i < 10; i++){
    //     printf("%d\n", arr[i]);
    // }

    for (int i = 0; i < 10; i++){
        printf("%d\n", *(arr + i));
    }

    px = &x;
    py = &y;

    printf("address of x in px = %p\n", px);
    printf("address of y in py = %p\n", py);

    printf("arr = %p\n", arr);
    printf("arr[0] = %p\n", &arr[0]);
    
    return 0;
}
