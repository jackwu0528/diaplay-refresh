//% weight=0 color=#3CB371 icon="\uf0ad" block="timer2SW"
namespace timer2SW {
    //% help=timer2SW/timer2-tasks-start
    //% weight=0
    //% blockId=timer2_tasks_start block="timer2 tasks start"
    void timer2_tasks_start() {
        NRF_TIMER2->TASKS_START = 1;
    }

    //% help=timer2SW/timer2-tasks-stop
    //% weight=0
    //% blockId=timer2_tasks_stop block="timer2 tasks stop"
    void timer2_tasks_stop() {
        NRF_TIMER2->TASKS_STOP = 1;
    }
}
