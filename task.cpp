namespace task {
    void start() {
        NRF_TIMER2->TASKS_START = 1;
    }
    void stop() {
        NRF_TIMER2->TASKS_STOP = 1;
    }
}
