 
/*

 Make sure Make is installed on your system.
 https://cygwin.com/install.html
 Make sure you have the Zephyr SDK installed on your system.

*/


#include <stdio.h>
#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>

/* 1000 msec = 1 sec */
#define SLEEP_TIME_MS   1000

/* The devicetree node identifier for the "led0" alias. */
// #define led0 PC13
#define LED0_NODE DT_ALIAS(led0)

#define LEDF0_NODE DT_ALIAS(ledf0)

#define LEDF1_NODE DT_ALIAS(ledf1)

/*
 * A build error on this line means your board is unsupported.
 * See the sample documentation for information on how to fix this.
 */
static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(LED0_NODE, gpios);
static const struct gpio_dt_spec led_f0 = GPIO_DT_SPEC_GET(LEDF0_NODE, gpios);
static const struct gpio_dt_spec led_f1 = GPIO_DT_SPEC_GET(LEDF1_NODE, gpios);

int main(void)
{
	int ret;
	bool led_state = true;

	if (!gpio_is_ready_dt(&led)) {
		return 0;
	}

    if (!gpio_is_ready_dt(&led_f0)) {
		return 0;
	}

    if (!gpio_is_ready_dt(&led_f1)) {
		return 0;
	}

	ret = gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE);
	if (ret < 0) {
		return 0;
	}

    ret = gpio_pin_configure_dt(&led_f0, GPIO_OUTPUT_ACTIVE);
	if (ret < 0) {
		return 0;
	}


    ret = gpio_pin_configure_dt(&led_f1, GPIO_OUTPUT_ACTIVE);
	if (ret < 0) {
		return 0;
	}


	while (1) {
		ret = gpio_pin_toggle_dt(&led);
        
		
        if (ret < 0) {
            return 0;
		}
        
        if(gpio_pin_toggle_dt(&led_f0) < 0) return 0;
        if(gpio_pin_toggle_dt(&led_f1) < 0) return 0;

		led_state = !led_state;
		printf("LED state: %s\n", led_state ? "ON" : "OFF");
		k_msleep(SLEEP_TIME_MS);
	}
	return 0;
}