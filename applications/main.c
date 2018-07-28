/*
 * File      : main.c
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2009, RT-Thread Development Team
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rt-thread.org/license/LICENSE
 *
 * Change Logs:
 * Date           Author       Notes
 * 2015-07-29     Arda.Fu      first implementation
 */
#include <rtthread.h>
#include <board.h>

#ifdef RT_USING_DFS
#include <dfs_file.h>
#endif

int main(void)
{
    if (dfs_mount("sd0", "/mnt/sd", "elm", 0, 0) == 0)
    {
        rt_kprintf("File System initialized!\n"); 
    }
    else
    {
        rt_kprintf("File System init failed!\n"); 
    }
    
    return 0;
}
