namespace task {
    void Start() {
        NRF_TIMER2->TASKS_START = 1;
    }
    void Stop() {
        NRF_TIMER2->TASKS_STOP = 1;
    }
}
