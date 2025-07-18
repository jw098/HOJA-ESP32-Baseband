#ifndef CORE_BT_SWITCH_H
#define CORE_BT_SWITCH_H

#define SWITCH_BT_REPORT_SIZE 48

// Include any necessary includes from HOJA backend
#include "hoja_includes.h"
#include "hoja.h"

void ns_report_setinputreport_full(uint8_t *buffer);
void ns_set_imu_mode(uint8_t mode);
void switch_bt_end_task();
void ns_reset_report_spacer();

// void ns_controller_setinputreportmode(uint8_t report_mode);

// Start the Nintendo Switch controller core
int core_bt_switch_start();

// Stop the Nintendo Switch controller core
void core_bt_switch_stop(void);

void switch_bt_sendinput(i2cinput_input_s *input);

#endif