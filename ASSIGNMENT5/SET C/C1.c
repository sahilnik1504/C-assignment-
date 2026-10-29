#include <stdio.h>

int isLeap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    return 0;
}

int daysInMonth(int mm, int year)
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mm == 2 && isLeap(year))
        return 29;
    return days[mm - 1];
}

void addDays(int *dd, int *mm, int *yy, int n)
{
    int year = 2000 + *yy;
    int left;

    while (n > 0)
    {
        left = daysInMonth(*mm, year) - *dd;  

        if (n <= left)
        {
            *dd = *dd + n;
            n = 0;
        }
        else
        {
            n = n - left - 1;
            *dd = 1;
            *mm = *mm + 1;

            if (*mm > 12)
            {
                *mm = 1;
                *yy = *yy + 1;
                if (*yy > 99)
                    *yy = 0;
                year = 2000 + *yy;
            }
        }
    }
}

int main()
{
    int dd, mm, yy, n;

    printf("Enter date (dd mm yy): ");
    scanf("%d %d %d", &dd, &mm, &yy);

    printf("Enter number of days to add: ");
    scanf("%d", &n);

    addDays(&dd, &mm, &yy, n);

    printf("New date = %02d/%02d/%02d\n", dd, mm, yy);

    return 0;
}