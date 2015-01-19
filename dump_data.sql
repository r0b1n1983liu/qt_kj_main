/*
create by r0b1n
*/


PRAGMA foreign_keys = false;

-- ----------------------------
--  Table structure for index
-- ----------------------------
DROP TABLE IF EXISTS "index";
CREATE TABLE "index" (
    "id" INTEGER NOT NULL,
	"name"	text NOT NULL,
    "code3" text NOT NULL,
    "code2" text NOT NULL,
    "info" text,

	PRIMARY KEY("id")
);

-- ----------------------------
--  Records of index
-- ----------------------------
BEGIN;
INSERT INTO "index" VALUES (0,	'餐饮业营业收入',			'X1',	'X100',	'统计局,统计数据');
INSERT INTO "index" VALUES (1, 	'酒吧营业收入',			'X2',	'X100',	'统计局,统计数据');
INSERT INTO "index" VALUES (2, 	'购物商店营业收入',		'X3',	'X100',	'统计局,统计数据');
INSERT INTO "index" VALUES (3, 	'住宿业营业收入',			'X4',	'X100',	'统计局,统计数据');
INSERT INTO "index" VALUES (4,	'文化娱乐场所营业收入',	'X5',	'X100',	'统计局,统计数据');
INSERT INTO "index" VALUES (5, 	'三轮车收入',				'X6',	'X100',	'什刹海管委，统计数据');
INSERT INTO "index" VALUES (6, 	'游船收入',				'X7',	'X100',	'什刹海管委，统计数据');
INSERT INTO "index" VALUES (7, 	'餐饮业的总的就业人数',	'X8',	'X100',	'统计局，实地检测');
INSERT INTO "index" VALUES (8,	'文化娱乐场所就业人数',	'X9',	'X100',	'统计局，实地检测');
INSERT INTO "index" VALUES (9, 	'住宿业的就业人数',		'X10',	'X100',	'统计局，实地检测');
INSERT INTO "index" VALUES (10, '三轮车日载客量',			'X11',	'X100',	'什刹海管委，实地检测');
INSERT INTO "index" VALUES (11, '游船日载客量',			'X14',	'X100',	'什刹海管委，实地检测');
INSERT INTO "index" VALUES (12,	'三轮车数量',				'X15',	'X100',	'什刹海管委');
INSERT INTO "index" VALUES (13, '游船数量',				'X16',	'X100',	'什刹海管委');
INSERT INTO "index" VALUES (14, '景点营业收入',			'X17',	'X100',	'统计局,统计数据');


INSERT INTO "index" VALUES (15, '什刹海周边平均房价',		'X18',	'X200',	'来自网站');
INSERT INTO "index" VALUES (16, '绿化率',				'X19',	'X200',	'园林绿化局');
INSERT INTO "index" VALUES (17,	'生活垃圾清运量',			'X20',	'X200',	'环境服务中心');
INSERT INTO "index" VALUES (18, '卫生状况满意度',			'X21',	'X200',	'统计局（调查问卷）');
INSERT INTO "index" VALUES (19, 'COD指标',				'X22',	'X200',	'环保局');
INSERT INTO "index" VALUES (20, '总氮指标',				'X23',	'X200',	'统计局');
INSERT INTO "index" VALUES (21, '总磷指标',				'X24',	'X200',	'统计局');
INSERT INTO "index" VALUES (22, '空气状况',				'X25',	'X200',	'统计局');
INSERT INTO "index" VALUES (23, '噪音状况',				'X26',	'X200',	'统计局');


INSERT INTO "index" VALUES (24, '餐饮企业个数',			'X28',	'X300',	'统计局，实地检测');
INSERT INTO "index" VALUES (25,	'酒吧个数',				'X29',	'X300',	'统计局，实地检测');
INSERT INTO "index" VALUES (26, '购物商店个数',			'X30',	'X300',	'统计局，实地检测');
INSERT INTO "index" VALUES (27, '住宿单位个数',			'X31',	'X300',	'统计局，实地检测');
INSERT INTO "index" VALUES (28, '文化娱乐业单位个数',		'X32',	'X300',	'统计局，实地检测');
INSERT INTO "index" VALUES (29,	'餐饮行业前五名企业占份额',	'X33',	'X300',	'统计局，实地检测');
INSERT INTO "index" VALUES (30, '酒吧行业前五名企业占份额',	'X34',	'X300',	'统计局,统计数据');
INSERT INTO "index" VALUES (31, '住宿行业前五名企业占份额',	'X35',	'X300',	'统计局,统计数据');
INSERT INTO "index" VALUES (32, '购物',	'X36',	'X300',	'统计局,统计数据');
INSERT INTO "index" VALUES (33,	'',	'X37',	'X300',	'统计局,统计数据');


INSERT INTO "index" VALUES (34, '',	'X39',	'X400',	'什刹海管委，实地检测');
INSERT INTO "index" VALUES (35, '',	'X40',	'X400',	'什刹海管委，实地检测');
INSERT INTO "index" VALUES (36, '',	'X41',	'X400',	'统计局（调查问卷）');
INSERT INTO "index" VALUES (38, '',	'X43',	'X400',	'统计局（调查问卷）');
INSERT INTO "index" VALUES (40, '',	'X45',	'X400',	'公安局');
INSERT INTO "index" VALUES (41,	'',	'X46',	'X400',	'什刹海管委');
INSERT INTO "index" VALUES (42, '',	'X47',	'X400',	'什刹海管委');
INSERT INTO "index" VALUES (43, '',	'X48',	'X400',	'统计局（调查问卷）');


