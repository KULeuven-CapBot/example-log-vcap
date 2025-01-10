/**
 * @file main.c
 * @author Lowie Deferme <lowie.deferme@kuleuven.be>
 * @brief CapBot Vcap logging example
 */

#include "capbot.h"
#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(robot, LOG_LEVEL_INF);

int main(void)
{
    cb_measure_init();
    for (;;)
    {
        uint16_t vcap = cb_measure_vcap();
        LOG_INF("Vcap = %dmV", vcap);
        k_sleep(K_MSEC(5000));
    }
    return 0; // Never reached
}
