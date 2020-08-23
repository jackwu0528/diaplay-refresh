//% weight=0 color=#3CB371 icon="\uf0ad" block="Diaplay Refresh ON/OFF"
namespace diaplay_refresh_ON_OFF {
    //% blockId="diaplay_refresh_start" block="Diaplay Refresh Start"
    //% blockGap=0 weight=0
    export function RefreshStart(): void {
        timer2_tasks_start();
    }

    //% blockId="diaplay_refresh_stop" block="Diaplay Refresh Stop"
    //% blockGap=0 weight=0
    export function RefreshStop(): void {
        timer2_tasks_stop();
    }
}
