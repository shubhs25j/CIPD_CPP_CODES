#include <stdio.h>
int main()
{
    float R, G, B;
    printf("Enter the value of colour red,Green and blue(0-255)\n");
    scanf("%f%f%f", &R, &G, &B);
    float white, cyan, magenta, yello, black;
    if (R == 0 && G == 0 && B == 0)
    {

        cyan = 0;
        magenta = 0;
        yello = 0;
        black = 1;
        printf("The value of cyan is: %f\n", cyan);
        printf("The value of yello is: %f\n", yello);
        printf("The value of magneta is: %f\n", magenta);
        printf("The value of black is: %f\n", black);
    }
    else
    {
        float max;
        if (R / 255 > G / 255 && R / 255 > B / 255)
            max = R;
        else if (G / 255 > R / 255 && G / 255 > B / 255)
            max = G;
        else if (B / 255 > R / 255 && B / 255 > G / 255)
            max = B;
        white = max / 255;
        cyan = (white - R / 255) / white;
        magenta = (white - G / 255) / white;
        yello = (white - B / 255) / white;
        black = 1 - white;
        // printf("The value of White is: %f\n",white);
        printf("The value of cyan is: %f\n", cyan);
        printf("The value of yello is: %f\n", yello);
        printf("The value of magneta is: %f\n", magenta);
        printf("The value of black is: %f\n", black);
    }

    return 0;
}