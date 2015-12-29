/*
 * X32Mtx.h
 *
 *  Created on: 4 f�vr. 2015
 *      Author: patrick
 */

#ifndef X32MTX_H_
#define X32MTX_H_

X32command Xmtx01[] = {
		{"/mtx/01/config",						{BSCO}, F_FND, {0}},
		{"/mtx/01/config/name",				{S32}, F_XET, {0}},
		{"/mtx/01/config/icon",				{I32}, F_XET, {0}},
		{"/mtx/01/config/color",			{I32}, F_XET, {0}},
		{"/mtx/01/preamp",						{MXPR}, F_FND, {0}},
		{"/mtx/01/preamp/invert",			{I32}, F_XET, {0}},
		{"/mtx/01/dyn",							{MXDY}, F_FND, {0}},
		{"/mtx/01/dyn/on",					{I32}, F_XET, {0}},
		{"/mtx/01/dyn/mode",				{I32}, F_XET, {0}},
		{"/mtx/01/dyn/det",					{I32}, F_XET, {0}},
		{"/mtx/01/dyn/env",					{I32}, F_XET, {0}},
		{"/mtx/01/dyn/thr",					{I32}, F_XET, {0}},
		{"/mtx/01/dyn/ratio",				{I32}, F_XET, {0}},
		{"/mtx/01/dyn/knee",				{I32}, F_XET, {0}},
		{"/mtx/01/dyn/mgain",				{I32}, F_XET, {0}},
		{"/mtx/01/dyn/attack",				{I32}, F_XET, {0}},
		{"/mtx/01/dyn/hold",				{I32}, F_XET, {0}},
		{"/mtx/01/dyn/release",				{I32}, F_XET, {0}},
		{"/mtx/01/dyn/pos",					{I32}, F_XET, {0}},
		{"/mtx/01/dyn/mix",					{I32}, F_XET, {0}},
		{"/mtx/01/dyn/auto",				{I32}, F_XET, {0}},
		{"/mtx/01/dyn/filter",					{CHDF}, F_FND, {0}},
		{"/mtx/01/dyn/filter/on",			{I32}, F_XET, {0}},
		{"/mtx/01/dyn/filter/type",			{I32}, F_XET, {0}},
		{"/mtx/01/dyn/filter/f",			{I32}, F_XET, {0}},
		{"/mtx/01/insert",						{CHIN}, F_FND, {0}},
		{"/mtx/01/insert/on",				{I32}, F_XET, {0}},
		{"/mtx/01/insert/pos",				{I32}, F_XET, {0}},
		{"/mtx/01/insert/sel",				{I32}, F_XET, {0}},
		{"/mtx/01/eq",							{OFFON}, F_FND, {1}},
		{"/mtx/01/eq/on",					{I32}, F_XET, {0}},
		{"/mtx/01/eq/1",						{CHEQ}, F_FND, {0}},
		{"/mtx/01/eq/1/type",				{I32}, F_XET, {0}},
		{"/mtx/01/eq/1/f",					{I32}, F_XET, {0}},
		{"/mtx/01/eq/1/g",					{I32}, F_XET, {0}},
		{"/mtx/01/eq/1/q",					{I32}, F_XET, {0}},
		{"/mtx/01/eq/2",						{CHEQ}, F_FND, {0}},
		{"/mtx/01/eq/2/type",				{I32}, F_XET, {0}},
		{"/mtx/01/eq/2/f",					{I32}, F_XET, {0}},
		{"/mtx/01/eq/2/g",					{I32}, F_XET, {0}},
		{"/mtx/01/eq/2/q",					{I32}, F_XET, {0}},
		{"/mtx/01/eq/3",						{CHEQ}, F_FND, {0}},
		{"/mtx/01/eq/3/type",				{I32}, F_XET, {0}},
		{"/mtx/01/eq/3/f",					{I32}, F_XET, {0}},
		{"/mtx/01/eq/3/g",					{I32}, F_XET, {0}},
		{"/mtx/01/eq/3/q",					{I32}, F_XET, {0}},
		{"/mtx/01/eq/4",						{CHEQ}, F_FND, {0}},
		{"/mtx/01/eq/4/type",				{I32}, F_XET, {0}},
		{"/mtx/01/eq/4/f",					{I32}, F_XET, {0}},
		{"/mtx/01/eq/4/g",					{I32}, F_XET, {0}},
		{"/mtx/01/eq/4/q",					{I32}, F_XET, {0}},
		{"/mtx/01/eq/5",						{CHEQ}, F_FND, {0}},
		{"/mtx/01/eq/5/type",				{I32}, F_XET, {0}},
		{"/mtx/01/eq/5/f",					{I32}, F_XET, {0}},
		{"/mtx/01/eq/5/g",					{I32}, F_XET, {0}},
		{"/mtx/01/eq/5/q",					{I32}, F_XET, {0}},
		{"/mtx/01/eq/6",						{CHEQ}, F_FND, {0}},
		{"/mtx/01/eq/6/type",				{I32}, F_XET, {0}},
		{"/mtx/01/eq/6/f",					{I32}, F_XET, {0}},
		{"/mtx/01/eq/6/g",					{I32}, F_XET, {0}},
		{"/mtx/01/eq/6/q",					{I32}, F_XET, {0}},
		{"/mtx/01/mix",							{CHME}, F_FND, {0}},
		{"/mtx/01/mix/on",					{I32}, F_XET, {0}},
		{"/mtx/01/mix/fader",				{I32}, F_XET, {0}},
};
int Xmtx01_max = sizeof(Xmtx01) / sizeof(X32command);


