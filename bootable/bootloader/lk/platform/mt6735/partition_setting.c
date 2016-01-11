#include "platform/partition.h"


struct part_name_map g_part_name_map[PART_MAX_COUNT] = {
	{"preloader",   "preloader",    "raw data", 0,  0,  0},
	{"proinfo", "proinfo",  "raw data", 1,  0,  0},
	{"nvram",   "nvram",    "raw data", 2,  0,  0},
	{"protect1",    "protect1", "ext4",     3,  0,  0},
	{"protect2",    "protect2", "ext4",     4,  0,  0},
	{"persist", "persist",  "ext4",     5,  0,  0},
	{"kb",      "kb",       "raw data", 6,  0,  0},
	{"dkb",     "dkb",      "raw data", 7,  0,  0},
	{"seccfg",  "seccfg",   "raw data", 8,  0,  0},
	{"pg1fs",   "pg1fs",    "raw data", 9,  1,  1},
	{"reserve1",    "reserve1", "raw data", 10, 0,  0},
	{"pg2fs",   "pg2fs",    "raw data", 11, 1,  1},
	{"lk",      "lk",       "raw data", 12, 1,  1},
	{"secro",   "secro",    "ext4",     13, 0,  0},
	{"para",    "para",     "raw data", 14, 0,  0},
	{"logo",    "logo",     "raw data", 15, 1,  1},
	{"efuse",    "efuse",     "raw data", 16, 0,  0},
	{"frp",     "frp",      "raw data", 17, 0,  0},
	{"hosd",    "hosd",     "raw data", 18, 1,  1},
	{"htcsec",  "htcsec",   "raw data", 19, 1,  1},
	{"tool_diag",   "tool_diag",    "raw data", 20, 1,  1},
	{"reserve2",    "reserve2", "raw data", 21, 0,  0},
	{"fataldevlog", "fataldevlog",  "ext4",     22, 0,  0},
	{"devlog",  "devlog",   "ext4",     23, 0,  0},
	{"expdb",   "expdb",    "raw data", 24, 0,  0},
	{"tee1",    "tee1",     "raw data", 25, 1,  1},
	{"tee2",    "tee2",     "raw data", 26, 1,  1},
	{"metadata",    "metadata", "raw data", 27, 0,  0},
	{"lkbackup",    "lkbackup", "raw data", 28, 0,  0},
	{"otafw",   "otafw",    "raw data", 29, 0,  0},
	{"sensor_hub",  "sensor_hub",   "raw data", 30, 1,  1},
	{"cir_img", "cir_img",  "raw data", 31, 1,  1},
	{"carrier", "carrier",  "ext4",     32, 0,  0},
	{"control", "control",  "raw data", 33, 0,  0},
	{"battery", "battery",  "raw data", 34, 0,  0},
	{"apppreload",  "apppreload",   "ext4",     35, 0,  0},
	{"cota",    "cota",     "ext4",     36, 0,  0},
	{"extra",   "extra",    "raw data", 37, 0,  0},
	{"andinfo", "andinfo",  "raw data", 38, 1,  1},
	{"oemkeystore", "oemkeystore",  "raw data", 39, 0,  0},
	{"keystore", "keystore",  "raw data", 40, 0,  0},
	{"nvdata", "nvdata",  "ext4", 41, 0,  0},
	{"reserve", "reserve",  "raw data", 42, 0,  0},
	{"cache",   "cache",    "ext4",     43, 1,  1},
	{"boot",    "boot",     "raw data", 44, 1,  1},
	{"recovery",    "recovery", "raw data", 45, 0,  0},
	{"system",  "system",   "ext4",     46, 1,  1},
	{"userdata",    "userdata", "ext4",     47, 1,  1},
	{"flashinfo",   "flashinfo",    "raw data", 48, 0,  0},
};