/** @file test_kernel_module.c
 *  @brief  Created on: Apr 10, 2024
 *          Davide Scalisi
 *
 * 					Description:	Simple test kernel module.
 * 
 * @copyright [2024] Davide Scalisi *
 * @copyright All Rights Reserved. *
 *
*/

/************************************************************************************************************
* Included files
************************************************************************************************************/

#include <linux/module.h>
#include <linux/init.h>

/************************************************************************************************************
* Meta informations
************************************************************************************************************/

MODULE_LICENSE("GPLv2");
MODULE_AUTHOR("Davide Scalisi");
MODULE_DESCRIPTION("Simple test kernel module.");

/************************************************************************************************************
* Module callbacks
************************************************************************************************************/

static int __init begin(void){
	pr_info("test_kernel_module: begin() called.\n");
	return 0;
}

static void __exit end(void){
	pr_info("test_kernel_module: end() called.\n");
}

/************************************************************************************************************
* Module callbacks registration
************************************************************************************************************/

module_init(begin);
module_exit(end);
