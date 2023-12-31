/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-hw_sparc64.h"

uint16_t _TRACE_EBUS_ISA_IRQ_HANDLER_DSTATE;
uint16_t _TRACE_SUN4U_IOMMU_MEM_READ_DSTATE;
uint16_t _TRACE_SUN4U_IOMMU_MEM_WRITE_DSTATE;
uint16_t _TRACE_SUN4U_IOMMU_TRANSLATE_DSTATE;
uint16_t _TRACE_SPARC64_CPU_IVEC_RAISE_IRQ_DSTATE;
uint16_t _TRACE_SPARC64_CPU_IVEC_LOWER_IRQ_DSTATE;
uint16_t _TRACE_SPARC64_CPU_TICK_IRQ_DISABLED_DSTATE;
uint16_t _TRACE_SPARC64_CPU_TICK_IRQ_FIRE_DSTATE;
uint16_t _TRACE_SPARC64_CPU_STICK_IRQ_DISABLED_DSTATE;
uint16_t _TRACE_SPARC64_CPU_STICK_IRQ_FIRE_DSTATE;
uint16_t _TRACE_SPARC64_CPU_HSTICK_IRQ_DISABLED_DSTATE;
uint16_t _TRACE_SPARC64_CPU_HSTICK_IRQ_FIRE_DSTATE;
uint16_t _TRACE_SPARC64_CPU_TICK_SET_COUNT_DSTATE;
uint16_t _TRACE_SPARC64_CPU_TICK_GET_COUNT_DSTATE;
uint16_t _TRACE_SPARC64_CPU_TICK_SET_LIMIT_DSTATE;
uint16_t _TRACE_SPARC64_CPU_TICK_SET_LIMIT_ZERO_DSTATE;
TraceEvent _TRACE_EBUS_ISA_IRQ_HANDLER_EVENT = {
    .id = 0,
    .name = "ebus_isa_irq_handler",
    .sstate = TRACE_EBUS_ISA_IRQ_HANDLER_ENABLED,
    .dstate = &_TRACE_EBUS_ISA_IRQ_HANDLER_DSTATE 
};
TraceEvent _TRACE_SUN4U_IOMMU_MEM_READ_EVENT = {
    .id = 0,
    .name = "sun4u_iommu_mem_read",
    .sstate = TRACE_SUN4U_IOMMU_MEM_READ_ENABLED,
    .dstate = &_TRACE_SUN4U_IOMMU_MEM_READ_DSTATE 
};
TraceEvent _TRACE_SUN4U_IOMMU_MEM_WRITE_EVENT = {
    .id = 0,
    .name = "sun4u_iommu_mem_write",
    .sstate = TRACE_SUN4U_IOMMU_MEM_WRITE_ENABLED,
    .dstate = &_TRACE_SUN4U_IOMMU_MEM_WRITE_DSTATE 
};
TraceEvent _TRACE_SUN4U_IOMMU_TRANSLATE_EVENT = {
    .id = 0,
    .name = "sun4u_iommu_translate",
    .sstate = TRACE_SUN4U_IOMMU_TRANSLATE_ENABLED,
    .dstate = &_TRACE_SUN4U_IOMMU_TRANSLATE_DSTATE 
};
TraceEvent _TRACE_SPARC64_CPU_IVEC_RAISE_IRQ_EVENT = {
    .id = 0,
    .name = "sparc64_cpu_ivec_raise_irq",
    .sstate = TRACE_SPARC64_CPU_IVEC_RAISE_IRQ_ENABLED,
    .dstate = &_TRACE_SPARC64_CPU_IVEC_RAISE_IRQ_DSTATE 
};
TraceEvent _TRACE_SPARC64_CPU_IVEC_LOWER_IRQ_EVENT = {
    .id = 0,
    .name = "sparc64_cpu_ivec_lower_irq",
    .sstate = TRACE_SPARC64_CPU_IVEC_LOWER_IRQ_ENABLED,
    .dstate = &_TRACE_SPARC64_CPU_IVEC_LOWER_IRQ_DSTATE 
};
TraceEvent _TRACE_SPARC64_CPU_TICK_IRQ_DISABLED_EVENT = {
    .id = 0,
    .name = "sparc64_cpu_tick_irq_disabled",
    .sstate = TRACE_SPARC64_CPU_TICK_IRQ_DISABLED_ENABLED,
    .dstate = &_TRACE_SPARC64_CPU_TICK_IRQ_DISABLED_DSTATE 
};
TraceEvent _TRACE_SPARC64_CPU_TICK_IRQ_FIRE_EVENT = {
    .id = 0,
    .name = "sparc64_cpu_tick_irq_fire",
    .sstate = TRACE_SPARC64_CPU_TICK_IRQ_FIRE_ENABLED,
    .dstate = &_TRACE_SPARC64_CPU_TICK_IRQ_FIRE_DSTATE 
};
TraceEvent _TRACE_SPARC64_CPU_STICK_IRQ_DISABLED_EVENT = {
    .id = 0,
    .name = "sparc64_cpu_stick_irq_disabled",
    .sstate = TRACE_SPARC64_CPU_STICK_IRQ_DISABLED_ENABLED,
    .dstate = &_TRACE_SPARC64_CPU_STICK_IRQ_DISABLED_DSTATE 
};
TraceEvent _TRACE_SPARC64_CPU_STICK_IRQ_FIRE_EVENT = {
    .id = 0,
    .name = "sparc64_cpu_stick_irq_fire",
    .sstate = TRACE_SPARC64_CPU_STICK_IRQ_FIRE_ENABLED,
    .dstate = &_TRACE_SPARC64_CPU_STICK_IRQ_FIRE_DSTATE 
};
TraceEvent _TRACE_SPARC64_CPU_HSTICK_IRQ_DISABLED_EVENT = {
    .id = 0,
    .name = "sparc64_cpu_hstick_irq_disabled",
    .sstate = TRACE_SPARC64_CPU_HSTICK_IRQ_DISABLED_ENABLED,
    .dstate = &_TRACE_SPARC64_CPU_HSTICK_IRQ_DISABLED_DSTATE 
};
TraceEvent _TRACE_SPARC64_CPU_HSTICK_IRQ_FIRE_EVENT = {
    .id = 0,
    .name = "sparc64_cpu_hstick_irq_fire",
    .sstate = TRACE_SPARC64_CPU_HSTICK_IRQ_FIRE_ENABLED,
    .dstate = &_TRACE_SPARC64_CPU_HSTICK_IRQ_FIRE_DSTATE 
};
TraceEvent _TRACE_SPARC64_CPU_TICK_SET_COUNT_EVENT = {
    .id = 0,
    .name = "sparc64_cpu_tick_set_count",
    .sstate = TRACE_SPARC64_CPU_TICK_SET_COUNT_ENABLED,
    .dstate = &_TRACE_SPARC64_CPU_TICK_SET_COUNT_DSTATE 
};
TraceEvent _TRACE_SPARC64_CPU_TICK_GET_COUNT_EVENT = {
    .id = 0,
    .name = "sparc64_cpu_tick_get_count",
    .sstate = TRACE_SPARC64_CPU_TICK_GET_COUNT_ENABLED,
    .dstate = &_TRACE_SPARC64_CPU_TICK_GET_COUNT_DSTATE 
};
TraceEvent _TRACE_SPARC64_CPU_TICK_SET_LIMIT_EVENT = {
    .id = 0,
    .name = "sparc64_cpu_tick_set_limit",
    .sstate = TRACE_SPARC64_CPU_TICK_SET_LIMIT_ENABLED,
    .dstate = &_TRACE_SPARC64_CPU_TICK_SET_LIMIT_DSTATE 
};
TraceEvent _TRACE_SPARC64_CPU_TICK_SET_LIMIT_ZERO_EVENT = {
    .id = 0,
    .name = "sparc64_cpu_tick_set_limit_zero",
    .sstate = TRACE_SPARC64_CPU_TICK_SET_LIMIT_ZERO_ENABLED,
    .dstate = &_TRACE_SPARC64_CPU_TICK_SET_LIMIT_ZERO_DSTATE 
};
TraceEvent *hw_sparc64_trace_events[] = {
    &_TRACE_EBUS_ISA_IRQ_HANDLER_EVENT,
    &_TRACE_SUN4U_IOMMU_MEM_READ_EVENT,
    &_TRACE_SUN4U_IOMMU_MEM_WRITE_EVENT,
    &_TRACE_SUN4U_IOMMU_TRANSLATE_EVENT,
    &_TRACE_SPARC64_CPU_IVEC_RAISE_IRQ_EVENT,
    &_TRACE_SPARC64_CPU_IVEC_LOWER_IRQ_EVENT,
    &_TRACE_SPARC64_CPU_TICK_IRQ_DISABLED_EVENT,
    &_TRACE_SPARC64_CPU_TICK_IRQ_FIRE_EVENT,
    &_TRACE_SPARC64_CPU_STICK_IRQ_DISABLED_EVENT,
    &_TRACE_SPARC64_CPU_STICK_IRQ_FIRE_EVENT,
    &_TRACE_SPARC64_CPU_HSTICK_IRQ_DISABLED_EVENT,
    &_TRACE_SPARC64_CPU_HSTICK_IRQ_FIRE_EVENT,
    &_TRACE_SPARC64_CPU_TICK_SET_COUNT_EVENT,
    &_TRACE_SPARC64_CPU_TICK_GET_COUNT_EVENT,
    &_TRACE_SPARC64_CPU_TICK_SET_LIMIT_EVENT,
    &_TRACE_SPARC64_CPU_TICK_SET_LIMIT_ZERO_EVENT,
  NULL,
};

static void trace_hw_sparc64_register_events(void)
{
    trace_event_register_group(hw_sparc64_trace_events);
}
trace_init(trace_hw_sparc64_register_events)
