/*
 * Copyright (c) 2018 Alexander Wachter
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <logging/log.h>
#include <zephyr.h>
#include <kernel.h>
#include <sys/printk.h>
#include <device.h>
#include <drivers/can.h>
#include <drivers/gpio.h>
#include <sys/byteorder.h>
#include <nrfx_gpiote.h>

LOG_MODULE_REGISTER(MAIN, LOG_LEVEL_INF);

void main(void)
{
  //Pincontrol for tacho 3.2
  nrf_gpio_cfg_output(9U); //Standby pin
  nrf_gpio_cfg_output(10U); //LED
  nrf_gpio_pin_set(9U);
  nrf_gpio_pin_clear(10U);

	while (1) {
    /*
		change_led_frame.data[0] = toggle++ & 0x01 ? SET_LED : RESET_LED;
		// This sending call is none blocking.
		can_send(can_dev, &change_led_frame, K_FOREVER,
			 tx_irq_callback,
			 "LED change");
		k_sleep(SLEEP_TIME);

		UNALIGNED_PUT(sys_cpu_to_be16(counter),
			      (uint16_t *)&counter_frame.data[0]);
		counter++;
		// This sending call is blocking until the message is sent.
    LOG_INF("Ello?");
    k_sleep(K_MSEC(500));
		int err = can_send(can_dev, &counter_frame, K_MSEC(100), NULL, NULL);
    LOG_WRN("can_send: %d", err);
    */
		k_sleep(K_MSEC(10000));
    LOG_INF("Main loop");
	}
}
