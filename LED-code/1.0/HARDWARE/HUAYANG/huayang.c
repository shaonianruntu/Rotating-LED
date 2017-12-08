#include "huayang.h"

u8 BUF1[DISPLAY_BUFFER_SIZE];
//u8 BUF2[DISPLAY_BUFFER_SIZE];

/*******************************************************************************
* ������         : u8 Get_Centre(u32 size)
* ��������		 : ��ȡ��ʾ�����ڻ��������м�λ�õ���㺯��
* ����           : size: ��Ҫ��ʾ����ģ����С��
* ���         	 : ����ģ���ڻ��������м���ʾ����ʼλ��
*******************************************************************************/
u8 Get_Centre(u32 size)
{
	return (((BUF1_SIZE / 2) - (size / 2)) / 2);	//���е�Ŀ��
}
/*******************************************************************************
* ������         : void Clear_All(u8 *buf)
* ��������		 : ���������ʾ������
* ����           : buf:��Ҫ����Ļ�����
* ���         	 : ��
*******************************************************************************/
void Clear_All(u8 *buf)
{
	u32 cnt = BUF1_SIZE;
	while(cnt--)
	{
		*(buf + cnt) = 0;
	}
}
/*******************************************************************************
* ������         : void Copy_to_Buf(u8 *Source, u8 *Location, u32 cnt)
* ��������		 : ���ѡ������
* ����           : begin:��ʼ��
				   end:������
* ���         	 : ��
*******************************************************************************/
void Clear_Line(u32 begin, u32 end)
{
	u32 cnt = (end - begin + 1) * 2;
	u8 *p = BUF1 + begin * 2;
	while(cnt--)
	{
		*p++ = 0;
	}
}
/*******************************************************************************
* ������         : void Copy_to_Buf(u8 *Source, u8 *Location, u32 cnt)
* ��������		 : �������ݵ�������
* ����           : Source:ָ�����ݵ�Դͷ
				   Location:ָ�����ݵ�Ŀ�ĵ�
				   cnt:��Ҫ��ֵ����Чλ��
* ���         	 : ��
*******************************************************************************/
void Copy_to_Buf(u8 *Source, u8 *Location, u32 cnt)
{
	while(cnt--)
	{
		*Location++ = *Source++;
	}
}
/*******************************************************************************
* ������         : u8 ZuoYi(u8 *Source, u8 size, u8 begin, u8 end, u8 mode)	
* ��������		 : ������������������һλ, ��ʹ������ģ��ȫ��ѭ����ʾ��Ĺ���
* ����           : Source:��Ҫ���뻺������ʾ���ַ���
				   size:��Ҫ�������ַ���
				   begin:��ʼ��ʾ������
				   end:������ʾ��λ��
				   mode:1 :����ģʽ; 0 :����ģʽ
//begin,end��Ӧ��������ת������ʾ������,���������ϵ�λ��,�ܴ�С���Ʋ�һ��Ϊsize
* ���         	 : 1 :�������; 0 :���ڴ���..
*******************************************************************************/
u8 ZuoYi(u8 *Source, u32 size, u32 begin, u32 end, u8 mode)	
{
	u32 i;
	static u32 buJin; //��ֹ�ڶ��θ�ֵ,���Զ��ʹ�øú���������λ����
	for(i = begin * 2; i < end * 2 - 2; i++)
	{
		BUF1[i] = BUF1[i + 2];	//����һλ(��Ϊ16�ŵ�һ���ַ�,һ����ռ�����ֽ�)
	}
	//����ģʽʱ,����Ҫ��ʾ���ַ����뵽��������,
	//����ģʽʱ,�����Ӧ�Ļ�����
	BUF1[end * 2 - 2] = mode ? (*(Source + buJin)) : 0;
	BUF1[end * 2 - 1] = mode ? (*(Source + buJin + 1)) : 0;
	buJin += 2;	//ǰ��һ����
	if(buJin >= size)
	{
		buJin = 0;	//�����еĲ���
		return 1; //��λ�����������
	}
	return 0; //���ڽ�����λ	
}
/*******************************************************************************
* ������         : u8 YouYi(u8 *Source, u8 size, u8 begin, u8 end, u8 mode)
* ��������		 : ������������������һλ, ��ʹ������ģ��ȫ��ѭ����ʾ��Ĺ���
* ����           : Source:��Ҫ���뻺������ʾ���ַ���
				   size:��Ҫ�������ַ���
				   begin:��ʼ��ʾ������
				   end:������ʾ��λ��
				   mode:1 :����ģʽ; 0 :����ģʽ
* ���         	 : 1 :�������; 0 :���ڴ���..
*******************************************************************************/
u8 YouYi(u8 *Source, u32 size, u32 begin, u32 end, u8 mode)
{
	u32 i;
	static u32 buJin = 0;
	for(i = end * 2 - 1; i >= begin * 2 + 2; i --)
	{
		BUF1[i] = BUF1[i - 2];
	}
	BUF1[begin * 2 + 1] = mode ? *(Source + (size - 1) - buJin) : 0;
	BUF1[begin * 2] = mode ? *(Source + (size - 1) - buJin - 1) : 0;
	buJin += 2;
	if(buJin >= size)
	{
		buJin = 0;
		return 1;
	}
	return 0;
}
/*******************************************************************************
* ������         : u8 XiaYi(u8 *buf, u8 *Source, u8 begin, u8 end, u8 mode)
* ��������		 : ������������������һλ, ��ʹ������ģ��ȫ��ѭ����ʾ��Ĺ���
* ����           : buf:��Ҫ�����Ļ�����
				   Source:��Ҫ���뻺������ʾ���ַ���
				   begin:��ʼ��ʾ������
				   end:������ʾ��λ��
				   mode:1 :����ģʽ; 0 :����ģʽ
//��Ϊ���ƺ��������������ʾ���ַ�����,���Բ���Ҫsize
* ���         	 : 1 :�������; 0 :���ڴ���..
*******************************************************************************/
u8 XiaYi(u8 *buf, u8 *Source, u32 begin, u32 end, u8 mode)
{
	u32 i;
	u32 tbuf;	//����BUF��һ����,�� BUF[1]<<8 | BUF[0]
	u32 tsource; //����Source��һ����
	static u8 buJin = 0;
	u16 temp = 1 << (15 - buJin);	//�������ϵĸ�λ��ʼ����
	for(i = begin * 2; i < end * 2; i += 2)
	{
		tbuf = (*(buf + i + 1) << 8) | *(buf + i);
		tbuf <<= 1;		//������һ���е����ݰ�������һλ
					//��Ϊȡģ˳��Ϊ����,�Ǵӵ͵��ߣ�����һ������Ϊ���λ����*-------ȡΪ00000001,���Զ����ݵ������Ƕ��ַ�������,ȥ�����λ
		tsource = (*(Source + 1) << 8) | *Source;
		Source += 2;
		//���»�ȡBUF�и������λ
		//����ģʽ:������Ҫ���ӵ��ַ������λ,�������ϵ����λ
		//����ģʽ:����
		tbuf |= (tsource & temp) > 0 ? mode : 0;	//��������µ����λ,�����Ƿ�ͬ���������λ��λ
		*(buf + i) = (u8)tbuf;
		*(buf + i + 1) = (u8)(tbuf >> 8);
	}
	buJin ++;
	if(buJin >= 16)	//16������,һ��16λ
	{
		buJin = 0;
		return 1;	//�������
	}
	return 0;	//���ڴ���
}
/*******************************************************************************
* ������         : u8 ShangYi(u8 *Source, u8 begin, u8 end, u8 mode)
* ��������		 : ������������������һλ, ��ʹ������ģ��ȫ��ѭ����ʾ��Ĺ���
* ����           : buf:��Ҫ�����Ļ�����
				   Source[]:���뻺������ʾ���ַ���
				   mode:1 :����ģʽ; 0 :����ģʽ
				   begin:��ʼ��ʾ������
				   end:������ʾ��λ��
* ���         	 : 1 :�������; 0 :���ڴ���..
*******************************************************************************/
u8 ShangYi(u8 *buf, u8 *Source, u32 begin, u32 end, u8 mode)
{
	u32 i;
	u32 tbuf;
	u32 tsource;
	static u8 buJin = 0;
	u16 temp = 1 << buJin;
	for(i = begin * 2; i < end * 2; i += 2)
	{
		tbuf = (*(buf + i + 1) << 8) | *(buf + i);
		tbuf >>= 1;	//����һλ
		tsource = *(Source + 1) << 8 | *Source;
		Source += 2;
		tbuf |= (tsource & temp) > 0 ? (mode << 15) : 0;
		*(buf + i) = (u8)tbuf;
		*(buf + i + 1) = (u8)(tbuf >> 8);
	}
	buJin ++;
	if(buJin >= 16)
	{
		buJin =0;
		return 1;
	}
	return 0;
}