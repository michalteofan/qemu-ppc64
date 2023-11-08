/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-hw_misc_macio.h"

uint16_t _TRACE_CUDA_DELAY_SET_SR_INT_DSTATE;
uint16_t _TRACE_CUDA_DATA_SEND_DSTATE;
uint16_t _TRACE_CUDA_DATA_RECV_DSTATE;
uint16_t _TRACE_CUDA_RECEIVE_PACKET_CMD_DSTATE;
uint16_t _TRACE_CUDA_PACKET_RECEIVE_DSTATE;
uint16_t _TRACE_CUDA_PACKET_RECEIVE_DATA_DSTATE;
uint16_t _TRACE_CUDA_PACKET_SEND_DSTATE;
uint16_t _TRACE_CUDA_PACKET_SEND_DATA_DSTATE;
uint16_t _TRACE_MACIO_TIMER_WRITE_DSTATE;
uint16_t _TRACE_MACIO_TIMER_READ_DSTATE;
uint16_t _TRACE_MACIO_SET_GPIO_DSTATE;
uint16_t _TRACE_MACIO_GPIO_IRQ_ASSERT_DSTATE;
uint16_t _TRACE_MACIO_GPIO_IRQ_DEASSERT_DSTATE;
uint16_t _TRACE_MACIO_GPIO_WRITE_DSTATE;
uint16_t _TRACE_PMU_ADB_POLL_DSTATE;
uint16_t _TRACE_PMU_ONE_SEC_TIMER_DSTATE;
uint16_t _TRACE_PMU_CMD_SET_INT_MASK_DSTATE;
uint16_t _TRACE_PMU_CMD_SET_ADB_AUTOPOLL_DSTATE;
uint16_t _TRACE_PMU_CMD_ADB_NOBUS_DSTATE;
uint16_t _TRACE_PMU_CMD_ADB_REQUEST_DSTATE;
uint16_t _TRACE_PMU_CMD_ADB_REPLY_DSTATE;
uint16_t _TRACE_PMU_DISPATCH_CMD_DSTATE;
uint16_t _TRACE_PMU_DISPATCH_UNKNOWN_CMD_DSTATE;
uint16_t _TRACE_PMU_DEBUG_PROTOCOL_STRING_DSTATE;
uint16_t _TRACE_PMU_DEBUG_PROTOCOL_RESP_SIZE_DSTATE;
uint16_t _TRACE_PMU_DEBUG_PROTOCOL_ERROR_DSTATE;
uint16_t _TRACE_PMU_DEBUG_PROTOCOL_CLEAR_TREQ_DSTATE;
uint16_t _TRACE_PMU_DEBUG_PROTOCOL_CMD_DSTATE;
uint16_t _TRACE_PMU_DEBUG_PROTOCOL_CMDLEN_DSTATE;
uint16_t _TRACE_PMU_DEBUG_PROTOCOL_CMD_TOOBIG_DSTATE;
uint16_t _TRACE_PMU_DEBUG_PROTOCOL_CMD_SEND_RESP_SIZE_DSTATE;
uint16_t _TRACE_PMU_DEBUG_PROTOCOL_CMD_SEND_RESP_DSTATE;
uint16_t _TRACE_PMU_DEBUG_PROTOCOL_CMD_RESP_COMPLETE_DSTATE;
TraceEvent _TRACE_CUDA_DELAY_SET_SR_INT_EVENT = {
    .id = 0,
    .name = "cuda_delay_set_sr_int",
    .sstate = TRACE_CUDA_DELAY_SET_SR_INT_ENABLED,
    .dstate = &_TRACE_CUDA_DELAY_SET_SR_INT_DSTATE 
};
TraceEvent _TRACE_CUDA_DATA_SEND_EVENT = {
    .id = 0,
    .name = "cuda_data_send",
    .sstate = TRACE_CUDA_DATA_SEND_ENABLED,
    .dstate = &_TRACE_CUDA_DATA_SEND_DSTATE 
};
TraceEvent _TRACE_CUDA_DATA_RECV_EVENT = {
    .id = 0,
    .name = "cuda_data_recv",
    .sstate = TRACE_CUDA_DATA_RECV_ENABLED,
    .dstate = &_TRACE_CUDA_DATA_RECV_DSTATE 
};
TraceEvent _TRACE_CUDA_RECEIVE_PACKET_CMD_EVENT = {
    .id = 0,
    .name = "cuda_receive_packet_cmd",
    .sstate = TRACE_CUDA_RECEIVE_PACKET_CMD_ENABLED,
    .dstate = &_TRACE_CUDA_RECEIVE_PACKET_CMD_DSTATE 
};
TraceEvent _TRACE_CUDA_PACKET_RECEIVE_EVENT = {
    .id = 0,
    .name = "cuda_packet_receive",
    .sstate = TRACE_CUDA_PACKET_RECEIVE_ENABLED,
    .dstate = &_TRACE_CUDA_PACKET_RECEIVE_DSTATE 
};
TraceEvent _TRACE_CUDA_PACKET_RECEIVE_DATA_EVENT = {
    .id = 0,
    .name = "cuda_packet_receive_data",
    .sstate = TRACE_CUDA_PACKET_RECEIVE_DATA_ENABLED,
    .dstate = &_TRACE_CUDA_PACKET_RECEIVE_DATA_DSTATE 
};
TraceEvent _TRACE_CUDA_PACKET_SEND_EVENT = {
    .id = 0,
    .name = "cuda_packet_send",
    .sstate = TRACE_CUDA_PACKET_SEND_ENABLED,
    .dstate = &_TRACE_CUDA_PACKET_SEND_DSTATE 
};
TraceEvent _TRACE_CUDA_PACKET_SEND_DATA_EVENT = {
    .id = 0,
    .name = "cuda_packet_send_data",
    .sstate = TRACE_CUDA_PACKET_SEND_DATA_ENABLED,
    .dstate = &_TRACE_CUDA_PACKET_SEND_DATA_DSTATE 
};
TraceEvent _TRACE_MACIO_TIMER_WRITE_EVENT = {
    .id = 0,
    .name = "macio_timer_write",
    .sstate = TRACE_MACIO_TIMER_WRITE_ENABLED,
    .dstate = &_TRACE_MACIO_TIMER_WRITE_DSTATE 
};
TraceEvent _TRACE_MACIO_TIMER_READ_EVENT = {
    .id = 0,
    .name = "macio_timer_read",
    .sstate = TRACE_MACIO_TIMER_READ_ENABLED,
    .dstate = &_TRACE_MACIO_TIMER_READ_DSTATE 
};
TraceEvent _TRACE_MACIO_SET_GPIO_EVENT = {
    .id = 0,
    .name = "macio_set_gpio",
    .sstate = TRACE_MACIO_SET_GPIO_ENABLED,
    .dstate = &_TRACE_MACIO_SET_GPIO_DSTATE 
};
TraceEvent _TRACE_MACIO_GPIO_IRQ_ASSERT_EVENT = {
    .id = 0,
    .name = "macio_gpio_irq_assert",
    .sstate = TRACE_MACIO_GPIO_IRQ_ASSERT_ENABLED,
    .dstate = &_TRACE_MACIO_GPIO_IRQ_ASSERT_DSTATE 
};
TraceEvent _TRACE_MACIO_GPIO_IRQ_DEASSERT_EVENT = {
    .id = 0,
    .name = "macio_gpio_irq_deassert",
    .sstate = TRACE_MACIO_GPIO_IRQ_DEASSERT_ENABLED,
    .dstate = &_TRACE_MACIO_GPIO_IRQ_DEASSERT_DSTATE 
};
TraceEvent _TRACE_MACIO_GPIO_WRITE_EVENT = {
    .id = 0,
    .name = "macio_gpio_write",
    .sstate = TRACE_MACIO_GPIO_WRITE_ENABLED,
    .dstate = &_TRACE_MACIO_GPIO_WRITE_DSTATE 
};
TraceEvent _TRACE_PMU_ADB_POLL_EVENT = {
    .id = 0,
    .name = "pmu_adb_poll",
    .sstate = TRACE_PMU_ADB_POLL_ENABLED,
    .dstate = &_TRACE_PMU_ADB_POLL_DSTATE 
};
TraceEvent _TRACE_PMU_ONE_SEC_TIMER_EVENT = {
    .id = 0,
    .name = "pmu_one_sec_timer",
    .sstate = TRACE_PMU_ONE_SEC_TIMER_ENABLED,
    .dstate = &_TRACE_PMU_ONE_SEC_TIMER_DSTATE 
};
TraceEvent _TRACE_PMU_CMD_SET_INT_MASK_EVENT = {
    .id = 0,
    .name = "pmu_cmd_set_int_mask",
    .sstate = TRACE_PMU_CMD_SET_INT_MASK_ENABLED,
    .dstate = &_TRACE_PMU_CMD_SET_INT_MASK_DSTATE 
};
TraceEvent _TRACE_PMU_CMD_SET_ADB_AUTOPOLL_EVENT = {
    .id = 0,
    .name = "pmu_cmd_set_adb_autopoll",
    .sstate = TRACE_PMU_CMD_SET_ADB_AUTOPOLL_ENABLED,
    .dstate = &_TRACE_PMU_CMD_SET_ADB_AUTOPOLL_DSTATE 
};
TraceEvent _TRACE_PMU_CMD_ADB_NOBUS_EVENT = {
    .id = 0,
    .name = "pmu_cmd_adb_nobus",
    .sstate = TRACE_PMU_CMD_ADB_NOBUS_ENABLED,
    .dstate = &_TRACE_PMU_CMD_ADB_NOBUS_DSTATE 
};
TraceEvent _TRACE_PMU_CMD_ADB_REQUEST_EVENT = {
    .id = 0,
    .name = "pmu_cmd_adb_request",
    .sstate = TRACE_PMU_CMD_ADB_REQUEST_ENABLED,
    .dstate = &_TRACE_PMU_CMD_ADB_REQUEST_DSTATE 
};
TraceEvent _TRACE_PMU_CMD_ADB_REPLY_EVENT = {
    .id = 0,
    .name = "pmu_cmd_adb_reply",
    .sstate = TRACE_PMU_CMD_ADB_REPLY_ENABLED,
    .dstate = &_TRACE_PMU_CMD_ADB_REPLY_DSTATE 
};
TraceEvent _TRACE_PMU_DISPATCH_CMD_EVENT = {
    .id = 0,
    .name = "pmu_dispatch_cmd",
    .sstate = TRACE_PMU_DISPATCH_CMD_ENABLED,
    .dstate = &_TRACE_PMU_DISPATCH_CMD_DSTATE 
};
TraceEvent _TRACE_PMU_DISPATCH_UNKNOWN_CMD_EVENT = {
    .id = 0,
    .name = "pmu_dispatch_unknown_cmd",
    .sstate = TRACE_PMU_DISPATCH_UNKNOWN_CMD_ENABLED,
    .dstate = &_TRACE_PMU_DISPATCH_UNKNOWN_CMD_DSTATE 
};
TraceEvent _TRACE_PMU_DEBUG_PROTOCOL_STRING_EVENT = {
    .id = 0,
    .name = "pmu_debug_protocol_string",
    .sstate = TRACE_PMU_DEBUG_PROTOCOL_STRING_ENABLED,
    .dstate = &_TRACE_PMU_DEBUG_PROTOCOL_STRING_DSTATE 
};
TraceEvent _TRACE_PMU_DEBUG_PROTOCOL_RESP_SIZE_EVENT = {
    .id = 0,
    .name = "pmu_debug_protocol_resp_size",
    .sstate = TRACE_PMU_DEBUG_PROTOCOL_RESP_SIZE_ENABLED,
    .dstate = &_TRACE_PMU_DEBUG_PROTOCOL_RESP_SIZE_DSTATE 
};
TraceEvent _TRACE_PMU_DEBUG_PROTOCOL_ERROR_EVENT = {
    .id = 0,
    .name = "pmu_debug_protocol_error",
    .sstate = TRACE_PMU_DEBUG_PROTOCOL_ERROR_ENABLED,
    .dstate = &_TRACE_PMU_DEBUG_PROTOCOL_ERROR_DSTATE 
};
TraceEvent _TRACE_PMU_DEBUG_PROTOCOL_CLEAR_TREQ_EVENT = {
    .id = 0,
    .name = "pmu_debug_protocol_clear_treq",
    .sstate = TRACE_PMU_DEBUG_PROTOCOL_CLEAR_TREQ_ENABLED,
    .dstate = &_TRACE_PMU_DEBUG_PROTOCOL_CLEAR_TREQ_DSTATE 
};
TraceEvent _TRACE_PMU_DEBUG_PROTOCOL_CMD_EVENT = {
    .id = 0,
    .name = "pmu_debug_protocol_cmd",
    .sstate = TRACE_PMU_DEBUG_PROTOCOL_CMD_ENABLED,
    .dstate = &_TRACE_PMU_DEBUG_PROTOCOL_CMD_DSTATE 
};
TraceEvent _TRACE_PMU_DEBUG_PROTOCOL_CMDLEN_EVENT = {
    .id = 0,
    .name = "pmu_debug_protocol_cmdlen",
    .sstate = TRACE_PMU_DEBUG_PROTOCOL_CMDLEN_ENABLED,
    .dstate = &_TRACE_PMU_DEBUG_PROTOCOL_CMDLEN_DSTATE 
};
TraceEvent _TRACE_PMU_DEBUG_PROTOCOL_CMD_TOOBIG_EVENT = {
    .id = 0,
    .name = "pmu_debug_protocol_cmd_toobig",
    .sstate = TRACE_PMU_DEBUG_PROTOCOL_CMD_TOOBIG_ENABLED,
    .dstate = &_TRACE_PMU_DEBUG_PROTOCOL_CMD_TOOBIG_DSTATE 
};
TraceEvent _TRACE_PMU_DEBUG_PROTOCOL_CMD_SEND_RESP_SIZE_EVENT = {
    .id = 0,
    .name = "pmu_debug_protocol_cmd_send_resp_size",
    .sstate = TRACE_PMU_DEBUG_PROTOCOL_CMD_SEND_RESP_SIZE_ENABLED,
    .dstate = &_TRACE_PMU_DEBUG_PROTOCOL_CMD_SEND_RESP_SIZE_DSTATE 
};
TraceEvent _TRACE_PMU_DEBUG_PROTOCOL_CMD_SEND_RESP_EVENT = {
    .id = 0,
    .name = "pmu_debug_protocol_cmd_send_resp",
    .sstate = TRACE_PMU_DEBUG_PROTOCOL_CMD_SEND_RESP_ENABLED,
    .dstate = &_TRACE_PMU_DEBUG_PROTOCOL_CMD_SEND_RESP_DSTATE 
};
TraceEvent _TRACE_PMU_DEBUG_PROTOCOL_CMD_RESP_COMPLETE_EVENT = {
    .id = 0,
    .name = "pmu_debug_protocol_cmd_resp_complete",
    .sstate = TRACE_PMU_DEBUG_PROTOCOL_CMD_RESP_COMPLETE_ENABLED,
    .dstate = &_TRACE_PMU_DEBUG_PROTOCOL_CMD_RESP_COMPLETE_DSTATE 
};
TraceEvent *hw_misc_macio_trace_events[] = {
    &_TRACE_CUDA_DELAY_SET_SR_INT_EVENT,
    &_TRACE_CUDA_DATA_SEND_EVENT,
    &_TRACE_CUDA_DATA_RECV_EVENT,
    &_TRACE_CUDA_RECEIVE_PACKET_CMD_EVENT,
    &_TRACE_CUDA_PACKET_RECEIVE_EVENT,
    &_TRACE_CUDA_PACKET_RECEIVE_DATA_EVENT,
    &_TRACE_CUDA_PACKET_SEND_EVENT,
    &_TRACE_CUDA_PACKET_SEND_DATA_EVENT,
    &_TRACE_MACIO_TIMER_WRITE_EVENT,
    &_TRACE_MACIO_TIMER_READ_EVENT,
    &_TRACE_MACIO_SET_GPIO_EVENT,
    &_TRACE_MACIO_GPIO_IRQ_ASSERT_EVENT,
    &_TRACE_MACIO_GPIO_IRQ_DEASSERT_EVENT,
    &_TRACE_MACIO_GPIO_WRITE_EVENT,
    &_TRACE_PMU_ADB_POLL_EVENT,
    &_TRACE_PMU_ONE_SEC_TIMER_EVENT,
    &_TRACE_PMU_CMD_SET_INT_MASK_EVENT,
    &_TRACE_PMU_CMD_SET_ADB_AUTOPOLL_EVENT,
    &_TRACE_PMU_CMD_ADB_NOBUS_EVENT,
    &_TRACE_PMU_CMD_ADB_REQUEST_EVENT,
    &_TRACE_PMU_CMD_ADB_REPLY_EVENT,
    &_TRACE_PMU_DISPATCH_CMD_EVENT,
    &_TRACE_PMU_DISPATCH_UNKNOWN_CMD_EVENT,
    &_TRACE_PMU_DEBUG_PROTOCOL_STRING_EVENT,
    &_TRACE_PMU_DEBUG_PROTOCOL_RESP_SIZE_EVENT,
    &_TRACE_PMU_DEBUG_PROTOCOL_ERROR_EVENT,
    &_TRACE_PMU_DEBUG_PROTOCOL_CLEAR_TREQ_EVENT,
    &_TRACE_PMU_DEBUG_PROTOCOL_CMD_EVENT,
    &_TRACE_PMU_DEBUG_PROTOCOL_CMDLEN_EVENT,
    &_TRACE_PMU_DEBUG_PROTOCOL_CMD_TOOBIG_EVENT,
    &_TRACE_PMU_DEBUG_PROTOCOL_CMD_SEND_RESP_SIZE_EVENT,
    &_TRACE_PMU_DEBUG_PROTOCOL_CMD_SEND_RESP_EVENT,
    &_TRACE_PMU_DEBUG_PROTOCOL_CMD_RESP_COMPLETE_EVENT,
  NULL,
};

static void trace_hw_misc_macio_register_events(void)
{
    trace_event_register_group(hw_misc_macio_trace_events);
}
trace_init(trace_hw_misc_macio_register_events)