X32command Xmtx02[] = {
		{"/mtx/02/config",						{BSCO}, F_FND, {0}},
		{"/mtx/02/config/name",				{S32}, F_XET, {0}},
		{"/mtx/02/config/icon",				{I32}, F_XET, {0}},
		{"/mtx/02/config/color",			{I32}, F_XET, {0}},
		{"/mtx/02/preamp",						{MXPR}, F_FND, {0}},
		{"/mtx/02/preamp/invert",			{I32}, F_XET, {0}},
		{"/mtx/02/dyn",							{MXDY}, F_FND, {0}},
		{"/mtx/02/dyn/on",					{I32}, F_XET, {0}},
		{"/mtx/02/dyn/mode",				{I32}, F_XET, {0}},
		{"/mtx/02/dyn/det",					{I32}, F_XET, {0}},
		{"/mtx/02/dyn/env",					{I32}, F_XET, {0}},
		{"/mtx/02/dyn/thr",					{I32}, F_XET, {0}},
		{"/mtx/02/dyn/ratio",				{I32}, F_XET, {0}},
		{"/mtx/02/dyn/knee",				{I32}, F_XET, {0}},
		{"/mtx/02/dyn/mgain",				{I32}, F_XET, {0}},
		{"/mtx/02/dyn/attack",				{I32}, F_XET, {0}},
		{"/mtx/02/dyn/hold",				{I32}, F_XET, {0}},
		{"/mtx/02/dyn/release",				{I32}, F_XET, {0}},
		{"/mtx/02/dyn/pos",					{I32}, F_XET, {0}},
		{"/mtx/02/dyn/mix",					{I32}, F_XET, {0}},
		{"/mtx/02/dyn/auto",				{I32}, F_XET, {0}},
		{"/mtx/02/dyn/filter",					{CHDF}, F_FND, {0}},
		{"/mtx/02/dyn/filter/on",			{I32}, F_XET, {0}},
		{"/mtx/02/dyn/filter/type",			{I32}, F_XET, {0}},
		{"/mtx/02/dyn/filter/f",			{I32}, F_XET, {0}},
		{"/mtx/02/insert",						{CHIN}, F_FND, {0}},
		{"/mtx/02/insert/on",				{I32}, F_XET, {0}},
		{"/mtx/02/insert/pos",				{I32}, F_XET, {0}},
		{"/mtx/02/insert/sel",				{I32}, F_XET, {0}},
		{"/mtx/02/eq",							{OFFON}, F_FND, {1}},
		{"/mtx/02/eq/on",					{I32}, F_XET, {0}},
		{"/mtx/02/eq/1",						{CHEQ}, F_FND, {0}},
		{"/mtx/02/eq/1/type",				{I32}, F_XET, {0}},
		{"/mtx/02/eq/1/f",					{I32}, F_XET, {0}},
		{"/mtx/02/eq/1/g",					{I32}, F_XET, {0}},
		{"/mtx/02/eq/1/q",					{I32}, F_XET, {0}},
		{"/mtx/02/eq/2",						{CHEQ}, F_FND, {0}},
		{"/mtx/02/eq/2/type",				{I32}, F_XET, {0}},
		{"/mtx/02/eq/2/f",					{I32}, F_XET, {0}},
		{"/mtx/02/eq/2/g",					{I32}, F_XET, {0}},
		{"/mtx/02/eq/2/q",					{I32}, F_XET, {0}},
		{"/mtx/02/eq/3",						{CHEQ}, F_FND, {0}},
		{"/mtx/02/eq/3/type",				{I32}, F_XET, {0}},
		{"/mtx/02/eq/3/f",					{I32}, F_XET, {0}},
		{"/mtx/02/eq/3/g",					{I32}, F_XET, {0}},
		{"/mtx/02/eq/3/q",					{I32}, F_XET, {0}},
		{"/mtx/02/eq/4",						{CHEQ}, F_FND, {0}},
		{"/mtx/02/eq/4/type",				{I32}, F_XET, {0}},
		{"/mtx/02/eq/4/f",					{I32}, F_XET, {0}},
		{"/mtx/02/eq/4/g",					{I32}, F_XET, {0}},
		{"/mtx/02/eq/4/q",					{I32}, F_XET, {0}},
		{"/mtx/02/eq/5",						{CHEQ}, F_FND, {0}},
		{"/mtx/02/eq/5/type",				{I32}, F_XET, {0}},
		{"/mtx/02/eq/5/f",					{I32}, F_XET, {0}},
		{"/mtx/02/eq/5/g",					{I32}, F_XET, {0}},
		{"/mtx/02/eq/5/q",					{I32}, F_XET, {0}},
		{"/mtx/02/eq/6",						{CHEQ}, F_FND, {0}},
		{"/mtx/02/eq/6/type",				{I32}, F_XET, {0}},
		{"/mtx/02/eq/6/f",					{I32}, F_XET, {0}},
		{"/mtx/02/eq/6/g",					{I32}, F_XET, {0}},
		{"/mtx/02/eq/6/q",					{I32}, F_XET, {0}},
		{"/mtx/02/mix",							{CHME}, F_FND, {0}},
		{"/mtx/02/mix/on",					{I32}, F_XET, {0}},
		{"/mtx/02/mix/fader",				{I32}, F_XET, {0}},
};
int Xmtx02_max = sizeof(Xmtx02) / sizeof(X32command);


