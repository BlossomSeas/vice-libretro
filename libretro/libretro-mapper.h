#ifndef LIBRETRO_MAPPER_H
#define LIBRETRO_MAPPER_H

#define RETRO_DEVICES                   5

#define RETRO_DEVICE_VICE_JOYSTICK      RETRO_DEVICE_SUBCLASS(RETRO_DEVICE_JOYPAD, 1)
#define RETRO_DEVICE_VICE_KEYBOARD      RETRO_DEVICE_SUBCLASS(RETRO_DEVICE_KEYBOARD, 0)

#define RETRO_DEVICE_ID_JOYPAD_LR       16
#define RETRO_DEVICE_ID_JOYPAD_LL       17
#define RETRO_DEVICE_ID_JOYPAD_LD       18
#define RETRO_DEVICE_ID_JOYPAD_LU       19
#define RETRO_DEVICE_ID_JOYPAD_RR       20
#define RETRO_DEVICE_ID_JOYPAD_RL       21
#define RETRO_DEVICE_ID_JOYPAD_RD       22
#define RETRO_DEVICE_ID_JOYPAD_RU       23

#define RETRO_DEVICE_ID_JOYPAD_LAST     24

#define RETRO_MAPPER_VKBD               24
#define RETRO_MAPPER_STATUSBAR          25
#define RETRO_MAPPER_JOYPORT            26
#define RETRO_MAPPER_RESET              27
#define RETRO_MAPPER_ASPECT_RATIO       28
#define RETRO_MAPPER_ZOOM_MODE          29
#define RETRO_MAPPER_WARP_MODE          30

#define RETRO_MAPPER_DATASETTE_HOTKEYS  31
#define RETRO_MAPPER_DATASETTE_STOP     32
#define RETRO_MAPPER_DATASETTE_START    33
#define RETRO_MAPPER_DATASETTE_FORWARD  34
#define RETRO_MAPPER_DATASETTE_REWIND   35
#define RETRO_MAPPER_DATASETTE_RESET    36

#define RETRO_MAPPER_LAST               37

#define TOGGLE_VKBD                     -11
#define TOGGLE_STATUSBAR                -12
#define SWITCH_JOYPORT                  -13
#define MOUSE_SLOWER                    -5
#define MOUSE_FASTER                    -6

extern int mapper_keys[RETRO_MAPPER_LAST];
extern void retro_poll_event();
extern void retro_keyboard_event(bool, unsigned, uint32_t, uint16_t);

typedef struct
{
   int id;
   char value[20];
   char label[25];
} retro_keymap;

