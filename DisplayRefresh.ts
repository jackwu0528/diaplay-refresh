//% weight=0 color=#3CB371 icon="\uf0ad" block="Diaplay Refresh"
namespace DisplayRefresh {
    //% blockId="refresh_start" block="Diaplay Refresh Start"
    //% blockGap=0 weight=0
    export function Start(): void {
        DisplayRefresh.timer2_tasks_start();
    }

    //% blockId="refresh_stop" block="Diaplay Refresh Stop"
    //% blockGap=0 weight=0
    export function Stop(): void {
        DisplayRefresh.timer2_tasks_stop();
    }
}
