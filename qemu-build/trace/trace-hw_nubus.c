/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-hw_nubus.h"

uint16_t _TRACE_NUBUS_SLOT_READ_DSTATE;
uint16_t _TRACE_NUBUS_SLOT_WRITE_DSTATE;
uint16_t _TRACE_NUBUS_SUPER_SLOT_READ_DSTATE;
uint16_t _TRACE_NUBUS_SUPER_SLOT_WRITE_DSTATE;
TraceEvent _TRACE_NUBUS_SLOT_READ_EVENT = {
    .id = 0,
    .name = "nubus_slot_read",
    .sstate = TRACE_NUBUS_SLOT_READ_ENABLED,
    .dstate = &_TRACE_NUBUS_SLOT_READ_DSTATE 
};
TraceEvent _TRACE_NUBUS_SLOT_WRITE_EVENT = {
    .id = 0,
    .name = "nubus_slot_write",
    .sstate = TRACE_NUBUS_SLOT_WRITE_ENABLED,
    .dstate = &_TRACE_NUBUS_SLOT_WRITE_DSTATE 
};
TraceEvent _TRACE_NUBUS_SUPER_SLOT_READ_EVENT = {
    .id = 0,
    .name = "nubus_super_slot_read",
    .sstate = TRACE_NUBUS_SUPER_SLOT_READ_ENABLED,
    .dstate = &_TRACE_NUBUS_SUPER_SLOT_READ_DSTATE 
};
TraceEvent _TRACE_NUBUS_SUPER_SLOT_WRITE_EVENT = {
    .id = 0,
    .name = "nubus_super_slot_write",
    .sstate = TRACE_NUBUS_SUPER_SLOT_WRITE_ENABLED,
    .dstate = &_TRACE_NUBUS_SUPER_SLOT_WRITE_DSTATE 
};
TraceEvent *hw_nubus_trace_events[] = {
    &_TRACE_NUBUS_SLOT_READ_EVENT,
    &_TRACE_NUBUS_SLOT_WRITE_EVENT,
    &_TRACE_NUBUS_SUPER_SLOT_READ_EVENT,
    &_TRACE_NUBUS_SUPER_SLOT_WRITE_EVENT,
  NULL,
};

static void trace_hw_nubus_register_events(void)
{
    trace_event_register_group(hw_nubus_trace_events);
}
trace_init(trace_hw_nubus_register_events)