static retro_keymap retro_keys[RETROK_LAST] =
{
   {0,                  "---",                 "---"},
   {TOGGLE_VKBD,        "TOGGLE_VKBD",         "Toggle Virtual Keyboard"},
   {TOGGLE_STATUSBAR,   "TOGGLE_STATUSBAR",    "Toggle Statusbar"},
   {SWITCH_JOYPORT,     "SWITCH_JOYPORT",      "Switch Joyport"},
   {MOUSE_SLOWER,       "MOUSE_SLOWER",        "Mouse Slower"},
   {MOUSE_FASTER,       "MOUSE_FASTER",        "Mouse Faster"},
   {RETROK_BACKSPACE,   "RETROK_BACKSPACE",    "Keyboard Backspace"},
   {RETROK_TAB,         "RETROK_TAB",          "Keyboard Tab"},
/* {RETROK_CLEAR,       "RETROK_CLEAR",        "Keyboard Clear"}, */
   {RETROK_RETURN,      "RETROK_RETURN",       "Keyboard Return"},
/* {RETROK_PAUSE,       "RETROK_PAUSE",        "Keyboard Pause"}, */
   {RETROK_ESCAPE,      "RETROK_ESCAPE",       "Keyboard Escape"},
   {RETROK_SPACE,       "RETROK_SPACE",        "Keyboard Space"},
/* {RETROK_EXCLAIM,     "RETROK_EXCLAIM",      "Keyboard !"}, */
/* {RETROK_QUOTEDBL,    "RETROK_QUOTEDBL",     "Keyboard \""}, */
/* {RETROK_HASH,        "RETROK_HASH",         "Keyboard #"}, */
/* {RETROK_DOLLAR,      "RETROK_DOLLAR",       "Keyboard $"}, */
/* {RETROK_AMPERSAND,   "RETROK_AMPERSAND",    "Keyboard &"}, */
   {RETROK_QUOTE,       "RETROK_QUOTE",        "Keyboard \'"},
   {RETROK_LEFTPAREN,   "RETROK_LEFTPAREN",    "Keyboard ("},
   {RETROK_RIGHTPAREN,  "RETROK_RIGHTPAREN",   "Keyboard )"},
   {RETROK_ASTERISK,    "RETROK_ASTERISK",     "Keyboard *"},
   {RETROK_PLUS,        "RETROK_PLUS",         "Keyboard +"},
   {RETROK_COMMA,       "RETROK_COMMA",        "Keyboard ,"},
   {RETROK_MINUS,       "RETROK_MINUS",        "Keyboard -"},
   {RETROK_PERIOD,      "RETROK_PERIOD",       "Keyboard ."},
   {RETROK_SLASH,       "RETROK_SLASH",        "Keyboard /"},
   {RETROK_0,           "RETROK_0",            "Keyboard 0"},
   {RETROK_1,           "RETROK_1",            "Keyboard 1"},
   {RETROK_2,           "RETROK_2",            "Keyboard 2"},
   {RETROK_3,           "RETROK_3",            "Keyboard 3"},
   {RETROK_4,           "RETROK_4",            "Keyboard 4"},
   {RETROK_5,           "RETROK_5",            "Keyboard 5"},
   {RETROK_6,           "RETROK_6",            "Keyboard 6"},
   {RETROK_7,           "RETROK_7",            "Keyboard 7"},
   {RETROK_8,           "RETROK_8",            "Keyboard 8"},
   {RETROK_9,           "RETROK_9",            "Keyboard 9"},
   {RETROK_COLON,       "RETROK_COLON",        "Keyboard :"},
   {RETROK_SEMICOLON,   "RETROK_SEMICOLON",    "Keyboard ;"},
   {RETROK_LESS,        "RETROK_LESS",         "Keyboard <"},
   {RETROK_EQUALS,      "RETROK_EQUALS",       "Keyboard ="},
   {RETROK_GREATER,     "RETROK_GREATER",      "Keyboard >"},
/* {RETROK_QUESTION,    "RETROK_QUESTION",     "Keyboard ?"}, */
/* {RETROK_AT,          "RETROK_AT",           "Keyboard @"}, */
   {RETROK_LEFTBRACKET, "RETROK_LEFTBRACKET",  "Keyboard ["},
   {RETROK_BACKSLASH,   "RETROK_BACKSLASH",    "Keyboard \\"},
   {RETROK_RIGHTBRACKET,"RETROK_RIGHTBRACKET", "Keyboard ]"},
   {RETROK_CARET,       "RETROK_CARET",        "Keyboard ^"},
   {RETROK_UNDERSCORE,  "RETROK_UNDERSCORE",   "Keyboard _"},
   {RETROK_BACKQUOTE,   "RETROK_BACKQUOTE",    "Keyboard `"},
   {RETROK_a,           "RETROK_a",            "Keyboard A"},
   {RETROK_b,           "RETROK_b",            "Keyboard B"},
   {RETROK_c,           "RETROK_c",            "Keyboard C"},
   {RETROK_d,           "RETROK_d",            "Keyboard D"},
   {RETROK_e,           "RETROK_e",            "Keyboard E"},
   {RETROK_f,           "RETROK_f",            "Keyboard F"},
   {RETROK_g,           "RETROK_g",            "Keyboard G"},
   {RETROK_h,           "RETROK_h",            "Keyboard H"},
   {RETROK_i,           "RETROK_i",            "Keyboard I"},
   {RETROK_j,           "RETROK_j",            "Keyboard J"},
   {RETROK_k,           "RETROK_k",            "Keyboard K"},
   {RETROK_l,           "RETROK_l",            "Keyboard L"},
   {RETROK_m,           "RETROK_m",            "Keyboard M"},
   {RETROK_n,           "RETROK_n",            "Keyboard N"},
   {RETROK_o,           "RETROK_o",            "Keyboard O"},
   {RETROK_p,           "RETROK_p",            "Keyboard P"},
   {RETROK_q,           "RETROK_q",            "Keyboard Q"},
   {RETROK_r,           "RETROK_r",            "Keyboard R"},
   {RETROK_s,           "RETROK_s",            "Keyboard S"},
   {RETROK_t,           "RETROK_t",            "Keyboard T"},
   {RETROK_u,           "RETROK_u",            "Keyboard U"},
   {RETROK_v,           "RETROK_v",            "Keyboard V"},
   {RETROK_w,           "RETROK_w",            "Keyboard W"},
   {RETROK_x,           "RETROK_x",            "Keyboard X"},
   {RETROK_y,           "RETROK_y",            "Keyboard Y"},
   {RETROK_z,           "RETROK_z",            "Keyboard Z"},
   {RETROK_KP0,         "RETROK_KP0",          "Keyboard Numpad 0"},
   {RETROK_KP1,         "RETROK_KP1",          "Keyboard Numpad 1"},
   {RETROK_KP2,         "RETROK_KP2",          "Keyboard Numpad 2"},
   {RETROK_KP3,         "RETROK_KP3",          "Keyboard Numpad 3"},
   {RETROK_KP4,         "RETROK_KP4",          "Keyboard Numpad 4"},
   {RETROK_KP5,         "RETROK_KP5",          "Keyboard Numpad 5"},
   {RETROK_KP6,         "RETROK_KP6",          "Keyboard Numpad 6"},
   {RETROK_KP7,         "RETROK_KP7",          "Keyboard Numpad 7"},
   {RETROK_KP8,         "RETROK_KP8",          "Keyboard Numpad 8"},
   {RETROK_KP9,         "RETROK_KP9",          "Keyboard Numpad 9"},
   {RETROK_KP_PERIOD,   "RETROK_KP_PERIOD",    "Keyboard Numpad ."},
   {RETROK_KP_DIVIDE,   "RETROK_KP_DIVIDE",    "Keyboard Numpad /"},
   {RETROK_KP_MULTIPLY, "RETROK_KP_MULTIPLY",  "Keyboard Numpad *"},
   {RETROK_KP_MINUS,    "RETROK_KP_MINUS",     "Keyboard Numpad -"},
   {RETROK_KP_PLUS,     "RETROK_KP_PLUS",      "Keyboard Numpad +"},
   {RETROK_KP_ENTER,    "RETROK_KP_ENTER",     "Keyboard Numpad Enter"},
   {RETROK_KP_EQUALS,   "RETROK_KP_EQUALS",    "Keyboard Numpad ="},
   {RETROK_UP,          "RETROK_UP",           "Keyboard Up"},
   {RETROK_DOWN,        "RETROK_DOWN",         "Keyboard Down"},
   {RETROK_LEFT,        "RETROK_LEFT",         "Keyboard Left"},
   {RETROK_RIGHT,       "RETROK_RIGHT",        "Keyboard Right"},
   {RETROK_INSERT,      "RETROK_INSERT",       "Keyboard Insert"},
   {RETROK_DELETE,      "RETROK_DELETE",       "Keyboard Delete"},
   {RETROK_HOME,        "RETROK_HOME",         "Keyboard Home"},
   {RETROK_END,         "RETROK_END",          "Keyboard End"},
   {RETROK_PAGEUP,      "RETROK_PAGEUP",       "Keyboard Page Up"},
   {RETROK_PAGEDOWN,    "RETROK_PAGEDOWN",     "Keyboard Page Down"},
   {RETROK_F1,          "RETROK_F1",           "Keyboard F1"},
   {RETROK_F2,          "RETROK_F2",           "Keyboard F2"},
   {RETROK_F3,          "RETROK_F3",           "Keyboard F3"},
   {RETROK_F4,          "RETROK_F4",           "Keyboard F4"},
   {RETROK_F5,          "RETROK_F5",           "Keyboard F5"},
   {RETROK_F6,          "RETROK_F6",           "Keyboard F6"},
   {RETROK_F7,          "RETROK_F7",           "Keyboard F7"},
   {RETROK_F8,          "RETROK_F8",           "Keyboard F8"},
   {RETROK_F9,          "RETROK_F9",           "Keyboard F9"},
   {RETROK_F10,         "RETROK_F10",          "Keyboard F10"},
   {RETROK_F11,         "RETROK_F11",          "Keyboard F11"},
   {RETROK_F12,         "RETROK_F12",          "Keyboard F12"},
   {RETROK_F13,         "RETROK_F13",          "Keyboard F13"},
   {RETROK_F14,         "RETROK_F14",          "Keyboard F14"},
   {RETROK_F15,         "RETROK_F15",          "Keyboard F15"},
/* {RETROK_NUMLOCK,     "RETROK_NUMLOCK",      "Keyboard Num Lock"}, */
/* {RETROK_CAPSLOCK,    "RETROK_CAPSLOCK",     "Keyboard Caps Lock"}, */
/* {RETROK_SCROLLOCK,   "RETROK_SCROLLOCK",    "Keyboard Scroll Lock"}, */
   {RETROK_LSHIFT,      "RETROK_LSHIFT",       "Keyboard Left Shift"},
   {RETROK_RSHIFT,      "RETROK_RSHIFT",       "Keyboard Right Shift"},
   {RETROK_LCTRL,       "RETROK_LCTRL",        "Keyboard Left Control"},
   {RETROK_RCTRL,       "RETROK_RCTRL",        "Keyboard Right Control"},
   {RETROK_LALT,        "RETROK_LALT",         "Keyboard Left Alt"},
   {RETROK_RALT,        "RETROK_RALT",         "Keyboard Right Alt"},
/* {RETROK_LMETA,       "RETROK_LMETA",        "Keyboard Left Meta"}, */
/* {RETROK_RMETA,       "RETROK_RMETA",        "Keyboard Right Meta"}, */
   {RETROK_LSUPER,      "RETROK_LSUPER",       "Keyboard Left Super"},
   {RETROK_RSUPER,      "RETROK_RSUPER",       "Keyboard Right Super"},
/* {RETROK_MODE,        "RETROK_MODE",         "Keyboard Mode"}, */
/* {RETROK_COMPOSE,     "RETROK_COMPOSE",      "Keyboard Compose"}, */
/* {RETROK_HELP,        "RETROK_HELP",         "Keyboard Help"}, */
/* {RETROK_PRINT,       "RETROK_PRINT",        "Keyboard Print"}, */
/* {RETROK_SYSREQ,      "RETROK_SYSREQ",       "Keyboard Sys Req"}, */
/* {RETROK_BREAK,       "RETROK_BREAK",        "Keyboard Break"}, */
/* {RETROK_MENU,        "RETROK_MENU",         "Keyboard Menu"}, */
/* {RETROK_POWER,       "RETROK_POWER",        "Keyboard Power"}, */
/* {RETROK_EURO,        "RETROK_EURO",         "Keyboard Euro"}, */
/* {RETROK_UNDO,        "RETROK_UNDO",         "Keyboard Undo"}, */
/* {RETROK_OEM_102,     "RETROK_OEM_102",      "Keyboard OEM-102"} */
   {RETROK_LAST, {0}, {0}}
};

#endif /* LIBRETRO_MAPPER_H */
