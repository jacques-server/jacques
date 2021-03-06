/*
 * Copyright (C) 2015 Wiky L
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.";
 */
#ifndef __JACQUES_PACKAGE_H__
#define __JACQUES_PACKAGE_H__

#include<inttypes.h>


/* 解析数据包长度 */
unsigned int decode_package_length(uint8_t *data);
/* 生成数据包长度的四字节格式 */
void encode_package_length(uint8_t *data, unsigned int len);


#endif
