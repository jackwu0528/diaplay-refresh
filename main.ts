//% weight=0 color=#3CB371 icon="\uf0ad" block="Task"
namespace task {
    /**
    * 計算長方形面積，並回傳
    */
    //% blockId="TaskStart" block="start task"
    //% blockGap=0 weight=0
    export function TaskStart(): void {
        machine.enable_irq()
    }
    /**
    * 計算長方形面積，不回傳，只顯示在LED
    */
    //% blockId="TaskStop" block="stop task"
    //% blockGap=0 weight=0
    export function TaskStop(): void {
        machine.disable_irq()
    }
}
