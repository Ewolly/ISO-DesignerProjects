// ISO-Designer ISO 11783   Version 5.3.0.4030 Jetter AG
// Do not change!

#include "proper_test.iop.h"
#include "proper_test.c.h"

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

const unsigned char ISO_OP_MEMORY_CLASS isoOP_proper_test[] = {
	17,
	ID(WorkingSet_0), TYPEID_WORKSET, COLOR(249), 1, ID(DataMask_1000), 2, 0, 2,
		XYREF(Ellipse_15000, 10, 6),
		XYREF(OutputString_11002, 12, 18),
		'e', 'n',
		'd', 'e',
	ID(Macro_1), TYPEID_MACRO, WORD(8),
		CMD_CHANGE_ACTIVE_MASK, ID(WorkingSet_0), ID(DataMask_1000), 0xFF, 0xFF, 0xFF,
	ID(Macro_2), TYPEID_MACRO, WORD(8),
		CMD_CHANGE_ACTIVE_MASK, ID(WorkingSet_0), ID(DataMask_1001), 0xFF, 0xFF, 0xFF,
	ID(DataMask_1000), TYPEID_DATAMASK, COLOR(249), ID(ID_NULL), 1, 0, 
		XYREF(Rectangle_14001, 42, 37),
	ID(DataMask_1001), TYPEID_DATAMASK, COLOR(249), ID(ID_NULL), 1, 0, 
		XYREF(Ellipse_15001, 49, 36),
	ID(SoftKeyMask_4000), TYPEID_SKEYMASK, COLOR_SILVER, 2, 0, 
		REF(SoftKey_5000),
		REF(SoftKey_5001),
	ID(SoftKey_5000), TYPEID_SOFTKEY, COLOR(254), 1, 1, 1, 
		XYREF(Rectangle_14000, 10, 11),
		MACRO(EV_KEYRELEASE, Macro_1),
	ID(SoftKey_5001), TYPEID_SOFTKEY, COLOR(254), 1, 1, 1, 
		XYREF(Ellipse_15002, 17, 9),
		MACRO(EV_KEYRELEASE, Macro_2),
	ID(InputList_10000), TYPEID_INLIST, WORD(70), WORD(81), ID(ID_NULL), 255, 0, 1, 0, 
	ID(OutputString_11000), TYPEID_OUTSTR, WORD(63), WORD(42), COLOR_WHITE, ID(FontAttributes_23002), 0,
		ID(ID_NULL), 0, WORD(4), 'T', 'e', 'x', 't', 0,
	ID(OutputString_11002), TYPEID_OUTSTR, WORD(55), WORD(12), COLOR(40), ID(FontAttributes_23002), 0,
		ID(ID_NULL), 1, WORD(5), 'C', '-', 'D', 'A', 'X', 0,
	ID(Rectangle_14000), TYPEID_OUTRECT, ID(LineAttributes_24000), 
		WORD(57), WORD(30), 0, ID(FillAttributes_25000), 0, 
	ID(Rectangle_14001), TYPEID_OUTRECT, ID(LineAttributes_24000), 
		WORD(196), WORD(179), 0, ID(FillAttributes_25000), 0, 
	ID(Ellipse_15000), TYPEID_OUTELLIPSE, ID(LineAttributes_24000), 
		WORD(61), WORD(38), 0, 0, 0, ID(FillAttributes_25000), 0, 
	ID(Ellipse_15001), TYPEID_OUTELLIPSE, ID(LineAttributes_24000), 
		WORD(190), WORD(176), 0, 0, 0, ID(FillAttributes_25000), 0, 
	ID(Ellipse_15002), TYPEID_OUTELLIPSE, ID(LineAttributes_24000), 
		WORD(51), WORD(35), 0, 0, 0, ID(FillAttributes_25000), 0, 
	ID(FontAttributes_23000), TYPEID_FONTATTR, COLOR_BLACK, 3, 0, 0, 0, 
	ID(FontAttributes_23002), TYPEID_FONTATTR, COLOR_BLACK, 2, 0, 32, 0, 
	ID(LineAttributes_24000), TYPEID_LINEATTR, COLOR_BLACK, 1, WORD(65535), 0, 
	ID(FillAttributes_25000), TYPEID_FILLATTR, 2, COLOR_WHITE, ID(ID_NULL), 0, 
	ID(AuxInput2_28000), TYPEID_AUXINP2, COLOR_WHITE, 0, 0, 
}; // isoOP_proper_test
