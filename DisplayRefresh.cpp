//% weight=0 color=#3CB371 icon="\uf0ad" block="Diaplay Refresh"
namespace DisplayRefresh {
    //% blockId="timer2_tasks_start" block="timer2 tasks start"
    //% blockGap=0 weight=0
    //% useLoc="DisplayRefresh.Start" deprecated=1
    void timer2_tasks_start() {
        NRF_TIMER2->TASKS_START = 1;
    }
    
    //% blockId="timer2_tasks_stop" block="timer2 tasks stop"
    //% blockGap=0 weight=0
    //% useLoc="DisplayRefresh.Stop" deprecated=1
    void timer2_tasks_stop() {
        NRF_TIMER2->TASKS_STOP = 1;
    }
}
