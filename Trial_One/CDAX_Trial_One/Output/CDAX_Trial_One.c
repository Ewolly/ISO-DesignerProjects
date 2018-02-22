// ISO-Designer ISO 11783   Version 5.3.0.4030 Jetter AG
// Do not change!

#include "CDAX_Trial_One.iop.h"
#include "CDAX_Trial_One.c.h"

#define WORD(w)  (unsigned char)w, (unsigned char)(w >> 8)
#define LONG(l)  (unsigned char)l, \
					(unsigned char)((unsigned long)l >> 8), \
					(unsigned char)((unsigned long)l >> 16), \
					(unsigned char)((unsigned long)l >> 24)
#define ID(id)           WORD(id)
#define REF(id)          WORD(id)
#define XYREF(id, x, y)  WORD(id), WORD(x), WORD(y)
#define MACRO(ev, id)    ev, id
#define COLOR(c)         c

const unsigned char ISO_OP_MEMORY_CLASS isoOP_CDAX_Trial_One[] = {
	17,
	ID(WorkingSet_0), TYPEID_WORKSET, COLOR(38), 1, ID(DataMask_1000), 1, 0, 2,
		XYREF(cdx_logo_onBlue_20000, 7, 4),
		'e', 'n',
		'd', 'e',
	ID(Macro_1), TYPEID_MACRO, WORD(8),
		CMD_CHANGE_ACTIVE_MASK, ID(WorkingSet_0), ID(DataMask_1000), 0xFF, 0xFF, 0xFF,
	ID(Macro_3), TYPEID_MACRO, WORD(8),
		CMD_CHANGE_ACTIVE_MASK, ID(WorkingSet_0), ID(DataMask_1001), 0xFF, 0xFF, 0xFF,
	ID(DataMask_1000), TYPEID_DATAMASK, COLOR(38), ID(SoftKeyMask_4000), 3, 0, 
		XYREF(Ellipse_15000, 18, 13),
		XYREF(InputString_8000, 24, 124),
		XYREF(InputNumber_9000, 25, 157),
	ID(DataMask_1001), TYPEID_DATAMASK, COLOR(38), ID(SoftKeyMask_4000), 1, 0, 
		XYREF(OutputString_11000, 20, 71),
	ID(SoftKeyMask_4000), TYPEID_SKEYMASK, COLOR_SILVER, 2, 0, 
		REF(SoftKey_5000),
		REF(SoftKey_5001),
	ID(SoftKey_5000), TYPEID_SOFTKEY, COLOR(118), 1, 1, 1, 
		XYREF(Polygon_16000, 11, 2),
		MACRO(EV_KEYRELEASE, Macro_1),
	ID(SoftKey_5001), TYPEID_SOFTKEY, COLOR(192), 1, 0, 1, 
		MACRO(EV_KEYRELEASE, Macro_3),
	ID(InputString_8000), TYPEID_INSTR, WORD(142), WORD(24), COLOR_WHITE, ID(FontAttributes_23001), 
		ID(ID_NULL), 2, ID(ID_NULL), 0, 4, 'a', 'b', 'c', ' ', 1, 0, 
	ID(InputNumber_9000), TYPEID_INNUM, WORD(143), WORD(21), COLOR_WHITE, ID(FontAttributes_23000), 0, 
		ID(ID_NULL), LONG(123UL), LONG(0UL), LONG(65535UL), LONG(0L), FLOAT_1, 0, 0, 2, 1, 0, 
	ID(OutputString_11000), TYPEID_OUTSTR, WORD(146), WORD(48), COLOR_WHITE, ID(FontAttributes_23002), 0,
		ID(ID_NULL), 0, WORD(4), 'T', 'e', 'x', 't', 0,
	ID(Ellipse_15000), TYPEID_OUTELLIPSE, ID(LineAttributes_24000), 
		WORD(80), WORD(77), 0, 0, 0, ID(FillAttributes_25000), 0, 
	ID(Polygon_16000), TYPEID_OUTPOLY, WORD(37), WORD(28), 
		ID(LineAttributes_24000), ID(FillAttributes_25000), 2, 5, 0, 
		WORD(0), WORD(0), 
		WORD(34), WORD(27), 
		WORD(1), WORD(25), 
		WORD(36), WORD(0), 
		WORD(18), WORD(8), 
	ID(cdx_logo_onBlue_20000), TYPEID_OUTPICT, WORD(31), WORD(30), WORD(16), 
		2, 0, COLOR_BLACK, LONG(480UL), 0, 
		0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 
		0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 
		0x01, 0xBD, 0x26, 0x6E, 0x01, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 
		0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 
		0x26, 0x26, 0x26, 0x26, 0x01, 0xE3, 0x26, 0x49, 0xE3, 0xE3, 0xE3, 0x4A, 
		0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 
		0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 
		0x26, 0x26, 0x26, 0x26, 0xE3, 0xE3, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 
		0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 
		0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x6D, 0xE3, 
		0x26, 0x26, 0x01, 0x01, 0x01, 0x26, 0x26, 0x26, 0x26, 0x01, 0x01, 0x01, 
		0x4A, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 
		0x26, 0x26, 0x26, 0x26, 0x26, 0xE3, 0x26, 0x01, 0x01, 0x01, 0x01, 0x26, 
		0x26, 0x26, 0x26, 0x01, 0x26, 0x01, 0x01, 0x26, 0x01, 0x01, 0x01, 0x01, 
		0x26, 0x01, 0x07, 0x01, 0x01, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0xE3, 
		0x4A, 0x01, 0x01, 0x26, 0x26, 0x01, 0x01, 0x01, 0x26, 0x01, 0x26, 0x26, 
		0x01, 0x98, 0x26, 0x26, 0x01, 0x01, 0x26, 0x01, 0x01, 0x01, 0x26, 0x26, 
		0x26, 0x26, 0x26, 0x26, 0x26, 0xE3, 0x26, 0x01, 0x01, 0x26, 0x26, 0x26, 
		0x26, 0x26, 0x26, 0x01, 0x26, 0x26, 0x01, 0x26, 0x01, 0x01, 0x01, 0x01, 
		0x26, 0x01, 0x01, 0x01, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x03, 0xE3, 
		0x26, 0x01, 0x01, 0x01, 0x01, 0x26, 0x26, 0x26, 0x26, 0x01, 0x01, 0x01, 
		0x01, 0x26, 0x01, 0x01, 0x01, 0x01, 0x26, 0x01, 0x01, 0x01, 0x01, 0x26, 
		0x26, 0x26, 0x26, 0x26, 0x24, 0xE3, 0x26, 0x26, 0x99, 0x01, 0xBD, 0x26, 
		0x26, 0x26, 0x26, 0xBD, 0xBD, 0x74, 0x26, 0x26, 0x26, 0x98, 0x26, 0x01, 
		0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0xBA, 
		0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 
		0x26, 0x26, 0x98, 0x26, 0x98, 0x26, 0x4A, 0x26, 0x26, 0x26, 0x26, 0x26, 
		0x26, 0x26, 0x26, 0x24, 0xE3, 0x26, 0x26, 0x01, 0x01, 0x4A, 0x98, 0x26, 
		0x26, 0x01, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x4A, 0x26, 0x98, 0x26, 
		0xBD, 0x26, 0x4A, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x24, 0x26, 0x26, 
		0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 
		0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 
		0x26, 0x26, 0x24, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 
		0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 
		0xE3, 0x26, 0x26, 0x26, 0x26, 0xE3, 0x26, 0x24, 0x26, 0x26, 0x26, 0x26, 
		0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 
		0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0xE3, 0xE3, 0xBA, 0x26, 0x24, 
		0x24, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 
		0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 
		0x26, 0x26, 0x24, 0x24, 0x24, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 
	ID(FontAttributes_23000), TYPEID_FONTATTR, COLOR_BLACK, 3, 0, 0, 0, 
	ID(FontAttributes_23001), TYPEID_FONTATTR, COLOR_BLACK, 3, 0, 0, 0, 
	ID(FontAttributes_23002), TYPEID_FONTATTR, COLOR_BLACK, 3, 0, 0, 0, 
	ID(LineAttributes_24000), TYPEID_LINEATTR, COLOR_BLACK, 1, WORD(65535), 0, 
	ID(FillAttributes_25000), TYPEID_FILLATTR, 2, COLOR_YELLOW, ID(ID_NULL), 0, 
}; // isoOP_CDAX_Trial_One