X32command Xmtx03[] = {
		{"/mtx/03/config",						{BSCO}, F_FND, {0}},
		{"/mtx/03/config/name",				{S32}, F_XET, {0}},
		{"/mtx/03/config/icon",				{I32}, F_XET, {0}},
		{"/mtx/03/config/color",			{I32}, F_XET, {0}},
		{"/mtx/03/preamp",						{MXPR}, F_FND, {0}},
		{"/mtx/03/preamp/invert",			{I32}, F_XET, {0}},
		{"/mtx/03/dyn",							{MXDY}, F_FND, {0}},
		{"/mtx/03/dyn/on",					{I32}, F_XET, {0}},
		{"/mtx/03/dyn/mode",				{I32}, F_XET, {0}},
		{"/mtx/03/dyn/det",					{I32}, F_XET, {0}},
		{"/mtx/03/dyn/env",					{I32}, F_XET, {0}},
		{"/mtx/03/dyn/thr",					{I32}, F_XET, {0}},
		{"/mtx/03/dyn/ratio",				{I32}, F_XET, {0}},
		{"/mtx/03/dyn/knee",				{I32}, F_XET, {0}},
		{"/mtx/03/dyn/mgain",				{I32}, F_XET, {0}},
		{"/mtx/03/dyn/attack",				{I32}, F_XET, {0}},
		{"/mtx/03/dyn/hold",				{I32}, F_XET, {0}},
		{"/mtx/03/dyn/release",				{I32}, F_XET, {0}},
		{"/mtx/03/dyn/pos",					{I32}, F_XET, {0}},
		{"/mtx/03/dyn/mix",					{I32}, F_XET, {0}},
		{"/mtx/03/dyn/auto",				{I32}, F_XET, {0}},
		{"/mtx/03/dyn/filter",					{CHDF}, F_FND, {0}},
		{"/mtx/03/dyn/filter/on",			{I32}, F_XET, {0}},
		{"/mtx/03/dyn/filter/type",			{I32}, F_XET, {0}},
		{"/mtx/03/dyn/filter/f",			{I32}, F_XET, {0}},
		{"/mtx/03/insert",						{CHIN}, F_FND, {0}},
		{"/mtx/03/insert/on",				{I32}, F_XET, {0}},
		{"/mtx/03/insert/pos",				{I32}, F_XET, {0}},
		{"/mtx/03/insert/sel",				{I32}, F_XET, {0}},
		{"/mtx/03/eq",							{OFFON}, F_FND, {1}},
		{"/mtx/03/eq/on",					{I32}, F_XET, {0}},
		{"/mtx/03/eq/1",						{CHEQ}, F_FND, {0}},
		{"/mtx/03/eq/1/type",				{I32}, F_XET, {0}},
		{"/mtx/03/eq/1/f",					{I32}, F_XET, {0}},
		{"/mtx/03/eq/1/g",					{I32}, F_XET, {0}},
		{"/mtx/03/eq/1/q",					{I32}, F_XET, {0}},
		{"/mtx/03/eq/2",						{CHEQ}, F_FND, {0}},
		{"/mtx/03/eq/2/type",				{I32}, F_XET, {0}},
		{"/mtx/03/eq/2/f",					{I32}, F_XET, {0}},
		{"/mtx/03/eq/2/g",					{I32}, F_XET, {0}},
		{"/mtx/03/eq/2/q",					{I32}, F_XET, {0}},
		{"/mtx/03/eq/3",						{CHEQ}, F_FND, {0}},
		{"/mtx/03/eq/3/type",				{I32}, F_XET, {0}},
		{"/mtx/03/eq/3/f",					{I32}, F_XET, {0}},
		{"/mtx/03/eq/3/g",					{I32}, F_XET, {0}},
		{"/mtx/03/eq/3/q",					{I32}, F_XET, {0}},
		{"/mtx/03/eq/4",						{CHEQ}, F_FND, {0}},
		{"/mtx/03/eq/4/type",				{I32}, F_XET, {0}},
		{"/mtx/03/eq/4/f",					{I32}, F_XET, {0}},
		{"/mtx/03/eq/4/g",					{I32}, F_XET, {0}},
		{"/mtx/03/eq/4/q",					{I32}, F_XET, {0}},
		{"/mtx/03/eq/5",						{CHEQ}, F_FND, {0}},
		{"/mtx/03/eq/5/type",				{I32}, F_XET, {0}},
		{"/mtx/03/eq/5/f",					{I32}, F_XET, {0}},
		{"/mtx/03/eq/5/g",					{I32}, F_XET, {0}},
		{"/mtx/03/eq/5/q",					{I32}, F_XET, {0}},
		{"/mtx/03/eq/6",						{CHEQ}, F_FND, {0}},
		{"/mtx/03/eq/6/type",				{I32}, F_XET, {0}},
		{"/mtx/03/eq/6/f",					{I32}, F_XET, {0}},
		{"/mtx/03/eq/6/g",					{I32}, F_XET, {0}},
		{"/mtx/03/eq/6/q",					{I32}, F_XET, {0}},
		{"/mtx/03/mix",							{CHME}, F_FND, {0}},
		{"/mtx/03/mix/on",					{I32}, F_XET, {0}},
		{"/mtx/03/mix/fader",				{I32}, F_XET, {0}},
};
int Xmtx03_max = sizeof(Xmtx03) / sizeof(X32command);


