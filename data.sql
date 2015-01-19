/*
 Navicat SQLite Data Transfer

 Source Server         : kj
 Source Server Version : 3008001
 Source Database       : main

 Target Server Version : 3008001
 File Encoding         : utf-8

 Date: 04/05/2014 10:06:30 AM
*/

PRAGMA foreign_keys = false;

-- ----------------------------
--  Table structure for data
-- ----------------------------
DROP TABLE IF EXISTS "data";
CREATE TABLE "data" (
	"id" INTEGER NOT NULL,
	"year" integer NOT NULL,
	"quarter" integer NOT NULL,
	"X1" real NOT NULL,
	"X2" real NOT NULL,
	"X3" real NOT NULL,
	"X4" real NOT NULL,
	"X5" real NOT NULL,
	"X6" real,
	"X7" real,
	"X8" real,
	"X9" real,
	"X10" real,
	"X11" real,
	"X12" real,
	"X14" real,
	"X15" real,
	"X16" real,
	"X17" real,
	"X18" real NOT NULL,
	"X19" real,
	"X20" real,
	"X21" real,
	"X22" real,
	"X23" real NOT NULL,
	"X24" real NOT NULL,
	"X25" real NOT NULL,
	"X26" real NOT NULL,
	"X27" real NOT NULL,
	"X28" real NOT NULL,
	"X29" real NOT NULL,
	"X30" real NOT NULL,
	"X31" real NOT NULL,
	"X32" real NOT NULL,
	"X33" real,
	"X34" real,
	"X35" real,
	"X36" real,
	"X37" real,
	"X38" real,
	"X39" real,
	"X40" real,
	"X41" real,
	"X42" real,
	"X43" real,
	"X44" real,
	"X45" real NOT NULL,
	"X46" real NOT NULL,
	"X47" real,
	"X48" real,
	"X49" real,
	"X50" real,
	"X51" real,
	"X52" real,
	"X53" real,
	"X54" real,
	"X55" real,
	"X56" real,
	"X57" real,
	"X58" real,
	"X60" real,
	"X61" real,
	"X62" real,
	"X63" real,
	PRIMARY KEY ("id")
);

-- ----------------------------
--  Records of data
-- ----------------------------
BEGIN;
INSERT INTO "data" VALUES (0, 2006, 1, 12.0, 13.0, 141.0, 15.0, 191.0, 32.0, 414.0, 4141.0, 43242.0, 2414.0, 43242.0, 2423423.0, 2342424.0, 24242.0, 2432424.0, 41414.0, 24242.0, 234522.0, 25252.0, 35353252.0, 5252.0, 342423.0, 2343242.0, 34324.0, 34343.0, 432432.0, 3434.0, 4242.0, 4242.0, 3443.0, 24242.0, 24242.0, 22322.0, 42424.0, 4424.0, 4242.0, 4242.0, 4342.0, 5432.0, 5252.0, 525252.0, 5252.0, 5252.0, 5522.0, 5252.0, 5255.0, 525252.0, 525252.0, 52552.0, 52552.0, 525225.0, 522525.0, 525252.0, 52525.0, 525225.0, 52552.0, 522.0, 5252.0, 52252.0, 52552.0, 522552.0);
COMMIT;

PRAGMA foreign_keys = true;
