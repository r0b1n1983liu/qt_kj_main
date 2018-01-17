/*
 Navicat SQLite Data Transfer

 Source Server         : kj
 Source Server Version : 3008001
 Source Database       : main

 Target Server Version : 3008001
 File Encoding         : utf-8

 Date: 04/05/2014 10:09:03 AM
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
INSERT INTO "data" VALUES (0, 2006, 1, 2131231.0, 13.0, 141.0, 15.0, 191.0, 32.0, 414.0, 4141.0, 43242.0, 2414.0, 43242.0, 2423423.0, 2342424.0, 24242.0, 2432424.0, 41414.0, 24242.0, 234522.0, 25252.0, 35353252.0, 5252.0, 342423.0, 2343242.0, 34324.0, 34343.0, 432432.0, 3434.0, 4242.0, 4242.0, 3443.0, 24242.0, 24242.0, 22322.0, 42424.0, 4424.0, 4242.0, 4242.0, 4342.0, 5432.0, 5252.0, 525252.0, 5252.0, 5252.0, 5522.0, 5252.0, 5255.0, 525252.0, 525252.0, 52552.0, 52552.0, 525225.0, 522525.0, 525252.0, 52525.0, 525225.0, 52552.0, 522.0, 5252.0, 52252.0, 52552.0, 522552.0);
COMMIT;

-- ----------------------------
--  Table structure for index
-- ----------------------------
DROP TABLE IF EXISTS "index";
CREATE TABLE "index" (
	"id" INTEGER NOT NULL,
	"name" text NOT NULL,
	"code3" text NOT NULL,
	"code2" text NOT NULL,
	"info" text,
	PRIMARY KEY ("id")
);

-- ----------------------------
--  Records of index
-- ----------------------------
BEGIN;
INSERT INTO "index" VALUES (0, '餐饮业营业收入', 'X1', 'X100', '统计局,统计数据');
INSERT INTO "index" VALUES (1, '酒吧营业收入', 'X2', 'X100', '统计局,统计数据');
INSERT INTO "index" VALUES (2, '购物商店营业收入', 'X3', 'X100', '统计局,统计数据');
INSERT INTO "index" VALUES (3, '住宿业营业收入', 'X4', 'X100', '统计局,统计数据');
INSERT INTO "index" VALUES (4, '文化娱乐场所营业收入', 'X5', 'X100', '统计局,统计数据');
INSERT INTO "index" VALUES (5, '三轮车收入', 'X6', 'X100', '什刹海管委，统计数据');
INSERT INTO "index" VALUES (6, '游船收入', 'X7', 'X100', '什刹海管委，统计数据');
INSERT INTO "index" VALUES (7, '餐饮业的总的就业人数', 'X8', 'X100', '统计局，实地检测');
INSERT INTO "index" VALUES (8, '文化娱乐场所就业人数', 'X9', 'X100', '统计局，实地检测');
INSERT INTO "index" VALUES (9, '住宿业的就业人数', 'X10', 'X100', '统计局，实地检测');
INSERT INTO "index" VALUES (10, '三轮车日载客量', 'X11', 'X100', '什刹海管委，实地检测');
INSERT INTO "index" VALUES (11, '游船日载客量', 'X14', 'X100', '什刹海管委，实地检测');
INSERT INTO "index" VALUES (12, '三轮车数量', 'X15', 'X100', '什刹海管委');
INSERT INTO "index" VALUES (13, '游船数量', 'X16', 'X100', '什刹海管委');
INSERT INTO "index" VALUES (14, '景点营业收入', 'X17', 'X100', '统计局,统计数据');
INSERT INTO "index" VALUES (15, '什刹海周边平均房价', 'X18', 'X200', '来自网站');
INSERT INTO "index" VALUES (16, '绿化率', 'X19', 'X200', '园林绿化局');
INSERT INTO "index" VALUES (17, '生活垃圾清运量', 'X20', 'X200', '环境服务中心');
INSERT INTO "index" VALUES (18, '卫生状况满意度', 'X21', 'X200', '统计局（调查问卷）');
INSERT INTO "index" VALUES (19, 'COD指标', 'X22', 'X200', '环保局');
INSERT INTO "index" VALUES (20, '总氮指标', 'X23', 'X200', '统计局');
INSERT INTO "index" VALUES (21, '总磷指标', 'X24', 'X200', '统计局');
INSERT INTO "index" VALUES (22, '空气状况', 'X25', 'X200', '统计局');
INSERT INTO "index" VALUES (23, '噪音状况', 'X26', 'X200', '统计局');
INSERT INTO "index" VALUES (24, '餐饮企业个数', 'X28', 'X300', '统计局，实地检测');
INSERT INTO "index" VALUES (25, '酒吧个数', 'X29', 'X300', '统计局，实地检测');
INSERT INTO "index" VALUES (26, '购物商店个数', 'X30', 'X300', '统计局，实地检测');
INSERT INTO "index" VALUES (27, '住宿单位个数', 'X31', 'X300', '统计局，实地检测');
INSERT INTO "index" VALUES (28, '文化娱乐业单位个数', 'X32', 'X300', '统计局，实地检测');
INSERT INTO "index" VALUES (29, '餐饮行业前五名企业占份额', 'X33', 'X300', '统计局，实地检测');
INSERT INTO "index" VALUES (30, '酒吧行业前五名企业占份额', 'X34', 'X300', '统计局,统计数据');
INSERT INTO "index" VALUES (31, '住宿行业前五名企业占份额', 'X35', 'X300', '统计局,统计数据');
INSERT INTO "index" VALUES (32, '购物店营业收入前五名份额', 'X36', 'X300', '统计局,统计数据');
INSERT INTO "index" VALUES (33, '文化娱乐收入前五名份额', 'X37', 'X300', '统计局,统计数据');
INSERT INTO "index" VALUES (34, '单位时间客流量', 'X39', 'X400', '什刹海管委，实地检测');
INSERT INTO "index" VALUES (35, '国际游客比例', 'X40', 'X400', '什刹海管委，实地检测');
INSERT INTO "index" VALUES (36, '国内游客知名度', 'X41', 'X400', '统计局（调查问卷）');
INSERT INTO "index" VALUES (37, '所有企业数', 'X38', 'X300', '统计局,统计数据');
INSERT INTO "index" VALUES (38, '国内游客受访率', 'X43', 'X400', '统计局（调查问卷）');
INSERT INTO "index" VALUES (40, '本季度犯罪数量', 'X45', 'X400', '公安局');
INSERT INTO "index" VALUES (41, '本季度投诉数量', 'X46', 'X400', '什刹海管委');
INSERT INTO "index" VALUES (42, '本季度古迹四合院修缮费用', 'X47', 'X400', '什刹海管委');
INSERT INTO "index" VALUES (43, '商业与什刹海文化协调程度', 'X48', 'X400', '统计局（调查问卷）');
INSERT INTO "index" VALUES (44, '景区维护建设费用支出', 'X49', 'X500', '什刹海管委，统计数据');
INSERT INTO "index" VALUES (45, '公共休憩设施数量', 'X50', 'X500', '什刹海管委，统计数据');
INSERT INTO "index" VALUES (46, '公共厕所数量', 'X51', 'X500', '环境服务中心');
INSERT INTO "index" VALUES (47, '果皮箱数量', 'X52', 'X500', '环境服务中心');
INSERT INTO "index" VALUES (48, '清洁人员数量', 'X53', 'X500', '');
INSERT INTO "index" VALUES (49, '旅游信息标识', 'X54', 'X500', '');
INSERT INTO "index" VALUES (50, '公共租赁自行车数量', 'X55', 'X500', '什刹海管委，统计数据');
INSERT INTO "index" VALUES (51, '举办公共文化艺术活动场次', 'X57', 'X500', '什刹海管委，统计数据');
INSERT INTO "index" VALUES (52, '国内游客对什刹海满意度', 'X58', 'X600', '问卷');
INSERT INTO "index" VALUES (53, '租金水平', 'X60', 'X600', '');
INSERT INTO "index" VALUES (54, '收入合计', 'X61', 'X600', '');
INSERT INTO "index" VALUES (55, '国内游客重游率', 'X62', 'X600', '');
INSERT INTO "index" VALUES (56, '旅游总收入', 'X63', 'X600', '');
COMMIT;

-- ----------------------------
--  Table structure for test
-- ----------------------------
DROP TABLE IF EXISTS "test";
CREATE TABLE "test" (
    "id" INTEGER NOT NULL,
    "name" text,
    PRIMARY KEY("id")
);

-- ----------------------------
--  Records of test
-- ----------------------------
BEGIN;
INSERT INTO "test" VALUES (NULL, 'mike');
INSERT INTO "test" VALUES (NULL, 'jack');
INSERT INTO "test" VALUES (NULL, '刘斌');
INSERT INTO "test" VALUES (NULL, 'robin');
COMMIT;

-- ----------------------------
--  Table structure for user
-- ----------------------------
DROP TABLE IF EXISTS "user";
CREATE TABLE "user" (
	 "id" integer,
	 "name" TEXT NOT NULL,
	 "passwd" TEXT NOT NULL,
	PRIMARY KEY("id")
);

-- ----------------------------
--  Records of user
-- ----------------------------
BEGIN;
INSERT INTO "user" VALUES (NULL, 'admin', 123);
COMMIT;

PRAGMA foreign_keys = true;
