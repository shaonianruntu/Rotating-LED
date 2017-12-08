#ifndef __ZIMO_H
#define __ZIMO_H

#include "sys.h"

//����
#define Aixin_SIZE (sizeof(Aixin) / sizeof(Aixin[0]))
u8 Aixin[] = 
{
	0xC0,0x01,0xE0,0x03,0xE0,0x07,0xE0,0x0F,0xC0,0x1F,0xC0,0x3F,0x80,0x7F,0x00,0xFF,
	0x00,0xFF,0x80,0x7F,0xC0,0x3F,0xC0,0x1F,0xE0,0x0F,0xE0,0x07,0xE0,0x03,0xC0,0x01 //"����"
};
 //��
#define Xinghao_SIZE (sizeof(Xinghao) / sizeof(Xinghao[0]))
u8 Xinghao[] =
{
	0x40,0x00,0xC0,0x00,0xC0,0x41,0xC0,0x39,0xC0,0x3F,0xE0,0x1F,0xFC,0x1F,0xFF,0x0F,//
	0xFC,0x1F,0xE0,0x1F,0xC0,0x3F,0xC0,0x39,0xC0,0x41,0xC0,0x00,0x40,0x00,0x00,0x00 //"��",0
};
//�Ȱ�
#define Reai_SIZE (sizeof(Reai) / sizeof(Reai[0]))
u8 Reai[] =
{
	0x08,0x81,0x08,0x65,0x88,0x08,0xFF,0x07,0x48,0x20,0x48,0xC0,0x00,0x08,0x08,0x04,//
	0x48,0x23,0xFF,0xC0,0x08,0x03,0x08,0x00,0xF8,0x23,0x00,0xC4,0x00,0x0F,0x00,0x00,//"��",0
	0x80,0x00,0x64,0x41,0x2C,0x21,0x34,0x91,0x24,0x89,0x24,0x87,0xEC,0x4D,0x32,0x55,//
	0x22,0x25,0x22,0x25,0x32,0x55,0x2E,0x4D,0x23,0x81,0xA2,0x80,0x60,0x80,0x00,0x00 //"��",1
};
//Microchip���ݵ��ӿƼ���ѧ��ѧ���Ƽ����·�����
#define Fuhuaqi_SIZE (sizeof(Fuhuaqi) / sizeof(Fuhuaqi[0]))
u8 Fuhuaqi[] =
{
	0x08,0x20,0xF8,0x3F,0xF8,0x00,0x00,0x3F,0xF8,0x00,0xF8,0x3F,0x08,0x20,0x00,0x00,//"M",0
	0x00,0x00,0x80,0x20,0x98,0x20,0x98,0x3F,0x00,0x20,0x00,0x20,0x00,0x00,0x00,0x00,//"i",1
	0x00,0x00,0x00,0x0E,0x00,0x11,0x80,0x20,0x80,0x20,0x80,0x20,0x00,0x11,0x00,0x00,//"c",2
	0x80,0x20,0x80,0x20,0x80,0x3F,0x00,0x21,0x80,0x20,0x80,0x00,0x80,0x01,0x00,0x00,//"r",3
	0x00,0x00,0x00,0x1F,0x80,0x20,0x80,0x20,0x80,0x20,0x80,0x20,0x00,0x1F,0x00,0x00,//"o",4
	0x00,0x00,0x00,0x0E,0x00,0x11,0x80,0x20,0x80,0x20,0x80,0x20,0x00,0x11,0x00,0x00,//"c",5
	0x08,0x20,0xF8,0x3F,0x00,0x21,0x80,0x00,0x80,0x00,0x80,0x20,0x00,0x3F,0x00,0x20,//"h",6
	0x00,0x00,0x80,0x20,0x98,0x20,0x98,0x3F,0x00,0x20,0x00,0x20,0x00,0x00,0x00,0x00,//"i",7
	0x80,0x80,0x80,0xFF,0x00,0xA1,0x80,0x20,0x80,0x20,0x00,0x11,0x00,0x0E,0x00,0x00,//"p",8
	0x10,0x04,0x10,0x03,0xD0,0x00,0xFF,0xFF,0x90,0x00,0x10,0x83,0x08,0x60,0xC8,0x1F,//
	0x49,0x00,0x4E,0x00,0x48,0x00,0xC8,0x3F,0x08,0x40,0x08,0x40,0x00,0x78,0x00,0x00,//"��",9
	0x00,0x81,0xE0,0x40,0x00,0x30,0xFF,0x0F,0x00,0x00,0x20,0x00,0xC0,0x00,0x00,0x00,//
	0xFE,0x3F,0x00,0x00,0x20,0x00,0xC0,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,//"��",10
	0x00,0x00,0x00,0x00,0xF8,0x1F,0x88,0x08,0x88,0x08,0x88,0x08,0x88,0x08,0xFF,0x7F,//
	0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0xF8,0x9F,0x00,0x80,0x00,0xF0,0x00,0x00,//"��",11
	0x80,0x00,0x82,0x00,0x82,0x00,0x82,0x00,0x82,0x00,0x82,0x40,0x82,0x80,0xE2,0x7F,//
	0xA2,0x00,0x92,0x00,0x8A,0x00,0x86,0x00,0x82,0x00,0x80,0x00,0x80,0x00,0x00,0x00,//"��",12
	0x24,0x08,0x24,0x06,0xA4,0x01,0xFE,0xFF,0xA3,0x00,0x22,0x01,0x00,0x04,0x22,0x04,//
	0xCC,0x04,0x00,0x04,0x00,0x04,0xFF,0xFF,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x00,//"��",13
	0x10,0x04,0x10,0x44,0x10,0x82,0xFF,0x7F,0x10,0x01,0x90,0x80,0x08,0x80,0x88,0x40,//
	0x88,0x43,0x88,0x2C,0xFF,0x10,0x88,0x28,0x88,0x46,0x88,0x81,0x08,0x80,0x00,0x00,//"��",14
	0x20,0x80,0x20,0x80,0x20,0x40,0x20,0x20,0x20,0x10,0x20,0x0C,0x20,0x03,0xFF,0x00,//
	0x20,0x03,0x20,0x0C,0x20,0x10,0x20,0x20,0x20,0x40,0x20,0x80,0x20,0x80,0x00,0x00,//"��",15
	0x40,0x04,0x30,0x04,0x11,0x04,0x96,0x04,0x90,0x04,0x90,0x44,0x91,0x84,0x96,0x7E,//
	0x90,0x06,0x90,0x05,0x98,0x04,0x14,0x04,0x13,0x04,0x50,0x04,0x30,0x04,0x00,0x00,//"ѧ",16
	0x20,0x80,0x20,0x80,0x20,0x40,0x20,0x20,0x20,0x10,0x20,0x0C,0x20,0x03,0xFF,0x00,//
	0x20,0x03,0x20,0x0C,0x20,0x10,0x20,0x20,0x20,0x40,0x20,0x80,0x20,0x80,0x00,0x00,//"��",17
	0x40,0x04,0x30,0x04,0x11,0x04,0x96,0x04,0x90,0x04,0x90,0x44,0x91,0x84,0x96,0x7E,//
	0x90,0x06,0x90,0x05,0x98,0x04,0x14,0x04,0x13,0x04,0x50,0x04,0x30,0x04,0x00,0x00,//"ѧ",18
	0x80,0x40,0x40,0x40,0x30,0x42,0x1E,0x42,0x10,0x42,0x10,0x42,0x10,0x42,0xFF,0x7F,//
	0x10,0x42,0x10,0x42,0x10,0x42,0x10,0x42,0x10,0x42,0x10,0x40,0x00,0x40,0x00,0x00,//"��",19
	0x24,0x08,0x24,0x06,0xA4,0x01,0xFE,0xFF,0xA3,0x00,0x22,0x01,0x00,0x04,0x22,0x04,//
	0xCC,0x04,0x00,0x04,0x00,0x04,0xFF,0xFF,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x00,//"��",20
	0x10,0x04,0x10,0x44,0x10,0x82,0xFF,0x7F,0x10,0x01,0x90,0x80,0x08,0x80,0x88,0x40,//
	0x88,0x43,0x88,0x2C,0xFF,0x10,0x88,0x28,0x88,0x46,0x88,0x81,0x08,0x80,0x00,0x00,//"��",21
	0x40,0x00,0x20,0x00,0xD0,0x3F,0x4C,0x40,0x43,0x44,0x44,0x48,0xC8,0x47,0x10,0x40,//
	0x20,0x70,0x00,0x00,0xF8,0x0F,0x00,0x40,0x00,0x80,0xFF,0x7F,0x00,0x00,0x00,0x00,//"��",22
	0x40,0x20,0x44,0x12,0x54,0x4A,0x65,0x82,0xC6,0x7F,0x64,0x02,0x54,0x0A,0x44,0x92,//
	0x00,0x60,0xFC,0x1F,0x44,0x00,0x44,0x00,0xC4,0xFF,0x42,0x00,0x40,0x00,0x00,0x00,//"��",23
	0xFE,0x8F,0x22,0x64,0xF9,0x1F,0x00,0x00,0xFE,0xFF,0x22,0x04,0xFE,0x07,0x00,0x00,//
	0x0A,0x04,0x52,0x44,0x46,0x84,0x5A,0x7F,0xC1,0x04,0x51,0x04,0x0D,0x04,0x00,0x00,//"��",24
	0x00,0x01,0x80,0x00,0x60,0x00,0xF8,0xFF,0x07,0x00,0x00,0x04,0x00,0x02,0x00,0x01,//
	0xFF,0x3F,0x40,0x40,0x20,0x40,0x10,0x40,0x08,0x40,0x04,0x40,0x00,0x78,0x00,0x00,//"��",25
	0x80,0x08,0x80,0x08,0x9E,0xF4,0x92,0x94,0x92,0x92,0x92,0x92,0x9E,0xF1,0xE0,0x00,//
	0x80,0x01,0x9E,0xF2,0xB2,0x92,0xD2,0x94,0x92,0x94,0x9E,0xF8,0x80,0x08,0x00,0x00 //"��",26
};
//֪�к�һ ֹ�ھ���
#define Geyan_SIZE (sizeof(Geyan) / sizeof(Geyan[0]))
u8 Geyan[] = 
{
	0x20,0x81,0x18,0x41,0x0F,0x31,0x08,0x0D,0xF8,0x03,0x08,0x0D,0x08,0x71,0x00,0x01,//
	0x00,0x00,0xFC,0x3F,0x04,0x10,0x04,0x10,0x04,0x10,0xFC,0x3F,0x00,0x00,0x00,0x00,//"֪",0
	0x00,0x02,0x10,0x01,0x88,0x00,0xC4,0xFF,0x33,0x00,0x00,0x00,0x40,0x00,0x42,0x00,//
	0x42,0x40,0x42,0x80,0xC2,0x7F,0x42,0x00,0x42,0x00,0x42,0x00,0x40,0x00,0x00,0x00,//"��",1
	0x40,0x00,0x40,0x00,0x20,0x00,0x20,0xFE,0x50,0x42,0x48,0x42,0x44,0x42,0x43,0x42,//
	0x44,0x42,0x48,0x42,0x50,0x42,0x20,0xFE,0x20,0x00,0x40,0x00,0x40,0x00,0x00,0x00,//"��",2
	0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,//
	0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x00,0x00,//"һ",3
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//" ",4
	0x00,0x40,0x00,0x40,0x00,0x40,0xF0,0x7F,0x00,0x40,0x00,0x40,0x00,0x40,0xFF,0x7F,//
	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00,0x40,0x00,0x40,0x00,0x00,//"ֹ",5
	0x40,0x00,0x40,0x00,0x42,0x00,0x42,0x00,0x42,0x00,0x42,0x40,0x42,0x80,0xFE,0x7F,//
	0x42,0x00,0x42,0x00,0x42,0x00,0x42,0x00,0x42,0x00,0x40,0x00,0x40,0x00,0x00,0x00,//"��",6
	0x00,0x10,0x00,0x08,0x00,0x06,0xFE,0x01,0x22,0x10,0x22,0x10,0x22,0x22,0x22,0x22,//
	0x22,0x44,0xE2,0x80,0x22,0x01,0x22,0x02,0x7E,0x04,0x00,0x08,0x00,0x08,0x00,0x00,//"��",7
	0x40,0x02,0x44,0x02,0x54,0xFA,0xD4,0x4A,0x55,0x4B,0x56,0x4A,0x54,0x4A,0xFC,0x4B,//
	0x54,0x4A,0x56,0x4A,0x55,0x4B,0xD4,0x4A,0x54,0xFA,0x44,0x02,0x40,0x02,0x00,0x00 //"��",8
};


//������ʾ
//�⻨��
#define JianHuaban_SIZE (sizeof(JianHuaban) / sizeof(JianHuaban[0]))
u8 JianHuaban[] = 
{
	0x00,0x07,0xe0,0x00,0x1c,0x00,0x03,0x00,0x03,0x00,0x1c,0x00,0xe0,0x00,0x00,0x07,
	0x00,0x07,0xe0,0x00,0x1c,0x00,0x03,0x00,0x03,0x00,0x1c,0x00,0xe0,0x00,0x00,0x07
};
//Բ����
#define YuanHuaban_SIZE (sizeof(YuanHuaban) / sizeof(YuanHuaban[0]))
u8 YuanHuaban[] =
{
	0x00,0x07,0xc0,0x00,0x30,0x00,0x08,0x00,0x04,0x00,0x02,0x00,0x02,0x00,0x01,0x00,
	0x01,0x00,0x02,0x00,0x00,0x02,0x04,0x00,0x08,0x00,0x30,0x00,0xc0,0x00,0x00,0x07
};
#endif