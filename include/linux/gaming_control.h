/*
 * Simple kernel gaming control
 *
 * Copyright (C) 2019
 * Diep Quynh Nguyen <remilia.1505@gmail.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _GAMING_CONTROL_H_
#define _GAMING_CONTROL_H_

enum game_opts {
	GAME_START,
	GAME_RUNNING,
	GAME_PAUSE,
	GAME_KILLED
};

#ifdef CONFIG_GAMING_CONTROL
extern void game_option(struct task_struct *tsk, enum game_opts opts);
extern int gaming_mode;
#else
static void game_option(struct task_struct *tsk, enum game_opts opts) {}
static int gaming_mode = 0;
#endif /* CONFIG_GAMING_CONTROL */

#endif /* _GAMING_CONTROL_H_ */
