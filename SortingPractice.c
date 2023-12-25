#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

// Function here/////////////////////////////////////////////////////////////////////
















/////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int array[100000], length = 0;
    FILE *file; file = fopen("input.txt", "r");
    while (!feof(file)){
        fscanf(file, "%d, ", &array[length]);
        length ++;
    }
    fclose(file);
    LARGE_INTEGER frequency, t1, t2;
    double elapsedTime;


    QueryPerformanceFrequency(&frequency);

    QueryPerformanceCounter(&t1);
    // Function here//////////////////////////////////////////////////////////////////////////////////
    // varname : int array[], int length;
    //happy sorting







    //////////////////////////////////////////////////////////////////////////////////////////////////
    QueryPerformanceCounter(&t2);
    elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
    printf("Sorting time: %f ms. /  %.3f seconds\n", elapsedTime, elapsedTime / 1000);
    FILE *file1; file1 = fopen("output.txt", "w");
    for(int i = 0; i < length; i++){
        fprintf(file1, "%d, ", array[i]);
    }
    fclose(file1);

    return 0;
}
