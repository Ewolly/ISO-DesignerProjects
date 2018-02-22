// ISO-Designer ISO 11783   Version 5.3.0.4030 Jetter AG
// Do not change!

#include "Button_test.iop.h"
#include "Button_test.c.h"

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

const unsigned char ISO_OP_MEMORY_CLASS isoOP_Button_test[] = {
	17,
	ID(WorkingSet_0), TYPEID_WORKSET, COLOR(249), 1, ID(DataMask_1000), 1, 0, 2,
		XYREF(Line_13000, 16, 7),
		'e', 'n',
		'd', 'e',
	ID(DataMask_1000), TYPEID_DATAMASK, COLOR(249), ID(ID_NULL), 1, 0, 
		XYREF(Ellipse_15001, 36, 55),
	ID(SoftKeyMask_4000), TYPEID_SKEYMASK, COLOR_SILVER, 1, 0, 
		REF(SoftKey_5000),
	ID(SoftKey_5000), TYPEID_SOFTKEY, COLOR(254), 1, 1, 0, 
		XYREF(Ellipse_15000, 10, 6),
	ID(Line_13000), TYPEID_OUTLINE, ID(LineAttributes_24000), WORD(19), WORD(18), 0, 0,
	ID(Ellipse_15000), TYPEID_OUTELLIPSE, ID(LineAttributes_24000), 
		WORD(39), WORD(19), 0, 0, 0, ID(FillAttributes_25000), 0, 
	ID(Ellipse_15001), TYPEID_OUTELLIPSE, ID(LineAttributes_24000), 
		WORD(125), WORD(96), 0, 0, 0, ID(FillAttributes_25000), 0, 
	ID(LineAttributes_24000), TYPEID_LINEATTR, COLOR_BLACK, 1, WORD(65535), 0, 
	ID(FillAttributes_25000), TYPEID_FILLATTR, 2, COLOR_WHITE, ID(ID_NULL), 0, 
}; // isoOP_Button_test
