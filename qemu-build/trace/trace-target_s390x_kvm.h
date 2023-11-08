/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_TARGET_S390X_KVM_GENERATED_TRACERS_H
#define TRACE_TARGET_S390X_KVM_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_KVM_ENABLE_CMMA_EVENT;
extern TraceEvent _TRACE_KVM_CLEAR_CMMA_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_CPU_STATE_SET_EVENT;
extern TraceEvent _TRACE_KVM_ASSIGN_SUBCH_IOEVENTFD_EVENT;
extern uint16_t _TRACE_KVM_ENABLE_CMMA_DSTATE;
extern uint16_t _TRACE_KVM_CLEAR_CMMA_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_CPU_STATE_SET_DSTATE;
extern uint16_t _TRACE_KVM_ASSIGN_SUBCH_IOEVENTFD_DSTATE;
#define TRACE_KVM_ENABLE_CMMA_ENABLED 1
#define TRACE_KVM_CLEAR_CMMA_ENABLED 1
#define TRACE_KVM_FAILED_CPU_STATE_SET_ENABLED 1
#define TRACE_KVM_ASSIGN_SUBCH_IOEVENTFD_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_KVM_ENABLE_CMMA_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_ENABLE_CMMA) || \
    false)

static inline void _nocheck__trace_kvm_enable_cmma(int rc)
{
    if (trace_event_get_state(TRACE_KVM_ENABLE_CMMA) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "../target/s390x/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_enable_cmma " "CMMA: enabling with result code %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , rc);
#line 40 "trace/trace-target_s390x_kvm.h"
        } else {
#line 4 "../target/s390x/kvm/trace-events"
            qemu_log("kvm_enable_cmma " "CMMA: enabling with result code %d" "\n", rc);
#line 44 "trace/trace-target_s390x_kvm.h"
        }
    }
}

static inline void trace_kvm_enable_cmma(int rc)
{
    if (true) {
        _nocheck__trace_kvm_enable_cmma(rc);
    }
}

#define TRACE_KVM_CLEAR_CMMA_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_CLEAR_CMMA) || \
    false)

static inline void _nocheck__trace_kvm_clear_cmma(int rc)
{
    if (trace_event_get_state(TRACE_KVM_CLEAR_CMMA) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "../target/s390x/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_clear_cmma " "CMMA: clearing with result code %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , rc);
#line 71 "trace/trace-target_s390x_kvm.h"
        } else {
#line 5 "../target/s390x/kvm/trace-events"
            qemu_log("kvm_clear_cmma " "CMMA: clearing with result code %d" "\n", rc);
#line 75 "trace/trace-target_s390x_kvm.h"
        }
    }
}

static inline void trace_kvm_clear_cmma(int rc)
{
    if (true) {
        _nocheck__trace_kvm_clear_cmma(rc);
    }
}

#define TRACE_KVM_FAILED_CPU_STATE_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_CPU_STATE_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_cpu_state_set(int cpu_index, uint8_t state, const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_CPU_STATE_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "../target/s390x/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_cpu_state_set " "Warning: Unable to set cpu %d state %" PRIu8 " to KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cpu_index, state, msg);
#line 102 "trace/trace-target_s390x_kvm.h"
        } else {
#line 6 "../target/s390x/kvm/trace-events"
            qemu_log("kvm_failed_cpu_state_set " "Warning: Unable to set cpu %d state %" PRIu8 " to KVM: %s" "\n", cpu_index, state, msg);
#line 106 "trace/trace-target_s390x_kvm.h"
        }
    }
}

static inline void trace_kvm_failed_cpu_state_set(int cpu_index, uint8_t state, const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_cpu_state_set(cpu_index, state, msg);
    }
}

#define TRACE_KVM_ASSIGN_SUBCH_IOEVENTFD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_ASSIGN_SUBCH_IOEVENTFD) || \
    false)

static inline void _nocheck__trace_kvm_assign_subch_ioeventfd(int fd, uint32_t addr, bool assign, int datamatch)
{
    if (trace_event_get_state(TRACE_KVM_ASSIGN_SUBCH_IOEVENTFD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "../target/s390x/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_assign_subch_ioeventfd " "fd: %d sch: @0x%x assign: %d vq: %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , fd, addr, assign, datamatch);
#line 133 "trace/trace-target_s390x_kvm.h"
        } else {
#line 7 "../target/s390x/kvm/trace-events"
            qemu_log("kvm_assign_subch_ioeventfd " "fd: %d sch: @0x%x assign: %d vq: %d" "\n", fd, addr, assign, datamatch);
#line 137 "trace/trace-target_s390x_kvm.h"
        }
    }
}

static inline void trace_kvm_assign_subch_ioeventfd(int fd, uint32_t addr, bool assign, int datamatch)
{
    if (true) {
        _nocheck__trace_kvm_assign_subch_ioeventfd(fd, addr, assign, datamatch);
    }
}
#endif /* TRACE_TARGET_S390X_KVM_GENERATED_TRACERS_H */