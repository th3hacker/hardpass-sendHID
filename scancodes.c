#include <string.h>
#include "scancodes.h"

struct keysym keysyms[] = {
	[0] = {"", {0x00, 0x00}, {0x00, 0x00}},
	//using [1]..[31] for non-ascii (utf-8) characters
	[1] = {"ä", {0x00, 0x00}, {0x34, 0x00}, {0x34, 0x00}, .unicode = 0xe4},
	{"Ä", {0x00, 0x00}, {0x34, 0x02}, {0x34, 0x02}, .unicode = 0xc4},
	{"ö", {0x00, 0x00}, {0x33, 0x00}, {0x33, 0x00}, .unicode = 0xf6},
	{"Ö", {0x00, 0x00}, {0x33, 0x02}, {0x33, 0x02}, .unicode = 0xd6},
	{"ü", {0x00, 0x00}, {0x2f, 0x00}, {0x2f, 0x00}, .unicode = 0xfc},
	{"Ü", {0x00, 0x00}, {0x2f, 0x02}, {0x2f, 0x02}, .unicode = 0xdc},
	{"ß", {0x00, 0x00}, {0x2d, 0x00}, {0x2d, 0x00}, .unicode = 0xdf},
	{"€", {0x00, 0x00}, {0x08, 0x40}, {0x08, 0x40}, .unicode = 0x20ac},
	{"µ", {0x00, 0x00}, {0x10, 0x40}, {0x10, 0x40}, .unicode = 0x3bc},
	{"°", {0x00, 0x00}, {0x35, 0x02}, {0x35, 0x02}, .unicode = 0xb0},
	{"§", {0x00, 0x00}, {0x20, 0x02}, {0x20, 0x02}, .unicode = 0xa7},
	[32] = {" ", {0x2c, 0x00}, {0x2c, 0x00}, {0x2c, 0x00}},
	{"!", {0x1e, 0x02}, {0x1e, 0x02}, {0x1e, 0x02}},
	{"\"",{0x34, 0x02}, {0x1f, 0x02}, {0x1f, 0x02}},
	{"#", {0x20, 0x02}, {0x31, 0x00}, {0x31, 0x00}},
	{"$", {0x21, 0x02}, {0x21, 0x02}, {0x21, 0x02}},
	{"%", {0x22, 0x02}, {0x22, 0x02}, {0x22, 0x02}},
	{"&", {0x24, 0x02}, {0x23, 0x02}, {0x23, 0x02}},
	{"'", {0x34, 0x00}, {0x31, 0x02}, {0x31, 0x02}},
	{"(", {0x26, 0x02}, {0x25, 0x02}, {0x25, 0x02}},
	{")", {0x27, 0x02}, {0x26, 0x02}, {0x26, 0x02}},
	{"*", {0x25, 0x02}, {0x30, 0x02}, {0x30, 0x02}},
	{"+", {0x2e, 0x02}, {0x30, 0x00}, {0x30, 0x00}},
	{"´", {0x32, 0x00}, {0x2e, 0x00, .is_dead = 1}, {0x2e, 0x00}},
	{"-", {0x2d, 0x00}, {0x38, 0x00}, {0x38, 0x00}},
	{".", {0x37, 0x00}, {0x37, 0x00}, {0x37, 0x00}},
	{"/", {0x38, 0x00}, {0x24, 0x02}, {0x24, 0x02}},
	{"0", {0x27, 0x00}, {0x27, 0x00}, {0x27, 0x00}},
	{"1", {0x1e, 0x00}, {0x1e, 0x00}, {0x1e, 0x00}},
	{"2", {0x1f, 0x00}, {0x1f, 0x00}, {0x1f, 0x00}},
	{"3", {0x20, 0x00}, {0x20, 0x00}, {0x20, 0x00}},
	{"4", {0x21, 0x00}, {0x21, 0x00}, {0x21, 0x00}},
	{"5", {0x22, 0x00}, {0x22, 0x00}, {0x22, 0x00}},
	{"6", {0x23, 0x00}, {0x23, 0x00}, {0x23, 0x00}},
	{"7", {0x24, 0x00}, {0x24, 0x00}, {0x24, 0x00}},
	{"8", {0x25, 0x00}, {0x25, 0x00}, {0x25, 0x00}},
	{"9", {0x26, 0x00}, {0x26, 0x00}, {0x26, 0x00}},
	{":", {0x33, 0x02}, {0x37, 0x02}, {0x37, 0x02}},
	{";", {0x33, 0x00}, {0x36, 0x02}, {0x36, 0x02}},
	{"<", {0x36, 0x02}, {0x64, 0x00}, {0x64, 0x00}},
	{"=", {0x2e, 0x00}, {0x27, 0x02}, {0x27, 0x02}},
	{">", {0x37, 0x02}, {0x64, 0x02}, {0x64, 0x02}},
	{"?", {0x38, 0x02}, {0x2d, 0x02}, {0x2d, 0x02}},
	{"@", {0x1f, 0x02}, {0x14, 0x40}, {0x14, 0x40}},
	{"A", {0x04, 0x02}, {0x04, 0x02}, {0x04, 0x02}},
	{"B", {0x05, 0x02}, {0x05, 0x02}, {0x05, 0x02}},
	{"C", {0x06, 0x02}, {0x06, 0x02}, {0x06, 0x02}},
	{"D", {0x07, 0x02}, {0x07, 0x02}, {0x07, 0x02}},
	{"E", {0x08, 0x02}, {0x08, 0x02}, {0x08, 0x02}},
	{"F", {0x09, 0x02}, {0x09, 0x02}, {0x09, 0x02}},
	{"G", {0x0a, 0x02}, {0x0a, 0x02}, {0x0a, 0x02}},
	{"H", {0x0b, 0x02}, {0x0b, 0x02}, {0x0b, 0x02}},
	{"I", {0x0c, 0x02}, {0x0c, 0x02}, {0x0c, 0x02}},
	{"J", {0x0d, 0x02}, {0x0d, 0x02}, {0x0d, 0x02}},
	{"K", {0x0e, 0x02}, {0x0e, 0x02}, {0x0e, 0x02}},
	{"L", {0x0f, 0x02}, {0x0f, 0x02}, {0x0f, 0x02}},
	{"M", {0x10, 0x02}, {0x10, 0x02}, {0x10, 0x02}},
	{"N", {0x11, 0x02}, {0x11, 0x02}, {0x11, 0x02}},
	{"O", {0x12, 0x02}, {0x12, 0x02}, {0x12, 0x02}},
	{"P", {0x13, 0x02}, {0x13, 0x02}, {0x13, 0x02}},
	{"Q", {0x14, 0x02}, {0x14, 0x02}, {0x14, 0x02}},
	{"R", {0x15, 0x02}, {0x15, 0x02}, {0x15, 0x02}},
	{"S", {0x16, 0x02}, {0x16, 0x02}, {0x16, 0x02}},
	{"T", {0x17, 0x02}, {0x17, 0x02}, {0x17, 0x02}},
	{"U", {0x18, 0x02}, {0x18, 0x02}, {0x18, 0x02}},
	{"V", {0x19, 0x02}, {0x19, 0x02}, {0x19, 0x02}},
	{"W", {0x1a, 0x02}, {0x1a, 0x02}, {0x1a, 0x02}},
	{"X", {0x1b, 0x02}, {0x1b, 0x02}, {0x1b, 0x02}},
	{"Y", {0x1c, 0x02}, {0x1d, 0x02}, {0x1d, 0x02}},
	{"Z", {0x1d, 0x02}, {0x1c, 0x02}, {0x1c, 0x02}},
	{"[", {0x2f, 0x00}, {0x25, 0x40}, {0x25, 0x40}},
	{"\\",{0x31, 0x00}, {0x2d, 0x40}, {0x2d, 0x40}},
	{"]", {0x30, 0x00}, {0x26, 0x40}, {0x26, 0x40}},
	{"^", {0x23, 0x02}, {0x35, 0x00, .is_dead = 1}, {0x35, 0x00}},
	{"_", {0x2d, 0x02}, {0x38, 0x02}, {0x38, 0x02}},
	{"`", {0x35, 0x00}, {0x2e, 0x02, .is_dead = 1}, {0x2e, 0x02}},
	{"a", {0x04, 0x00}, {0x04, 0x00}, {0x04, 0x00}},
	{"b", {0x05, 0x00}, {0x05, 0x00}, {0x05, 0x00}},
	{"c", {0x06, 0x00}, {0x06, 0x00}, {0x06, 0x00}},
	{"d", {0x07, 0x00}, {0x07, 0x00}, {0x07, 0x00}},
	{"e", {0x08, 0x00}, {0x08, 0x00}, {0x08, 0x00}},
	{"f", {0x09, 0x00}, {0x09, 0x00}, {0x09, 0x00}},
	{"g", {0x0a, 0x00}, {0x0a, 0x00}, {0x0a, 0x00}},
	{"h", {0x0b, 0x00}, {0x0b, 0x00}, {0x0b, 0x00}},
	{"i", {0x0c, 0x00}, {0x0c, 0x00}, {0x0c, 0x00}},
	{"j", {0x0d, 0x00}, {0x0d, 0x00}, {0x0d, 0x00}},
	{"k", {0x0e, 0x00}, {0x0e, 0x00}, {0x0e, 0x00}},
	{"l", {0x0f, 0x00}, {0x0f, 0x00}, {0x0f, 0x00}},
	{"m", {0x10, 0x00}, {0x10, 0x00}, {0x10, 0x00}},
	{"n", {0x11, 0x00}, {0x11, 0x00}, {0x11, 0x00}},
	{"o", {0x12, 0x00}, {0x12, 0x00}, {0x12, 0x00}},
	{"p", {0x13, 0x00}, {0x13, 0x00}, {0x13, 0x00}},
	{"q", {0x14, 0x00}, {0x14, 0x00}, {0x14, 0x00}},
	{"r", {0x15, 0x00}, {0x15, 0x00}, {0x15, 0x00}},
	{"s", {0x16, 0x00}, {0x16, 0x00}, {0x16, 0x00}},
	{"t", {0x17, 0x00}, {0x17, 0x00}, {0x17, 0x00}},
	{"u", {0x18, 0x00}, {0x18, 0x00}, {0x18, 0x00}},
	{"v", {0x19, 0x00}, {0x19, 0x00}, {0x19, 0x00}},
	{"w", {0x1a, 0x00}, {0x1a, 0x00}, {0x1a, 0x00}},
	{"x", {0x1b, 0x00}, {0x1b, 0x00}, {0x1b, 0x00}},
	{"y", {0x1c, 0x00}, {0x1d, 0x00}, {0x1d, 0x00}},
	{"z", {0x1d, 0x00}, {0x1c, 0x00}, {0x1c, 0x00}},
	{"{", {0x2f, 0x02}, {0x2f, 0x02}, {0x24, 0x40}},
	{"|", {0x31, 0x02}, {0x64, 0x40}, {0x64, 0x40}},
	{"}", {0x30, 0x02}, {0x27, 0x40}, {0x27, 0x40}},
	{"~", {0x35, 0x02}, {0x30, 0x40}, {0x30, 0x40}}
};

struct keysym* toscan (const char* utf8) {
	if (utf8[1] == '\0') return &(keysyms[(int)utf8[0]]); //if char is not wide, it is on the corrent ascii position in the look up table
	for (int i = 0; i < sizeof (keysyms)/sizeof (struct keysym); i++) {
		if (strcmp (keysyms[i].sym, utf8) == 0) {
			return &(keysyms[i]);
		}
	}
	return NULL; // error
}

struct layout* tolay (struct keysym* s, enum kbdl layout) {
        switch (layout) {
        case en_US: return &(s->en_us);
        case de_AT: return &(s->de_at);
        case de_ND: return &(s->de_nd);
        default: return NULL;
        }
}