X32command Xmtx04[] = {
		{"/mtx/04/config",						{BSCO}, F_FND, {0}},
		{"/mtx/04/config/name",				{S32}, F_XET, {0}},
		{"/mtx/04/config/icon",				{I32}, F_XET, {0}},
		{"/mtx/04/config/color",			{I32}, F_XET, {0}},
		{"/mtx/04/preamp",						{MXPR}, F_FND, {0}},
		{"/mtx/04/preamp/invert",			{I32}, F_XET, {0}},
		{"/mtx/04/dyn",							{MXDY}, F_FND, {0}},
		{"/mtx/04/dyn/on",					{I32}, F_XET, {0}},
		{"/mtx/04/dyn/mode",				{I32}, F_XET, {0}},
		{"/mtx/04/dyn/det",					{I32}, F_XET, {0}},
		{"/mtx/04/dyn/env",					{I32}, F_XET, {0}},
		{"/mtx/04/dyn/thr",					{I32}, F_XET, {0}},
		{"/mtx/04/dyn/ratio",				{I32}, F_XET, {0}},
		{"/mtx/04/dyn/knee",				{I32}, F_XET, {0}},
		{"/mtx/04/dyn/mgain",				{I32}, F_XET, {0}},
		{"/mtx/04/dyn/attack",				{I32}, F_XET, {0}},
		{"/mtx/04/dyn/hold",				{I32}, F_XET, {0}},
		{"/mtx/04/dyn/release",				{I32}, F_XET, {0}},
		{"/mtx/04/dyn/pos",					{I32}, F_XET, {0}},
		{"/mtx/04/dyn/mix",					{I32}, F_XET, {0}},
		{"/mtx/04/dyn/auto",				{I32}, F_XET, {0}},
		{"/mtx/04/dyn/filter",					{CHDF}, F_FND, {0}},
		{"/mtx/04/dyn/filter/on",			{I32}, F_XET, {0}},
		{"/mtx/04/dyn/filter/type",			{I32}, F_XET, {0}},
		{"/mtx/04/dyn/filter/f",			{I32}, F_XET, {0}},
		{"/mtx/04/insert",						{CHIN}, F_FND, {0}},
		{"/mtx/04/insert/on",				{I32}, F_XET, {0}},
		{"/mtx/04/insert/pos",				{I32}, F_XET, {0}},
		{"/mtx/04/insert/sel",				{I32}, F_XET, {0}},
		{"/mtx/04/eq",							{OFFON}, F_FND, {1}},
		{"/mtx/04/eq/on",					{I32}, F_XET, {0}},
		{"/mtx/04/eq/1",						{CHEQ}, F_FND, {0}},
		{"/mtx/04/eq/1/type",				{I32}, F_XET, {0}},
		{"/mtx/04/eq/1/f",					{I32}, F_XET, {0}},
		{"/mtx/04/eq/1/g",					{I32}, F_XET, {0}},
		{"/mtx/04/eq/1/q",					{I32}, F_XET, {0}},
		{"/mtx/04/eq/2",						{CHEQ}, F_FND, {0}},
		{"/mtx/04/eq/2/type",				{I32}, F_XET, {0}},
		{"/mtx/04/eq/2/f",					{I32}, F_XET, {0}},
		{"/mtx/04/eq/2/g",					{I32}, F_XET, {0}},
		{"/mtx/04/eq/2/q",					{I32}, F_XET, {0}},
		{"/mtx/04/eq/3",						{CHEQ}, F_FND, {0}},
		{"/mtx/04/eq/3/type",				{I32}, F_XET, {0}},
		{"/mtx/04/eq/3/f",					{I32}, F_XET, {0}},
		{"/mtx/04/eq/3/g",					{I32}, F_XET, {0}},
		{"/mtx/04/eq/3/q",					{I32}, F_XET, {0}},
		{"/mtx/04/eq/4",						{CHEQ}, F_FND, {0}},
		{"/mtx/04/eq/4/type",				{I32}, F_XET, {0}},
		{"/mtx/04/eq/4/f",					{I32}, F_XET, {0}},
		{"/mtx/04/eq/4/g",					{I32}, F_XET, {0}},
		{"/mtx/04/eq/4/q",					{I32}, F_XET, {0}},
		{"/mtx/04/eq/5",						{CHEQ}, F_FND, {0}},
		{"/mtx/04/eq/5/type",				{I32}, F_XET, {0}},
		{"/mtx/04/eq/5/f",					{I32}, F_XET, {0}},
		{"/mtx/04/eq/5/g",					{I32}, F_XET, {0}},
		{"/mtx/04/eq/5/q",					{I32}, F_XET, {0}},
		{"/mtx/04/eq/6",						{CHEQ}, F_FND, {0}},
		{"/mtx/04/eq/6/type",				{I32}, F_XET, {0}},
		{"/mtx/04/eq/6/f",					{I32}, F_XET, {0}},
		{"/mtx/04/eq/6/g",					{I32}, F_XET, {0}},
		{"/mtx/04/eq/6/q",					{I32}, F_XET, {0}},
		{"/mtx/04/mix",							{CHME}, F_FND, {0}},
		{"/mtx/04/mix/on",					{I32}, F_XET, {0}},
		{"/mtx/04/mix/fader",				{I32}, F_XET, {0}},
};
int Xmtx04_max = sizeof(Xmtx04) / sizeof(X32command);


