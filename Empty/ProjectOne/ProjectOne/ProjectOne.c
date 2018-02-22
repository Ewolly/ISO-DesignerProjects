// ISO-Designer ISO 11783   Version 5.3.0.4030 Jetter AG
// Do not change!

#include "ProjectOne.iop.h"
#include "ProjectOne.c.h"

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

const unsigned char ISO_OP_MEMORY_CLASS isoOP_ProjectOne[] = {
	17,
	ID(WorkingSet_0), TYPEID_WORKSET, COLOR(249), 1, ID(MaskOne), 1, 0, 2,
		XYREF(Line_13000, 23, 19),
		'e', 'n',
		'd', 'e',
	ID(MaskOne), TYPEID_DATAMASK, COLOR(249), ID(ID_NULL), 0, 0, 
	ID(Line_13000), TYPEID_OUTLINE, ID(LineAttributes_24000), WORD(31), WORD(1), 0, 0,
	ID(LineAttributes_24000), TYPEID_LINEATTR, COLOR_BLACK, 1, WORD(65535), 0, 
}; // isoOP_ProjectOne
