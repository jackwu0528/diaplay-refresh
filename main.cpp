//% weight=0 color=#3CB371 icon="\uf0ad" block="Task"

#include "nrf.h"

namespace task {
    //% blockId="TaskStart" block="start task"
    //% blockGap=0 weight=0
    void TaskStart() {
        NRF_TIMER2->TASKS_START = 1;
    }

    //% blockId="TaskStop" block="stop task"
    //% blockGap=0 weight=0
    void TaskStop() {
        NRF_TIMER2->TASKS_STOP = 1;
    }
}