INSERT INTO "index" VALUES (44, '',	'X49',	'X500',	'什刹海管委，统计数据');
INSERT INTO "index" VALUES (45,	'',	'X50',	'X500',	'什刹海管委，统计数据');
INSERT INTO "index" VALUES (46, '',	'X51',	'X500',	'环境服务中心');
INSERT INTO "index" VALUES (47, '',	'X52',	'X500',	'环境服务中心');
INSERT INTO "index" VALUES (48, '',	'X53',	'X500',	'');
INSERT INTO "index" VALUES (49,	'',	'X54',	'X500',	'');
INSERT INTO "index" VALUES (50, '',	'X55',	'X500',	'什刹海管委，统计数据');
INSERT INTO "index" VALUES (51, '',	'X57',	'X500',	'什刹海管委，统计数据');

INSERT INTO "index" VALUES (52, '',	'X58',	'X600',	'问卷');
INSERT INTO "index" VALUES (53,	'',	'X60',	'X600',	'');
INSERT INTO "index" VALUES (54, '',	'X61',	'X600',	'');
INSERT INTO "index" VALUES (55, '',	'X62',	'X600',	'');
INSERT INTO "index" VALUES (56, '',	'X63',	'X600',	'');
--INSERT INTO "index" VALUES (57,	'',	'X64',	'X600',	'统计局');
--INSERT INTO "index" VALUES (58, '',	'X65',	'X600',	'统计局');
--INSERT INTO "index" VALUES (59, '',	'X66',	'X600',	'');


COMMIT;

-- ----------------------------
--  Table structure for data
-- ----------------------------
DROP TABLE IF EXISTS "data";
CREATE TABLE "data" (
    "id" INTEGER NOT NULL,
    "year" integer NOT NULL,
    "quarter" integer NOT NULL,
    "code" text not null,
    "data" real not null,

	PRIMARY KEY("id")
);

-- ----------------------------
--  Records of index
-- ----------------------------
BEGIN;
INSERT INTO "data" VALUES (0, 2010, 1, 'X1', 87.2);
INSERT INTO "data" VALUES (1, 2012, 1, 'X2', 98.7);
INSERT INTO "data" VALUES (2,2006, 1, 'X18', 200.1);
COMMIT;



/* -- ---------------------------- */
/* --  Records of test */
/* -- ---------------------------- */
/* BEGIN; */
/* INSERT INTO "test" VALUES (0, 'mike', 13); */
/* INSERT INTO "test" VALUES (1, 'jack', 20); */
/* INSERT INTO "test" VALUES (3, 'robin', 40); */
/* COMMIT; */


/* -- ---------------------------- */
/* --  Table structure for user */
/* -- ---------------------------- */
/* DROP TABLE IF EXISTS "user"; */
/* CREATE TABLE "user" ( */
/* 	 "id" integer NOT NULL, */
/* 	 "name" TEXT NOT NULL, */
/* 	 "passwd" TEXT NOT NULL, */
/* 	PRIMARY KEY("id") */
/* ); */

/* -- ---------------------------- */
/* --  Records of user */
/* -- ---------------------------- */
/* BEGIN; */
/* INSERT INTO "user" VALUES (0, 'admin', 123); */
/* COMMIT; */

PRAGMA foreign_keys = true;

);

-- ----------------------------
--  Records of index
-- ----------------------------
BEGIN;
INSERT INTO "index" VALUES (0, 'X1', 1, '统计局');
INSERT INTO "index" VALUES (1, 'X2', 1, '统计局');
INSERT INTO "index" VALUES (2, 'X18', 2, '网站');
COMMIT;

-- ----------------------------
--  Table structure for data
-- ----------------------------
DROP TABLE IF EXISTS "data";
CREATE TABLE "data" (
    "id" INTEGER NOT NULL,
    "year" integer NOT NULL,
    "quarter" integer NOT NULL,
    "code" text not null,
    "data" real not null,

	PRIMARY KEY("id")
);

-- ----------------------------
--  Records of index
-- ----------------------------
BEGIN;
INSERT INTO "data" VALUES (0, 2010, 1, 'X1', 87.2);
INSERT INTO "data" VALUES (1, 2012, 1, 'X2', 98.7);
INSERT INTO "data" VALUES (2,2006, 1, 'X18', 200.1);
COMMIT;



/* -- ---------------------------- */
/* --  Records of test */
/* -- ---------------------------- */
/* BEGIN; */
/* INSERT INTO "test" VALUES (0, 'mike', 13); */
/* INSERT INTO "test" VALUES (1, 'jack', 20); */
/* INSERT INTO "test" VALUES (3, 'robin', 40); */
/* COMMIT; */


/* -- ---------------------------- */
/* --  Table structure for user */
/* -- ---------------------------- */
/* DROP TABLE IF EXISTS "user"; */
/* CREATE TABLE "user" ( */
/* 	 "id" integer NOT NULL, */
/* 	 "name" TEXT NOT NULL, */
/* 	 "passwd" TEXT NOT NULL, */
/* 	PRIMARY KEY("id") */
/* ); */

/* -- ---------------------------- */
/* --  Records of user */
/* -- ---------------------------- */
/* BEGIN; */
/* INSERT INTO "user" VALUES (0, 'admin', 123); */
/* COMMIT; */

PRAGMA foreign_keys = true;

