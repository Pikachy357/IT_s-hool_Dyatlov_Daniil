#include "pch.h"
#include <stdio.h>



typedef  unsigned short datec_t;
void printCompressedDate(datec_t d);

datec_t mask = 1 << (sizeof(unsigned short) * 8 - 1);
datec_t mask_day = ~0 << 11;
datec_t mask_month = (~0 << 7) & (~mask_day);
datec_t mask_year = ~(~0 << 7);

typedef enum Month {
	JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG,
	SEP, OCT, NOV, DEC, MONTHS = 12
} Month;

typedef struct Date
{
	int dd;
	Month mm;
	int yy;
} Date;

datec_t compressDate(Date d)
{
	datec_t cd = 0;
	cd = d.dd;	
	cd = cd << 11;	
	cd = cd | (d.mm << 7);
	cd = cd | d.yy;
	return cd;
}

Date uncompressDate(datec_t dc)
{
	Date ud;
	ud.dd = (dc & mask_day) >> 11;
	ud.mm = (Month)((dc & mask_month) >> 7);
	ud.yy = dc & mask_year;
	return ud;
}

datec_t setDay(datec_t dc, int newDay)
{
	printCompressedDate(dc);
	dc = (dc & (~mask_day)) | (newDay << 11);
	printCompressedDate(dc);
	return dc;
}

datec_t setMonth(datec_t dc, Month newMonth)
{
	dc = (dc & (~mask_day)) | (newMonth << 7);
	return dc;
}

datec_t setYear(datec_t dc, int newYear)
{
	dc = (dc & (~mask_year)) | newYear;
	return dc;
}

void printDate(Date d)
{
	printf("DATE:");
	printf("%d.%d.%d\n", d.dd, d.mm, d.yy);
}

void printCompressedDate(datec_t d)
{
	printf("CompressedDate:");
	mask = 1 << (sizeof(unsigned short) * 8 - 1);
	for (int i = sizeof(unsigned short) * 8 - 1; i >= 0; i--)
	{
		if (d & mask)
			printf("1");
		else
			printf("0");
		mask = mask >> 1;
	}
	printf("\n");
}


int main()
{
	Date date;
	int day, mm, years;
	datec_t x;
	scanf("%d%d%d", &date.dd, &date.mm, &date.yy);
	printDate(date);
	x = compressDate(date);
	printCompressedDate(x);
	date = uncompressDate(x);
	printDate(date);
	printf("enter day:");
	scanf("%d", &day);
	x = setDay(x, day);
	printCompressedDate(x);
	date = uncompressDate(x);
	printDate(date);
	printf("\n");
	return 0;
}
