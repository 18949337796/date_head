int fn_Ma_YearStart(int nYear,int nMonth,int nDay)
/*
此函数传入年份、月份及日期,判断日期是当年的哪一天(当天计算)
参数1 : 传入的年份
参数2 : 传入的月份
参数3 : 传入的日期
返回值 : 返回星期几,值为-1时,表示输入有误
*开发者 : 马志强
*开发日期:2022.4.29
*维护者 : 马志强
*维护日期:2022.4.29
*/
{
	int nNum[13] = {31,28,31,30,31,30,31,31,30,31,30,31,0};
	if ((nYear % 4 == 0 && nYear % 100 != 0) || nYear % 400 == 0)
	{
		nNum[1] = 29;
	}
	if (nMonth > 12 || (nNum[nMonth - 1] < nDay) || nYear < 0 || nMonth < 1 || nDay < 1)
	{
		return -1;
	}
	for (int i = 1; i < nMonth; i++)
	{
		nNum[12] += nNum[i - 1];
	}
	return nNum[12] += nDay;
}