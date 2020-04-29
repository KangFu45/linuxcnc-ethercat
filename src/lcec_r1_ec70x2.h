//
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
#ifndef _LCEC_R1_EC70X2_H_
#define _LCEC_R1_EC70X2_H_

#include "lcec.h"

#define LCEC_R1_EC70X2_VID LCEC_DELTA_VID

#define LCEC_R1_EC7062_PID 0x00007062
#define LCEC_R1_EC70A2_PID 0x000070A2
#define LCEC_R1_EC70E2_PID 0x000070E2
#define LCEC_R1_EC70F2_PID 0x000070F2
#define LCEC_R1_EC7162_PID 0x00007162
#define LCEC_R1_EC71A2_PID 0x000071A2

#define LCEC_R1_EC71A2_PDOS 16
#define LCEC_R1_EC7162_PDOS 16
#define LCEC_R1_EC70F2_PDOS 0
#define LCEC_R1_EC70E2_PDOS 16
#define LCEC_R1_EC7062_PDOS 16
#define LCEC_R1_EC70A2_PDOS 16


int lcec_r1_ec70x2_init(int comp_id, struct lcec_slave *slave, ec_pdo_entry_reg_t *pdo_entry_regs);

#endif

