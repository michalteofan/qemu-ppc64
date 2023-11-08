/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-qapi_commands_machine_target_trace_events.h"

uint16_t _TRACE_QMP_ENTER_QUERY_CPU_MODEL_COMPARISON_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_CPU_MODEL_COMPARISON_DSTATE;
uint16_t _TRACE_QMP_ENTER_QUERY_CPU_MODEL_BASELINE_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_CPU_MODEL_BASELINE_DSTATE;
uint16_t _TRACE_QMP_ENTER_QUERY_CPU_MODEL_EXPANSION_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_CPU_MODEL_EXPANSION_DSTATE;
uint16_t _TRACE_QMP_ENTER_QUERY_CPU_DEFINITIONS_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_CPU_DEFINITIONS_DSTATE;
TraceEvent _TRACE_QMP_ENTER_QUERY_CPU_MODEL_COMPARISON_EVENT = {
    .id = 0,
    .name = "qmp_enter_query_cpu_model_comparison",
    .sstate = TRACE_QMP_ENTER_QUERY_CPU_MODEL_COMPARISON_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_CPU_MODEL_COMPARISON_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_CPU_MODEL_COMPARISON_EVENT = {
    .id = 0,
    .name = "qmp_exit_query_cpu_model_comparison",
    .sstate = TRACE_QMP_EXIT_QUERY_CPU_MODEL_COMPARISON_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_CPU_MODEL_COMPARISON_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_QUERY_CPU_MODEL_BASELINE_EVENT = {
    .id = 0,
    .name = "qmp_enter_query_cpu_model_baseline",
    .sstate = TRACE_QMP_ENTER_QUERY_CPU_MODEL_BASELINE_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_CPU_MODEL_BASELINE_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_CPU_MODEL_BASELINE_EVENT = {
    .id = 0,
    .name = "qmp_exit_query_cpu_model_baseline",
    .sstate = TRACE_QMP_EXIT_QUERY_CPU_MODEL_BASELINE_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_CPU_MODEL_BASELINE_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_QUERY_CPU_MODEL_EXPANSION_EVENT = {
    .id = 0,
    .name = "qmp_enter_query_cpu_model_expansion",
    .sstate = TRACE_QMP_ENTER_QUERY_CPU_MODEL_EXPANSION_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_CPU_MODEL_EXPANSION_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_CPU_MODEL_EXPANSION_EVENT = {
    .id = 0,
    .name = "qmp_exit_query_cpu_model_expansion",
    .sstate = TRACE_QMP_EXIT_QUERY_CPU_MODEL_EXPANSION_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_CPU_MODEL_EXPANSION_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_QUERY_CPU_DEFINITIONS_EVENT = {
    .id = 0,
    .name = "qmp_enter_query_cpu_definitions",
    .sstate = TRACE_QMP_ENTER_QUERY_CPU_DEFINITIONS_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_CPU_DEFINITIONS_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_CPU_DEFINITIONS_EVENT = {
    .id = 0,
    .name = "qmp_exit_query_cpu_definitions",
    .sstate = TRACE_QMP_EXIT_QUERY_CPU_DEFINITIONS_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_CPU_DEFINITIONS_DSTATE 
};
TraceEvent *qapi_commands_machine_target_trace_events_trace_events[] = {
    &_TRACE_QMP_ENTER_QUERY_CPU_MODEL_COMPARISON_EVENT,
    &_TRACE_QMP_EXIT_QUERY_CPU_MODEL_COMPARISON_EVENT,
    &_TRACE_QMP_ENTER_QUERY_CPU_MODEL_BASELINE_EVENT,
    &_TRACE_QMP_EXIT_QUERY_CPU_MODEL_BASELINE_EVENT,
    &_TRACE_QMP_ENTER_QUERY_CPU_MODEL_EXPANSION_EVENT,
    &_TRACE_QMP_EXIT_QUERY_CPU_MODEL_EXPANSION_EVENT,
    &_TRACE_QMP_ENTER_QUERY_CPU_DEFINITIONS_EVENT,
    &_TRACE_QMP_EXIT_QUERY_CPU_DEFINITIONS_EVENT,
  NULL,
};

static void trace_qapi_commands_machine_target_trace_events_register_events(void)
{
    trace_event_register_group(qapi_commands_machine_target_trace_events_trace_events);
}
trace_init(trace_qapi_commands_machine_target_trace_events_register_events)
