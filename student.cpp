#pragma once

struct Student{
    long long fn;
    char firstName[256];
    char lastName[256];
    int grade;
};

bool operator < (Student a, Student b )
{
    return a.fn < b.fn;
}
