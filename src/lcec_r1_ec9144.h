//
//    Copyright (C) 2016 Frank Brossette<frank.brossette@gmail.com>
//    Copyright (C) 2011 Sascha Ittner <sascha.ittner@modusoft.de>
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program; if not, write to the Free Software
//    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
//
#ifndef _LCEC_R1_EC9144_H_
#define _LCEC_R1_EC9144_H_

#include "lcec.h"

#define LCEC_R1_EC9144_VID LCEC_DELTA_VID

#define LCEC_R1_EC9144_PID 0x00009144

#define LCEC_R1_EC9144_PDOS  4

#define LCEC_R1_EC9144_CHANS 4

int lcec_r1_ec9144_init(int comp_id, struct lcec_slave *slave, ec_pdo_entry_reg_t *pdo_entry_regs);

#endif