X32command Xmtx05[] = {
		{"/mtx/05/config",						{BSCO}, F_FND, {0}},
		{"/mtx/05/config/name",				{S32}, F_XET, {0}},
		{"/mtx/05/config/icon",				{I32}, F_XET, {0}},
		{"/mtx/05/config/color",			{I32}, F_XET, {0}},
		{"/mtx/05/preamp",						{MXPR}, F_FND, {0}},
		{"/mtx/05/preamp/invert",			{I32}, F_XET, {0}},
		{"/mtx/05/dyn",							{MXDY}, F_FND, {0}},
		{"/mtx/05/dyn/on",					{I32}, F_XET, {0}},
		{"/mtx/05/dyn/mode",				{I32}, F_XET, {0}},
		{"/mtx/05/dyn/det",					{I32}, F_XET, {0}},
		{"/mtx/05/dyn/env",					{I32}, F_XET, {0}},
		{"/mtx/05/dyn/thr",					{I32}, F_XET, {0}},
		{"/mtx/05/dyn/ratio",				{I32}, F_XET, {0}},
		{"/mtx/05/dyn/knee",				{I32}, F_XET, {0}},
		{"/mtx/05/dyn/mgain",				{I32}, F_XET, {0}},
		{"/mtx/05/dyn/attack",				{I32}, F_XET, {0}},
		{"/mtx/05/dyn/hold",				{I32}, F_XET, {0}},
		{"/mtx/05/dyn/release",				{I32}, F_XET, {0}},
		{"/mtx/05/dyn/pos",					{I32}, F_XET, {0}},
		{"/mtx/05/dyn/mix",					{I32}, F_XET, {0}},
		{"/mtx/05/dyn/auto",				{I32}, F_XET, {0}},
		{"/mtx/05/dyn/filter",					{CHDF}, F_FND, {0}},
		{"/mtx/05/dyn/filter/on",			{I32}, F_XET, {0}},
		{"/mtx/05/dyn/filter/type",			{I32}, F_XET, {0}},
		{"/mtx/05/dyn/filter/f",			{I32}, F_XET, {0}},
		{"/mtx/05/insert",						{CHIN}, F_FND, {0}},
		{"/mtx/05/insert/on",				{I32}, F_XET, {0}},
		{"/mtx/05/insert/pos",				{I32}, F_XET, {0}},
		{"/mtx/05/insert/sel",				{I32}, F_XET, {0}},
		{"/mtx/05/eq",							{OFFON}, F_FND, {1}},
		{"/mtx/05/eq/on",					{I32}, F_XET, {0}},
		{"/mtx/05/eq/1",						{CHEQ}, F_FND, {0}},
		{"/mtx/05/eq/1/type",				{I32}, F_XET, {0}},
		{"/mtx/05/eq/1/f",					{I32}, F_XET, {0}},
		{"/mtx/05/eq/1/g",					{I32}, F_XET, {0}},
		{"/mtx/05/eq/1/q",					{I32}, F_XET, {0}},
		{"/mtx/05/eq/2",						{CHEQ}, F_FND, {0}},
		{"/mtx/05/eq/2/type",				{I32}, F_XET, {0}},
		{"/mtx/05/eq/2/f",					{I32}, F_XET, {0}},
		{"/mtx/05/eq/2/g",					{I32}, F_XET, {0}},
		{"/mtx/05/eq/2/q",					{I32}, F_XET, {0}},
		{"/mtx/05/eq/3",						{CHEQ}, F_FND, {0}},
		{"/mtx/05/eq/3/type",				{I32}, F_XET, {0}},
		{"/mtx/05/eq/3/f",					{I32}, F_XET, {0}},
		{"/mtx/05/eq/3/g",					{I32}, F_XET, {0}},
		{"/mtx/05/eq/3/q",					{I32}, F_XET, {0}},
		{"/mtx/05/eq/4",						{CHEQ}, F_FND, {0}},
		{"/mtx/05/eq/4/type",				{I32}, F_XET, {0}},
		{"/mtx/05/eq/4/f",					{I32}, F_XET, {0}},
		{"/mtx/05/eq/4/g",					{I32}, F_XET, {0}},
		{"/mtx/05/eq/4/q",					{I32}, F_XET, {0}},
		{"/mtx/05/eq/5",						{CHEQ}, F_FND, {0}},
		{"/mtx/05/eq/5/type",				{I32}, F_XET, {0}},
		{"/mtx/05/eq/5/f",					{I32}, F_XET, {0}},
		{"/mtx/05/eq/5/g",					{I32}, F_XET, {0}},
		{"/mtx/05/eq/5/q",					{I32}, F_XET, {0}},
		{"/mtx/05/eq/6",						{CHEQ}, F_FND, {0}},
		{"/mtx/05/eq/6/type",				{I32}, F_XET, {0}},
		{"/mtx/05/eq/6/f",					{I32}, F_XET, {0}},
		{"/mtx/05/eq/6/g",					{I32}, F_XET, {0}},
		{"/mtx/05/eq/6/q",					{I32}, F_XET, {0}},
		{"/mtx/05/mix",							{CHME}, F_FND, {0}},
		{"/mtx/05/mix/on",					{I32}, F_XET, {0}},
		{"/mtx/05/mix/fader",				{I32}, F_XET, {0}},
};
int Xmtx05_max = sizeof(Xmtx05) / sizeof(X32command);


