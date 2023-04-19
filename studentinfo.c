#include <stdio.h> 

struct Student 
{ 
    int rno; 
    char name[25]; 
    int m, p, c; 
} std; 

int main() 
{ 
    float tot, avg;
    printf("Enter details:\n"); 
    scanf("%d %s %d %d %d", &std.rno, std.name, &std.m, &std.p, &std.c);
    tot = std.m + std.p + std.c;
    avg = tot / 3;
    printf("Roll No = %d \n", std.rno);
    printf("Name = %s\n", std.name);
    printf("Total = %f\n", tot);
    printf("Average = %f\n", avg);
    return 0;
}
