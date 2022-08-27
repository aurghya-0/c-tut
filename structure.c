#include <stdio.h>

struct student
{
    int roll;
    int marks;
};

union uniStudent
{
    int roll;
    int marks;
};

union marksDist
{
    struct
    {
        int phys;
        int chem;
        int bio;
        int math;
    } science;

    struct
    {
        int eng;
        int ben;
    } arts;
};

int main()
{
    union marksDist m;
    scanf("%d", &m.science.phys);
    m.science.chem = 10;

    return 0;
}