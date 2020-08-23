void timer2_tasks_start() {
    NRF_TIMER2->TASKS_START = 1;
}

void timer2_tasks_stop() {
    NRF_TIMER2->TASKS_STOP = 1;
}
