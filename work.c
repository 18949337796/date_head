int fn_Ma_YearStart(int nYear,int nMonth,int nDay)
/*
�˺���������ݡ��·ݼ�����,�ж������ǵ������һ��(�������)
����1 : ��������
����2 : ������·�
����3 : ���������
����ֵ : �������ڼ�,ֵΪ-1ʱ,��ʾ��������
*������ : ��־ǿ
*��������:2022.4.29
*ά���� : ��־ǿ
*ά������:2022.4.29
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