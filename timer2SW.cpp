//% weight=0 color=#3CB371 icon="\uf0ad"
namespace timer2SW {
    //% weight=0
    //% blockId=timer2_tasks_start block="timer2 tasks start"
    void timer2_tasks_start() {
        basic.showNumber(0)
    }

    //% weight=0
    //% blockId=timer2_tasks_stop block="timer2 tasks stop"
    void timer2_tasks_stop() {
        basic.showNumber(1)
    }
}