X32command Xmtx06[] = {
		{"/mtx/06/config",						{BSCO}, F_FND, {0}},
		{"/mtx/06/config/name",				{S32}, F_XET, {0}},
		{"/mtx/06/config/icon",				{I32}, F_XET, {0}},
		{"/mtx/06/config/color",			{I32}, F_XET, {0}},
		{"/mtx/06/preamp",						{MXPR}, F_FND, {0}},
		{"/mtx/06/preamp/invert",			{I32}, F_XET, {0}},
		{"/mtx/06/dyn",							{MXDY}, F_FND, {0}},
		{"/mtx/06/dyn/on",					{I32}, F_XET, {0}},
		{"/mtx/06/dyn/mode",				{I32}, F_XET, {0}},
		{"/mtx/06/dyn/det",					{I32}, F_XET, {0}},
		{"/mtx/06/dyn/env",					{I32}, F_XET, {0}},
		{"/mtx/06/dyn/thr",					{I32}, F_XET, {0}},
		{"/mtx/06/dyn/ratio",				{I32}, F_XET, {0}},
		{"/mtx/06/dyn/knee",				{I32}, F_XET, {0}},
		{"/mtx/06/dyn/mgain",				{I32}, F_XET, {0}},
		{"/mtx/06/dyn/attack",				{I32}, F_XET, {0}},
		{"/mtx/06/dyn/hold",				{I32}, F_XET, {0}},
		{"/mtx/06/dyn/release",				{I32}, F_XET, {0}},
		{"/mtx/06/dyn/pos",					{I32}, F_XET, {0}},
		{"/mtx/06/dyn/mix",					{I32}, F_XET, {0}},
		{"/mtx/06/dyn/auto",				{I32}, F_XET, {0}},
		{"/mtx/06/dyn/filter",					{CHDF}, F_FND, {0}},
		{"/mtx/06/dyn/filter/on",			{I32}, F_XET, {0}},
		{"/mtx/06/dyn/filter/type",			{I32}, F_XET, {0}},
		{"/mtx/06/dyn/filter/f",			{I32}, F_XET, {0}},
		{"/mtx/06/insert",						{CHIN}, F_FND, {0}},
		{"/mtx/06/insert/on",				{I32}, F_XET, {0}},
		{"/mtx/06/insert/pos",				{I32}, F_XET, {0}},
		{"/mtx/06/insert/sel",				{I32}, F_XET, {0}},
		{"/mtx/06/eq",							{OFFON}, F_FND, {1}},
		{"/mtx/06/eq/on",					{I32}, F_XET, {0}},
		{"/mtx/06/eq/1",						{CHEQ}, F_FND, {0}},
		{"/mtx/06/eq/1/type",				{I32}, F_XET, {0}},
		{"/mtx/06/eq/1/f",					{I32}, F_XET, {0}},
		{"/mtx/06/eq/1/g",					{I32}, F_XET, {0}},
		{"/mtx/06/eq/1/q",					{I32}, F_XET, {0}},
		{"/mtx/06/eq/2",						{CHEQ}, F_FND, {0}},
		{"/mtx/06/eq/2/type",				{I32}, F_XET, {0}},
		{"/mtx/06/eq/2/f",					{I32}, F_XET, {0}},
		{"/mtx/06/eq/2/g",					{I32}, F_XET, {0}},
		{"/mtx/06/eq/2/q",					{I32}, F_XET, {0}},
		{"/mtx/06/eq/3",						{CHEQ}, F_FND, {0}},
		{"/mtx/06/eq/3/type",				{I32}, F_XET, {0}},
		{"/mtx/06/eq/3/f",					{I32}, F_XET, {0}},
		{"/mtx/06/eq/3/g",					{I32}, F_XET, {0}},
		{"/mtx/06/eq/3/q",					{I32}, F_XET, {0}},
		{"/mtx/06/eq/4",						{CHEQ}, F_FND, {0}},
		{"/mtx/06/eq/4/type",				{I32}, F_XET, {0}},
		{"/mtx/06/eq/4/f",					{I32}, F_XET, {0}},
		{"/mtx/06/eq/4/g",					{I32}, F_XET, {0}},
		{"/mtx/06/eq/4/q",					{I32}, F_XET, {0}},
		{"/mtx/06/eq/5",						{CHEQ}, F_FND, {0}},
		{"/mtx/06/eq/5/type",				{I32}, F_XET, {0}},
		{"/mtx/06/eq/5/f",					{I32}, F_XET, {0}},
		{"/mtx/06/eq/5/g",					{I32}, F_XET, {0}},
		{"/mtx/06/eq/5/q",					{I32}, F_XET, {0}},
		{"/mtx/06/eq/6",						{CHEQ}, F_FND, {0}},
		{"/mtx/06/eq/6/type",				{I32}, F_XET, {0}},
		{"/mtx/06/eq/6/f",					{I32}, F_XET, {0}},
		{"/mtx/06/eq/6/g",					{I32}, F_XET, {0}},
		{"/mtx/06/eq/6/q",					{I32}, F_XET, {0}},
		{"/mtx/06/mix",							{CHME}, F_FND, {0}},
		{"/mtx/06/mix/on",					{I32}, F_XET, {0}},
		{"/mtx/06/mix/fader",				{I32}, F_XET, {0}},
};
int Xmtx06_max = sizeof(Xmtx06) / sizeof(X32command);

X32command	*Xmtxset[6] = {
		Xmtx01, Xmtx02, Xmtx03,
		Xmtx04, Xmtx05, Xmtx06,
};

#endif /* X32MTX_H_ */
