/*
 * Bootloader_config.h
 *
 *  Created on: Jun 10, 2020
 *      Author: Mohanad Sallam
 */

#ifndef APP_INCLUDE_BOOTLOADER_CONFIG_H_
#define APP_INCLUDE_BOOTLOADER_CONFIG_H_


#define BOOTLOADER_RESPONSE_TIME		13

#define MAX_REQUEST_FRAME_SIZE			TRANSFER_DATA_REQUEST_SIZE
#define MAX_RESPONSE_FRAME_SIZE			READ_DATA_BY_IDENTIFIER_RESPONSE_SIZE

#define MAX_ERRORS_TIMES				3

#define SEED_VALUE						0x1235
#define KEY_GENERATE(x)					(x-0x50)*10




#endif /* APP_INCLUDE_BOOTLOADER_CONFIG_H_ */
