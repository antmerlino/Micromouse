/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-z57
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/catalog/arm/cortexm4/tiva/ce/Boot.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/lm4/Timer.h>
#include <ti/sysbios/family/arm/lm4/TimestampProvider.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/hal/Timer.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/utils/Load.h>
#include <ti/uia/events/DvtTypes.h>
#include <ti/uia/events/UIABenchmark.h>
#include <ti/uia/events/UIAErr.h>
#include <ti/uia/events/UIAEvt.h>
#include <ti/uia/events/UIARoundtrip.h>
#include <ti/uia/events/UIAStatistic.h>
#include <ti/uia/events/UIASync.h>
#include <ti/uia/runtime/LogSync.h>
#include <ti/uia/runtime/LoggerStopMode.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/runtime/UIAMetaData.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/TimestampNull.h>
#include <xdc/runtime/Types.h>


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__* __fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_lm4_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Object__ {
    const ti_sysbios_family_arm_lm4_Timer_Fxns__* __fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_family_arm_lm4_Timer_RunMode runMode;
    ti_sysbios_family_arm_lm4_Timer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_family_arm_lm4_Timer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_Bool altclk;
} ti_sysbios_family_arm_lm4_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_lm4_Timer_Object__ obj;
} ti_sysbios_family_arm_lm4_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_lm4_Timer___VERS
    #define ti_sysbios_family_arm_lm4_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_lm4_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__* __fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    xdc_Int intNum;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_m3_Hwi___VERS
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__* __fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__* __fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Timer_Object__ {
    const ti_sysbios_hal_Timer_Fxns__* __fxns;
    ti_sysbios_hal_Timer_TimerProxy_Handle pi;
} ti_sysbios_hal_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_Object__ obj;
} ti_sysbios_hal_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer___VERS
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_TimerProxy_Module__ ti_sysbios_hal_Timer_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_lm4_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_TimerProxy_Object__ obj;
} ti_sysbios_hal_Timer_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer_TimerProxy___VERS
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__* __fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Event___VERS
    #define ti_sysbios_knl_Event___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Event___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem* pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
    xdc_runtime_Types_CordAddr __name;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.utils.Load INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_utils_Load_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_utils_Load_Module__;

/* Module__root__V */
extern ti_sysbios_utils_Load_Module__ ti_sysbios_utils_Load_Module__root__V;


/*
 * ======== ti.uia.events.DvtTypes INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIABenchmark INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAErr INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAEvt INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIARoundtrip INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAStatistic INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIASync INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.LogSync INTERNALS ========
 */

/* Module__ */
typedef struct ti_uia_runtime_LogSync_Module__ {
    xdc_runtime_Types_Link link;
} ti_uia_runtime_LogSync_Module__;

/* Module__root__V */
extern ti_uia_runtime_LogSync_Module__ ti_uia_runtime_LogSync_Module__root__V;

/* Object__ */
typedef struct ti_uia_runtime_LogSync_Object__ {
    const ti_uia_runtime_LogSync_Fxns__* __fxns;
} ti_uia_runtime_LogSync_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_uia_runtime_LogSync_Object__ obj;
} ti_uia_runtime_LogSync_Object2__;

/* __ParamsPtr */
#ifdef ti_uia_runtime_LogSync___VERS
    #define ti_uia_runtime_LogSync___ParamsPtr xdc_UChar*
#else
    #define ti_uia_runtime_LogSync___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.uia.runtime.LogSync_CpuTimestampProxy INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.LogSync_GlobalTimestampProxy INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.LoggerStopMode INTERNALS ========
 */

/* Module__ */
typedef struct ti_uia_runtime_LoggerStopMode_Module__ {
    xdc_runtime_Types_Link link;
} ti_uia_runtime_LoggerStopMode_Module__;

/* Module__root__V */
extern ti_uia_runtime_LoggerStopMode_Module__ ti_uia_runtime_LoggerStopMode_Module__root__V;

/* Object__ */
typedef struct ti_uia_runtime_LoggerStopMode_Object__ {
    const ti_uia_runtime_LoggerStopMode_Fxns__* __fxns;
    ti_uia_runtime_QueueDescriptor_Header hdr;
    xdc_runtime_IHeap_Handle bufHeap;
    xdc_SizeT maxEventSizeInBits32;
    xdc_Bits16 serial;
    ti_uia_runtime_IUIATransfer_TransferType transferType;
    xdc_Bool enabled;
    xdc_Bool flush;
    xdc_Int droppedEvents;
    xdc_Ptr queueStartAdrs;
    xdc_SizeT queueSizeInMAUs;
    xdc_Ptr endOfBufferAdrsPlus1;
    __TA_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray bufferArray;
    xdc_Int numCores;
} ti_uia_runtime_LoggerStopMode_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_uia_runtime_LoggerStopMode_Object__ obj;
} ti_uia_runtime_LoggerStopMode_Object2__;

/* __ParamsPtr */
#ifdef ti_uia_runtime_LoggerStopMode___VERS
    #define ti_uia_runtime_LoggerStopMode___ParamsPtr xdc_UChar*
#else
    #define ti_uia_runtime_LoggerStopMode___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.uia.runtime.QueueDescriptor INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.UIAMetaData INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_Main_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.TimestampNull INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Types INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateHwi INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateMutex INHERITS ========
 */



/*
 * ======== ti.sysbios.heaps.HeapMem INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.uia.events.UIABenchmark INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base ti_uia_events_IUIAEvent_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.uia.events.UIAErr INHERITS ========
 */



/*
 * ======== ti.uia.events.UIAEvt INHERITS ========
 */



/*
 * ======== ti.uia.events.UIARoundtrip INHERITS ========
 */



/*
 * ======== ti.uia.events.UIAStatistic INHERITS ========
 */



/*
 * ======== ti.uia.events.UIASync INHERITS ========
 */



/*
 * ======== ti.uia.runtime.LogSync INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base ti_uia_events_IUIAMetaProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_IUIATraceSyncClient_Interface__BASE__C = {(void*)&ti_uia_events_IUIAMetaProvider_Interface__BASE__C};


/*
 * ======== ti.uia.runtime.LoggerStopMode INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C = {(void*)&xdc_runtime_ILogger_Interface__BASE__C};
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_IUIATransfer_Interface__BASE__C = {(void*)&xdc_runtime_IFilterLogger_Interface__BASE__C};
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C = {(void*)&ti_uia_runtime_IUIATransfer_Interface__BASE__C};


/*
 * ======== xdc.runtime.SysMin INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.Timestamp INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.TimestampNull INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampProvider_Interface__BASE__C = {(void*)&xdc_runtime_ITimestampClient_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* base__ */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x802b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8041, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8042, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* base__ */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8031, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIABenchmark VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_events_UIABenchmark_Fxns__ ti_uia_events_UIABenchmark_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* base__ */
    &ti_uia_events_UIABenchmark_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8035, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAErr VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_events_UIAErr_Fxns__ ti_uia_events_UIAErr_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* base__ */
    &ti_uia_events_UIAErr_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8036, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAEvt VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_events_UIAEvt_Fxns__ ti_uia_events_UIAEvt_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* base__ */
    &ti_uia_events_UIAEvt_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8037, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIARoundtrip VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_events_UIARoundtrip_Fxns__ ti_uia_events_UIARoundtrip_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* base__ */
    &ti_uia_events_UIARoundtrip_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8038, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAStatistic VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_events_UIAStatistic_Fxns__ ti_uia_events_UIAStatistic_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* base__ */
    &ti_uia_events_UIAStatistic_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8039, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIASync VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_events_UIASync_Fxns__ ti_uia_events_UIASync_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* base__ */
    &ti_uia_events_UIASync_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x803a, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.runtime.LogSync VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_runtime_LogSync_Fxns__ ti_uia_runtime_LogSync_Module__FXNS__C = {
    (void*)&ti_uia_runtime_IUIATraceSyncClient_Interface__BASE__C, /* base__ */
    &ti_uia_runtime_LogSync_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        ti_uia_runtime_LogSync_Object__delete__S,
        ti_uia_runtime_LogSync_Handle__label__S,
        0x803c, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.runtime.LoggerStopMode VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_runtime_LoggerStopMode_Fxns__ ti_uia_runtime_LoggerStopMode_Module__FXNS__C = {
    (void*)&ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, /* base__ */
    &ti_uia_runtime_LoggerStopMode_Module__FXNS__C.__sfxns, /* __sysp */
    ti_uia_runtime_LoggerStopMode_enable__E,
    ti_uia_runtime_LoggerStopMode_disable__E,
    ti_uia_runtime_LoggerStopMode_write0__E,
    ti_uia_runtime_LoggerStopMode_write1__E,
    ti_uia_runtime_LoggerStopMode_write2__E,
    ti_uia_runtime_LoggerStopMode_write4__E,
    ti_uia_runtime_LoggerStopMode_write8__E,
    ti_uia_runtime_LoggerStopMode_setFilterLevel__E,
    ti_uia_runtime_LoggerStopMode_getFilterLevel__E,
    ti_uia_runtime_LoggerStopMode_getTransferType__E,
    ti_uia_runtime_LoggerStopMode_getContents__E,
    ti_uia_runtime_LoggerStopMode_isEmpty__E,
    ti_uia_runtime_LoggerStopMode_getMaxLength__E,
    ti_uia_runtime_LoggerStopMode_getInstanceId__E,
    ti_uia_runtime_LoggerStopMode_getPriority__E,
    ti_uia_runtime_LoggerStopMode_setPriority__E,
    ti_uia_runtime_LoggerStopMode_reset__E,
    ti_uia_runtime_LoggerStopMode_writeMemoryRange__E,
    {
        ti_uia_runtime_LoggerStopMode_Object__create__S,
        ti_uia_runtime_LoggerStopMode_Object__delete__S,
        ti_uia_runtime_LoggerStopMode_Handle__label__S,
        0x803d, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* base__ */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampClient_Interface__BASE__C, /* base__ */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8010, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.TimestampNull VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_TimestampNull_Fxns__ xdc_runtime_TimestampNull_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampProvider_Interface__BASE__C, /* base__ */
    &xdc_runtime_TimestampNull_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_TimestampNull_get32__E,
    xdc_runtime_TimestampNull_get64__E,
    xdc_runtime_TimestampNull_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8011, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    ti_sysbios_BIOS_StartFuncPtr startFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__device device;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__handles handles;
} ti_sysbios_family_arm_lm4_Timer_Module_State__;

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[6];

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[6];

/* Module__state__V */
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V;

/* --> ti_sysbios_family_arm_lm4_Timer_enableTiva */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_enableTiva(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_Timer_disableTiva */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_disableTiva(xdc_Int);


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ {
    ti_sysbios_family_arm_lm4_Timer_Handle timer;
    volatile xdc_UInt32 hi;
} ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Bits16 enables;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__iser iser;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__priorities priorities;
    xdc_Char* taskSP;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_SizeT isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    volatile xdc_Bool vnvicFlushRequired;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__dispatchTable dispatchTable;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinity intAffinity;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinityMasks intAffinityMasks;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__dispatchTable ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A[216];

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2];

/* --> ti_sysbios_family_arm_m3_Hwi_priorities__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_priorities ti_sysbios_family_arm_m3_Hwi_priorities__A[216];

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_hal_Timer_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    xdc_UInt32 periodCounts;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 skipsWorkFunc;
    xdc_Bool inWorkFunc;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[2];

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;

/* --> ti_sysbios_knl_Task_checkStacks */
extern xdc_Void ti_sysbios_knl_Task_checkStacks(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle);

/* --> ti_sysbios_utils_Load_taskRegHook__E */
extern xdc_Void ti_sysbios_utils_Load_taskRegHook__E(xdc_Int);

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[2];


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.utils.Load DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_utils_Load_Module_State__ {
    xdc_Int taskHId;
    __TA_ti_sysbios_utils_Load_Module_State__taskStartTime taskStartTime;
    xdc_UInt32 timeElapsed;
    __TA_ti_sysbios_utils_Load_Module_State__runningTask runningTask;
    xdc_Bool firstSwitchDone;
    xdc_UInt32 swiStartTime;
    ti_sysbios_utils_Load_HookContext swiEnv;
    __TA_ti_sysbios_utils_Load_Module_State__taskEnv taskEnv;
    xdc_UInt32 swiCnt;
    xdc_UInt32 hwiStartTime;
    ti_sysbios_utils_Load_HookContext hwiEnv;
    xdc_UInt32 hwiCnt;
    xdc_UInt32 timeSlotCnt;
    xdc_UInt32 minLoop;
    xdc_UInt32 minIdle;
    xdc_UInt32 t0;
    xdc_UInt32 idleCnt;
    xdc_UInt32 cpuLoad;
    xdc_UInt32 taskEnvLen;
    xdc_UInt32 taskNum;
    xdc_Bool powerEnabled;
    xdc_UInt32 idleStartTime;
    xdc_UInt32 busyStartTime;
    xdc_UInt32 busyTime;
    ti_sysbios_knl_Queue_Object__ Object_field_taskList;
} ti_sysbios_utils_Load_Module_State__;

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1];

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1];

/* --> ti_sysbios_utils_Load_Module_State_0_taskEnv__A */
__T1_ti_sysbios_utils_Load_Module_State__taskEnv ti_sysbios_utils_Load_Module_State_0_taskEnv__A[1];

/* Module__state__V */
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V;


/*
 * ======== ti.uia.events.DvtTypes DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIABenchmark DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAErr DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAEvt DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIARoundtrip DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAStatistic DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIASync DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.LogSync DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_uia_runtime_LogSync_Module_State__ {
    xdc_UInt32 numTimesHalted;
    xdc_UInt32 serialNumber;
    xdc_Bool isEnabled;
} ti_uia_runtime_LogSync_Module_State__;

/* Module__state__V */
ti_uia_runtime_LogSync_Module_State__ ti_uia_runtime_LogSync_Module__state__V;


/*
 * ======== ti.uia.runtime.LogSync_CpuTimestampProxy DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.LogSync_GlobalTimestampProxy DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.LoggerStopMode DECLARATIONS ========
 */

/* --> ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A */
__T1_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[640];

/* --> ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A */
__T1_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[1152];

/* --> ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A */
__T1_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[1152];

/* Object__table__V */
ti_uia_runtime_LoggerStopMode_Object__ ti_uia_runtime_LoggerStopMode_Object__table__V[3];

/* Module_State__ */
typedef struct ti_uia_runtime_LoggerStopMode_Module_State__ {
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
    xdc_runtime_Types_ModuleId moduleIdToRouteToStatusLogger;
} ti_uia_runtime_LoggerStopMode_Module_State__;

/* Module__state__V */
ti_uia_runtime_LoggerStopMode_Module_State__ ti_uia_runtime_LoggerStopMode_Module__state__V;


/*
 * ======== ti.uia.runtime.QueueDescriptor DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_uia_runtime_QueueDescriptor_Module_State__ {
    xdc_Ptr mPtrToFirstDescriptor;
    xdc_UInt mUpdateCount;
    xdc_UInt32 is5555ifInitialized;
} ti_uia_runtime_QueueDescriptor_Module_State__;

/* Module__state__V */
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V;


/*
 * ======== ti.uia.runtime.UIAMetaData DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc* listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int* stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[5];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[2];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_Timer_Module_startup__E(xdc_Int);

/* --> ti_uia_runtime_LogSync_Module_startup__E */
extern xdc_Int ti_uia_runtime_LogSync_Module_startup__E(xdc_Int);

/* --> ti_uia_runtime_LoggerStopMode_Module_startup__E */
extern xdc_Int ti_uia_runtime_LoggerStopMode_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[12];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[12];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char*,xdc_UInt);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
    xdc_Int exitStatus;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[8904];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[69];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.TimestampNull DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Types DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_utils_Load_Module_State_taskList__O = offsetof(ti_sysbios_utils_Load_Module_State__, Object_field_taskList);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = F:/Projects/Micromouse/Software/micromouse/Debug/configPkg/package/cfg/micromouse_pem4f");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M4");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.tiva");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.M4F");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== ti.platforms.tiva.Platform TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */

xdc_runtime_Diags_DictElem xdc_runtime_Diags_dictElems[] = {
    {32777, &xdc_runtime_Main_Module__root__V.mask},
    {32802, &ti_sysbios_knl_Event_Module__root__V.mask},
    {32804, &ti_sysbios_knl_Semaphore_Module__root__V.mask},
    {32806, &ti_sysbios_knl_Task_Module__root__V.mask},
    {32836, &ti_sysbios_utils_Load_Module__root__V.mask},
    {0, 0}
};


/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}
xdc_Bool ti_uia_runtime_LogSync_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0;
}
xdc_Bool ti_uia_runtime_LoggerStopMode_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[11] < 0;
}

/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[12];
    xdc_runtime_Startup_startModsFxn__C(state, 12);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
Int xdc_runtime_System_printfExtend__I(Char **pbuf, CString *pfmt, 
    VaList *pva, xdc_runtime_System_ParseData *parse)
{
    CString fmt = *pfmt;
    Int     res;
    Char    c;
    Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)iargToPtr(va_arg(va, IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (Char *) iargToPtr(va_arg(va, IArg)) :
                                       (Char *) va_arg(va, Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (Int) va_arg(va, IArg) : 
                                       (Int) va_arg(va, Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (Char *) iargToPtr(va_arg(va, IArg)) :
                (Char *) va_arg(va, Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int, const char *, unsigned);
#elif (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int _write(int, char *, int);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
Void xdc_runtime_SysMin_output__I(Char *buf, UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || (printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
Void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[7];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot TEMPLATE ========
 */

#if defined(__ti__)
#pragma CODE_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_init, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_catalog_arm_cortexm4_tiva_ce_Boot_init ========
 */
Void ti_catalog_arm_cortexm4_tiva_ce_Boot_init()
{
    ti_catalog_arm_cortexm4_tiva_ce_Boot_sysCtlClockSet((ULong)
        (-1056963264));
}


/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */

Void ti_sysbios_BIOS_exitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_exitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_hal_Timer_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#if defined(__ti__)
#include <_lock.h>
#endif

Void ti_sysbios_BIOS_exitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

#if defined(__ti__)
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
#endif
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */





/*
 * ======== ti.sysbios.hal.Hwi TEMPLATE ========
 */

#ifdef __ti__
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_disable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_enable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_restore__E);
#endif

/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);

    }
}

/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00();

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_resetVectors, ".resetVecs");

/* const because it is meant to be placed in ROM */
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 15 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 16 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 17 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 18 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 19 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 20 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 21 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 22 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 23 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 24 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 25 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 26 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 27 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 28 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 29 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 30 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 31 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 32 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 33 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 34 */
    (UInt32)(ti_sysbios_family_arm_m3_Hwi_dispatch__I),  /* intNum = 35 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 36 */
    (UInt32)(ti_sysbios_family_arm_m3_Hwi_dispatch__I),  /* intNum = 37 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 38 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 39 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 40 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 41 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 42 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 43 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 44 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 45 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 46 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 47 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 48 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 49 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 50 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 51 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 52 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 53 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 54 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 55 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 56 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 57 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 58 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 59 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 60 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 61 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 62 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 63 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 64 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 65 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 66 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 67 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 68 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 69 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 70 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 71 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 72 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 73 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 74 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 75 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 76 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 77 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 78 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 79 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 80 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 81 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 82 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 83 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 84 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 85 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 86 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 87 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 88 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 89 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 90 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 91 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 92 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 93 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 94 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 95 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 96 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 97 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 98 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 99 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 100 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 101 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 102 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 103 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 104 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 105 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 106 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 107 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 108 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 109 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 110 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 111 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 112 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 113 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 114 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 115 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 116 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 117 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 118 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 119 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 120 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 121 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 122 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 123 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 124 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 125 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 126 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 127 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 128 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 129 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 130 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 131 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 132 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 133 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 134 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 135 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 136 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 137 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 138 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 139 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 140 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 141 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 142 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 143 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 144 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 145 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 146 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 147 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 148 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 149 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 150 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 151 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 152 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 153 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 154 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 155 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 156 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 157 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 158 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 159 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 160 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 161 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 162 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 163 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 164 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 165 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 166 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 167 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 168 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 169 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 170 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 171 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 172 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 173 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 174 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 175 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 176 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 177 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 178 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 179 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 180 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 181 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 182 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 183 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 184 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 185 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 186 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 187 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 188 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 189 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 190 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 191 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 192 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 193 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 194 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 195 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 196 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 197 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 198 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 199 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 200 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 201 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 202 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 203 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 204 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 205 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 206 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 207 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 208 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 209 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 210 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 211 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 212 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 213 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 214 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 215 */
};

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ramVectors, ".vecs");

/* place holder for RAM vector table */
UInt32 ti_sysbios_family_arm_m3_Hwi_ramVectors[216];


/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */




#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    /*
     * return NULL if size is 0, or alignment is not a power of 2
     */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    retval = malloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.utils.Load TEMPLATE ========
 */

#include <ti/sysbios/utils/Load.h>
#include <ti/sysbios/hal/Core.h>

/*
 *  ======== Load_update ========
 */
Void ti_sysbios_utils_Load_update__E()
{
    /* Update and Log CPU load, Task, Swi, and Hwi loads (if enabled). */
    ti_sysbios_utils_Load_updateLoads();
}


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C = 0;

/* A_mustUseEnhancedClockMode__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* A_mustNotUseEnhancedClockMode__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C = (((xdc_runtime_Assert_Id)474) << 16 | 16);


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x5f5e100,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x5f5e100,  /* lo */
};

/* taskEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* useSK__C */
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_arm_lm4_Timer_Params ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_lm4_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)0),  /* hwiParams */
    (xdc_UInt)0xffffffff,  /* prevThreshold */
    0,  /* altclk */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x1,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_USER,  /* startMode */
        (xdc_UInt)0xffffffff,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_TimestampProvider_rolloverFunc__E)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[1],  /* hwi */
        (xdc_UInt)0xffffffff,  /* prevThreshold */
        0,  /* altclk */
    },
    {/* instance#1 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x186a0,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* hwi */
        (xdc_UInt)0xffffffff,  /* prevThreshold */
        0,  /* altclk */
    },
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[6] = {
    {
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_Ptr)(0x40030000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_Ptr)(0x40031000)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x27,  /* intNum */
        ((xdc_Ptr)(0x40032000)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x33,  /* intNum */
        ((xdc_Ptr)(0x40033000)),  /* baseAddr */
    },  /* [3] */
    {
        (xdc_UInt)0x56,  /* intNum */
        ((xdc_Ptr)(0x40034000)),  /* baseAddr */
    },  /* [4] */
    {
        (xdc_UInt)0x6c,  /* intNum */
        ((xdc_Ptr)(0x40035000)),  /* baseAddr */
    },  /* [5] */
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[6] = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* [0] */
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
};

/* Module__state__V */
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V = {
    (xdc_UInt)0x3c,  /* availMask */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__id ti_sysbios_family_arm_lm4_Timer_Module__id__C = (xdc_Bits16)0x802f;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__count ti_sysbios_family_arm_lm4_Timer_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__heap ti_sysbios_family_arm_lm4_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__sizeof ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_lm4_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__table ti_sysbios_family_arm_lm4_Timer_Object__table__C = ti_sysbios_family_arm_lm4_Timer_Object__table__V;

/* E_invalidTimer__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_invalidTimer ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4491) << 16 | 0);

/* E_notAvailable__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_notAvailable ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4527) << 16 | 0);

/* E_cannotSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_cannotSupport ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4566) << 16 | 0);

/* anyMask__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_anyMask ti_sysbios_family_arm_lm4_Timer_anyMask__C = (xdc_UInt)0x3f;

/* enableFunc__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_enableFunc ti_sysbios_family_arm_lm4_Timer_enableFunc__C = ((CT__ti_sysbios_family_arm_lm4_Timer_enableFunc)((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_enableTiva));

/* disableFunc__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_disableFunc ti_sysbios_family_arm_lm4_Timer_disableFunc__C = ((CT__ti_sysbios_family_arm_lm4_Timer_disableFunc)((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_disableTiva));

/* startupNeeded__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_startupNeeded ti_sysbios_family_arm_lm4_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_numTimerDevices ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C = (xdc_Int)0x6;


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* timer */
    (xdc_UInt32)0x0,  /* hi */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__id ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C = (xdc_Bits16)0x802e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__count ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__table ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C = 0;

/* useClockTimer__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C = 0;

/* timerId__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_timerId ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C = (xdc_UInt)(-0x0 - 1);


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    1,  /* useDispatcher */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        (xdc_Int)0x23,  /* intNum */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        (xdc_Int)0x25,  /* intNum */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1] = {
    ((xdc_Ptr)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__dispatchTable ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A[216] = {
    0,  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
    0,  /* [11] */
    0,  /* [12] */
    0,  /* [13] */
    0,  /* [14] */
    0,  /* [15] */
    0,  /* [16] */
    0,  /* [17] */
    0,  /* [18] */
    0,  /* [19] */
    0,  /* [20] */
    0,  /* [21] */
    0,  /* [22] */
    0,  /* [23] */
    0,  /* [24] */
    0,  /* [25] */
    0,  /* [26] */
    0,  /* [27] */
    0,  /* [28] */
    0,  /* [29] */
    0,  /* [30] */
    0,  /* [31] */
    0,  /* [32] */
    0,  /* [33] */
    0,  /* [34] */
    (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* [35] */
    0,  /* [36] */
    (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[1],  /* [37] */
    0,  /* [38] */
    0,  /* [39] */
    0,  /* [40] */
    0,  /* [41] */
    0,  /* [42] */
    0,  /* [43] */
    0,  /* [44] */
    0,  /* [45] */
    0,  /* [46] */
    0,  /* [47] */
    0,  /* [48] */
    0,  /* [49] */
    0,  /* [50] */
    0,  /* [51] */
    0,  /* [52] */
    0,  /* [53] */
    0,  /* [54] */
    0,  /* [55] */
    0,  /* [56] */
    0,  /* [57] */
    0,  /* [58] */
    0,  /* [59] */
    0,  /* [60] */
    0,  /* [61] */
    0,  /* [62] */
    0,  /* [63] */
    0,  /* [64] */
    0,  /* [65] */
    0,  /* [66] */
    0,  /* [67] */
    0,  /* [68] */
    0,  /* [69] */
    0,  /* [70] */
    0,  /* [71] */
    0,  /* [72] */
    0,  /* [73] */
    0,  /* [74] */
    0,  /* [75] */
    0,  /* [76] */
    0,  /* [77] */
    0,  /* [78] */
    0,  /* [79] */
    0,  /* [80] */
    0,  /* [81] */
    0,  /* [82] */
    0,  /* [83] */
    0,  /* [84] */
    0,  /* [85] */
    0,  /* [86] */
    0,  /* [87] */
    0,  /* [88] */
    0,  /* [89] */
    0,  /* [90] */
    0,  /* [91] */
    0,  /* [92] */
    0,  /* [93] */
    0,  /* [94] */
    0,  /* [95] */
    0,  /* [96] */
    0,  /* [97] */
    0,  /* [98] */
    0,  /* [99] */
    0,  /* [100] */
    0,  /* [101] */
    0,  /* [102] */
    0,  /* [103] */
    0,  /* [104] */
    0,  /* [105] */
    0,  /* [106] */
    0,  /* [107] */
    0,  /* [108] */
    0,  /* [109] */
    0,  /* [110] */
    0,  /* [111] */
    0,  /* [112] */
    0,  /* [113] */
    0,  /* [114] */
    0,  /* [115] */
    0,  /* [116] */
    0,  /* [117] */
    0,  /* [118] */
    0,  /* [119] */
    0,  /* [120] */
    0,  /* [121] */
    0,  /* [122] */
    0,  /* [123] */
    0,  /* [124] */
    0,  /* [125] */
    0,  /* [126] */
    0,  /* [127] */
    0,  /* [128] */
    0,  /* [129] */
    0,  /* [130] */
    0,  /* [131] */
    0,  /* [132] */
    0,  /* [133] */
    0,  /* [134] */
    0,  /* [135] */
    0,  /* [136] */
    0,  /* [137] */
    0,  /* [138] */
    0,  /* [139] */
    0,  /* [140] */
    0,  /* [141] */
    0,  /* [142] */
    0,  /* [143] */
    0,  /* [144] */
    0,  /* [145] */
    0,  /* [146] */
    0,  /* [147] */
    0,  /* [148] */
    0,  /* [149] */
    0,  /* [150] */
    0,  /* [151] */
    0,  /* [152] */
    0,  /* [153] */
    0,  /* [154] */
    0,  /* [155] */
    0,  /* [156] */
    0,  /* [157] */
    0,  /* [158] */
    0,  /* [159] */
    0,  /* [160] */
    0,  /* [161] */
    0,  /* [162] */
    0,  /* [163] */
    0,  /* [164] */
    0,  /* [165] */
    0,  /* [166] */
    0,  /* [167] */
    0,  /* [168] */
    0,  /* [169] */
    0,  /* [170] */
    0,  /* [171] */
    0,  /* [172] */
    0,  /* [173] */
    0,  /* [174] */
    0,  /* [175] */
    0,  /* [176] */
    0,  /* [177] */
    0,  /* [178] */
    0,  /* [179] */
    0,  /* [180] */
    0,  /* [181] */
    0,  /* [182] */
    0,  /* [183] */
    0,  /* [184] */
    0,  /* [185] */
    0,  /* [186] */
    0,  /* [187] */
    0,  /* [188] */
    0,  /* [189] */
    0,  /* [190] */
    0,  /* [191] */
    0,  /* [192] */
    0,  /* [193] */
    0,  /* [194] */
    0,  /* [195] */
    0,  /* [196] */
    0,  /* [197] */
    0,  /* [198] */
    0,  /* [199] */
    0,  /* [200] */
    0,  /* [201] */
    0,  /* [202] */
    0,  /* [203] */
    0,  /* [204] */
    0,  /* [205] */
    0,  /* [206] */
    0,  /* [207] */
    0,  /* [208] */
    0,  /* [209] */
    0,  /* [210] */
    0,  /* [211] */
    0,  /* [212] */
    0,  /* [213] */
    0,  /* [214] */
    0,  /* [215] */
};

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V = {
    (xdc_Bits16)0x0,  /* enables */
    {
        (xdc_Bits32)0x280000,  /* [0] */
        (xdc_Bits32)0x0,  /* [1] */
        (xdc_Bits32)0x0,  /* [2] */
        (xdc_Bits32)0x0,  /* [3] */
        (xdc_Bits32)0x0,  /* [4] */
        (xdc_Bits32)0x0,  /* [5] */
        (xdc_Bits32)0x0,  /* [6] */
        (xdc_Bits32)0x0,  /* [7] */
    },  /* iser */
    ((void*)0),  /* priorities */
    ((xdc_Char*)0),  /* taskSP */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A),  /* excStack */
    ((xdc_Ptr)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    (xdc_SizeT)0x1000,  /* isrStackSize */
    ((xdc_Ptr)(0x20000000)),  /* vectorTableBase */
    (xdc_UInt)0x101,  /* swiTaskKeys */
    0,  /* vnvicFlushRequired */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A),  /* dispatchTable */
    ((void*)0),  /* intAffinity */
    ((void*)0),  /* intAffinityMasks */
};

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [0] */
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [1] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_priorities__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_priorities ti_sysbios_family_arm_m3_Hwi_priorities__A[216] = {
    (xdc_UInt8)0x0,  /* [0] */
    (xdc_UInt8)0x0,  /* [1] */
    (xdc_UInt8)0x0,  /* [2] */
    (xdc_UInt8)0x0,  /* [3] */
    (xdc_UInt8)0x0,  /* [4] */
    (xdc_UInt8)0x0,  /* [5] */
    (xdc_UInt8)0x0,  /* [6] */
    (xdc_UInt8)0x0,  /* [7] */
    (xdc_UInt8)0x0,  /* [8] */
    (xdc_UInt8)0x0,  /* [9] */
    (xdc_UInt8)0x0,  /* [10] */
    (xdc_UInt8)0x0,  /* [11] */
    (xdc_UInt8)0x0,  /* [12] */
    (xdc_UInt8)0x0,  /* [13] */
    (xdc_UInt8)0x0,  /* [14] */
    (xdc_UInt8)0xff,  /* [15] */
    (xdc_UInt8)0xff,  /* [16] */
    (xdc_UInt8)0xff,  /* [17] */
    (xdc_UInt8)0xff,  /* [18] */
    (xdc_UInt8)0xff,  /* [19] */
    (xdc_UInt8)0xff,  /* [20] */
    (xdc_UInt8)0xff,  /* [21] */
    (xdc_UInt8)0xff,  /* [22] */
    (xdc_UInt8)0xff,  /* [23] */
    (xdc_UInt8)0xff,  /* [24] */
    (xdc_UInt8)0xff,  /* [25] */
    (xdc_UInt8)0xff,  /* [26] */
    (xdc_UInt8)0xff,  /* [27] */
    (xdc_UInt8)0xff,  /* [28] */
    (xdc_UInt8)0xff,  /* [29] */
    (xdc_UInt8)0xff,  /* [30] */
    (xdc_UInt8)0xff,  /* [31] */
    (xdc_UInt8)0xff,  /* [32] */
    (xdc_UInt8)0xff,  /* [33] */
    (xdc_UInt8)0xff,  /* [34] */
    (xdc_UInt8)0xff,  /* [35] */
    (xdc_UInt8)0xff,  /* [36] */
    (xdc_UInt8)0xff,  /* [37] */
    (xdc_UInt8)0xff,  /* [38] */
    (xdc_UInt8)0xff,  /* [39] */
    (xdc_UInt8)0xff,  /* [40] */
    (xdc_UInt8)0xff,  /* [41] */
    (xdc_UInt8)0xff,  /* [42] */
    (xdc_UInt8)0xff,  /* [43] */
    (xdc_UInt8)0xff,  /* [44] */
    (xdc_UInt8)0xff,  /* [45] */
    (xdc_UInt8)0xff,  /* [46] */
    (xdc_UInt8)0xff,  /* [47] */
    (xdc_UInt8)0xff,  /* [48] */
    (xdc_UInt8)0xff,  /* [49] */
    (xdc_UInt8)0xff,  /* [50] */
    (xdc_UInt8)0xff,  /* [51] */
    (xdc_UInt8)0xff,  /* [52] */
    (xdc_UInt8)0xff,  /* [53] */
    (xdc_UInt8)0xff,  /* [54] */
    (xdc_UInt8)0xff,  /* [55] */
    (xdc_UInt8)0xff,  /* [56] */
    (xdc_UInt8)0xff,  /* [57] */
    (xdc_UInt8)0xff,  /* [58] */
    (xdc_UInt8)0xff,  /* [59] */
    (xdc_UInt8)0xff,  /* [60] */
    (xdc_UInt8)0xff,  /* [61] */
    (xdc_UInt8)0xff,  /* [62] */
    (xdc_UInt8)0xff,  /* [63] */
    (xdc_UInt8)0xff,  /* [64] */
    (xdc_UInt8)0xff,  /* [65] */
    (xdc_UInt8)0xff,  /* [66] */
    (xdc_UInt8)0xff,  /* [67] */
    (xdc_UInt8)0xff,  /* [68] */
    (xdc_UInt8)0xff,  /* [69] */
    (xdc_UInt8)0xff,  /* [70] */
    (xdc_UInt8)0xff,  /* [71] */
    (xdc_UInt8)0xff,  /* [72] */
    (xdc_UInt8)0xff,  /* [73] */
    (xdc_UInt8)0xff,  /* [74] */
    (xdc_UInt8)0xff,  /* [75] */
    (xdc_UInt8)0xff,  /* [76] */
    (xdc_UInt8)0xff,  /* [77] */
    (xdc_UInt8)0xff,  /* [78] */
    (xdc_UInt8)0xff,  /* [79] */
    (xdc_UInt8)0xff,  /* [80] */
    (xdc_UInt8)0xff,  /* [81] */
    (xdc_UInt8)0xff,  /* [82] */
    (xdc_UInt8)0xff,  /* [83] */
    (xdc_UInt8)0xff,  /* [84] */
    (xdc_UInt8)0xff,  /* [85] */
    (xdc_UInt8)0xff,  /* [86] */
    (xdc_UInt8)0xff,  /* [87] */
    (xdc_UInt8)0xff,  /* [88] */
    (xdc_UInt8)0xff,  /* [89] */
    (xdc_UInt8)0xff,  /* [90] */
    (xdc_UInt8)0xff,  /* [91] */
    (xdc_UInt8)0xff,  /* [92] */
    (xdc_UInt8)0xff,  /* [93] */
    (xdc_UInt8)0xff,  /* [94] */
    (xdc_UInt8)0xff,  /* [95] */
    (xdc_UInt8)0xff,  /* [96] */
    (xdc_UInt8)0xff,  /* [97] */
    (xdc_UInt8)0xff,  /* [98] */
    (xdc_UInt8)0xff,  /* [99] */
    (xdc_UInt8)0xff,  /* [100] */
    (xdc_UInt8)0xff,  /* [101] */
    (xdc_UInt8)0xff,  /* [102] */
    (xdc_UInt8)0xff,  /* [103] */
    (xdc_UInt8)0xff,  /* [104] */
    (xdc_UInt8)0xff,  /* [105] */
    (xdc_UInt8)0xff,  /* [106] */
    (xdc_UInt8)0xff,  /* [107] */
    (xdc_UInt8)0xff,  /* [108] */
    (xdc_UInt8)0xff,  /* [109] */
    (xdc_UInt8)0xff,  /* [110] */
    (xdc_UInt8)0xff,  /* [111] */
    (xdc_UInt8)0xff,  /* [112] */
    (xdc_UInt8)0xff,  /* [113] */
    (xdc_UInt8)0xff,  /* [114] */
    (xdc_UInt8)0xff,  /* [115] */
    (xdc_UInt8)0xff,  /* [116] */
    (xdc_UInt8)0xff,  /* [117] */
    (xdc_UInt8)0xff,  /* [118] */
    (xdc_UInt8)0xff,  /* [119] */
    (xdc_UInt8)0xff,  /* [120] */
    (xdc_UInt8)0xff,  /* [121] */
    (xdc_UInt8)0xff,  /* [122] */
    (xdc_UInt8)0xff,  /* [123] */
    (xdc_UInt8)0xff,  /* [124] */
    (xdc_UInt8)0xff,  /* [125] */
    (xdc_UInt8)0xff,  /* [126] */
    (xdc_UInt8)0xff,  /* [127] */
    (xdc_UInt8)0xff,  /* [128] */
    (xdc_UInt8)0xff,  /* [129] */
    (xdc_UInt8)0xff,  /* [130] */
    (xdc_UInt8)0xff,  /* [131] */
    (xdc_UInt8)0xff,  /* [132] */
    (xdc_UInt8)0xff,  /* [133] */
    (xdc_UInt8)0xff,  /* [134] */
    (xdc_UInt8)0xff,  /* [135] */
    (xdc_UInt8)0xff,  /* [136] */
    (xdc_UInt8)0xff,  /* [137] */
    (xdc_UInt8)0xff,  /* [138] */
    (xdc_UInt8)0xff,  /* [139] */
    (xdc_UInt8)0xff,  /* [140] */
    (xdc_UInt8)0xff,  /* [141] */
    (xdc_UInt8)0xff,  /* [142] */
    (xdc_UInt8)0xff,  /* [143] */
    (xdc_UInt8)0xff,  /* [144] */
    (xdc_UInt8)0xff,  /* [145] */
    (xdc_UInt8)0xff,  /* [146] */
    (xdc_UInt8)0xff,  /* [147] */
    (xdc_UInt8)0xff,  /* [148] */
    (xdc_UInt8)0xff,  /* [149] */
    (xdc_UInt8)0xff,  /* [150] */
    (xdc_UInt8)0xff,  /* [151] */
    (xdc_UInt8)0xff,  /* [152] */
    (xdc_UInt8)0xff,  /* [153] */
    (xdc_UInt8)0xff,  /* [154] */
    (xdc_UInt8)0xff,  /* [155] */
    (xdc_UInt8)0xff,  /* [156] */
    (xdc_UInt8)0xff,  /* [157] */
    (xdc_UInt8)0xff,  /* [158] */
    (xdc_UInt8)0xff,  /* [159] */
    (xdc_UInt8)0xff,  /* [160] */
    (xdc_UInt8)0xff,  /* [161] */
    (xdc_UInt8)0xff,  /* [162] */
    (xdc_UInt8)0xff,  /* [163] */
    (xdc_UInt8)0xff,  /* [164] */
    (xdc_UInt8)0xff,  /* [165] */
    (xdc_UInt8)0xff,  /* [166] */
    (xdc_UInt8)0xff,  /* [167] */
    (xdc_UInt8)0xff,  /* [168] */
    (xdc_UInt8)0xff,  /* [169] */
    (xdc_UInt8)0xff,  /* [170] */
    (xdc_UInt8)0xff,  /* [171] */
    (xdc_UInt8)0xff,  /* [172] */
    (xdc_UInt8)0xff,  /* [173] */
    (xdc_UInt8)0xff,  /* [174] */
    (xdc_UInt8)0xff,  /* [175] */
    (xdc_UInt8)0xff,  /* [176] */
    (xdc_UInt8)0xff,  /* [177] */
    (xdc_UInt8)0xff,  /* [178] */
    (xdc_UInt8)0xff,  /* [179] */
    (xdc_UInt8)0xff,  /* [180] */
    (xdc_UInt8)0xff,  /* [181] */
    (xdc_UInt8)0xff,  /* [182] */
    (xdc_UInt8)0xff,  /* [183] */
    (xdc_UInt8)0xff,  /* [184] */
    (xdc_UInt8)0xff,  /* [185] */
    (xdc_UInt8)0xff,  /* [186] */
    (xdc_UInt8)0xff,  /* [187] */
    (xdc_UInt8)0xff,  /* [188] */
    (xdc_UInt8)0xff,  /* [189] */
    (xdc_UInt8)0xff,  /* [190] */
    (xdc_UInt8)0xff,  /* [191] */
    (xdc_UInt8)0xff,  /* [192] */
    (xdc_UInt8)0xff,  /* [193] */
    (xdc_UInt8)0xff,  /* [194] */
    (xdc_UInt8)0xff,  /* [195] */
    (xdc_UInt8)0xff,  /* [196] */
    (xdc_UInt8)0xff,  /* [197] */
    (xdc_UInt8)0xff,  /* [198] */
    (xdc_UInt8)0xff,  /* [199] */
    (xdc_UInt8)0xff,  /* [200] */
    (xdc_UInt8)0xff,  /* [201] */
    (xdc_UInt8)0xff,  /* [202] */
    (xdc_UInt8)0xff,  /* [203] */
    (xdc_UInt8)0xff,  /* [204] */
    (xdc_UInt8)0xff,  /* [205] */
    (xdc_UInt8)0xff,  /* [206] */
    (xdc_UInt8)0xff,  /* [207] */
    (xdc_UInt8)0xff,  /* [208] */
    (xdc_UInt8)0xff,  /* [209] */
    (xdc_UInt8)0xff,  /* [210] */
    (xdc_UInt8)0xff,  /* [211] */
    (xdc_UInt8)0xff,  /* [212] */
    (xdc_UInt8)0xff,  /* [213] */
    (xdc_UInt8)0xff,  /* [214] */
    (xdc_UInt8)0xff,  /* [215] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C = (xdc_Bits16)0x802a;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C = ti_sysbios_family_arm_m3_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0xd8;

/* NUM_PRIORITIES__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)5871) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)5941) << 16 | 512);

/* A_unsupportedMaskingOption__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)1939) << 16 | 16);

/* E_alreadyDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)4053) << 16 | 0);

/* E_exception__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)4101) << 16 | 0);

/* E_noIsr__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C = (((xdc_runtime_Error_Id)4306) << 16 | 0);

/* E_NMI__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C = (((xdc_runtime_Error_Id)4334) << 16 | 0);

/* E_hardFault__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C = (((xdc_runtime_Error_Id)4344) << 16 | 0);

/* E_memFault__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C = (((xdc_runtime_Error_Id)4360) << 16 | 0);

/* E_busFault__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C = (((xdc_runtime_Error_Id)4390) << 16 | 0);

/* E_usageFault__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C = (((xdc_runtime_Error_Id)4420) << 16 | 0);

/* E_svCall__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C = (((xdc_runtime_Error_Id)4437) << 16 | 0);

/* E_debugMon__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C = (((xdc_runtime_Error_Id)4458) << 16 | 0);

/* E_reserved__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C = (((xdc_runtime_Error_Id)4473) << 16 | 0);

/* excHookFunc__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)0);

/* excHookFuncs__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs)ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A);

/* disablePriority__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20;

/* priGroup__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C = (xdc_UInt)0x0;

/* dispatchTable__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatchTable ti_sysbios_family_arm_m3_Hwi_dispatchTable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_dispatchTable)0);

/* priorities__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priorities ti_sysbios_family_arm_m3_Hwi_priorities__C = ((CT__ti_sysbios_family_arm_m3_Hwi_priorities)ti_sysbios_family_arm_m3_Hwi_priorities__A);

/* swiDisable__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* ccr__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C = (xdc_UInt32)0x200;

/* hooks__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};

/* excHandlerFunc__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerMax__I));


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x802b;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x802c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8041;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8042;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)3581) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = 0;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)3891) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Timer_Params ti_sysbios_hal_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V = {
    {&ti_sysbios_hal_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Timer_TimerProxy_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* pi */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsEnabled ti_sysbios_hal_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsIncluded ti_sysbios_hal_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsMask ti_sysbios_hal_Timer_Module__diagsMask__C = ((CT__ti_sysbios_hal_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gateObj ti_sysbios_hal_Timer_Module__gateObj__C = ((CT__ti_sysbios_hal_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gatePrms ti_sysbios_hal_Timer_Module__gatePrms__C = ((CT__ti_sysbios_hal_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__id ti_sysbios_hal_Timer_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerDefined ti_sysbios_hal_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerObj ti_sysbios_hal_Timer_Module__loggerObj__C = ((CT__ti_sysbios_hal_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn0 ti_sysbios_hal_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn1 ti_sysbios_hal_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn2 ti_sysbios_hal_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn4 ti_sysbios_hal_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn8 ti_sysbios_hal_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__startupDoneFxn ti_sysbios_hal_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__count ti_sysbios_hal_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__heap ti_sysbios_hal_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__sizeof ti_sysbios_hal_Timer_Object__sizeof__C = sizeof(ti_sysbios_hal_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__table ti_sysbios_hal_Timer_Object__table__C = ti_sysbios_hal_Timer_Object__table__V;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x1000)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8031;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)2444) << 16 | 16);

/* A_heapSize__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)2480) << 16 | 16);

/* A_align__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)2525) << 16 | 16);

/* E_memory__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)4672) << 16 | 0);

/* A_invalidFree__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)2416) << 16 | 16);

/* reqAlign__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_hal_Timer_Handle)&ti_sysbios_hal_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt32)0x0,  /* periodCounts */
    (xdc_UInt)0x0,  /* numTickSkip */
    (xdc_UInt32)0x0,  /* skipsWorkFunc */
    0,  /* inWorkFunc */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)4926) << 16 | 1024);

/* LM_tick__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)4948) << 16 | 768);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)4966) << 16 | 768);

/* A_clockDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)559) << 16 | 16);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)640) << 16 | 16);

/* tickSource__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((CT__ti_sysbios_knl_Event_Module__diagsMask)((void*)&ti_sysbios_knl_Event_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((CT__ti_sysbios_knl_Event_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((CT__ti_sysbios_knl_Event_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((CT__ti_sysbios_knl_Event_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_runtime_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn0)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn1)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn2)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn4)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn8)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__startupDoneFxn ti_sysbios_knl_Event_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Event_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = 0;

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)4998) << 16 | 768);

/* LM_pend__C */
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)5052) << 16 | 768);

/* A_nullEventMasks__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)710) << 16 | 16);

/* A_nullEventId__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)757) << 16 | 16);

/* A_eventInUse__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)796) << 16 | 16);

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)839) << 16 | 16);

/* A_pendTaskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)902) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_utils_Load_idleFxn__E)),  /* [1] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2] = {
    (xdc_UInt)0x0,  /* [0] */
    (xdc_UInt)0x0,  /* [1] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {2, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {2, ((__T1_ti_sysbios_knl_Idle_coreList*)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x8023;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)((void*)&ti_sysbios_knl_Semaphore_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x8024;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_runtime_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)5133) << 16 | 768);

/* LM_pend__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)5163) << 16 | 768);

/* A_noEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)1050) << 16 | 16);

/* A_invTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1105) << 16 | 16);

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)839) << 16 | 16);

/* A_overflow__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1170) << 16 | 16);

/* A_pendTaskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1224) << 16 | 16);

/* supportsEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* eventPost__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8025;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)5206) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)5253) << 16 | 512);

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)5271) << 16 | 768);

/* A_swiDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1318) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1375) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[2];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
        (xdc_runtime_Text_CordAddr)(xdc_runtime_Text_charTab__A+8829) /* __name */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* [0] */
};

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[2] = {
    {
        ((xdc_Void(*)(xdc_Int))0),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,xdc_runtime_Error_Block*))0),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_knl_Task_checkStacks)),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* deleteFxn */
    },  /* [0] */
    {
        ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_utils_Load_taskRegHook__E)),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,xdc_runtime_Error_Block*))((xdc_Fxn)ti_sysbios_utils_Load_taskCreateHook__E)),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_utils_Load_taskSwitchHook__E)),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_utils_Load_taskDeleteHook__E)),  /* deleteFxn */
    },  /* [1] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)((void*)&ti_sysbios_knl_Task_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_runtime_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5311) << 16 | 768);

/* LM_sleep__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)5379) << 16 | 768);

/* LD_ready__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)5424) << 16 | 512);

/* LD_block__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)5465) << 16 | 512);

/* LM_yield__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)5497) << 16 | 768);

/* LM_setPri__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)5545) << 16 | 768);

/* LD_exit__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)5601) << 16 | 512);

/* LM_setAffinity__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)5632) << 16 | 768);

/* LM_schedule__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)5715) << 16 | 1024);

/* LM_noWork__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)5801) << 16 | 1024);

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)3928) << 16 | 0);

/* E_spOutOfBounds__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)3971) << 16 | 0);

/* E_deleteNotAllowed__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)4022) << 16 | 0);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1424) << 16 | 16);

/* A_badTaskState__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1493) << 16 | 16);

/* A_noPendElem__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1547) << 16 | 16);

/* A_taskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1601) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1664) << 16 | 16);

/* A_badTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1714) << 16 | 16);

/* A_badAffinity__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1749) << 16 | 16);

/* A_sleepTaskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1782) << 16 | 16);

/* A_invalidCoreId__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)1866) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* deleteTerminatedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {2, ((__T1_ti_sysbios_knl_Task_hooks*)ti_sysbios_knl_Task_hooks__A)};

/* numConstructedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.utils.Load INITIALIZERS ========
 */

/* Module__root__V */
ti_sysbios_utils_Load_Module__ ti_sysbios_utils_Load_Module__root__V = {
    2048,  /* mask */
};

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1] = {
    (xdc_UInt32)0x0,  /* [0] */
};

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_utils_Load_Module_State_0_taskEnv__A */
__T1_ti_sysbios_utils_Load_Module_State__taskEnv ti_sysbios_utils_Load_Module_State_0_taskEnv__A[1] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* [0] */
};

/* Module__state__V */
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V = {
    (xdc_Int)0x0,  /* taskHId */
    ((void*)ti_sysbios_utils_Load_Module_State_0_taskStartTime__A),  /* taskStartTime */
    (xdc_UInt32)0x0,  /* timeElapsed */
    ((void*)ti_sysbios_utils_Load_Module_State_0_runningTask__A),  /* runningTask */
    0,  /* firstSwitchDone */
    (xdc_UInt32)0x0,  /* swiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* swiEnv */
    ((void*)ti_sysbios_utils_Load_Module_State_0_taskEnv__A),  /* taskEnv */
    (xdc_UInt32)0x0,  /* swiCnt */
    (xdc_UInt32)0x0,  /* hwiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* hwiEnv */
    (xdc_UInt32)0x0,  /* hwiCnt */
    (xdc_UInt32)0x0,  /* timeSlotCnt */
    (xdc_UInt32)0xffffffff,  /* minLoop */
    (xdc_UInt32)0x0,  /* minIdle */
    (xdc_UInt32)0x0,  /* t0 */
    (xdc_UInt32)0x0,  /* idleCnt */
    (xdc_UInt32)0x0,  /* cpuLoad */
    (xdc_UInt32)0x1,  /* taskEnvLen */
    (xdc_UInt32)0x0,  /* taskNum */
    0,  /* powerEnabled */
    (xdc_UInt32)0x0,  /* idleStartTime */
    (xdc_UInt32)0x0,  /* busyStartTime */
    (xdc_UInt32)0x0,  /* busyTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_taskList */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsEnabled ti_sysbios_utils_Load_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsIncluded ti_sysbios_utils_Load_Module__diagsIncluded__C = (xdc_Bits32)0x890;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsMask ti_sysbios_utils_Load_Module__diagsMask__C = ((CT__ti_sysbios_utils_Load_Module__diagsMask)((void*)&ti_sysbios_utils_Load_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__gateObj ti_sysbios_utils_Load_Module__gateObj__C = ((CT__ti_sysbios_utils_Load_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__gatePrms ti_sysbios_utils_Load_Module__gatePrms__C = ((CT__ti_sysbios_utils_Load_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__id ti_sysbios_utils_Load_Module__id__C = (xdc_Bits16)0x8044;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerDefined ti_sysbios_utils_Load_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerObj ti_sysbios_utils_Load_Module__loggerObj__C = ((CT__ti_sysbios_utils_Load_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_runtime_LoggerStopMode_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn0 ti_sysbios_utils_Load_Module__loggerFxn0__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn0)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn1 ti_sysbios_utils_Load_Module__loggerFxn1__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn1)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn2 ti_sysbios_utils_Load_Module__loggerFxn2__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn2)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn4 ti_sysbios_utils_Load_Module__loggerFxn4__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn4)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn8 ti_sysbios_utils_Load_Module__loggerFxn8__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn8)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__startupDoneFxn ti_sysbios_utils_Load_Module__startupDoneFxn__C = ((CT__ti_sysbios_utils_Load_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_utils_Load_Object__count ti_sysbios_utils_Load_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_utils_Load_Object__heap ti_sysbios_utils_Load_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_utils_Load_Object__sizeof ti_sysbios_utils_Load_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_utils_Load_Object__table ti_sysbios_utils_Load_Object__table__C = 0;

/* LS_cpuLoad__C */
__FAR__ const CT__ti_sysbios_utils_Load_LS_cpuLoad ti_sysbios_utils_Load_LS_cpuLoad__C = (((xdc_runtime_Log_Event)8232) << 16 | 2048);

/* LS_hwiLoad__C */
__FAR__ const CT__ti_sysbios_utils_Load_LS_hwiLoad ti_sysbios_utils_Load_LS_hwiLoad__C = (((xdc_runtime_Log_Event)8249) << 16 | 2048);

/* LS_swiLoad__C */
__FAR__ const CT__ti_sysbios_utils_Load_LS_swiLoad ti_sysbios_utils_Load_LS_swiLoad__C = (((xdc_runtime_Log_Event)8267) << 16 | 2048);

/* LS_taskLoad__C */
__FAR__ const CT__ti_sysbios_utils_Load_LS_taskLoad ti_sysbios_utils_Load_LS_taskLoad__C = (((xdc_runtime_Log_Event)8285) << 16 | 2048);

/* postUpdate__C */
__FAR__ const CT__ti_sysbios_utils_Load_postUpdate ti_sysbios_utils_Load_postUpdate__C = ((CT__ti_sysbios_utils_Load_postUpdate)0);

/* updateInIdle__C */
__FAR__ const CT__ti_sysbios_utils_Load_updateInIdle ti_sysbios_utils_Load_updateInIdle__C = 1;

/* windowInMs__C */
__FAR__ const CT__ti_sysbios_utils_Load_windowInMs ti_sysbios_utils_Load_windowInMs__C = (xdc_UInt)0x1f4;

/* hwiEnabled__C */
__FAR__ const CT__ti_sysbios_utils_Load_hwiEnabled ti_sysbios_utils_Load_hwiEnabled__C = 0;

/* swiEnabled__C */
__FAR__ const CT__ti_sysbios_utils_Load_swiEnabled ti_sysbios_utils_Load_swiEnabled__C = 0;

/* taskEnabled__C */
__FAR__ const CT__ti_sysbios_utils_Load_taskEnabled ti_sysbios_utils_Load_taskEnabled__C = 1;

/* autoAddTasks__C */
__FAR__ const CT__ti_sysbios_utils_Load_autoAddTasks ti_sysbios_utils_Load_autoAddTasks__C = 1;


/*
 * ======== ti.uia.events.DvtTypes INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsEnabled ti_uia_events_DvtTypes_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsIncluded ti_uia_events_DvtTypes_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsMask ti_uia_events_DvtTypes_Module__diagsMask__C = ((CT__ti_uia_events_DvtTypes_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gateObj ti_uia_events_DvtTypes_Module__gateObj__C = ((CT__ti_uia_events_DvtTypes_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gatePrms ti_uia_events_DvtTypes_Module__gatePrms__C = ((CT__ti_uia_events_DvtTypes_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__id ti_uia_events_DvtTypes_Module__id__C = (xdc_Bits16)0x8034;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerDefined ti_uia_events_DvtTypes_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerObj ti_uia_events_DvtTypes_Module__loggerObj__C = ((CT__ti_uia_events_DvtTypes_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn0 ti_uia_events_DvtTypes_Module__loggerFxn0__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn1 ti_uia_events_DvtTypes_Module__loggerFxn1__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn2 ti_uia_events_DvtTypes_Module__loggerFxn2__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn4 ti_uia_events_DvtTypes_Module__loggerFxn4__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn8 ti_uia_events_DvtTypes_Module__loggerFxn8__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__startupDoneFxn ti_uia_events_DvtTypes_Module__startupDoneFxn__C = ((CT__ti_uia_events_DvtTypes_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Object__count ti_uia_events_DvtTypes_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Object__heap ti_uia_events_DvtTypes_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Object__sizeof ti_uia_events_DvtTypes_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Object__table ti_uia_events_DvtTypes_Object__table__C = 0;


/*
 * ======== ti.uia.events.UIABenchmark INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__diagsEnabled ti_uia_events_UIABenchmark_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__diagsIncluded ti_uia_events_UIABenchmark_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__diagsMask ti_uia_events_UIABenchmark_Module__diagsMask__C = ((CT__ti_uia_events_UIABenchmark_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__gateObj ti_uia_events_UIABenchmark_Module__gateObj__C = ((CT__ti_uia_events_UIABenchmark_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__gatePrms ti_uia_events_UIABenchmark_Module__gatePrms__C = ((CT__ti_uia_events_UIABenchmark_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__id ti_uia_events_UIABenchmark_Module__id__C = (xdc_Bits16)0x8035;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerDefined ti_uia_events_UIABenchmark_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerObj ti_uia_events_UIABenchmark_Module__loggerObj__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn0 ti_uia_events_UIABenchmark_Module__loggerFxn0__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn1 ti_uia_events_UIABenchmark_Module__loggerFxn1__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn2 ti_uia_events_UIABenchmark_Module__loggerFxn2__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn4 ti_uia_events_UIABenchmark_Module__loggerFxn4__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn8 ti_uia_events_UIABenchmark_Module__loggerFxn8__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__startupDoneFxn ti_uia_events_UIABenchmark_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIABenchmark_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__count ti_uia_events_UIABenchmark_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__heap ti_uia_events_UIABenchmark_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__sizeof ti_uia_events_UIABenchmark_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__table ti_uia_events_UIABenchmark_Object__table__C = 0;

/* start__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_start ti_uia_events_UIABenchmark_start__C = (((xdc_runtime_Log_Event)5959) << 16 | 32768);

/* stop__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_stop ti_uia_events_UIABenchmark_stop__C = (((xdc_runtime_Log_Event)5971) << 16 | 32768);

/* startInstance__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_startInstance ti_uia_events_UIABenchmark_startInstance__C = (((xdc_runtime_Log_Event)5982) << 16 | 32768);

/* stopInstance__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_stopInstance ti_uia_events_UIABenchmark_stopInstance__C = (((xdc_runtime_Log_Event)6002) << 16 | 32768);

/* startInstanceWithAdrs__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_startInstanceWithAdrs ti_uia_events_UIABenchmark_startInstanceWithAdrs__C = (((xdc_runtime_Log_Event)6021) << 16 | 32768);

/* stopInstanceWithAdrs__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_stopInstanceWithAdrs ti_uia_events_UIABenchmark_stopInstanceWithAdrs__C = (((xdc_runtime_Log_Event)6048) << 16 | 32768);

/* startInstanceWithStr__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_startInstanceWithStr ti_uia_events_UIABenchmark_startInstanceWithStr__C = (((xdc_runtime_Log_Event)6074) << 16 | 32768);

/* stopInstanceWithStr__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_stopInstanceWithStr ti_uia_events_UIABenchmark_stopInstanceWithStr__C = (((xdc_runtime_Log_Event)6100) << 16 | 32768);


/*
 * ======== ti.uia.events.UIAErr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsEnabled ti_uia_events_UIAErr_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsIncluded ti_uia_events_UIAErr_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsMask ti_uia_events_UIAErr_Module__diagsMask__C = ((CT__ti_uia_events_UIAErr_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__gateObj ti_uia_events_UIAErr_Module__gateObj__C = ((CT__ti_uia_events_UIAErr_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__gatePrms ti_uia_events_UIAErr_Module__gatePrms__C = ((CT__ti_uia_events_UIAErr_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__id ti_uia_events_UIAErr_Module__id__C = (xdc_Bits16)0x8036;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerDefined ti_uia_events_UIAErr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerObj ti_uia_events_UIAErr_Module__loggerObj__C = ((CT__ti_uia_events_UIAErr_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn0 ti_uia_events_UIAErr_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn1 ti_uia_events_UIAErr_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn2 ti_uia_events_UIAErr_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn4 ti_uia_events_UIAErr_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn8 ti_uia_events_UIAErr_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__startupDoneFxn ti_uia_events_UIAErr_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAErr_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_UIAErr_Object__count ti_uia_events_UIAErr_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_UIAErr_Object__heap ti_uia_events_UIAErr_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_UIAErr_Object__sizeof ti_uia_events_UIAErr_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_UIAErr_Object__table ti_uia_events_UIAErr_Object__table__C = 0;

/* error__C */
__FAR__ const CT__ti_uia_events_UIAErr_error ti_uia_events_UIAErr_error__C = (((xdc_runtime_Log_Event)6125) << 16 | 192);

/* errorWithStr__C */
__FAR__ const CT__ti_uia_events_UIAErr_errorWithStr ti_uia_events_UIAErr_errorWithStr__C = (((xdc_runtime_Log_Event)6147) << 16 | 192);

/* hwError__C */
__FAR__ const CT__ti_uia_events_UIAErr_hwError ti_uia_events_UIAErr_hwError__C = (((xdc_runtime_Log_Event)6174) << 16 | 192);

/* hwErrorWithStr__C */
__FAR__ const CT__ti_uia_events_UIAErr_hwErrorWithStr ti_uia_events_UIAErr_hwErrorWithStr__C = (((xdc_runtime_Log_Event)6199) << 16 | 192);

/* fatal__C */
__FAR__ const CT__ti_uia_events_UIAErr_fatal ti_uia_events_UIAErr_fatal__C = (((xdc_runtime_Log_Event)6229) << 16 | 128);

/* fatalWithStr__C */
__FAR__ const CT__ti_uia_events_UIAErr_fatalWithStr ti_uia_events_UIAErr_fatalWithStr__C = (((xdc_runtime_Log_Event)6257) << 16 | 128);

/* critical__C */
__FAR__ const CT__ti_uia_events_UIAErr_critical ti_uia_events_UIAErr_critical__C = (((xdc_runtime_Log_Event)6290) << 16 | 160);

/* criticalWithStr__C */
__FAR__ const CT__ti_uia_events_UIAErr_criticalWithStr ti_uia_events_UIAErr_criticalWithStr__C = (((xdc_runtime_Log_Event)6321) << 16 | 160);

/* exception__C */
__FAR__ const CT__ti_uia_events_UIAErr_exception ti_uia_events_UIAErr_exception__C = (((xdc_runtime_Log_Event)6357) << 16 | 192);

/* uncaughtException__C */
__FAR__ const CT__ti_uia_events_UIAErr_uncaughtException ti_uia_events_UIAErr_uncaughtException__C = (((xdc_runtime_Log_Event)6382) << 16 | 192);

/* nullPointerException__C */
__FAR__ const CT__ti_uia_events_UIAErr_nullPointerException ti_uia_events_UIAErr_nullPointerException__C = (((xdc_runtime_Log_Event)6416) << 16 | 192);

/* unexpectedInterrupt__C */
__FAR__ const CT__ti_uia_events_UIAErr_unexpectedInterrupt ti_uia_events_UIAErr_unexpectedInterrupt__C = (((xdc_runtime_Log_Event)6454) << 16 | 192);

/* memoryAccessFault__C */
__FAR__ const CT__ti_uia_events_UIAErr_memoryAccessFault ti_uia_events_UIAErr_memoryAccessFault__C = (((xdc_runtime_Log_Event)6490) << 16 | 192);

/* securityException__C */
__FAR__ const CT__ti_uia_events_UIAErr_securityException ti_uia_events_UIAErr_securityException__C = (((xdc_runtime_Log_Event)6536) << 16 | 192);

/* divisionByZero__C */
__FAR__ const CT__ti_uia_events_UIAErr_divisionByZero ti_uia_events_UIAErr_divisionByZero__C = (((xdc_runtime_Log_Event)6570) << 16 | 192);

/* overflowException__C */
__FAR__ const CT__ti_uia_events_UIAErr_overflowException ti_uia_events_UIAErr_overflowException__C = (((xdc_runtime_Log_Event)6602) << 16 | 192);

/* indexOutOfRange__C */
__FAR__ const CT__ti_uia_events_UIAErr_indexOutOfRange ti_uia_events_UIAErr_indexOutOfRange__C = (((xdc_runtime_Log_Event)6636) << 16 | 192);

/* notImplemented__C */
__FAR__ const CT__ti_uia_events_UIAErr_notImplemented ti_uia_events_UIAErr_notImplemented__C = (((xdc_runtime_Log_Event)6682) << 16 | 192);

/* stackOverflow__C */
__FAR__ const CT__ti_uia_events_UIAErr_stackOverflow ti_uia_events_UIAErr_stackOverflow__C = (((xdc_runtime_Log_Event)6747) << 16 | 160);

/* illegalInstruction__C */
__FAR__ const CT__ti_uia_events_UIAErr_illegalInstruction ti_uia_events_UIAErr_illegalInstruction__C = (((xdc_runtime_Log_Event)6786) << 16 | 192);

/* entryPointNotFound__C */
__FAR__ const CT__ti_uia_events_UIAErr_entryPointNotFound ti_uia_events_UIAErr_entryPointNotFound__C = (((xdc_runtime_Log_Event)6830) << 16 | 192);

/* moduleNotFound__C */
__FAR__ const CT__ti_uia_events_UIAErr_moduleNotFound ti_uia_events_UIAErr_moduleNotFound__C = (((xdc_runtime_Log_Event)6867) << 16 | 192);

/* floatingPointError__C */
__FAR__ const CT__ti_uia_events_UIAErr_floatingPointError ti_uia_events_UIAErr_floatingPointError__C = (((xdc_runtime_Log_Event)6916) << 16 | 192);

/* invalidParameter__C */
__FAR__ const CT__ti_uia_events_UIAErr_invalidParameter ti_uia_events_UIAErr_invalidParameter__C = (((xdc_runtime_Log_Event)6952) << 16 | 192);


/*
 * ======== ti.uia.events.UIAEvt INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsEnabled ti_uia_events_UIAEvt_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsIncluded ti_uia_events_UIAEvt_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsMask ti_uia_events_UIAEvt_Module__diagsMask__C = ((CT__ti_uia_events_UIAEvt_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gateObj ti_uia_events_UIAEvt_Module__gateObj__C = ((CT__ti_uia_events_UIAEvt_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gatePrms ti_uia_events_UIAEvt_Module__gatePrms__C = ((CT__ti_uia_events_UIAEvt_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__id ti_uia_events_UIAEvt_Module__id__C = (xdc_Bits16)0x8037;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerDefined ti_uia_events_UIAEvt_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerObj ti_uia_events_UIAEvt_Module__loggerObj__C = ((CT__ti_uia_events_UIAEvt_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn0 ti_uia_events_UIAEvt_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn1 ti_uia_events_UIAEvt_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn2 ti_uia_events_UIAEvt_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn4 ti_uia_events_UIAEvt_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn8 ti_uia_events_UIAEvt_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__startupDoneFxn ti_uia_events_UIAEvt_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAEvt_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Object__count ti_uia_events_UIAEvt_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Object__heap ti_uia_events_UIAEvt_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Object__sizeof ti_uia_events_UIAEvt_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Object__table ti_uia_events_UIAEvt_Object__table__C = 0;

/* warning__C */
__FAR__ const CT__ti_uia_events_UIAEvt_warning ti_uia_events_UIAEvt_warning__C = (((xdc_runtime_Log_Event)7015) << 16 | 224);

/* warningWithStr__C */
__FAR__ const CT__ti_uia_events_UIAEvt_warningWithStr ti_uia_events_UIAEvt_warningWithStr__C = (((xdc_runtime_Log_Event)7039) << 16 | 224);

/* info__C */
__FAR__ const CT__ti_uia_events_UIAEvt_info ti_uia_events_UIAEvt_info__C = (((xdc_runtime_Log_Event)7068) << 16 | 16384);

/* infoWithStr__C */
__FAR__ const CT__ti_uia_events_UIAEvt_infoWithStr ti_uia_events_UIAEvt_infoWithStr__C = (((xdc_runtime_Log_Event)7090) << 16 | 16384);

/* detail__C */
__FAR__ const CT__ti_uia_events_UIAEvt_detail ti_uia_events_UIAEvt_detail__C = (((xdc_runtime_Log_Event)7117) << 16 | 16480);

/* detailWithStr__C */
__FAR__ const CT__ti_uia_events_UIAEvt_detailWithStr ti_uia_events_UIAEvt_detailWithStr__C = (((xdc_runtime_Log_Event)7140) << 16 | 16480);

/* intWithKey__C */
__FAR__ const CT__ti_uia_events_UIAEvt_intWithKey ti_uia_events_UIAEvt_intWithKey__C = (((xdc_runtime_Log_Event)7169) << 16 | 32768);


/*
 * ======== ti.uia.events.UIARoundtrip INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__diagsEnabled ti_uia_events_UIARoundtrip_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__diagsIncluded ti_uia_events_UIARoundtrip_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__diagsMask ti_uia_events_UIARoundtrip_Module__diagsMask__C = ((CT__ti_uia_events_UIARoundtrip_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__gateObj ti_uia_events_UIARoundtrip_Module__gateObj__C = ((CT__ti_uia_events_UIARoundtrip_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__gatePrms ti_uia_events_UIARoundtrip_Module__gatePrms__C = ((CT__ti_uia_events_UIARoundtrip_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__id ti_uia_events_UIARoundtrip_Module__id__C = (xdc_Bits16)0x8038;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerDefined ti_uia_events_UIARoundtrip_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerObj ti_uia_events_UIARoundtrip_Module__loggerObj__C = ((CT__ti_uia_events_UIARoundtrip_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn0 ti_uia_events_UIARoundtrip_Module__loggerFxn0__C = ((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn1 ti_uia_events_UIARoundtrip_Module__loggerFxn1__C = ((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn2 ti_uia_events_UIARoundtrip_Module__loggerFxn2__C = ((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn4 ti_uia_events_UIARoundtrip_Module__loggerFxn4__C = ((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn8 ti_uia_events_UIARoundtrip_Module__loggerFxn8__C = ((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__startupDoneFxn ti_uia_events_UIARoundtrip_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIARoundtrip_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Object__count ti_uia_events_UIARoundtrip_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Object__heap ti_uia_events_UIARoundtrip_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Object__sizeof ti_uia_events_UIARoundtrip_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Object__table ti_uia_events_UIARoundtrip_Object__table__C = 0;

/* start__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_start ti_uia_events_UIARoundtrip_start__C = (((xdc_runtime_Log_Event)7203) << 16 | 32768);

/* stop__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_stop ti_uia_events_UIARoundtrip_stop__C = (((xdc_runtime_Log_Event)7224) << 16 | 32768);

/* startInstance__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_startInstance ti_uia_events_UIARoundtrip_startInstance__C = (((xdc_runtime_Log_Event)7244) << 16 | 32768);

/* stopInstance__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_stopInstance ti_uia_events_UIARoundtrip_stopInstance__C = (((xdc_runtime_Log_Event)7273) << 16 | 32768);

/* startInstanceWithAdrs__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_startInstanceWithAdrs ti_uia_events_UIARoundtrip_startInstanceWithAdrs__C = (((xdc_runtime_Log_Event)7301) << 16 | 32768);

/* stopInstanceWithAdrs__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_stopInstanceWithAdrs ti_uia_events_UIARoundtrip_stopInstanceWithAdrs__C = (((xdc_runtime_Log_Event)7338) << 16 | 32768);

/* startInstanceWithStr__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_startInstanceWithStr ti_uia_events_UIARoundtrip_startInstanceWithStr__C = (((xdc_runtime_Log_Event)7374) << 16 | 32768);

/* stopInstanceWithStr__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_stopInstanceWithStr ti_uia_events_UIARoundtrip_stopInstanceWithStr__C = (((xdc_runtime_Log_Event)7410) << 16 | 32768);


/*
 * ======== ti.uia.events.UIAStatistic INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__diagsEnabled ti_uia_events_UIAStatistic_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__diagsIncluded ti_uia_events_UIAStatistic_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__diagsMask ti_uia_events_UIAStatistic_Module__diagsMask__C = ((CT__ti_uia_events_UIAStatistic_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__gateObj ti_uia_events_UIAStatistic_Module__gateObj__C = ((CT__ti_uia_events_UIAStatistic_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__gatePrms ti_uia_events_UIAStatistic_Module__gatePrms__C = ((CT__ti_uia_events_UIAStatistic_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__id ti_uia_events_UIAStatistic_Module__id__C = (xdc_Bits16)0x8039;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerDefined ti_uia_events_UIAStatistic_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerObj ti_uia_events_UIAStatistic_Module__loggerObj__C = ((CT__ti_uia_events_UIAStatistic_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerFxn0 ti_uia_events_UIAStatistic_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAStatistic_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerFxn1 ti_uia_events_UIAStatistic_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAStatistic_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerFxn2 ti_uia_events_UIAStatistic_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAStatistic_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerFxn4 ti_uia_events_UIAStatistic_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAStatistic_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerFxn8 ti_uia_events_UIAStatistic_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAStatistic_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__startupDoneFxn ti_uia_events_UIAStatistic_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAStatistic_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Object__count ti_uia_events_UIAStatistic_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Object__heap ti_uia_events_UIAStatistic_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Object__sizeof ti_uia_events_UIAStatistic_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Object__table ti_uia_events_UIAStatistic_Object__table__C = 0;

/* cpuLoad__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_cpuLoad ti_uia_events_UIAStatistic_cpuLoad__C = (((xdc_runtime_Log_Event)7445) << 16 | 32768);

/* cpuLoadByInstance__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_cpuLoadByInstance ti_uia_events_UIAStatistic_cpuLoadByInstance__C = (((xdc_runtime_Log_Event)7468) << 16 | 32768);

/* bytesProcessed__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_bytesProcessed ti_uia_events_UIAStatistic_bytesProcessed__C = (((xdc_runtime_Log_Event)7518) << 16 | 32768);

/* bytesProcessedByInstance__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_bytesProcessedByInstance ti_uia_events_UIAStatistic_bytesProcessedByInstance__C = (((xdc_runtime_Log_Event)7555) << 16 | 32768);

/* wordsProcessed__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_wordsProcessed ti_uia_events_UIAStatistic_wordsProcessed__C = (((xdc_runtime_Log_Event)7610) << 16 | 32768);

/* wordsProcessedByInstance__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_wordsProcessedByInstance ti_uia_events_UIAStatistic_wordsProcessedByInstance__C = (((xdc_runtime_Log_Event)7647) << 16 | 32768);

/* freeBytes__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_freeBytes ti_uia_events_UIAStatistic_freeBytes__C = (((xdc_runtime_Log_Event)7702) << 16 | 32768);


/*
 * ======== ti.uia.events.UIASync INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__diagsEnabled ti_uia_events_UIASync_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__diagsIncluded ti_uia_events_UIASync_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__diagsMask ti_uia_events_UIASync_Module__diagsMask__C = ((CT__ti_uia_events_UIASync_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__gateObj ti_uia_events_UIASync_Module__gateObj__C = ((CT__ti_uia_events_UIASync_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__gatePrms ti_uia_events_UIASync_Module__gatePrms__C = ((CT__ti_uia_events_UIASync_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__id ti_uia_events_UIASync_Module__id__C = (xdc_Bits16)0x803a;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerDefined ti_uia_events_UIASync_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerObj ti_uia_events_UIASync_Module__loggerObj__C = ((CT__ti_uia_events_UIASync_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerFxn0 ti_uia_events_UIASync_Module__loggerFxn0__C = ((CT__ti_uia_events_UIASync_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerFxn1 ti_uia_events_UIASync_Module__loggerFxn1__C = ((CT__ti_uia_events_UIASync_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerFxn2 ti_uia_events_UIASync_Module__loggerFxn2__C = ((CT__ti_uia_events_UIASync_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerFxn4 ti_uia_events_UIASync_Module__loggerFxn4__C = ((CT__ti_uia_events_UIASync_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerFxn8 ti_uia_events_UIASync_Module__loggerFxn8__C = ((CT__ti_uia_events_UIASync_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__startupDoneFxn ti_uia_events_UIASync_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIASync_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_UIASync_Object__count ti_uia_events_UIASync_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_UIASync_Object__heap ti_uia_events_UIASync_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_UIASync_Object__sizeof ti_uia_events_UIASync_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_UIASync_Object__table ti_uia_events_UIASync_Object__table__C = 0;

/* syncPoint__C */
__FAR__ const CT__ti_uia_events_UIASync_syncPoint ti_uia_events_UIASync_syncPoint__C = (((xdc_runtime_Log_Event)7743) << 16 | 32768);

/* syncPointAfterHalt__C */
__FAR__ const CT__ti_uia_events_UIASync_syncPointAfterHalt ti_uia_events_UIASync_syncPointAfterHalt__C = (((xdc_runtime_Log_Event)7900) << 16 | 32768);

/* globalTimerFreq__C */
__FAR__ const CT__ti_uia_events_UIASync_globalTimerFreq ti_uia_events_UIASync_globalTimerFreq__C = (((xdc_runtime_Log_Event)8068) << 16 | 32768);

/* syncPointUserProvidedData__C */
__FAR__ const CT__ti_uia_events_UIASync_syncPointUserProvidedData ti_uia_events_UIASync_syncPointUserProvidedData__C = (((xdc_runtime_Log_Event)8187) << 16 | 32768);


/*
 * ======== ti.uia.runtime.LogSync INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_runtime_LogSync_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_uia_runtime_LogSync_Params ti_uia_runtime_LogSync_Object__PARAMS__C = {
    sizeof (ti_uia_runtime_LogSync_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_uia_runtime_LogSync_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_uia_runtime_LogSync_Module__ ti_uia_runtime_LogSync_Module__root__V = {
    {&ti_uia_runtime_LogSync_Module__root__V.link,  /* link.next */
    &ti_uia_runtime_LogSync_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
ti_uia_runtime_LogSync_Module_State__ ti_uia_runtime_LogSync_Module__state__V = {
    (xdc_UInt32)0x0,  /* numTimesHalted */
    (xdc_UInt32)0x1,  /* serialNumber */
    1,  /* isEnabled */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__diagsEnabled ti_uia_runtime_LogSync_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__diagsIncluded ti_uia_runtime_LogSync_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__diagsMask ti_uia_runtime_LogSync_Module__diagsMask__C = ((CT__ti_uia_runtime_LogSync_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__gateObj ti_uia_runtime_LogSync_Module__gateObj__C = ((CT__ti_uia_runtime_LogSync_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__gatePrms ti_uia_runtime_LogSync_Module__gatePrms__C = ((CT__ti_uia_runtime_LogSync_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__id ti_uia_runtime_LogSync_Module__id__C = (xdc_Bits16)0x803c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerDefined ti_uia_runtime_LogSync_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerObj ti_uia_runtime_LogSync_Module__loggerObj__C = ((CT__ti_uia_runtime_LogSync_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerFxn0 ti_uia_runtime_LogSync_Module__loggerFxn0__C = ((CT__ti_uia_runtime_LogSync_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerFxn1 ti_uia_runtime_LogSync_Module__loggerFxn1__C = ((CT__ti_uia_runtime_LogSync_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerFxn2 ti_uia_runtime_LogSync_Module__loggerFxn2__C = ((CT__ti_uia_runtime_LogSync_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerFxn4 ti_uia_runtime_LogSync_Module__loggerFxn4__C = ((CT__ti_uia_runtime_LogSync_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerFxn8 ti_uia_runtime_LogSync_Module__loggerFxn8__C = ((CT__ti_uia_runtime_LogSync_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__startupDoneFxn ti_uia_runtime_LogSync_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_LogSync_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Object__count ti_uia_runtime_LogSync_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Object__heap ti_uia_runtime_LogSync_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Object__sizeof ti_uia_runtime_LogSync_Object__sizeof__C = sizeof(ti_uia_runtime_LogSync_Object__);

/* Object__table__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Object__table ti_uia_runtime_LogSync_Object__table__C = 0;

/* injectIntoTraceFxn__C */
__FAR__ const CT__ti_uia_runtime_LogSync_injectIntoTraceFxn ti_uia_runtime_LogSync_injectIntoTraceFxn__C = ((CT__ti_uia_runtime_LogSync_injectIntoTraceFxn)0);

/* cpuTimestampCyclesPerTick__C */
__FAR__ const CT__ti_uia_runtime_LogSync_cpuTimestampCyclesPerTick ti_uia_runtime_LogSync_cpuTimestampCyclesPerTick__C = (xdc_UInt32)0x1;

/* globalTimestampCpuCyclesPerTick__C */
__FAR__ const CT__ti_uia_runtime_LogSync_globalTimestampCpuCyclesPerTick ti_uia_runtime_LogSync_globalTimestampCpuCyclesPerTick__C = (xdc_UInt32)0x0;

/* maxGlobalClockFreq__C */
__FAR__ const CT__ti_uia_runtime_LogSync_maxGlobalClockFreq ti_uia_runtime_LogSync_maxGlobalClockFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x0,  /* lo */
};


/*
 * ======== ti.uia.runtime.LogSync_CpuTimestampProxy INITIALIZERS ========
 */


/*
 * ======== ti.uia.runtime.LogSync_GlobalTimestampProxy INITIALIZERS ========
 */


/*
 * ======== ti.uia.runtime.LoggerStopMode INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_runtime_LoggerStopMode_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_uia_runtime_LoggerStopMode_Params ti_uia_runtime_LoggerStopMode_Object__PARAMS__C = {
    sizeof (ti_uia_runtime_LoggerStopMode_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_uia_runtime_LoggerStopMode_Object__PARAMS__C.__iprms, /* instance */
    ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
    ti_uia_runtime_IUIATransfer_Priority_STANDARD,  /* priority */
    (xdc_SizeT)0x200,  /* transferBufSize */
    (xdc_SizeT)0x80,  /* maxEventSize */
    1,  /* exitFlush */
    0,  /* bufHeap */
    (xdc_Int)0x1,  /* numCores */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A */
__T1_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[640];

/* --> ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A */
__T1_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[1152];

/* --> ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A */
__T1_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[1152];

/* Module__root__V */
ti_uia_runtime_LoggerStopMode_Module__ ti_uia_runtime_LoggerStopMode_Module__root__V = {
    {&ti_uia_runtime_LoggerStopMode_Module__root__V.link,  /* link.next */
    &ti_uia_runtime_LoggerStopMode_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_uia_runtime_LoggerStopMode_Object__ ti_uia_runtime_LoggerStopMode_Object__table__V[3] = {
    {/* instance#0 */
        &ti_uia_runtime_LoggerStopMode_Module__FXNS__C,
        {
            (xdc_Int)0x2c,  /* structSize */
            ((ti_uia_runtime_QueueDescriptor_Header*)0),  /* next */
            ti_uia_runtime_QueueDescriptor_QueueType_TOHOST_EVENT_OVERFLOW_BUFFER,  /* queueType */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[0])),  /* readPtr */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[0])),  /* writePtr */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[0])),  /* queueStartAdrs */
            (xdc_SizeT)0x200,  /* queueSizeInMAUs */
            (xdc_UInt)0x1,  /* instanceId */
            (xdc_UInt)0x803d,  /* ownerModuleId */
            (xdc_UInt)0x1,  /* priority */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Object__table__V[0].droppedEvents)),  /* numDroppedCtrAdrs */
        },  /* hdr */
        0,  /* bufHeap */
        (xdc_SizeT)0x20,  /* maxEventSizeInBits32 */
        (xdc_Bits16)0x1,  /* serial */
        ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
        1,  /* enabled */
        1,  /* flush */
        (xdc_Int)0x0,  /* droppedEvents */
        ((xdc_Ptr)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[0])),  /* queueStartAdrs */
        (xdc_SizeT)0x200,  /* queueSizeInMAUs */
        ((xdc_Ptr)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[512])),  /* endOfBufferAdrsPlus1 */
        ((void*)ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A),  /* bufferArray */
        (xdc_Int)0x1,  /* numCores */
    },
    {/* instance#1 */
        &ti_uia_runtime_LoggerStopMode_Module__FXNS__C,
        {
            (xdc_Int)0x2c,  /* structSize */
            ((ti_uia_runtime_QueueDescriptor_Header*)0),  /* next */
            ti_uia_runtime_QueueDescriptor_QueueType_TOHOST_EVENT_OVERFLOW_BUFFER,  /* queueType */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[0])),  /* readPtr */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[0])),  /* writePtr */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[0])),  /* queueStartAdrs */
            (xdc_SizeT)0x400,  /* queueSizeInMAUs */
            (xdc_UInt)0x2,  /* instanceId */
            (xdc_UInt)0x803d,  /* ownerModuleId */
            (xdc_UInt)0x1,  /* priority */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Object__table__V[1].droppedEvents)),  /* numDroppedCtrAdrs */
        },  /* hdr */
        0,  /* bufHeap */
        (xdc_SizeT)0x20,  /* maxEventSizeInBits32 */
        (xdc_Bits16)0x1,  /* serial */
        ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
        1,  /* enabled */
        1,  /* flush */
        (xdc_Int)0x0,  /* droppedEvents */
        ((xdc_Ptr)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[0])),  /* queueStartAdrs */
        (xdc_SizeT)0x400,  /* queueSizeInMAUs */
        ((xdc_Ptr)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[1024])),  /* endOfBufferAdrsPlus1 */
        ((void*)ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A),  /* bufferArray */
        (xdc_Int)0x1,  /* numCores */
    },
    {/* instance#2 */
        &ti_uia_runtime_LoggerStopMode_Module__FXNS__C,
        {
            (xdc_Int)0x2c,  /* structSize */
            ((ti_uia_runtime_QueueDescriptor_Header*)0),  /* next */
            ti_uia_runtime_QueueDescriptor_QueueType_TOHOST_EVENT_OVERFLOW_BUFFER,  /* queueType */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[0])),  /* readPtr */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[0])),  /* writePtr */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[0])),  /* queueStartAdrs */
            (xdc_SizeT)0x400,  /* queueSizeInMAUs */
            (xdc_UInt)0x3,  /* instanceId */
            (xdc_UInt)0x803d,  /* ownerModuleId */
            (xdc_UInt)0x1,  /* priority */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Object__table__V[2].droppedEvents)),  /* numDroppedCtrAdrs */
        },  /* hdr */
        0,  /* bufHeap */
        (xdc_SizeT)0x20,  /* maxEventSizeInBits32 */
        (xdc_Bits16)0x1,  /* serial */
        ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
        1,  /* enabled */
        1,  /* flush */
        (xdc_Int)0x0,  /* droppedEvents */
        ((xdc_Ptr)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[0])),  /* queueStartAdrs */
        (xdc_SizeT)0x400,  /* queueSizeInMAUs */
        ((xdc_Ptr)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[1024])),  /* endOfBufferAdrsPlus1 */
        ((void*)ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A),  /* bufferArray */
        (xdc_Int)0x1,  /* numCores */
    },
};

/* Module__state__V */
ti_uia_runtime_LoggerStopMode_Module_State__ ti_uia_runtime_LoggerStopMode_Module__state__V = {
    (xdc_Bits16)0x0,  /* level1 */
    (xdc_Bits16)0x0,  /* level2 */
    (xdc_Bits16)0x0,  /* level3 */
    (xdc_Bits16)0xffff,  /* moduleIdToRouteToStatusLogger */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__diagsEnabled ti_uia_runtime_LoggerStopMode_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__diagsIncluded ti_uia_runtime_LoggerStopMode_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__diagsMask ti_uia_runtime_LoggerStopMode_Module__diagsMask__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__gateObj ti_uia_runtime_LoggerStopMode_Module__gateObj__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__gatePrms ti_uia_runtime_LoggerStopMode_Module__gatePrms__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__id ti_uia_runtime_LoggerStopMode_Module__id__C = (xdc_Bits16)0x803d;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerDefined ti_uia_runtime_LoggerStopMode_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerObj ti_uia_runtime_LoggerStopMode_Module__loggerObj__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn0 ti_uia_runtime_LoggerStopMode_Module__loggerFxn0__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn1 ti_uia_runtime_LoggerStopMode_Module__loggerFxn1__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn2 ti_uia_runtime_LoggerStopMode_Module__loggerFxn2__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn4 ti_uia_runtime_LoggerStopMode_Module__loggerFxn4__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn8 ti_uia_runtime_LoggerStopMode_Module__loggerFxn8__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__startupDoneFxn ti_uia_runtime_LoggerStopMode_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Object__count ti_uia_runtime_LoggerStopMode_Object__count__C = 3;

/* Object__heap__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Object__heap ti_uia_runtime_LoggerStopMode_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Object__sizeof ti_uia_runtime_LoggerStopMode_Object__sizeof__C = sizeof(ti_uia_runtime_LoggerStopMode_Object__);

/* Object__table__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Object__table ti_uia_runtime_LoggerStopMode_Object__table__C = ti_uia_runtime_LoggerStopMode_Object__table__V;

/* filterByLevel__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_filterByLevel ti_uia_runtime_LoggerStopMode_filterByLevel__C = 0;

/* E_badLevel__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_E_badLevel ti_uia_runtime_LoggerStopMode_E_badLevel__C = (((xdc_runtime_Error_Id)3719) << 16 | 0);

/* isTimestampEnabled__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_isTimestampEnabled ti_uia_runtime_LoggerStopMode_isTimestampEnabled__C = 1;

/* enableFlush__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_enableFlush ti_uia_runtime_LoggerStopMode_enableFlush__C = 0;

/* statusLogger__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_statusLogger ti_uia_runtime_LoggerStopMode_statusLogger__C = 0;

/* overflowLogger__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_overflowLogger ti_uia_runtime_LoggerStopMode_overflowLogger__C = 0;

/* level1Mask__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_level1Mask ti_uia_runtime_LoggerStopMode_level1Mask__C = (xdc_Bits16)0x0;

/* level2Mask__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_level2Mask ti_uia_runtime_LoggerStopMode_level2Mask__C = (xdc_Bits16)0x0;

/* level3Mask__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_level3Mask ti_uia_runtime_LoggerStopMode_level3Mask__C = (xdc_Bits16)0x0;

/* level4Mask__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_level4Mask ti_uia_runtime_LoggerStopMode_level4Mask__C = (xdc_Bits16)0xff87;


/*
 * ======== ti.uia.runtime.QueueDescriptor INITIALIZERS ========
 */

/* Module__state__V */
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V = {
    ((xdc_Ptr)0),  /* mPtrToFirstDescriptor */
    (xdc_UInt)0x0,  /* mUpdateCount */
    (xdc_UInt32)0x5555,  /* is5555ifInitialized */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsEnabled ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsIncluded ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask ti_uia_runtime_QueueDescriptor_Module__diagsMask__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gateObj ti_uia_runtime_QueueDescriptor_Module__gateObj__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms ti_uia_runtime_QueueDescriptor_Module__gatePrms__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__id ti_uia_runtime_QueueDescriptor_Module__id__C = (xdc_Bits16)0x803e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerDefined ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj ti_uia_runtime_QueueDescriptor_Module__loggerObj__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0 ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1 ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2 ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4 ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8 ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__count ti_uia_runtime_QueueDescriptor_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__heap ti_uia_runtime_QueueDescriptor_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__sizeof ti_uia_runtime_QueueDescriptor_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__table ti_uia_runtime_QueueDescriptor_Object__table__C = 0;


/*
 * ======== ti.uia.runtime.UIAMetaData INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsEnabled ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsIncluded ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsMask ti_uia_runtime_UIAMetaData_Module__diagsMask__C = ((CT__ti_uia_runtime_UIAMetaData_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gateObj ti_uia_runtime_UIAMetaData_Module__gateObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gatePrms ti_uia_runtime_UIAMetaData_Module__gatePrms__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__id ti_uia_runtime_UIAMetaData_Module__id__C = (xdc_Bits16)0x803f;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerDefined ti_uia_runtime_UIAMetaData_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerObj ti_uia_runtime_UIAMetaData_Module__loggerObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0 ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1 ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2 ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4 ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8 ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__count ti_uia_runtime_UIAMetaData_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__heap ti_uia_runtime_UIAMetaData_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__sizeof ti_uia_runtime_UIAMetaData_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__table ti_uia_runtime_UIAMetaData_Object__table__C = 0;


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3651) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 1;

/* dictBase__C */
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)((void*)&xdc_runtime_Diags_dictElems[0]));


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* E_generic__C */
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3673) << 16 | 0);

/* E_memory__C */
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3677) << 16 | 0);

/* E_msgCode__C */
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3711) << 16 | 0);

/* policy__C */
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)4750) << 16 | 4);

/* L_create__C */
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)4774) << 16 | 4);

/* L_destruct__C */
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)4795) << 16 | 4);

/* L_delete__C */
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)4814) << 16 | 4);

/* L_error__C */
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)4831) << 16 | 192);

/* L_warning__C */
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)4845) << 16 | 224);

/* L_info__C */
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)4861) << 16 | 16384);

/* L_start__C */
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)4868) << 16 | 32768);

/* L_stop__C */
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)4879) << 16 | 32768);

/* L_startInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)4889) << 16 | 32768);

/* L_stopInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)4908) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V = {
    65408,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0xff90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)((void*)&xdc_runtime_Main_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_runtime_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_runtime_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[5] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_catalog_arm_cortexm4_tiva_ce_Boot_init__I)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [2] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_initNVIC__E)),  /* [3] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_enableTimers__I)),  /* [4] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)xdc_runtime_System_lastFxn__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_lm4_TimestampProvider_startTimer__E)),  /* [1] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[12] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Timer_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_uia_runtime_LogSync_Module_startup__E)),  /* [10] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_uia_runtime_LoggerStopMode_Module_startup__E)),  /* [11] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[12] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    1,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
    1,  /* [11] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {5, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {2, ((__T1_xdc_runtime_Startup_lastFxns*)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((CT__xdc_runtime_SysMin_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((CT__xdc_runtime_SysMin_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((CT__xdc_runtime_SysMin_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((CT__xdc_runtime_SysMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__startupDoneFxn xdc_runtime_SysMin_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysMin_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = 0;

/* bufSize__C */
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x400;

/* flushAtExit__C */
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((CT__xdc_runtime_SysMin_outputFxn)0);

/* outputFunc__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((CT__xdc_runtime_SysMin_outputFunc)((xdc_Fxn)xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
    ((xdc_Void(*)(xdc_Int))0),  /* [4] */
    ((xdc_Void(*)(xdc_Int))0),  /* [5] */
    ((xdc_Void(*)(xdc_Int))0),  /* [6] */
    ((xdc_Void(*)(xdc_Int))0),  /* [7] */
};

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
    (xdc_Int)0xcafe,  /* exitStatus */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x8;

/* extendFxn__C */
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[8904] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x6d,  /* [402] */
    (xdc_Char)0x75,  /* [403] */
    (xdc_Char)0x73,  /* [404] */
    (xdc_Char)0x74,  /* [405] */
    (xdc_Char)0x55,  /* [406] */
    (xdc_Char)0x73,  /* [407] */
    (xdc_Char)0x65,  /* [408] */
    (xdc_Char)0x45,  /* [409] */
    (xdc_Char)0x6e,  /* [410] */
    (xdc_Char)0x68,  /* [411] */
    (xdc_Char)0x61,  /* [412] */
    (xdc_Char)0x6e,  /* [413] */
    (xdc_Char)0x63,  /* [414] */
    (xdc_Char)0x65,  /* [415] */
    (xdc_Char)0x64,  /* [416] */
    (xdc_Char)0x43,  /* [417] */
    (xdc_Char)0x6c,  /* [418] */
    (xdc_Char)0x6f,  /* [419] */
    (xdc_Char)0x63,  /* [420] */
    (xdc_Char)0x6b,  /* [421] */
    (xdc_Char)0x4d,  /* [422] */
    (xdc_Char)0x6f,  /* [423] */
    (xdc_Char)0x64,  /* [424] */
    (xdc_Char)0x65,  /* [425] */
    (xdc_Char)0x3a,  /* [426] */
    (xdc_Char)0x20,  /* [427] */
    (xdc_Char)0x54,  /* [428] */
    (xdc_Char)0x68,  /* [429] */
    (xdc_Char)0x69,  /* [430] */
    (xdc_Char)0x73,  /* [431] */
    (xdc_Char)0x20,  /* [432] */
    (xdc_Char)0x64,  /* [433] */
    (xdc_Char)0x65,  /* [434] */
    (xdc_Char)0x76,  /* [435] */
    (xdc_Char)0x69,  /* [436] */
    (xdc_Char)0x63,  /* [437] */
    (xdc_Char)0x65,  /* [438] */
    (xdc_Char)0x20,  /* [439] */
    (xdc_Char)0x72,  /* [440] */
    (xdc_Char)0x65,  /* [441] */
    (xdc_Char)0x71,  /* [442] */
    (xdc_Char)0x75,  /* [443] */
    (xdc_Char)0x69,  /* [444] */
    (xdc_Char)0x72,  /* [445] */
    (xdc_Char)0x65,  /* [446] */
    (xdc_Char)0x73,  /* [447] */
    (xdc_Char)0x20,  /* [448] */
    (xdc_Char)0x74,  /* [449] */
    (xdc_Char)0x68,  /* [450] */
    (xdc_Char)0x65,  /* [451] */
    (xdc_Char)0x20,  /* [452] */
    (xdc_Char)0x45,  /* [453] */
    (xdc_Char)0x6e,  /* [454] */
    (xdc_Char)0x68,  /* [455] */
    (xdc_Char)0x61,  /* [456] */
    (xdc_Char)0x6e,  /* [457] */
    (xdc_Char)0x63,  /* [458] */
    (xdc_Char)0x65,  /* [459] */
    (xdc_Char)0x64,  /* [460] */
    (xdc_Char)0x20,  /* [461] */
    (xdc_Char)0x43,  /* [462] */
    (xdc_Char)0x6c,  /* [463] */
    (xdc_Char)0x6f,  /* [464] */
    (xdc_Char)0x63,  /* [465] */
    (xdc_Char)0x6b,  /* [466] */
    (xdc_Char)0x20,  /* [467] */
    (xdc_Char)0x4d,  /* [468] */
    (xdc_Char)0x6f,  /* [469] */
    (xdc_Char)0x64,  /* [470] */
    (xdc_Char)0x65,  /* [471] */
    (xdc_Char)0x2e,  /* [472] */
    (xdc_Char)0x0,  /* [473] */
    (xdc_Char)0x41,  /* [474] */
    (xdc_Char)0x5f,  /* [475] */
    (xdc_Char)0x6d,  /* [476] */
    (xdc_Char)0x75,  /* [477] */
    (xdc_Char)0x73,  /* [478] */
    (xdc_Char)0x74,  /* [479] */
    (xdc_Char)0x4e,  /* [480] */
    (xdc_Char)0x6f,  /* [481] */
    (xdc_Char)0x74,  /* [482] */
    (xdc_Char)0x55,  /* [483] */
    (xdc_Char)0x73,  /* [484] */
    (xdc_Char)0x65,  /* [485] */
    (xdc_Char)0x45,  /* [486] */
    (xdc_Char)0x6e,  /* [487] */
    (xdc_Char)0x68,  /* [488] */
    (xdc_Char)0x61,  /* [489] */
    (xdc_Char)0x6e,  /* [490] */
    (xdc_Char)0x63,  /* [491] */
    (xdc_Char)0x65,  /* [492] */
    (xdc_Char)0x64,  /* [493] */
    (xdc_Char)0x43,  /* [494] */
    (xdc_Char)0x6c,  /* [495] */
    (xdc_Char)0x6f,  /* [496] */
    (xdc_Char)0x63,  /* [497] */
    (xdc_Char)0x6b,  /* [498] */
    (xdc_Char)0x4d,  /* [499] */
    (xdc_Char)0x6f,  /* [500] */
    (xdc_Char)0x64,  /* [501] */
    (xdc_Char)0x65,  /* [502] */
    (xdc_Char)0x3a,  /* [503] */
    (xdc_Char)0x20,  /* [504] */
    (xdc_Char)0x54,  /* [505] */
    (xdc_Char)0x68,  /* [506] */
    (xdc_Char)0x69,  /* [507] */
    (xdc_Char)0x73,  /* [508] */
    (xdc_Char)0x20,  /* [509] */
    (xdc_Char)0x64,  /* [510] */
    (xdc_Char)0x65,  /* [511] */
    (xdc_Char)0x76,  /* [512] */
    (xdc_Char)0x69,  /* [513] */
    (xdc_Char)0x63,  /* [514] */
    (xdc_Char)0x65,  /* [515] */
    (xdc_Char)0x20,  /* [516] */
    (xdc_Char)0x64,  /* [517] */
    (xdc_Char)0x6f,  /* [518] */
    (xdc_Char)0x65,  /* [519] */
    (xdc_Char)0x73,  /* [520] */
    (xdc_Char)0x20,  /* [521] */
    (xdc_Char)0x6e,  /* [522] */
    (xdc_Char)0x6f,  /* [523] */
    (xdc_Char)0x74,  /* [524] */
    (xdc_Char)0x20,  /* [525] */
    (xdc_Char)0x73,  /* [526] */
    (xdc_Char)0x75,  /* [527] */
    (xdc_Char)0x70,  /* [528] */
    (xdc_Char)0x70,  /* [529] */
    (xdc_Char)0x6f,  /* [530] */
    (xdc_Char)0x72,  /* [531] */
    (xdc_Char)0x74,  /* [532] */
    (xdc_Char)0x20,  /* [533] */
    (xdc_Char)0x74,  /* [534] */
    (xdc_Char)0x68,  /* [535] */
    (xdc_Char)0x65,  /* [536] */
    (xdc_Char)0x20,  /* [537] */
    (xdc_Char)0x45,  /* [538] */
    (xdc_Char)0x6e,  /* [539] */
    (xdc_Char)0x68,  /* [540] */
    (xdc_Char)0x61,  /* [541] */
    (xdc_Char)0x6e,  /* [542] */
    (xdc_Char)0x63,  /* [543] */
    (xdc_Char)0x65,  /* [544] */
    (xdc_Char)0x64,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x43,  /* [547] */
    (xdc_Char)0x6c,  /* [548] */
    (xdc_Char)0x6f,  /* [549] */
    (xdc_Char)0x63,  /* [550] */
    (xdc_Char)0x6b,  /* [551] */
    (xdc_Char)0x20,  /* [552] */
    (xdc_Char)0x4d,  /* [553] */
    (xdc_Char)0x6f,  /* [554] */
    (xdc_Char)0x64,  /* [555] */
    (xdc_Char)0x65,  /* [556] */
    (xdc_Char)0x2e,  /* [557] */
    (xdc_Char)0x0,  /* [558] */
    (xdc_Char)0x41,  /* [559] */
    (xdc_Char)0x5f,  /* [560] */
    (xdc_Char)0x63,  /* [561] */
    (xdc_Char)0x6c,  /* [562] */
    (xdc_Char)0x6f,  /* [563] */
    (xdc_Char)0x63,  /* [564] */
    (xdc_Char)0x6b,  /* [565] */
    (xdc_Char)0x44,  /* [566] */
    (xdc_Char)0x69,  /* [567] */
    (xdc_Char)0x73,  /* [568] */
    (xdc_Char)0x61,  /* [569] */
    (xdc_Char)0x62,  /* [570] */
    (xdc_Char)0x6c,  /* [571] */
    (xdc_Char)0x65,  /* [572] */
    (xdc_Char)0x64,  /* [573] */
    (xdc_Char)0x3a,  /* [574] */
    (xdc_Char)0x20,  /* [575] */
    (xdc_Char)0x43,  /* [576] */
    (xdc_Char)0x61,  /* [577] */
    (xdc_Char)0x6e,  /* [578] */
    (xdc_Char)0x6e,  /* [579] */
    (xdc_Char)0x6f,  /* [580] */
    (xdc_Char)0x74,  /* [581] */
    (xdc_Char)0x20,  /* [582] */
    (xdc_Char)0x63,  /* [583] */
    (xdc_Char)0x72,  /* [584] */
    (xdc_Char)0x65,  /* [585] */
    (xdc_Char)0x61,  /* [586] */
    (xdc_Char)0x74,  /* [587] */
    (xdc_Char)0x65,  /* [588] */
    (xdc_Char)0x20,  /* [589] */
    (xdc_Char)0x61,  /* [590] */
    (xdc_Char)0x20,  /* [591] */
    (xdc_Char)0x63,  /* [592] */
    (xdc_Char)0x6c,  /* [593] */
    (xdc_Char)0x6f,  /* [594] */
    (xdc_Char)0x63,  /* [595] */
    (xdc_Char)0x6b,  /* [596] */
    (xdc_Char)0x20,  /* [597] */
    (xdc_Char)0x69,  /* [598] */
    (xdc_Char)0x6e,  /* [599] */
    (xdc_Char)0x73,  /* [600] */
    (xdc_Char)0x74,  /* [601] */
    (xdc_Char)0x61,  /* [602] */
    (xdc_Char)0x6e,  /* [603] */
    (xdc_Char)0x63,  /* [604] */
    (xdc_Char)0x65,  /* [605] */
    (xdc_Char)0x20,  /* [606] */
    (xdc_Char)0x77,  /* [607] */
    (xdc_Char)0x68,  /* [608] */
    (xdc_Char)0x65,  /* [609] */
    (xdc_Char)0x6e,  /* [610] */
    (xdc_Char)0x20,  /* [611] */
    (xdc_Char)0x42,  /* [612] */
    (xdc_Char)0x49,  /* [613] */
    (xdc_Char)0x4f,  /* [614] */
    (xdc_Char)0x53,  /* [615] */
    (xdc_Char)0x2e,  /* [616] */
    (xdc_Char)0x63,  /* [617] */
    (xdc_Char)0x6c,  /* [618] */
    (xdc_Char)0x6f,  /* [619] */
    (xdc_Char)0x63,  /* [620] */
    (xdc_Char)0x6b,  /* [621] */
    (xdc_Char)0x45,  /* [622] */
    (xdc_Char)0x6e,  /* [623] */
    (xdc_Char)0x61,  /* [624] */
    (xdc_Char)0x62,  /* [625] */
    (xdc_Char)0x6c,  /* [626] */
    (xdc_Char)0x65,  /* [627] */
    (xdc_Char)0x64,  /* [628] */
    (xdc_Char)0x20,  /* [629] */
    (xdc_Char)0x69,  /* [630] */
    (xdc_Char)0x73,  /* [631] */
    (xdc_Char)0x20,  /* [632] */
    (xdc_Char)0x66,  /* [633] */
    (xdc_Char)0x61,  /* [634] */
    (xdc_Char)0x6c,  /* [635] */
    (xdc_Char)0x73,  /* [636] */
    (xdc_Char)0x65,  /* [637] */
    (xdc_Char)0x2e,  /* [638] */
    (xdc_Char)0x0,  /* [639] */
    (xdc_Char)0x41,  /* [640] */
    (xdc_Char)0x5f,  /* [641] */
    (xdc_Char)0x62,  /* [642] */
    (xdc_Char)0x61,  /* [643] */
    (xdc_Char)0x64,  /* [644] */
    (xdc_Char)0x54,  /* [645] */
    (xdc_Char)0x68,  /* [646] */
    (xdc_Char)0x72,  /* [647] */
    (xdc_Char)0x65,  /* [648] */
    (xdc_Char)0x61,  /* [649] */
    (xdc_Char)0x64,  /* [650] */
    (xdc_Char)0x54,  /* [651] */
    (xdc_Char)0x79,  /* [652] */
    (xdc_Char)0x70,  /* [653] */
    (xdc_Char)0x65,  /* [654] */
    (xdc_Char)0x3a,  /* [655] */
    (xdc_Char)0x20,  /* [656] */
    (xdc_Char)0x43,  /* [657] */
    (xdc_Char)0x61,  /* [658] */
    (xdc_Char)0x6e,  /* [659] */
    (xdc_Char)0x6e,  /* [660] */
    (xdc_Char)0x6f,  /* [661] */
    (xdc_Char)0x74,  /* [662] */
    (xdc_Char)0x20,  /* [663] */
    (xdc_Char)0x63,  /* [664] */
    (xdc_Char)0x72,  /* [665] */
    (xdc_Char)0x65,  /* [666] */
    (xdc_Char)0x61,  /* [667] */
    (xdc_Char)0x74,  /* [668] */
    (xdc_Char)0x65,  /* [669] */
    (xdc_Char)0x2f,  /* [670] */
    (xdc_Char)0x64,  /* [671] */
    (xdc_Char)0x65,  /* [672] */
    (xdc_Char)0x6c,  /* [673] */
    (xdc_Char)0x65,  /* [674] */
    (xdc_Char)0x74,  /* [675] */
    (xdc_Char)0x65,  /* [676] */
    (xdc_Char)0x20,  /* [677] */
    (xdc_Char)0x61,  /* [678] */
    (xdc_Char)0x20,  /* [679] */
    (xdc_Char)0x43,  /* [680] */
    (xdc_Char)0x6c,  /* [681] */
    (xdc_Char)0x6f,  /* [682] */
    (xdc_Char)0x63,  /* [683] */
    (xdc_Char)0x6b,  /* [684] */
    (xdc_Char)0x20,  /* [685] */
    (xdc_Char)0x66,  /* [686] */
    (xdc_Char)0x72,  /* [687] */
    (xdc_Char)0x6f,  /* [688] */
    (xdc_Char)0x6d,  /* [689] */
    (xdc_Char)0x20,  /* [690] */
    (xdc_Char)0x48,  /* [691] */
    (xdc_Char)0x77,  /* [692] */
    (xdc_Char)0x69,  /* [693] */
    (xdc_Char)0x20,  /* [694] */
    (xdc_Char)0x6f,  /* [695] */
    (xdc_Char)0x72,  /* [696] */
    (xdc_Char)0x20,  /* [697] */
    (xdc_Char)0x53,  /* [698] */
    (xdc_Char)0x77,  /* [699] */
    (xdc_Char)0x69,  /* [700] */
    (xdc_Char)0x20,  /* [701] */
    (xdc_Char)0x74,  /* [702] */
    (xdc_Char)0x68,  /* [703] */
    (xdc_Char)0x72,  /* [704] */
    (xdc_Char)0x65,  /* [705] */
    (xdc_Char)0x61,  /* [706] */
    (xdc_Char)0x64,  /* [707] */
    (xdc_Char)0x2e,  /* [708] */
    (xdc_Char)0x0,  /* [709] */
    (xdc_Char)0x41,  /* [710] */
    (xdc_Char)0x5f,  /* [711] */
    (xdc_Char)0x6e,  /* [712] */
    (xdc_Char)0x75,  /* [713] */
    (xdc_Char)0x6c,  /* [714] */
    (xdc_Char)0x6c,  /* [715] */
    (xdc_Char)0x45,  /* [716] */
    (xdc_Char)0x76,  /* [717] */
    (xdc_Char)0x65,  /* [718] */
    (xdc_Char)0x6e,  /* [719] */
    (xdc_Char)0x74,  /* [720] */
    (xdc_Char)0x4d,  /* [721] */
    (xdc_Char)0x61,  /* [722] */
    (xdc_Char)0x73,  /* [723] */
    (xdc_Char)0x6b,  /* [724] */
    (xdc_Char)0x73,  /* [725] */
    (xdc_Char)0x3a,  /* [726] */
    (xdc_Char)0x20,  /* [727] */
    (xdc_Char)0x6f,  /* [728] */
    (xdc_Char)0x72,  /* [729] */
    (xdc_Char)0x4d,  /* [730] */
    (xdc_Char)0x61,  /* [731] */
    (xdc_Char)0x73,  /* [732] */
    (xdc_Char)0x6b,  /* [733] */
    (xdc_Char)0x20,  /* [734] */
    (xdc_Char)0x61,  /* [735] */
    (xdc_Char)0x6e,  /* [736] */
    (xdc_Char)0x64,  /* [737] */
    (xdc_Char)0x20,  /* [738] */
    (xdc_Char)0x61,  /* [739] */
    (xdc_Char)0x6e,  /* [740] */
    (xdc_Char)0x64,  /* [741] */
    (xdc_Char)0x4d,  /* [742] */
    (xdc_Char)0x61,  /* [743] */
    (xdc_Char)0x73,  /* [744] */
    (xdc_Char)0x6b,  /* [745] */
    (xdc_Char)0x20,  /* [746] */
    (xdc_Char)0x61,  /* [747] */
    (xdc_Char)0x72,  /* [748] */
    (xdc_Char)0x65,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x6e,  /* [751] */
    (xdc_Char)0x75,  /* [752] */
    (xdc_Char)0x6c,  /* [753] */
    (xdc_Char)0x6c,  /* [754] */
    (xdc_Char)0x2e,  /* [755] */
    (xdc_Char)0x0,  /* [756] */
    (xdc_Char)0x41,  /* [757] */
    (xdc_Char)0x5f,  /* [758] */
    (xdc_Char)0x6e,  /* [759] */
    (xdc_Char)0x75,  /* [760] */
    (xdc_Char)0x6c,  /* [761] */
    (xdc_Char)0x6c,  /* [762] */
    (xdc_Char)0x45,  /* [763] */
    (xdc_Char)0x76,  /* [764] */
    (xdc_Char)0x65,  /* [765] */
    (xdc_Char)0x6e,  /* [766] */
    (xdc_Char)0x74,  /* [767] */
    (xdc_Char)0x49,  /* [768] */
    (xdc_Char)0x64,  /* [769] */
    (xdc_Char)0x3a,  /* [770] */
    (xdc_Char)0x20,  /* [771] */
    (xdc_Char)0x70,  /* [772] */
    (xdc_Char)0x6f,  /* [773] */
    (xdc_Char)0x73,  /* [774] */
    (xdc_Char)0x74,  /* [775] */
    (xdc_Char)0x65,  /* [776] */
    (xdc_Char)0x64,  /* [777] */
    (xdc_Char)0x20,  /* [778] */
    (xdc_Char)0x65,  /* [779] */
    (xdc_Char)0x76,  /* [780] */
    (xdc_Char)0x65,  /* [781] */
    (xdc_Char)0x6e,  /* [782] */
    (xdc_Char)0x74,  /* [783] */
    (xdc_Char)0x49,  /* [784] */
    (xdc_Char)0x64,  /* [785] */
    (xdc_Char)0x20,  /* [786] */
    (xdc_Char)0x69,  /* [787] */
    (xdc_Char)0x73,  /* [788] */
    (xdc_Char)0x20,  /* [789] */
    (xdc_Char)0x6e,  /* [790] */
    (xdc_Char)0x75,  /* [791] */
    (xdc_Char)0x6c,  /* [792] */
    (xdc_Char)0x6c,  /* [793] */
    (xdc_Char)0x2e,  /* [794] */
    (xdc_Char)0x0,  /* [795] */
    (xdc_Char)0x41,  /* [796] */
    (xdc_Char)0x5f,  /* [797] */
    (xdc_Char)0x65,  /* [798] */
    (xdc_Char)0x76,  /* [799] */
    (xdc_Char)0x65,  /* [800] */
    (xdc_Char)0x6e,  /* [801] */
    (xdc_Char)0x74,  /* [802] */
    (xdc_Char)0x49,  /* [803] */
    (xdc_Char)0x6e,  /* [804] */
    (xdc_Char)0x55,  /* [805] */
    (xdc_Char)0x73,  /* [806] */
    (xdc_Char)0x65,  /* [807] */
    (xdc_Char)0x3a,  /* [808] */
    (xdc_Char)0x20,  /* [809] */
    (xdc_Char)0x45,  /* [810] */
    (xdc_Char)0x76,  /* [811] */
    (xdc_Char)0x65,  /* [812] */
    (xdc_Char)0x6e,  /* [813] */
    (xdc_Char)0x74,  /* [814] */
    (xdc_Char)0x20,  /* [815] */
    (xdc_Char)0x6f,  /* [816] */
    (xdc_Char)0x62,  /* [817] */
    (xdc_Char)0x6a,  /* [818] */
    (xdc_Char)0x65,  /* [819] */
    (xdc_Char)0x63,  /* [820] */
    (xdc_Char)0x74,  /* [821] */
    (xdc_Char)0x20,  /* [822] */
    (xdc_Char)0x61,  /* [823] */
    (xdc_Char)0x6c,  /* [824] */
    (xdc_Char)0x72,  /* [825] */
    (xdc_Char)0x65,  /* [826] */
    (xdc_Char)0x61,  /* [827] */
    (xdc_Char)0x64,  /* [828] */
    (xdc_Char)0x79,  /* [829] */
    (xdc_Char)0x20,  /* [830] */
    (xdc_Char)0x69,  /* [831] */
    (xdc_Char)0x6e,  /* [832] */
    (xdc_Char)0x20,  /* [833] */
    (xdc_Char)0x75,  /* [834] */
    (xdc_Char)0x73,  /* [835] */
    (xdc_Char)0x65,  /* [836] */
    (xdc_Char)0x2e,  /* [837] */
    (xdc_Char)0x0,  /* [838] */
    (xdc_Char)0x41,  /* [839] */
    (xdc_Char)0x5f,  /* [840] */
    (xdc_Char)0x62,  /* [841] */
    (xdc_Char)0x61,  /* [842] */
    (xdc_Char)0x64,  /* [843] */
    (xdc_Char)0x43,  /* [844] */
    (xdc_Char)0x6f,  /* [845] */
    (xdc_Char)0x6e,  /* [846] */
    (xdc_Char)0x74,  /* [847] */
    (xdc_Char)0x65,  /* [848] */
    (xdc_Char)0x78,  /* [849] */
    (xdc_Char)0x74,  /* [850] */
    (xdc_Char)0x3a,  /* [851] */
    (xdc_Char)0x20,  /* [852] */
    (xdc_Char)0x62,  /* [853] */
    (xdc_Char)0x61,  /* [854] */
    (xdc_Char)0x64,  /* [855] */
    (xdc_Char)0x20,  /* [856] */
    (xdc_Char)0x63,  /* [857] */
    (xdc_Char)0x61,  /* [858] */
    (xdc_Char)0x6c,  /* [859] */
    (xdc_Char)0x6c,  /* [860] */
    (xdc_Char)0x69,  /* [861] */
    (xdc_Char)0x6e,  /* [862] */
    (xdc_Char)0x67,  /* [863] */
    (xdc_Char)0x20,  /* [864] */
    (xdc_Char)0x63,  /* [865] */
    (xdc_Char)0x6f,  /* [866] */
    (xdc_Char)0x6e,  /* [867] */
    (xdc_Char)0x74,  /* [868] */
    (xdc_Char)0x65,  /* [869] */
    (xdc_Char)0x78,  /* [870] */
    (xdc_Char)0x74,  /* [871] */
    (xdc_Char)0x2e,  /* [872] */
    (xdc_Char)0x20,  /* [873] */
    (xdc_Char)0x4d,  /* [874] */
    (xdc_Char)0x75,  /* [875] */
    (xdc_Char)0x73,  /* [876] */
    (xdc_Char)0x74,  /* [877] */
    (xdc_Char)0x20,  /* [878] */
    (xdc_Char)0x62,  /* [879] */
    (xdc_Char)0x65,  /* [880] */
    (xdc_Char)0x20,  /* [881] */
    (xdc_Char)0x63,  /* [882] */
    (xdc_Char)0x61,  /* [883] */
    (xdc_Char)0x6c,  /* [884] */
    (xdc_Char)0x6c,  /* [885] */
    (xdc_Char)0x65,  /* [886] */
    (xdc_Char)0x64,  /* [887] */
    (xdc_Char)0x20,  /* [888] */
    (xdc_Char)0x66,  /* [889] */
    (xdc_Char)0x72,  /* [890] */
    (xdc_Char)0x6f,  /* [891] */
    (xdc_Char)0x6d,  /* [892] */
    (xdc_Char)0x20,  /* [893] */
    (xdc_Char)0x61,  /* [894] */
    (xdc_Char)0x20,  /* [895] */
    (xdc_Char)0x54,  /* [896] */
    (xdc_Char)0x61,  /* [897] */
    (xdc_Char)0x73,  /* [898] */
    (xdc_Char)0x6b,  /* [899] */
    (xdc_Char)0x2e,  /* [900] */
    (xdc_Char)0x0,  /* [901] */
    (xdc_Char)0x41,  /* [902] */
    (xdc_Char)0x5f,  /* [903] */
    (xdc_Char)0x70,  /* [904] */
    (xdc_Char)0x65,  /* [905] */
    (xdc_Char)0x6e,  /* [906] */
    (xdc_Char)0x64,  /* [907] */
    (xdc_Char)0x54,  /* [908] */
    (xdc_Char)0x61,  /* [909] */
    (xdc_Char)0x73,  /* [910] */
    (xdc_Char)0x6b,  /* [911] */
    (xdc_Char)0x44,  /* [912] */
    (xdc_Char)0x69,  /* [913] */
    (xdc_Char)0x73,  /* [914] */
    (xdc_Char)0x61,  /* [915] */
    (xdc_Char)0x62,  /* [916] */
    (xdc_Char)0x6c,  /* [917] */
    (xdc_Char)0x65,  /* [918] */
    (xdc_Char)0x64,  /* [919] */
    (xdc_Char)0x3a,  /* [920] */
    (xdc_Char)0x20,  /* [921] */
    (xdc_Char)0x43,  /* [922] */
    (xdc_Char)0x61,  /* [923] */
    (xdc_Char)0x6e,  /* [924] */
    (xdc_Char)0x6e,  /* [925] */
    (xdc_Char)0x6f,  /* [926] */
    (xdc_Char)0x74,  /* [927] */
    (xdc_Char)0x20,  /* [928] */
    (xdc_Char)0x63,  /* [929] */
    (xdc_Char)0x61,  /* [930] */
    (xdc_Char)0x6c,  /* [931] */
    (xdc_Char)0x6c,  /* [932] */
    (xdc_Char)0x20,  /* [933] */
    (xdc_Char)0x45,  /* [934] */
    (xdc_Char)0x76,  /* [935] */
    (xdc_Char)0x65,  /* [936] */
    (xdc_Char)0x6e,  /* [937] */
    (xdc_Char)0x74,  /* [938] */
    (xdc_Char)0x5f,  /* [939] */
    (xdc_Char)0x70,  /* [940] */
    (xdc_Char)0x65,  /* [941] */
    (xdc_Char)0x6e,  /* [942] */
    (xdc_Char)0x64,  /* [943] */
    (xdc_Char)0x28,  /* [944] */
    (xdc_Char)0x29,  /* [945] */
    (xdc_Char)0x20,  /* [946] */
    (xdc_Char)0x77,  /* [947] */
    (xdc_Char)0x68,  /* [948] */
    (xdc_Char)0x69,  /* [949] */
    (xdc_Char)0x6c,  /* [950] */
    (xdc_Char)0x65,  /* [951] */
    (xdc_Char)0x20,  /* [952] */
    (xdc_Char)0x74,  /* [953] */
    (xdc_Char)0x68,  /* [954] */
    (xdc_Char)0x65,  /* [955] */
    (xdc_Char)0x20,  /* [956] */
    (xdc_Char)0x54,  /* [957] */
    (xdc_Char)0x61,  /* [958] */
    (xdc_Char)0x73,  /* [959] */
    (xdc_Char)0x6b,  /* [960] */
    (xdc_Char)0x20,  /* [961] */
    (xdc_Char)0x6f,  /* [962] */
    (xdc_Char)0x72,  /* [963] */
    (xdc_Char)0x20,  /* [964] */
    (xdc_Char)0x53,  /* [965] */
    (xdc_Char)0x77,  /* [966] */
    (xdc_Char)0x69,  /* [967] */
    (xdc_Char)0x20,  /* [968] */
    (xdc_Char)0x73,  /* [969] */
    (xdc_Char)0x63,  /* [970] */
    (xdc_Char)0x68,  /* [971] */
    (xdc_Char)0x65,  /* [972] */
    (xdc_Char)0x64,  /* [973] */
    (xdc_Char)0x75,  /* [974] */
    (xdc_Char)0x6c,  /* [975] */
    (xdc_Char)0x65,  /* [976] */
    (xdc_Char)0x72,  /* [977] */
    (xdc_Char)0x20,  /* [978] */
    (xdc_Char)0x69,  /* [979] */
    (xdc_Char)0x73,  /* [980] */
    (xdc_Char)0x20,  /* [981] */
    (xdc_Char)0x64,  /* [982] */
    (xdc_Char)0x69,  /* [983] */
    (xdc_Char)0x73,  /* [984] */
    (xdc_Char)0x61,  /* [985] */
    (xdc_Char)0x62,  /* [986] */
    (xdc_Char)0x6c,  /* [987] */
    (xdc_Char)0x65,  /* [988] */
    (xdc_Char)0x64,  /* [989] */
    (xdc_Char)0x2e,  /* [990] */
    (xdc_Char)0x0,  /* [991] */
    (xdc_Char)0x4d,  /* [992] */
    (xdc_Char)0x61,  /* [993] */
    (xdc_Char)0x69,  /* [994] */
    (xdc_Char)0x6c,  /* [995] */
    (xdc_Char)0x62,  /* [996] */
    (xdc_Char)0x6f,  /* [997] */
    (xdc_Char)0x78,  /* [998] */
    (xdc_Char)0x5f,  /* [999] */
    (xdc_Char)0x63,  /* [1000] */
    (xdc_Char)0x72,  /* [1001] */
    (xdc_Char)0x65,  /* [1002] */
    (xdc_Char)0x61,  /* [1003] */
    (xdc_Char)0x74,  /* [1004] */
    (xdc_Char)0x65,  /* [1005] */
    (xdc_Char)0x27,  /* [1006] */
    (xdc_Char)0x73,  /* [1007] */
    (xdc_Char)0x20,  /* [1008] */
    (xdc_Char)0x62,  /* [1009] */
    (xdc_Char)0x75,  /* [1010] */
    (xdc_Char)0x66,  /* [1011] */
    (xdc_Char)0x53,  /* [1012] */
    (xdc_Char)0x69,  /* [1013] */
    (xdc_Char)0x7a,  /* [1014] */
    (xdc_Char)0x65,  /* [1015] */
    (xdc_Char)0x20,  /* [1016] */
    (xdc_Char)0x70,  /* [1017] */
    (xdc_Char)0x61,  /* [1018] */
    (xdc_Char)0x72,  /* [1019] */
    (xdc_Char)0x61,  /* [1020] */
    (xdc_Char)0x6d,  /* [1021] */
    (xdc_Char)0x65,  /* [1022] */
    (xdc_Char)0x74,  /* [1023] */
    (xdc_Char)0x65,  /* [1024] */
    (xdc_Char)0x72,  /* [1025] */
    (xdc_Char)0x20,  /* [1026] */
    (xdc_Char)0x69,  /* [1027] */
    (xdc_Char)0x73,  /* [1028] */
    (xdc_Char)0x20,  /* [1029] */
    (xdc_Char)0x69,  /* [1030] */
    (xdc_Char)0x6e,  /* [1031] */
    (xdc_Char)0x76,  /* [1032] */
    (xdc_Char)0x61,  /* [1033] */
    (xdc_Char)0x6c,  /* [1034] */
    (xdc_Char)0x69,  /* [1035] */
    (xdc_Char)0x64,  /* [1036] */
    (xdc_Char)0x20,  /* [1037] */
    (xdc_Char)0x28,  /* [1038] */
    (xdc_Char)0x74,  /* [1039] */
    (xdc_Char)0x6f,  /* [1040] */
    (xdc_Char)0x6f,  /* [1041] */
    (xdc_Char)0x20,  /* [1042] */
    (xdc_Char)0x73,  /* [1043] */
    (xdc_Char)0x6d,  /* [1044] */
    (xdc_Char)0x61,  /* [1045] */
    (xdc_Char)0x6c,  /* [1046] */
    (xdc_Char)0x6c,  /* [1047] */
    (xdc_Char)0x29,  /* [1048] */
    (xdc_Char)0x0,  /* [1049] */
    (xdc_Char)0x41,  /* [1050] */
    (xdc_Char)0x5f,  /* [1051] */
    (xdc_Char)0x6e,  /* [1052] */
    (xdc_Char)0x6f,  /* [1053] */
    (xdc_Char)0x45,  /* [1054] */
    (xdc_Char)0x76,  /* [1055] */
    (xdc_Char)0x65,  /* [1056] */
    (xdc_Char)0x6e,  /* [1057] */
    (xdc_Char)0x74,  /* [1058] */
    (xdc_Char)0x73,  /* [1059] */
    (xdc_Char)0x3a,  /* [1060] */
    (xdc_Char)0x20,  /* [1061] */
    (xdc_Char)0x54,  /* [1062] */
    (xdc_Char)0x68,  /* [1063] */
    (xdc_Char)0x65,  /* [1064] */
    (xdc_Char)0x20,  /* [1065] */
    (xdc_Char)0x45,  /* [1066] */
    (xdc_Char)0x76,  /* [1067] */
    (xdc_Char)0x65,  /* [1068] */
    (xdc_Char)0x6e,  /* [1069] */
    (xdc_Char)0x74,  /* [1070] */
    (xdc_Char)0x2e,  /* [1071] */
    (xdc_Char)0x73,  /* [1072] */
    (xdc_Char)0x75,  /* [1073] */
    (xdc_Char)0x70,  /* [1074] */
    (xdc_Char)0x70,  /* [1075] */
    (xdc_Char)0x6f,  /* [1076] */
    (xdc_Char)0x72,  /* [1077] */
    (xdc_Char)0x74,  /* [1078] */
    (xdc_Char)0x73,  /* [1079] */
    (xdc_Char)0x45,  /* [1080] */
    (xdc_Char)0x76,  /* [1081] */
    (xdc_Char)0x65,  /* [1082] */
    (xdc_Char)0x6e,  /* [1083] */
    (xdc_Char)0x74,  /* [1084] */
    (xdc_Char)0x73,  /* [1085] */
    (xdc_Char)0x20,  /* [1086] */
    (xdc_Char)0x66,  /* [1087] */
    (xdc_Char)0x6c,  /* [1088] */
    (xdc_Char)0x61,  /* [1089] */
    (xdc_Char)0x67,  /* [1090] */
    (xdc_Char)0x20,  /* [1091] */
    (xdc_Char)0x69,  /* [1092] */
    (xdc_Char)0x73,  /* [1093] */
    (xdc_Char)0x20,  /* [1094] */
    (xdc_Char)0x64,  /* [1095] */
    (xdc_Char)0x69,  /* [1096] */
    (xdc_Char)0x73,  /* [1097] */
    (xdc_Char)0x61,  /* [1098] */
    (xdc_Char)0x62,  /* [1099] */
    (xdc_Char)0x6c,  /* [1100] */
    (xdc_Char)0x65,  /* [1101] */
    (xdc_Char)0x64,  /* [1102] */
    (xdc_Char)0x2e,  /* [1103] */
    (xdc_Char)0x0,  /* [1104] */
    (xdc_Char)0x41,  /* [1105] */
    (xdc_Char)0x5f,  /* [1106] */
    (xdc_Char)0x69,  /* [1107] */
    (xdc_Char)0x6e,  /* [1108] */
    (xdc_Char)0x76,  /* [1109] */
    (xdc_Char)0x54,  /* [1110] */
    (xdc_Char)0x69,  /* [1111] */
    (xdc_Char)0x6d,  /* [1112] */
    (xdc_Char)0x65,  /* [1113] */
    (xdc_Char)0x6f,  /* [1114] */
    (xdc_Char)0x75,  /* [1115] */
    (xdc_Char)0x74,  /* [1116] */
    (xdc_Char)0x3a,  /* [1117] */
    (xdc_Char)0x20,  /* [1118] */
    (xdc_Char)0x43,  /* [1119] */
    (xdc_Char)0x61,  /* [1120] */
    (xdc_Char)0x6e,  /* [1121] */
    (xdc_Char)0x27,  /* [1122] */
    (xdc_Char)0x74,  /* [1123] */
    (xdc_Char)0x20,  /* [1124] */
    (xdc_Char)0x75,  /* [1125] */
    (xdc_Char)0x73,  /* [1126] */
    (xdc_Char)0x65,  /* [1127] */
    (xdc_Char)0x20,  /* [1128] */
    (xdc_Char)0x42,  /* [1129] */
    (xdc_Char)0x49,  /* [1130] */
    (xdc_Char)0x4f,  /* [1131] */
    (xdc_Char)0x53,  /* [1132] */
    (xdc_Char)0x5f,  /* [1133] */
    (xdc_Char)0x45,  /* [1134] */
    (xdc_Char)0x56,  /* [1135] */
    (xdc_Char)0x45,  /* [1136] */
    (xdc_Char)0x4e,  /* [1137] */
    (xdc_Char)0x54,  /* [1138] */
    (xdc_Char)0x5f,  /* [1139] */
    (xdc_Char)0x41,  /* [1140] */
    (xdc_Char)0x43,  /* [1141] */
    (xdc_Char)0x51,  /* [1142] */
    (xdc_Char)0x55,  /* [1143] */
    (xdc_Char)0x49,  /* [1144] */
    (xdc_Char)0x52,  /* [1145] */
    (xdc_Char)0x45,  /* [1146] */
    (xdc_Char)0x44,  /* [1147] */
    (xdc_Char)0x20,  /* [1148] */
    (xdc_Char)0x77,  /* [1149] */
    (xdc_Char)0x69,  /* [1150] */
    (xdc_Char)0x74,  /* [1151] */
    (xdc_Char)0x68,  /* [1152] */
    (xdc_Char)0x20,  /* [1153] */
    (xdc_Char)0x74,  /* [1154] */
    (xdc_Char)0x68,  /* [1155] */
    (xdc_Char)0x69,  /* [1156] */
    (xdc_Char)0x73,  /* [1157] */
    (xdc_Char)0x20,  /* [1158] */
    (xdc_Char)0x53,  /* [1159] */
    (xdc_Char)0x65,  /* [1160] */
    (xdc_Char)0x6d,  /* [1161] */
    (xdc_Char)0x61,  /* [1162] */
    (xdc_Char)0x70,  /* [1163] */
    (xdc_Char)0x68,  /* [1164] */
    (xdc_Char)0x6f,  /* [1165] */
    (xdc_Char)0x72,  /* [1166] */
    (xdc_Char)0x65,  /* [1167] */
    (xdc_Char)0x2e,  /* [1168] */
    (xdc_Char)0x0,  /* [1169] */
    (xdc_Char)0x41,  /* [1170] */
    (xdc_Char)0x5f,  /* [1171] */
    (xdc_Char)0x6f,  /* [1172] */
    (xdc_Char)0x76,  /* [1173] */
    (xdc_Char)0x65,  /* [1174] */
    (xdc_Char)0x72,  /* [1175] */
    (xdc_Char)0x66,  /* [1176] */
    (xdc_Char)0x6c,  /* [1177] */
    (xdc_Char)0x6f,  /* [1178] */
    (xdc_Char)0x77,  /* [1179] */
    (xdc_Char)0x3a,  /* [1180] */
    (xdc_Char)0x20,  /* [1181] */
    (xdc_Char)0x43,  /* [1182] */
    (xdc_Char)0x6f,  /* [1183] */
    (xdc_Char)0x75,  /* [1184] */
    (xdc_Char)0x6e,  /* [1185] */
    (xdc_Char)0x74,  /* [1186] */
    (xdc_Char)0x20,  /* [1187] */
    (xdc_Char)0x68,  /* [1188] */
    (xdc_Char)0x61,  /* [1189] */
    (xdc_Char)0x73,  /* [1190] */
    (xdc_Char)0x20,  /* [1191] */
    (xdc_Char)0x65,  /* [1192] */
    (xdc_Char)0x78,  /* [1193] */
    (xdc_Char)0x63,  /* [1194] */
    (xdc_Char)0x65,  /* [1195] */
    (xdc_Char)0x65,  /* [1196] */
    (xdc_Char)0x64,  /* [1197] */
    (xdc_Char)0x65,  /* [1198] */
    (xdc_Char)0x64,  /* [1199] */
    (xdc_Char)0x20,  /* [1200] */
    (xdc_Char)0x36,  /* [1201] */
    (xdc_Char)0x35,  /* [1202] */
    (xdc_Char)0x35,  /* [1203] */
    (xdc_Char)0x33,  /* [1204] */
    (xdc_Char)0x35,  /* [1205] */
    (xdc_Char)0x20,  /* [1206] */
    (xdc_Char)0x61,  /* [1207] */
    (xdc_Char)0x6e,  /* [1208] */
    (xdc_Char)0x64,  /* [1209] */
    (xdc_Char)0x20,  /* [1210] */
    (xdc_Char)0x72,  /* [1211] */
    (xdc_Char)0x6f,  /* [1212] */
    (xdc_Char)0x6c,  /* [1213] */
    (xdc_Char)0x6c,  /* [1214] */
    (xdc_Char)0x65,  /* [1215] */
    (xdc_Char)0x64,  /* [1216] */
    (xdc_Char)0x20,  /* [1217] */
    (xdc_Char)0x6f,  /* [1218] */
    (xdc_Char)0x76,  /* [1219] */
    (xdc_Char)0x65,  /* [1220] */
    (xdc_Char)0x72,  /* [1221] */
    (xdc_Char)0x2e,  /* [1222] */
    (xdc_Char)0x0,  /* [1223] */
    (xdc_Char)0x41,  /* [1224] */
    (xdc_Char)0x5f,  /* [1225] */
    (xdc_Char)0x70,  /* [1226] */
    (xdc_Char)0x65,  /* [1227] */
    (xdc_Char)0x6e,  /* [1228] */
    (xdc_Char)0x64,  /* [1229] */
    (xdc_Char)0x54,  /* [1230] */
    (xdc_Char)0x61,  /* [1231] */
    (xdc_Char)0x73,  /* [1232] */
    (xdc_Char)0x6b,  /* [1233] */
    (xdc_Char)0x44,  /* [1234] */
    (xdc_Char)0x69,  /* [1235] */
    (xdc_Char)0x73,  /* [1236] */
    (xdc_Char)0x61,  /* [1237] */
    (xdc_Char)0x62,  /* [1238] */
    (xdc_Char)0x6c,  /* [1239] */
    (xdc_Char)0x65,  /* [1240] */
    (xdc_Char)0x64,  /* [1241] */
    (xdc_Char)0x3a,  /* [1242] */
    (xdc_Char)0x20,  /* [1243] */
    (xdc_Char)0x43,  /* [1244] */
    (xdc_Char)0x61,  /* [1245] */
    (xdc_Char)0x6e,  /* [1246] */
    (xdc_Char)0x6e,  /* [1247] */
    (xdc_Char)0x6f,  /* [1248] */
    (xdc_Char)0x74,  /* [1249] */
    (xdc_Char)0x20,  /* [1250] */
    (xdc_Char)0x63,  /* [1251] */
    (xdc_Char)0x61,  /* [1252] */
    (xdc_Char)0x6c,  /* [1253] */
    (xdc_Char)0x6c,  /* [1254] */
    (xdc_Char)0x20,  /* [1255] */
    (xdc_Char)0x53,  /* [1256] */
    (xdc_Char)0x65,  /* [1257] */
    (xdc_Char)0x6d,  /* [1258] */
    (xdc_Char)0x61,  /* [1259] */
    (xdc_Char)0x70,  /* [1260] */
    (xdc_Char)0x68,  /* [1261] */
    (xdc_Char)0x6f,  /* [1262] */
    (xdc_Char)0x72,  /* [1263] */
    (xdc_Char)0x65,  /* [1264] */
    (xdc_Char)0x5f,  /* [1265] */
    (xdc_Char)0x70,  /* [1266] */
    (xdc_Char)0x65,  /* [1267] */
    (xdc_Char)0x6e,  /* [1268] */
    (xdc_Char)0x64,  /* [1269] */
    (xdc_Char)0x28,  /* [1270] */
    (xdc_Char)0x29,  /* [1271] */
    (xdc_Char)0x20,  /* [1272] */
    (xdc_Char)0x77,  /* [1273] */
    (xdc_Char)0x68,  /* [1274] */
    (xdc_Char)0x69,  /* [1275] */
    (xdc_Char)0x6c,  /* [1276] */
    (xdc_Char)0x65,  /* [1277] */
    (xdc_Char)0x20,  /* [1278] */
    (xdc_Char)0x74,  /* [1279] */
    (xdc_Char)0x68,  /* [1280] */
    (xdc_Char)0x65,  /* [1281] */
    (xdc_Char)0x20,  /* [1282] */
    (xdc_Char)0x54,  /* [1283] */
    (xdc_Char)0x61,  /* [1284] */
    (xdc_Char)0x73,  /* [1285] */
    (xdc_Char)0x6b,  /* [1286] */
    (xdc_Char)0x20,  /* [1287] */
    (xdc_Char)0x6f,  /* [1288] */
    (xdc_Char)0x72,  /* [1289] */
    (xdc_Char)0x20,  /* [1290] */
    (xdc_Char)0x53,  /* [1291] */
    (xdc_Char)0x77,  /* [1292] */
    (xdc_Char)0x69,  /* [1293] */
    (xdc_Char)0x20,  /* [1294] */
    (xdc_Char)0x73,  /* [1295] */
    (xdc_Char)0x63,  /* [1296] */
    (xdc_Char)0x68,  /* [1297] */
    (xdc_Char)0x65,  /* [1298] */
    (xdc_Char)0x64,  /* [1299] */
    (xdc_Char)0x75,  /* [1300] */
    (xdc_Char)0x6c,  /* [1301] */
    (xdc_Char)0x65,  /* [1302] */
    (xdc_Char)0x72,  /* [1303] */
    (xdc_Char)0x20,  /* [1304] */
    (xdc_Char)0x69,  /* [1305] */
    (xdc_Char)0x73,  /* [1306] */
    (xdc_Char)0x20,  /* [1307] */
    (xdc_Char)0x64,  /* [1308] */
    (xdc_Char)0x69,  /* [1309] */
    (xdc_Char)0x73,  /* [1310] */
    (xdc_Char)0x61,  /* [1311] */
    (xdc_Char)0x62,  /* [1312] */
    (xdc_Char)0x6c,  /* [1313] */
    (xdc_Char)0x65,  /* [1314] */
    (xdc_Char)0x64,  /* [1315] */
    (xdc_Char)0x2e,  /* [1316] */
    (xdc_Char)0x0,  /* [1317] */
    (xdc_Char)0x41,  /* [1318] */
    (xdc_Char)0x5f,  /* [1319] */
    (xdc_Char)0x73,  /* [1320] */
    (xdc_Char)0x77,  /* [1321] */
    (xdc_Char)0x69,  /* [1322] */
    (xdc_Char)0x44,  /* [1323] */
    (xdc_Char)0x69,  /* [1324] */
    (xdc_Char)0x73,  /* [1325] */
    (xdc_Char)0x61,  /* [1326] */
    (xdc_Char)0x62,  /* [1327] */
    (xdc_Char)0x6c,  /* [1328] */
    (xdc_Char)0x65,  /* [1329] */
    (xdc_Char)0x64,  /* [1330] */
    (xdc_Char)0x3a,  /* [1331] */
    (xdc_Char)0x20,  /* [1332] */
    (xdc_Char)0x43,  /* [1333] */
    (xdc_Char)0x61,  /* [1334] */
    (xdc_Char)0x6e,  /* [1335] */
    (xdc_Char)0x6e,  /* [1336] */
    (xdc_Char)0x6f,  /* [1337] */
    (xdc_Char)0x74,  /* [1338] */
    (xdc_Char)0x20,  /* [1339] */
    (xdc_Char)0x63,  /* [1340] */
    (xdc_Char)0x72,  /* [1341] */
    (xdc_Char)0x65,  /* [1342] */
    (xdc_Char)0x61,  /* [1343] */
    (xdc_Char)0x74,  /* [1344] */
    (xdc_Char)0x65,  /* [1345] */
    (xdc_Char)0x20,  /* [1346] */
    (xdc_Char)0x61,  /* [1347] */
    (xdc_Char)0x20,  /* [1348] */
    (xdc_Char)0x53,  /* [1349] */
    (xdc_Char)0x77,  /* [1350] */
    (xdc_Char)0x69,  /* [1351] */
    (xdc_Char)0x20,  /* [1352] */
    (xdc_Char)0x77,  /* [1353] */
    (xdc_Char)0x68,  /* [1354] */
    (xdc_Char)0x65,  /* [1355] */
    (xdc_Char)0x6e,  /* [1356] */
    (xdc_Char)0x20,  /* [1357] */
    (xdc_Char)0x53,  /* [1358] */
    (xdc_Char)0x77,  /* [1359] */
    (xdc_Char)0x69,  /* [1360] */
    (xdc_Char)0x20,  /* [1361] */
    (xdc_Char)0x69,  /* [1362] */
    (xdc_Char)0x73,  /* [1363] */
    (xdc_Char)0x20,  /* [1364] */
    (xdc_Char)0x64,  /* [1365] */
    (xdc_Char)0x69,  /* [1366] */
    (xdc_Char)0x73,  /* [1367] */
    (xdc_Char)0x61,  /* [1368] */
    (xdc_Char)0x62,  /* [1369] */
    (xdc_Char)0x6c,  /* [1370] */
    (xdc_Char)0x65,  /* [1371] */
    (xdc_Char)0x64,  /* [1372] */
    (xdc_Char)0x2e,  /* [1373] */
    (xdc_Char)0x0,  /* [1374] */
    (xdc_Char)0x41,  /* [1375] */
    (xdc_Char)0x5f,  /* [1376] */
    (xdc_Char)0x62,  /* [1377] */
    (xdc_Char)0x61,  /* [1378] */
    (xdc_Char)0x64,  /* [1379] */
    (xdc_Char)0x50,  /* [1380] */
    (xdc_Char)0x72,  /* [1381] */
    (xdc_Char)0x69,  /* [1382] */
    (xdc_Char)0x6f,  /* [1383] */
    (xdc_Char)0x72,  /* [1384] */
    (xdc_Char)0x69,  /* [1385] */
    (xdc_Char)0x74,  /* [1386] */
    (xdc_Char)0x79,  /* [1387] */
    (xdc_Char)0x3a,  /* [1388] */
    (xdc_Char)0x20,  /* [1389] */
    (xdc_Char)0x41,  /* [1390] */
    (xdc_Char)0x6e,  /* [1391] */
    (xdc_Char)0x20,  /* [1392] */
    (xdc_Char)0x69,  /* [1393] */
    (xdc_Char)0x6e,  /* [1394] */
    (xdc_Char)0x76,  /* [1395] */
    (xdc_Char)0x61,  /* [1396] */
    (xdc_Char)0x6c,  /* [1397] */
    (xdc_Char)0x69,  /* [1398] */
    (xdc_Char)0x64,  /* [1399] */
    (xdc_Char)0x20,  /* [1400] */
    (xdc_Char)0x53,  /* [1401] */
    (xdc_Char)0x77,  /* [1402] */
    (xdc_Char)0x69,  /* [1403] */
    (xdc_Char)0x20,  /* [1404] */
    (xdc_Char)0x70,  /* [1405] */
    (xdc_Char)0x72,  /* [1406] */
    (xdc_Char)0x69,  /* [1407] */
    (xdc_Char)0x6f,  /* [1408] */
    (xdc_Char)0x72,  /* [1409] */
    (xdc_Char)0x69,  /* [1410] */
    (xdc_Char)0x74,  /* [1411] */
    (xdc_Char)0x79,  /* [1412] */
    (xdc_Char)0x20,  /* [1413] */
    (xdc_Char)0x77,  /* [1414] */
    (xdc_Char)0x61,  /* [1415] */
    (xdc_Char)0x73,  /* [1416] */
    (xdc_Char)0x20,  /* [1417] */
    (xdc_Char)0x75,  /* [1418] */
    (xdc_Char)0x73,  /* [1419] */
    (xdc_Char)0x65,  /* [1420] */
    (xdc_Char)0x64,  /* [1421] */
    (xdc_Char)0x2e,  /* [1422] */
    (xdc_Char)0x0,  /* [1423] */
    (xdc_Char)0x41,  /* [1424] */
    (xdc_Char)0x5f,  /* [1425] */
    (xdc_Char)0x62,  /* [1426] */
    (xdc_Char)0x61,  /* [1427] */
    (xdc_Char)0x64,  /* [1428] */
    (xdc_Char)0x54,  /* [1429] */
    (xdc_Char)0x68,  /* [1430] */
    (xdc_Char)0x72,  /* [1431] */
    (xdc_Char)0x65,  /* [1432] */
    (xdc_Char)0x61,  /* [1433] */
    (xdc_Char)0x64,  /* [1434] */
    (xdc_Char)0x54,  /* [1435] */
    (xdc_Char)0x79,  /* [1436] */
    (xdc_Char)0x70,  /* [1437] */
    (xdc_Char)0x65,  /* [1438] */
    (xdc_Char)0x3a,  /* [1439] */
    (xdc_Char)0x20,  /* [1440] */
    (xdc_Char)0x43,  /* [1441] */
    (xdc_Char)0x61,  /* [1442] */
    (xdc_Char)0x6e,  /* [1443] */
    (xdc_Char)0x6e,  /* [1444] */
    (xdc_Char)0x6f,  /* [1445] */
    (xdc_Char)0x74,  /* [1446] */
    (xdc_Char)0x20,  /* [1447] */
    (xdc_Char)0x63,  /* [1448] */
    (xdc_Char)0x72,  /* [1449] */
    (xdc_Char)0x65,  /* [1450] */
    (xdc_Char)0x61,  /* [1451] */
    (xdc_Char)0x74,  /* [1452] */
    (xdc_Char)0x65,  /* [1453] */
    (xdc_Char)0x2f,  /* [1454] */
    (xdc_Char)0x64,  /* [1455] */
    (xdc_Char)0x65,  /* [1456] */
    (xdc_Char)0x6c,  /* [1457] */
    (xdc_Char)0x65,  /* [1458] */
    (xdc_Char)0x74,  /* [1459] */
    (xdc_Char)0x65,  /* [1460] */
    (xdc_Char)0x20,  /* [1461] */
    (xdc_Char)0x61,  /* [1462] */
    (xdc_Char)0x20,  /* [1463] */
    (xdc_Char)0x74,  /* [1464] */
    (xdc_Char)0x61,  /* [1465] */
    (xdc_Char)0x73,  /* [1466] */
    (xdc_Char)0x6b,  /* [1467] */
    (xdc_Char)0x20,  /* [1468] */
    (xdc_Char)0x66,  /* [1469] */
    (xdc_Char)0x72,  /* [1470] */
    (xdc_Char)0x6f,  /* [1471] */
    (xdc_Char)0x6d,  /* [1472] */
    (xdc_Char)0x20,  /* [1473] */
    (xdc_Char)0x48,  /* [1474] */
    (xdc_Char)0x77,  /* [1475] */
    (xdc_Char)0x69,  /* [1476] */
    (xdc_Char)0x20,  /* [1477] */
    (xdc_Char)0x6f,  /* [1478] */
    (xdc_Char)0x72,  /* [1479] */
    (xdc_Char)0x20,  /* [1480] */
    (xdc_Char)0x53,  /* [1481] */
    (xdc_Char)0x77,  /* [1482] */
    (xdc_Char)0x69,  /* [1483] */
    (xdc_Char)0x20,  /* [1484] */
    (xdc_Char)0x74,  /* [1485] */
    (xdc_Char)0x68,  /* [1486] */
    (xdc_Char)0x72,  /* [1487] */
    (xdc_Char)0x65,  /* [1488] */
    (xdc_Char)0x61,  /* [1489] */
    (xdc_Char)0x64,  /* [1490] */
    (xdc_Char)0x2e,  /* [1491] */
    (xdc_Char)0x0,  /* [1492] */
    (xdc_Char)0x41,  /* [1493] */
    (xdc_Char)0x5f,  /* [1494] */
    (xdc_Char)0x62,  /* [1495] */
    (xdc_Char)0x61,  /* [1496] */
    (xdc_Char)0x64,  /* [1497] */
    (xdc_Char)0x54,  /* [1498] */
    (xdc_Char)0x61,  /* [1499] */
    (xdc_Char)0x73,  /* [1500] */
    (xdc_Char)0x6b,  /* [1501] */
    (xdc_Char)0x53,  /* [1502] */
    (xdc_Char)0x74,  /* [1503] */
    (xdc_Char)0x61,  /* [1504] */
    (xdc_Char)0x74,  /* [1505] */
    (xdc_Char)0x65,  /* [1506] */
    (xdc_Char)0x3a,  /* [1507] */
    (xdc_Char)0x20,  /* [1508] */
    (xdc_Char)0x43,  /* [1509] */
    (xdc_Char)0x61,  /* [1510] */
    (xdc_Char)0x6e,  /* [1511] */
    (xdc_Char)0x27,  /* [1512] */
    (xdc_Char)0x74,  /* [1513] */
    (xdc_Char)0x20,  /* [1514] */
    (xdc_Char)0x64,  /* [1515] */
    (xdc_Char)0x65,  /* [1516] */
    (xdc_Char)0x6c,  /* [1517] */
    (xdc_Char)0x65,  /* [1518] */
    (xdc_Char)0x74,  /* [1519] */
    (xdc_Char)0x65,  /* [1520] */
    (xdc_Char)0x20,  /* [1521] */
    (xdc_Char)0x61,  /* [1522] */
    (xdc_Char)0x20,  /* [1523] */
    (xdc_Char)0x74,  /* [1524] */
    (xdc_Char)0x61,  /* [1525] */
    (xdc_Char)0x73,  /* [1526] */
    (xdc_Char)0x6b,  /* [1527] */
    (xdc_Char)0x20,  /* [1528] */
    (xdc_Char)0x69,  /* [1529] */
    (xdc_Char)0x6e,  /* [1530] */
    (xdc_Char)0x20,  /* [1531] */
    (xdc_Char)0x52,  /* [1532] */
    (xdc_Char)0x55,  /* [1533] */
    (xdc_Char)0x4e,  /* [1534] */
    (xdc_Char)0x4e,  /* [1535] */
    (xdc_Char)0x49,  /* [1536] */
    (xdc_Char)0x4e,  /* [1537] */
    (xdc_Char)0x47,  /* [1538] */
    (xdc_Char)0x20,  /* [1539] */
    (xdc_Char)0x73,  /* [1540] */
    (xdc_Char)0x74,  /* [1541] */
    (xdc_Char)0x61,  /* [1542] */
    (xdc_Char)0x74,  /* [1543] */
    (xdc_Char)0x65,  /* [1544] */
    (xdc_Char)0x2e,  /* [1545] */
    (xdc_Char)0x0,  /* [1546] */
    (xdc_Char)0x41,  /* [1547] */
    (xdc_Char)0x5f,  /* [1548] */
    (xdc_Char)0x6e,  /* [1549] */
    (xdc_Char)0x6f,  /* [1550] */
    (xdc_Char)0x50,  /* [1551] */
    (xdc_Char)0x65,  /* [1552] */
    (xdc_Char)0x6e,  /* [1553] */
    (xdc_Char)0x64,  /* [1554] */
    (xdc_Char)0x45,  /* [1555] */
    (xdc_Char)0x6c,  /* [1556] */
    (xdc_Char)0x65,  /* [1557] */
    (xdc_Char)0x6d,  /* [1558] */
    (xdc_Char)0x3a,  /* [1559] */
    (xdc_Char)0x20,  /* [1560] */
    (xdc_Char)0x4e,  /* [1561] */
    (xdc_Char)0x6f,  /* [1562] */
    (xdc_Char)0x74,  /* [1563] */
    (xdc_Char)0x20,  /* [1564] */
    (xdc_Char)0x65,  /* [1565] */
    (xdc_Char)0x6e,  /* [1566] */
    (xdc_Char)0x6f,  /* [1567] */
    (xdc_Char)0x75,  /* [1568] */
    (xdc_Char)0x67,  /* [1569] */
    (xdc_Char)0x68,  /* [1570] */
    (xdc_Char)0x20,  /* [1571] */
    (xdc_Char)0x69,  /* [1572] */
    (xdc_Char)0x6e,  /* [1573] */
    (xdc_Char)0x66,  /* [1574] */
    (xdc_Char)0x6f,  /* [1575] */
    (xdc_Char)0x20,  /* [1576] */
    (xdc_Char)0x74,  /* [1577] */
    (xdc_Char)0x6f,  /* [1578] */
    (xdc_Char)0x20,  /* [1579] */
    (xdc_Char)0x64,  /* [1580] */
    (xdc_Char)0x65,  /* [1581] */
    (xdc_Char)0x6c,  /* [1582] */
    (xdc_Char)0x65,  /* [1583] */
    (xdc_Char)0x74,  /* [1584] */
    (xdc_Char)0x65,  /* [1585] */
    (xdc_Char)0x20,  /* [1586] */
    (xdc_Char)0x42,  /* [1587] */
    (xdc_Char)0x4c,  /* [1588] */
    (xdc_Char)0x4f,  /* [1589] */
    (xdc_Char)0x43,  /* [1590] */
    (xdc_Char)0x4b,  /* [1591] */
    (xdc_Char)0x45,  /* [1592] */
    (xdc_Char)0x44,  /* [1593] */
    (xdc_Char)0x20,  /* [1594] */
    (xdc_Char)0x74,  /* [1595] */
    (xdc_Char)0x61,  /* [1596] */
    (xdc_Char)0x73,  /* [1597] */
    (xdc_Char)0x6b,  /* [1598] */
    (xdc_Char)0x2e,  /* [1599] */
    (xdc_Char)0x0,  /* [1600] */
    (xdc_Char)0x41,  /* [1601] */
    (xdc_Char)0x5f,  /* [1602] */
    (xdc_Char)0x74,  /* [1603] */
    (xdc_Char)0x61,  /* [1604] */
    (xdc_Char)0x73,  /* [1605] */
    (xdc_Char)0x6b,  /* [1606] */
    (xdc_Char)0x44,  /* [1607] */
    (xdc_Char)0x69,  /* [1608] */
    (xdc_Char)0x73,  /* [1609] */
    (xdc_Char)0x61,  /* [1610] */
    (xdc_Char)0x62,  /* [1611] */
    (xdc_Char)0x6c,  /* [1612] */
    (xdc_Char)0x65,  /* [1613] */
    (xdc_Char)0x64,  /* [1614] */
    (xdc_Char)0x3a,  /* [1615] */
    (xdc_Char)0x20,  /* [1616] */
    (xdc_Char)0x43,  /* [1617] */
    (xdc_Char)0x61,  /* [1618] */
    (xdc_Char)0x6e,  /* [1619] */
    (xdc_Char)0x6e,  /* [1620] */
    (xdc_Char)0x6f,  /* [1621] */
    (xdc_Char)0x74,  /* [1622] */
    (xdc_Char)0x20,  /* [1623] */
    (xdc_Char)0x63,  /* [1624] */
    (xdc_Char)0x72,  /* [1625] */
    (xdc_Char)0x65,  /* [1626] */
    (xdc_Char)0x61,  /* [1627] */
    (xdc_Char)0x74,  /* [1628] */
    (xdc_Char)0x65,  /* [1629] */
    (xdc_Char)0x20,  /* [1630] */
    (xdc_Char)0x61,  /* [1631] */
    (xdc_Char)0x20,  /* [1632] */
    (xdc_Char)0x74,  /* [1633] */
    (xdc_Char)0x61,  /* [1634] */
    (xdc_Char)0x73,  /* [1635] */
    (xdc_Char)0x6b,  /* [1636] */
    (xdc_Char)0x20,  /* [1637] */
    (xdc_Char)0x77,  /* [1638] */
    (xdc_Char)0x68,  /* [1639] */
    (xdc_Char)0x65,  /* [1640] */
    (xdc_Char)0x6e,  /* [1641] */
    (xdc_Char)0x20,  /* [1642] */
    (xdc_Char)0x74,  /* [1643] */
    (xdc_Char)0x61,  /* [1644] */
    (xdc_Char)0x73,  /* [1645] */
    (xdc_Char)0x6b,  /* [1646] */
    (xdc_Char)0x69,  /* [1647] */
    (xdc_Char)0x6e,  /* [1648] */
    (xdc_Char)0x67,  /* [1649] */
    (xdc_Char)0x20,  /* [1650] */
    (xdc_Char)0x69,  /* [1651] */
    (xdc_Char)0x73,  /* [1652] */
    (xdc_Char)0x20,  /* [1653] */
    (xdc_Char)0x64,  /* [1654] */
    (xdc_Char)0x69,  /* [1655] */
    (xdc_Char)0x73,  /* [1656] */
    (xdc_Char)0x61,  /* [1657] */
    (xdc_Char)0x62,  /* [1658] */
    (xdc_Char)0x6c,  /* [1659] */
    (xdc_Char)0x65,  /* [1660] */
    (xdc_Char)0x64,  /* [1661] */
    (xdc_Char)0x2e,  /* [1662] */
    (xdc_Char)0x0,  /* [1663] */
    (xdc_Char)0x41,  /* [1664] */
    (xdc_Char)0x5f,  /* [1665] */
    (xdc_Char)0x62,  /* [1666] */
    (xdc_Char)0x61,  /* [1667] */
    (xdc_Char)0x64,  /* [1668] */
    (xdc_Char)0x50,  /* [1669] */
    (xdc_Char)0x72,  /* [1670] */
    (xdc_Char)0x69,  /* [1671] */
    (xdc_Char)0x6f,  /* [1672] */
    (xdc_Char)0x72,  /* [1673] */
    (xdc_Char)0x69,  /* [1674] */
    (xdc_Char)0x74,  /* [1675] */
    (xdc_Char)0x79,  /* [1676] */
    (xdc_Char)0x3a,  /* [1677] */
    (xdc_Char)0x20,  /* [1678] */
    (xdc_Char)0x41,  /* [1679] */
    (xdc_Char)0x6e,  /* [1680] */
    (xdc_Char)0x20,  /* [1681] */
    (xdc_Char)0x69,  /* [1682] */
    (xdc_Char)0x6e,  /* [1683] */
    (xdc_Char)0x76,  /* [1684] */
    (xdc_Char)0x61,  /* [1685] */
    (xdc_Char)0x6c,  /* [1686] */
    (xdc_Char)0x69,  /* [1687] */
    (xdc_Char)0x64,  /* [1688] */
    (xdc_Char)0x20,  /* [1689] */
    (xdc_Char)0x74,  /* [1690] */
    (xdc_Char)0x61,  /* [1691] */
    (xdc_Char)0x73,  /* [1692] */
    (xdc_Char)0x6b,  /* [1693] */
    (xdc_Char)0x20,  /* [1694] */
    (xdc_Char)0x70,  /* [1695] */
    (xdc_Char)0x72,  /* [1696] */
    (xdc_Char)0x69,  /* [1697] */
    (xdc_Char)0x6f,  /* [1698] */
    (xdc_Char)0x72,  /* [1699] */
    (xdc_Char)0x69,  /* [1700] */
    (xdc_Char)0x74,  /* [1701] */
    (xdc_Char)0x79,  /* [1702] */
    (xdc_Char)0x20,  /* [1703] */
    (xdc_Char)0x77,  /* [1704] */
    (xdc_Char)0x61,  /* [1705] */
    (xdc_Char)0x73,  /* [1706] */
    (xdc_Char)0x20,  /* [1707] */
    (xdc_Char)0x75,  /* [1708] */
    (xdc_Char)0x73,  /* [1709] */
    (xdc_Char)0x65,  /* [1710] */
    (xdc_Char)0x64,  /* [1711] */
    (xdc_Char)0x2e,  /* [1712] */
    (xdc_Char)0x0,  /* [1713] */
    (xdc_Char)0x41,  /* [1714] */
    (xdc_Char)0x5f,  /* [1715] */
    (xdc_Char)0x62,  /* [1716] */
    (xdc_Char)0x61,  /* [1717] */
    (xdc_Char)0x64,  /* [1718] */
    (xdc_Char)0x54,  /* [1719] */
    (xdc_Char)0x69,  /* [1720] */
    (xdc_Char)0x6d,  /* [1721] */
    (xdc_Char)0x65,  /* [1722] */
    (xdc_Char)0x6f,  /* [1723] */
    (xdc_Char)0x75,  /* [1724] */
    (xdc_Char)0x74,  /* [1725] */
    (xdc_Char)0x3a,  /* [1726] */
    (xdc_Char)0x20,  /* [1727] */
    (xdc_Char)0x43,  /* [1728] */
    (xdc_Char)0x61,  /* [1729] */
    (xdc_Char)0x6e,  /* [1730] */
    (xdc_Char)0x27,  /* [1731] */
    (xdc_Char)0x74,  /* [1732] */
    (xdc_Char)0x20,  /* [1733] */
    (xdc_Char)0x73,  /* [1734] */
    (xdc_Char)0x6c,  /* [1735] */
    (xdc_Char)0x65,  /* [1736] */
    (xdc_Char)0x65,  /* [1737] */
    (xdc_Char)0x70,  /* [1738] */
    (xdc_Char)0x20,  /* [1739] */
    (xdc_Char)0x46,  /* [1740] */
    (xdc_Char)0x4f,  /* [1741] */
    (xdc_Char)0x52,  /* [1742] */
    (xdc_Char)0x45,  /* [1743] */
    (xdc_Char)0x56,  /* [1744] */
    (xdc_Char)0x45,  /* [1745] */
    (xdc_Char)0x52,  /* [1746] */
    (xdc_Char)0x2e,  /* [1747] */
    (xdc_Char)0x0,  /* [1748] */
    (xdc_Char)0x41,  /* [1749] */
    (xdc_Char)0x5f,  /* [1750] */
    (xdc_Char)0x62,  /* [1751] */
    (xdc_Char)0x61,  /* [1752] */
    (xdc_Char)0x64,  /* [1753] */
    (xdc_Char)0x41,  /* [1754] */
    (xdc_Char)0x66,  /* [1755] */
    (xdc_Char)0x66,  /* [1756] */
    (xdc_Char)0x69,  /* [1757] */
    (xdc_Char)0x6e,  /* [1758] */
    (xdc_Char)0x69,  /* [1759] */
    (xdc_Char)0x74,  /* [1760] */
    (xdc_Char)0x79,  /* [1761] */
    (xdc_Char)0x3a,  /* [1762] */
    (xdc_Char)0x20,  /* [1763] */
    (xdc_Char)0x49,  /* [1764] */
    (xdc_Char)0x6e,  /* [1765] */
    (xdc_Char)0x76,  /* [1766] */
    (xdc_Char)0x61,  /* [1767] */
    (xdc_Char)0x6c,  /* [1768] */
    (xdc_Char)0x69,  /* [1769] */
    (xdc_Char)0x64,  /* [1770] */
    (xdc_Char)0x20,  /* [1771] */
    (xdc_Char)0x61,  /* [1772] */
    (xdc_Char)0x66,  /* [1773] */
    (xdc_Char)0x66,  /* [1774] */
    (xdc_Char)0x69,  /* [1775] */
    (xdc_Char)0x6e,  /* [1776] */
    (xdc_Char)0x69,  /* [1777] */
    (xdc_Char)0x74,  /* [1778] */
    (xdc_Char)0x79,  /* [1779] */
    (xdc_Char)0x2e,  /* [1780] */
    (xdc_Char)0x0,  /* [1781] */
    (xdc_Char)0x41,  /* [1782] */
    (xdc_Char)0x5f,  /* [1783] */
    (xdc_Char)0x73,  /* [1784] */
    (xdc_Char)0x6c,  /* [1785] */
    (xdc_Char)0x65,  /* [1786] */
    (xdc_Char)0x65,  /* [1787] */
    (xdc_Char)0x70,  /* [1788] */
    (xdc_Char)0x54,  /* [1789] */
    (xdc_Char)0x61,  /* [1790] */
    (xdc_Char)0x73,  /* [1791] */
    (xdc_Char)0x6b,  /* [1792] */
    (xdc_Char)0x44,  /* [1793] */
    (xdc_Char)0x69,  /* [1794] */
    (xdc_Char)0x73,  /* [1795] */
    (xdc_Char)0x61,  /* [1796] */
    (xdc_Char)0x62,  /* [1797] */
    (xdc_Char)0x6c,  /* [1798] */
    (xdc_Char)0x65,  /* [1799] */
    (xdc_Char)0x64,  /* [1800] */
    (xdc_Char)0x3a,  /* [1801] */
    (xdc_Char)0x20,  /* [1802] */
    (xdc_Char)0x43,  /* [1803] */
    (xdc_Char)0x61,  /* [1804] */
    (xdc_Char)0x6e,  /* [1805] */
    (xdc_Char)0x6e,  /* [1806] */
    (xdc_Char)0x6f,  /* [1807] */
    (xdc_Char)0x74,  /* [1808] */
    (xdc_Char)0x20,  /* [1809] */
    (xdc_Char)0x63,  /* [1810] */
    (xdc_Char)0x61,  /* [1811] */
    (xdc_Char)0x6c,  /* [1812] */
    (xdc_Char)0x6c,  /* [1813] */
    (xdc_Char)0x20,  /* [1814] */
    (xdc_Char)0x54,  /* [1815] */
    (xdc_Char)0x61,  /* [1816] */
    (xdc_Char)0x73,  /* [1817] */
    (xdc_Char)0x6b,  /* [1818] */
    (xdc_Char)0x5f,  /* [1819] */
    (xdc_Char)0x73,  /* [1820] */
    (xdc_Char)0x6c,  /* [1821] */
    (xdc_Char)0x65,  /* [1822] */
    (xdc_Char)0x65,  /* [1823] */
    (xdc_Char)0x70,  /* [1824] */
    (xdc_Char)0x28,  /* [1825] */
    (xdc_Char)0x29,  /* [1826] */
    (xdc_Char)0x20,  /* [1827] */
    (xdc_Char)0x77,  /* [1828] */
    (xdc_Char)0x68,  /* [1829] */
    (xdc_Char)0x69,  /* [1830] */
    (xdc_Char)0x6c,  /* [1831] */
    (xdc_Char)0x65,  /* [1832] */
    (xdc_Char)0x20,  /* [1833] */
    (xdc_Char)0x74,  /* [1834] */
    (xdc_Char)0x68,  /* [1835] */
    (xdc_Char)0x65,  /* [1836] */
    (xdc_Char)0x20,  /* [1837] */
    (xdc_Char)0x54,  /* [1838] */
    (xdc_Char)0x61,  /* [1839] */
    (xdc_Char)0x73,  /* [1840] */
    (xdc_Char)0x6b,  /* [1841] */
    (xdc_Char)0x20,  /* [1842] */
    (xdc_Char)0x73,  /* [1843] */
    (xdc_Char)0x63,  /* [1844] */
    (xdc_Char)0x68,  /* [1845] */
    (xdc_Char)0x65,  /* [1846] */
    (xdc_Char)0x64,  /* [1847] */
    (xdc_Char)0x75,  /* [1848] */
    (xdc_Char)0x6c,  /* [1849] */
    (xdc_Char)0x65,  /* [1850] */
    (xdc_Char)0x72,  /* [1851] */
    (xdc_Char)0x20,  /* [1852] */
    (xdc_Char)0x69,  /* [1853] */
    (xdc_Char)0x73,  /* [1854] */
    (xdc_Char)0x20,  /* [1855] */
    (xdc_Char)0x64,  /* [1856] */
    (xdc_Char)0x69,  /* [1857] */
    (xdc_Char)0x73,  /* [1858] */
    (xdc_Char)0x61,  /* [1859] */
    (xdc_Char)0x62,  /* [1860] */
    (xdc_Char)0x6c,  /* [1861] */
    (xdc_Char)0x65,  /* [1862] */
    (xdc_Char)0x64,  /* [1863] */
    (xdc_Char)0x2e,  /* [1864] */
    (xdc_Char)0x0,  /* [1865] */
    (xdc_Char)0x41,  /* [1866] */
    (xdc_Char)0x5f,  /* [1867] */
    (xdc_Char)0x69,  /* [1868] */
    (xdc_Char)0x6e,  /* [1869] */
    (xdc_Char)0x76,  /* [1870] */
    (xdc_Char)0x61,  /* [1871] */
    (xdc_Char)0x6c,  /* [1872] */
    (xdc_Char)0x69,  /* [1873] */
    (xdc_Char)0x64,  /* [1874] */
    (xdc_Char)0x43,  /* [1875] */
    (xdc_Char)0x6f,  /* [1876] */
    (xdc_Char)0x72,  /* [1877] */
    (xdc_Char)0x65,  /* [1878] */
    (xdc_Char)0x49,  /* [1879] */
    (xdc_Char)0x64,  /* [1880] */
    (xdc_Char)0x3a,  /* [1881] */
    (xdc_Char)0x20,  /* [1882] */
    (xdc_Char)0x43,  /* [1883] */
    (xdc_Char)0x61,  /* [1884] */
    (xdc_Char)0x6e,  /* [1885] */
    (xdc_Char)0x6e,  /* [1886] */
    (xdc_Char)0x6f,  /* [1887] */
    (xdc_Char)0x74,  /* [1888] */
    (xdc_Char)0x20,  /* [1889] */
    (xdc_Char)0x70,  /* [1890] */
    (xdc_Char)0x61,  /* [1891] */
    (xdc_Char)0x73,  /* [1892] */
    (xdc_Char)0x73,  /* [1893] */
    (xdc_Char)0x20,  /* [1894] */
    (xdc_Char)0x61,  /* [1895] */
    (xdc_Char)0x20,  /* [1896] */
    (xdc_Char)0x6e,  /* [1897] */
    (xdc_Char)0x6f,  /* [1898] */
    (xdc_Char)0x6e,  /* [1899] */
    (xdc_Char)0x2d,  /* [1900] */
    (xdc_Char)0x7a,  /* [1901] */
    (xdc_Char)0x65,  /* [1902] */
    (xdc_Char)0x72,  /* [1903] */
    (xdc_Char)0x6f,  /* [1904] */
    (xdc_Char)0x20,  /* [1905] */
    (xdc_Char)0x43,  /* [1906] */
    (xdc_Char)0x6f,  /* [1907] */
    (xdc_Char)0x72,  /* [1908] */
    (xdc_Char)0x65,  /* [1909] */
    (xdc_Char)0x49,  /* [1910] */
    (xdc_Char)0x64,  /* [1911] */
    (xdc_Char)0x20,  /* [1912] */
    (xdc_Char)0x69,  /* [1913] */
    (xdc_Char)0x6e,  /* [1914] */
    (xdc_Char)0x20,  /* [1915] */
    (xdc_Char)0x61,  /* [1916] */
    (xdc_Char)0x20,  /* [1917] */
    (xdc_Char)0x6e,  /* [1918] */
    (xdc_Char)0x6f,  /* [1919] */
    (xdc_Char)0x6e,  /* [1920] */
    (xdc_Char)0x2d,  /* [1921] */
    (xdc_Char)0x53,  /* [1922] */
    (xdc_Char)0x4d,  /* [1923] */
    (xdc_Char)0x50,  /* [1924] */
    (xdc_Char)0x20,  /* [1925] */
    (xdc_Char)0x61,  /* [1926] */
    (xdc_Char)0x70,  /* [1927] */
    (xdc_Char)0x70,  /* [1928] */
    (xdc_Char)0x6c,  /* [1929] */
    (xdc_Char)0x69,  /* [1930] */
    (xdc_Char)0x63,  /* [1931] */
    (xdc_Char)0x61,  /* [1932] */
    (xdc_Char)0x74,  /* [1933] */
    (xdc_Char)0x69,  /* [1934] */
    (xdc_Char)0x6f,  /* [1935] */
    (xdc_Char)0x6e,  /* [1936] */
    (xdc_Char)0x2e,  /* [1937] */
    (xdc_Char)0x0,  /* [1938] */
    (xdc_Char)0x41,  /* [1939] */
    (xdc_Char)0x5f,  /* [1940] */
    (xdc_Char)0x75,  /* [1941] */
    (xdc_Char)0x6e,  /* [1942] */
    (xdc_Char)0x73,  /* [1943] */
    (xdc_Char)0x75,  /* [1944] */
    (xdc_Char)0x70,  /* [1945] */
    (xdc_Char)0x70,  /* [1946] */
    (xdc_Char)0x6f,  /* [1947] */
    (xdc_Char)0x72,  /* [1948] */
    (xdc_Char)0x74,  /* [1949] */
    (xdc_Char)0x65,  /* [1950] */
    (xdc_Char)0x64,  /* [1951] */
    (xdc_Char)0x4d,  /* [1952] */
    (xdc_Char)0x61,  /* [1953] */
    (xdc_Char)0x73,  /* [1954] */
    (xdc_Char)0x6b,  /* [1955] */
    (xdc_Char)0x69,  /* [1956] */
    (xdc_Char)0x6e,  /* [1957] */
    (xdc_Char)0x67,  /* [1958] */
    (xdc_Char)0x4f,  /* [1959] */
    (xdc_Char)0x70,  /* [1960] */
    (xdc_Char)0x74,  /* [1961] */
    (xdc_Char)0x69,  /* [1962] */
    (xdc_Char)0x6f,  /* [1963] */
    (xdc_Char)0x6e,  /* [1964] */
    (xdc_Char)0x3a,  /* [1965] */
    (xdc_Char)0x20,  /* [1966] */
    (xdc_Char)0x75,  /* [1967] */
    (xdc_Char)0x6e,  /* [1968] */
    (xdc_Char)0x73,  /* [1969] */
    (xdc_Char)0x75,  /* [1970] */
    (xdc_Char)0x70,  /* [1971] */
    (xdc_Char)0x70,  /* [1972] */
    (xdc_Char)0x6f,  /* [1973] */
    (xdc_Char)0x72,  /* [1974] */
    (xdc_Char)0x74,  /* [1975] */
    (xdc_Char)0x65,  /* [1976] */
    (xdc_Char)0x64,  /* [1977] */
    (xdc_Char)0x20,  /* [1978] */
    (xdc_Char)0x6d,  /* [1979] */
    (xdc_Char)0x61,  /* [1980] */
    (xdc_Char)0x73,  /* [1981] */
    (xdc_Char)0x6b,  /* [1982] */
    (xdc_Char)0x53,  /* [1983] */
    (xdc_Char)0x65,  /* [1984] */
    (xdc_Char)0x74,  /* [1985] */
    (xdc_Char)0x74,  /* [1986] */
    (xdc_Char)0x69,  /* [1987] */
    (xdc_Char)0x6e,  /* [1988] */
    (xdc_Char)0x67,  /* [1989] */
    (xdc_Char)0x2e,  /* [1990] */
    (xdc_Char)0x0,  /* [1991] */
    (xdc_Char)0x62,  /* [1992] */
    (xdc_Char)0x75,  /* [1993] */
    (xdc_Char)0x66,  /* [1994] */
    (xdc_Char)0x20,  /* [1995] */
    (xdc_Char)0x70,  /* [1996] */
    (xdc_Char)0x61,  /* [1997] */
    (xdc_Char)0x72,  /* [1998] */
    (xdc_Char)0x61,  /* [1999] */
    (xdc_Char)0x6d,  /* [2000] */
    (xdc_Char)0x65,  /* [2001] */
    (xdc_Char)0x74,  /* [2002] */
    (xdc_Char)0x65,  /* [2003] */
    (xdc_Char)0x72,  /* [2004] */
    (xdc_Char)0x20,  /* [2005] */
    (xdc_Char)0x63,  /* [2006] */
    (xdc_Char)0x61,  /* [2007] */
    (xdc_Char)0x6e,  /* [2008] */
    (xdc_Char)0x6e,  /* [2009] */
    (xdc_Char)0x6f,  /* [2010] */
    (xdc_Char)0x74,  /* [2011] */
    (xdc_Char)0x20,  /* [2012] */
    (xdc_Char)0x62,  /* [2013] */
    (xdc_Char)0x65,  /* [2014] */
    (xdc_Char)0x20,  /* [2015] */
    (xdc_Char)0x6e,  /* [2016] */
    (xdc_Char)0x75,  /* [2017] */
    (xdc_Char)0x6c,  /* [2018] */
    (xdc_Char)0x6c,  /* [2019] */
    (xdc_Char)0x0,  /* [2020] */
    (xdc_Char)0x62,  /* [2021] */
    (xdc_Char)0x75,  /* [2022] */
    (xdc_Char)0x66,  /* [2023] */
    (xdc_Char)0x20,  /* [2024] */
    (xdc_Char)0x6e,  /* [2025] */
    (xdc_Char)0x6f,  /* [2026] */
    (xdc_Char)0x74,  /* [2027] */
    (xdc_Char)0x20,  /* [2028] */
    (xdc_Char)0x70,  /* [2029] */
    (xdc_Char)0x72,  /* [2030] */
    (xdc_Char)0x6f,  /* [2031] */
    (xdc_Char)0x70,  /* [2032] */
    (xdc_Char)0x65,  /* [2033] */
    (xdc_Char)0x72,  /* [2034] */
    (xdc_Char)0x6c,  /* [2035] */
    (xdc_Char)0x79,  /* [2036] */
    (xdc_Char)0x20,  /* [2037] */
    (xdc_Char)0x61,  /* [2038] */
    (xdc_Char)0x6c,  /* [2039] */
    (xdc_Char)0x69,  /* [2040] */
    (xdc_Char)0x67,  /* [2041] */
    (xdc_Char)0x6e,  /* [2042] */
    (xdc_Char)0x65,  /* [2043] */
    (xdc_Char)0x64,  /* [2044] */
    (xdc_Char)0x0,  /* [2045] */
    (xdc_Char)0x61,  /* [2046] */
    (xdc_Char)0x6c,  /* [2047] */
    (xdc_Char)0x69,  /* [2048] */
    (xdc_Char)0x67,  /* [2049] */
    (xdc_Char)0x6e,  /* [2050] */
    (xdc_Char)0x20,  /* [2051] */
    (xdc_Char)0x70,  /* [2052] */
    (xdc_Char)0x61,  /* [2053] */
    (xdc_Char)0x72,  /* [2054] */
    (xdc_Char)0x61,  /* [2055] */
    (xdc_Char)0x6d,  /* [2056] */
    (xdc_Char)0x65,  /* [2057] */
    (xdc_Char)0x74,  /* [2058] */
    (xdc_Char)0x65,  /* [2059] */
    (xdc_Char)0x72,  /* [2060] */
    (xdc_Char)0x20,  /* [2061] */
    (xdc_Char)0x6d,  /* [2062] */
    (xdc_Char)0x75,  /* [2063] */
    (xdc_Char)0x73,  /* [2064] */
    (xdc_Char)0x74,  /* [2065] */
    (xdc_Char)0x20,  /* [2066] */
    (xdc_Char)0x62,  /* [2067] */
    (xdc_Char)0x65,  /* [2068] */
    (xdc_Char)0x20,  /* [2069] */
    (xdc_Char)0x30,  /* [2070] */
    (xdc_Char)0x20,  /* [2071] */
    (xdc_Char)0x6f,  /* [2072] */
    (xdc_Char)0x72,  /* [2073] */
    (xdc_Char)0x20,  /* [2074] */
    (xdc_Char)0x61,  /* [2075] */
    (xdc_Char)0x20,  /* [2076] */
    (xdc_Char)0x70,  /* [2077] */
    (xdc_Char)0x6f,  /* [2078] */
    (xdc_Char)0x77,  /* [2079] */
    (xdc_Char)0x65,  /* [2080] */
    (xdc_Char)0x72,  /* [2081] */
    (xdc_Char)0x20,  /* [2082] */
    (xdc_Char)0x6f,  /* [2083] */
    (xdc_Char)0x66,  /* [2084] */
    (xdc_Char)0x20,  /* [2085] */
    (xdc_Char)0x32,  /* [2086] */
    (xdc_Char)0x20,  /* [2087] */
    (xdc_Char)0x3e,  /* [2088] */
    (xdc_Char)0x3d,  /* [2089] */
    (xdc_Char)0x20,  /* [2090] */
    (xdc_Char)0x74,  /* [2091] */
    (xdc_Char)0x68,  /* [2092] */
    (xdc_Char)0x65,  /* [2093] */
    (xdc_Char)0x20,  /* [2094] */
    (xdc_Char)0x76,  /* [2095] */
    (xdc_Char)0x61,  /* [2096] */
    (xdc_Char)0x6c,  /* [2097] */
    (xdc_Char)0x75,  /* [2098] */
    (xdc_Char)0x65,  /* [2099] */
    (xdc_Char)0x20,  /* [2100] */
    (xdc_Char)0x6f,  /* [2101] */
    (xdc_Char)0x66,  /* [2102] */
    (xdc_Char)0x20,  /* [2103] */
    (xdc_Char)0x4d,  /* [2104] */
    (xdc_Char)0x65,  /* [2105] */
    (xdc_Char)0x6d,  /* [2106] */
    (xdc_Char)0x6f,  /* [2107] */
    (xdc_Char)0x72,  /* [2108] */
    (xdc_Char)0x79,  /* [2109] */
    (xdc_Char)0x5f,  /* [2110] */
    (xdc_Char)0x67,  /* [2111] */
    (xdc_Char)0x65,  /* [2112] */
    (xdc_Char)0x74,  /* [2113] */
    (xdc_Char)0x4d,  /* [2114] */
    (xdc_Char)0x61,  /* [2115] */
    (xdc_Char)0x78,  /* [2116] */
    (xdc_Char)0x44,  /* [2117] */
    (xdc_Char)0x65,  /* [2118] */
    (xdc_Char)0x66,  /* [2119] */
    (xdc_Char)0x61,  /* [2120] */
    (xdc_Char)0x75,  /* [2121] */
    (xdc_Char)0x6c,  /* [2122] */
    (xdc_Char)0x74,  /* [2123] */
    (xdc_Char)0x54,  /* [2124] */
    (xdc_Char)0x79,  /* [2125] */
    (xdc_Char)0x70,  /* [2126] */
    (xdc_Char)0x65,  /* [2127] */
    (xdc_Char)0x41,  /* [2128] */
    (xdc_Char)0x6c,  /* [2129] */
    (xdc_Char)0x69,  /* [2130] */
    (xdc_Char)0x67,  /* [2131] */
    (xdc_Char)0x6e,  /* [2132] */
    (xdc_Char)0x28,  /* [2133] */
    (xdc_Char)0x29,  /* [2134] */
    (xdc_Char)0x0,  /* [2135] */
    (xdc_Char)0x61,  /* [2136] */
    (xdc_Char)0x6c,  /* [2137] */
    (xdc_Char)0x69,  /* [2138] */
    (xdc_Char)0x67,  /* [2139] */
    (xdc_Char)0x6e,  /* [2140] */
    (xdc_Char)0x20,  /* [2141] */
    (xdc_Char)0x70,  /* [2142] */
    (xdc_Char)0x61,  /* [2143] */
    (xdc_Char)0x72,  /* [2144] */
    (xdc_Char)0x61,  /* [2145] */
    (xdc_Char)0x6d,  /* [2146] */
    (xdc_Char)0x65,  /* [2147] */
    (xdc_Char)0x74,  /* [2148] */
    (xdc_Char)0x65,  /* [2149] */
    (xdc_Char)0x72,  /* [2150] */
    (xdc_Char)0x20,  /* [2151] */
    (xdc_Char)0x31,  /* [2152] */
    (xdc_Char)0x29,  /* [2153] */
    (xdc_Char)0x20,  /* [2154] */
    (xdc_Char)0x6d,  /* [2155] */
    (xdc_Char)0x75,  /* [2156] */
    (xdc_Char)0x73,  /* [2157] */
    (xdc_Char)0x74,  /* [2158] */
    (xdc_Char)0x20,  /* [2159] */
    (xdc_Char)0x62,  /* [2160] */
    (xdc_Char)0x65,  /* [2161] */
    (xdc_Char)0x20,  /* [2162] */
    (xdc_Char)0x30,  /* [2163] */
    (xdc_Char)0x20,  /* [2164] */
    (xdc_Char)0x6f,  /* [2165] */
    (xdc_Char)0x72,  /* [2166] */
    (xdc_Char)0x20,  /* [2167] */
    (xdc_Char)0x61,  /* [2168] */
    (xdc_Char)0x20,  /* [2169] */
    (xdc_Char)0x70,  /* [2170] */
    (xdc_Char)0x6f,  /* [2171] */
    (xdc_Char)0x77,  /* [2172] */
    (xdc_Char)0x65,  /* [2173] */
    (xdc_Char)0x72,  /* [2174] */
    (xdc_Char)0x20,  /* [2175] */
    (xdc_Char)0x6f,  /* [2176] */
    (xdc_Char)0x66,  /* [2177] */
    (xdc_Char)0x20,  /* [2178] */
    (xdc_Char)0x32,  /* [2179] */
    (xdc_Char)0x20,  /* [2180] */
    (xdc_Char)0x61,  /* [2181] */
    (xdc_Char)0x6e,  /* [2182] */
    (xdc_Char)0x64,  /* [2183] */
    (xdc_Char)0x20,  /* [2184] */
    (xdc_Char)0x32,  /* [2185] */
    (xdc_Char)0x29,  /* [2186] */
    (xdc_Char)0x20,  /* [2187] */
    (xdc_Char)0x6e,  /* [2188] */
    (xdc_Char)0x6f,  /* [2189] */
    (xdc_Char)0x74,  /* [2190] */
    (xdc_Char)0x20,  /* [2191] */
    (xdc_Char)0x67,  /* [2192] */
    (xdc_Char)0x72,  /* [2193] */
    (xdc_Char)0x65,  /* [2194] */
    (xdc_Char)0x61,  /* [2195] */
    (xdc_Char)0x74,  /* [2196] */
    (xdc_Char)0x65,  /* [2197] */
    (xdc_Char)0x72,  /* [2198] */
    (xdc_Char)0x20,  /* [2199] */
    (xdc_Char)0x74,  /* [2200] */
    (xdc_Char)0x68,  /* [2201] */
    (xdc_Char)0x61,  /* [2202] */
    (xdc_Char)0x6e,  /* [2203] */
    (xdc_Char)0x20,  /* [2204] */
    (xdc_Char)0x74,  /* [2205] */
    (xdc_Char)0x68,  /* [2206] */
    (xdc_Char)0x65,  /* [2207] */
    (xdc_Char)0x20,  /* [2208] */
    (xdc_Char)0x68,  /* [2209] */
    (xdc_Char)0x65,  /* [2210] */
    (xdc_Char)0x61,  /* [2211] */
    (xdc_Char)0x70,  /* [2212] */
    (xdc_Char)0x73,  /* [2213] */
    (xdc_Char)0x20,  /* [2214] */
    (xdc_Char)0x61,  /* [2215] */
    (xdc_Char)0x6c,  /* [2216] */
    (xdc_Char)0x69,  /* [2217] */
    (xdc_Char)0x67,  /* [2218] */
    (xdc_Char)0x6e,  /* [2219] */
    (xdc_Char)0x6d,  /* [2220] */
    (xdc_Char)0x65,  /* [2221] */
    (xdc_Char)0x6e,  /* [2222] */
    (xdc_Char)0x74,  /* [2223] */
    (xdc_Char)0x0,  /* [2224] */
    (xdc_Char)0x62,  /* [2225] */
    (xdc_Char)0x6c,  /* [2226] */
    (xdc_Char)0x6f,  /* [2227] */
    (xdc_Char)0x63,  /* [2228] */
    (xdc_Char)0x6b,  /* [2229] */
    (xdc_Char)0x53,  /* [2230] */
    (xdc_Char)0x69,  /* [2231] */
    (xdc_Char)0x7a,  /* [2232] */
    (xdc_Char)0x65,  /* [2233] */
    (xdc_Char)0x20,  /* [2234] */
    (xdc_Char)0x63,  /* [2235] */
    (xdc_Char)0x61,  /* [2236] */
    (xdc_Char)0x6e,  /* [2237] */
    (xdc_Char)0x6e,  /* [2238] */
    (xdc_Char)0x6f,  /* [2239] */
    (xdc_Char)0x74,  /* [2240] */
    (xdc_Char)0x20,  /* [2241] */
    (xdc_Char)0x62,  /* [2242] */
    (xdc_Char)0x65,  /* [2243] */
    (xdc_Char)0x20,  /* [2244] */
    (xdc_Char)0x7a,  /* [2245] */
    (xdc_Char)0x65,  /* [2246] */
    (xdc_Char)0x72,  /* [2247] */
    (xdc_Char)0x6f,  /* [2248] */
    (xdc_Char)0x0,  /* [2249] */
    (xdc_Char)0x6e,  /* [2250] */
    (xdc_Char)0x75,  /* [2251] */
    (xdc_Char)0x6d,  /* [2252] */
    (xdc_Char)0x42,  /* [2253] */
    (xdc_Char)0x6c,  /* [2254] */
    (xdc_Char)0x6f,  /* [2255] */
    (xdc_Char)0x63,  /* [2256] */
    (xdc_Char)0x6b,  /* [2257] */
    (xdc_Char)0x73,  /* [2258] */
    (xdc_Char)0x20,  /* [2259] */
    (xdc_Char)0x63,  /* [2260] */
    (xdc_Char)0x61,  /* [2261] */
    (xdc_Char)0x6e,  /* [2262] */
    (xdc_Char)0x6e,  /* [2263] */
    (xdc_Char)0x6f,  /* [2264] */
    (xdc_Char)0x74,  /* [2265] */
    (xdc_Char)0x20,  /* [2266] */
    (xdc_Char)0x62,  /* [2267] */
    (xdc_Char)0x65,  /* [2268] */
    (xdc_Char)0x20,  /* [2269] */
    (xdc_Char)0x7a,  /* [2270] */
    (xdc_Char)0x65,  /* [2271] */
    (xdc_Char)0x72,  /* [2272] */
    (xdc_Char)0x6f,  /* [2273] */
    (xdc_Char)0x0,  /* [2274] */
    (xdc_Char)0x62,  /* [2275] */
    (xdc_Char)0x75,  /* [2276] */
    (xdc_Char)0x66,  /* [2277] */
    (xdc_Char)0x53,  /* [2278] */
    (xdc_Char)0x69,  /* [2279] */
    (xdc_Char)0x7a,  /* [2280] */
    (xdc_Char)0x65,  /* [2281] */
    (xdc_Char)0x20,  /* [2282] */
    (xdc_Char)0x63,  /* [2283] */
    (xdc_Char)0x61,  /* [2284] */
    (xdc_Char)0x6e,  /* [2285] */
    (xdc_Char)0x6e,  /* [2286] */
    (xdc_Char)0x6f,  /* [2287] */
    (xdc_Char)0x74,  /* [2288] */
    (xdc_Char)0x20,  /* [2289] */
    (xdc_Char)0x62,  /* [2290] */
    (xdc_Char)0x65,  /* [2291] */
    (xdc_Char)0x20,  /* [2292] */
    (xdc_Char)0x7a,  /* [2293] */
    (xdc_Char)0x65,  /* [2294] */
    (xdc_Char)0x72,  /* [2295] */
    (xdc_Char)0x6f,  /* [2296] */
    (xdc_Char)0x0,  /* [2297] */
    (xdc_Char)0x48,  /* [2298] */
    (xdc_Char)0x65,  /* [2299] */
    (xdc_Char)0x61,  /* [2300] */
    (xdc_Char)0x70,  /* [2301] */
    (xdc_Char)0x42,  /* [2302] */
    (xdc_Char)0x75,  /* [2303] */
    (xdc_Char)0x66,  /* [2304] */
    (xdc_Char)0x5f,  /* [2305] */
    (xdc_Char)0x63,  /* [2306] */
    (xdc_Char)0x72,  /* [2307] */
    (xdc_Char)0x65,  /* [2308] */
    (xdc_Char)0x61,  /* [2309] */
    (xdc_Char)0x74,  /* [2310] */
    (xdc_Char)0x65,  /* [2311] */
    (xdc_Char)0x27,  /* [2312] */
    (xdc_Char)0x73,  /* [2313] */
    (xdc_Char)0x20,  /* [2314] */
    (xdc_Char)0x62,  /* [2315] */
    (xdc_Char)0x75,  /* [2316] */
    (xdc_Char)0x66,  /* [2317] */
    (xdc_Char)0x53,  /* [2318] */
    (xdc_Char)0x69,  /* [2319] */
    (xdc_Char)0x7a,  /* [2320] */
    (xdc_Char)0x65,  /* [2321] */
    (xdc_Char)0x20,  /* [2322] */
    (xdc_Char)0x70,  /* [2323] */
    (xdc_Char)0x61,  /* [2324] */
    (xdc_Char)0x72,  /* [2325] */
    (xdc_Char)0x61,  /* [2326] */
    (xdc_Char)0x6d,  /* [2327] */
    (xdc_Char)0x65,  /* [2328] */
    (xdc_Char)0x74,  /* [2329] */
    (xdc_Char)0x65,  /* [2330] */
    (xdc_Char)0x72,  /* [2331] */
    (xdc_Char)0x20,  /* [2332] */
    (xdc_Char)0x69,  /* [2333] */
    (xdc_Char)0x73,  /* [2334] */
    (xdc_Char)0x20,  /* [2335] */
    (xdc_Char)0x69,  /* [2336] */
    (xdc_Char)0x6e,  /* [2337] */
    (xdc_Char)0x76,  /* [2338] */
    (xdc_Char)0x61,  /* [2339] */
    (xdc_Char)0x6c,  /* [2340] */
    (xdc_Char)0x69,  /* [2341] */
    (xdc_Char)0x64,  /* [2342] */
    (xdc_Char)0x20,  /* [2343] */
    (xdc_Char)0x28,  /* [2344] */
    (xdc_Char)0x74,  /* [2345] */
    (xdc_Char)0x6f,  /* [2346] */
    (xdc_Char)0x6f,  /* [2347] */
    (xdc_Char)0x20,  /* [2348] */
    (xdc_Char)0x73,  /* [2349] */
    (xdc_Char)0x6d,  /* [2350] */
    (xdc_Char)0x61,  /* [2351] */
    (xdc_Char)0x6c,  /* [2352] */
    (xdc_Char)0x6c,  /* [2353] */
    (xdc_Char)0x29,  /* [2354] */
    (xdc_Char)0x0,  /* [2355] */
    (xdc_Char)0x43,  /* [2356] */
    (xdc_Char)0x61,  /* [2357] */
    (xdc_Char)0x6e,  /* [2358] */
    (xdc_Char)0x6e,  /* [2359] */
    (xdc_Char)0x6f,  /* [2360] */
    (xdc_Char)0x74,  /* [2361] */
    (xdc_Char)0x20,  /* [2362] */
    (xdc_Char)0x63,  /* [2363] */
    (xdc_Char)0x61,  /* [2364] */
    (xdc_Char)0x6c,  /* [2365] */
    (xdc_Char)0x6c,  /* [2366] */
    (xdc_Char)0x20,  /* [2367] */
    (xdc_Char)0x48,  /* [2368] */
    (xdc_Char)0x65,  /* [2369] */
    (xdc_Char)0x61,  /* [2370] */
    (xdc_Char)0x70,  /* [2371] */
    (xdc_Char)0x42,  /* [2372] */
    (xdc_Char)0x75,  /* [2373] */
    (xdc_Char)0x66,  /* [2374] */
    (xdc_Char)0x5f,  /* [2375] */
    (xdc_Char)0x66,  /* [2376] */
    (xdc_Char)0x72,  /* [2377] */
    (xdc_Char)0x65,  /* [2378] */
    (xdc_Char)0x65,  /* [2379] */
    (xdc_Char)0x20,  /* [2380] */
    (xdc_Char)0x77,  /* [2381] */
    (xdc_Char)0x68,  /* [2382] */
    (xdc_Char)0x65,  /* [2383] */
    (xdc_Char)0x6e,  /* [2384] */
    (xdc_Char)0x20,  /* [2385] */
    (xdc_Char)0x6e,  /* [2386] */
    (xdc_Char)0x6f,  /* [2387] */
    (xdc_Char)0x20,  /* [2388] */
    (xdc_Char)0x62,  /* [2389] */
    (xdc_Char)0x6c,  /* [2390] */
    (xdc_Char)0x6f,  /* [2391] */
    (xdc_Char)0x63,  /* [2392] */
    (xdc_Char)0x6b,  /* [2393] */
    (xdc_Char)0x73,  /* [2394] */
    (xdc_Char)0x20,  /* [2395] */
    (xdc_Char)0x68,  /* [2396] */
    (xdc_Char)0x61,  /* [2397] */
    (xdc_Char)0x76,  /* [2398] */
    (xdc_Char)0x65,  /* [2399] */
    (xdc_Char)0x20,  /* [2400] */
    (xdc_Char)0x62,  /* [2401] */
    (xdc_Char)0x65,  /* [2402] */
    (xdc_Char)0x65,  /* [2403] */
    (xdc_Char)0x6e,  /* [2404] */
    (xdc_Char)0x20,  /* [2405] */
    (xdc_Char)0x61,  /* [2406] */
    (xdc_Char)0x6c,  /* [2407] */
    (xdc_Char)0x6c,  /* [2408] */
    (xdc_Char)0x6f,  /* [2409] */
    (xdc_Char)0x63,  /* [2410] */
    (xdc_Char)0x61,  /* [2411] */
    (xdc_Char)0x74,  /* [2412] */
    (xdc_Char)0x65,  /* [2413] */
    (xdc_Char)0x64,  /* [2414] */
    (xdc_Char)0x0,  /* [2415] */
    (xdc_Char)0x41,  /* [2416] */
    (xdc_Char)0x5f,  /* [2417] */
    (xdc_Char)0x69,  /* [2418] */
    (xdc_Char)0x6e,  /* [2419] */
    (xdc_Char)0x76,  /* [2420] */
    (xdc_Char)0x61,  /* [2421] */
    (xdc_Char)0x6c,  /* [2422] */
    (xdc_Char)0x69,  /* [2423] */
    (xdc_Char)0x64,  /* [2424] */
    (xdc_Char)0x46,  /* [2425] */
    (xdc_Char)0x72,  /* [2426] */
    (xdc_Char)0x65,  /* [2427] */
    (xdc_Char)0x65,  /* [2428] */
    (xdc_Char)0x3a,  /* [2429] */
    (xdc_Char)0x20,  /* [2430] */
    (xdc_Char)0x49,  /* [2431] */
    (xdc_Char)0x6e,  /* [2432] */
    (xdc_Char)0x76,  /* [2433] */
    (xdc_Char)0x61,  /* [2434] */
    (xdc_Char)0x6c,  /* [2435] */
    (xdc_Char)0x69,  /* [2436] */
    (xdc_Char)0x64,  /* [2437] */
    (xdc_Char)0x20,  /* [2438] */
    (xdc_Char)0x66,  /* [2439] */
    (xdc_Char)0x72,  /* [2440] */
    (xdc_Char)0x65,  /* [2441] */
    (xdc_Char)0x65,  /* [2442] */
    (xdc_Char)0x0,  /* [2443] */
    (xdc_Char)0x41,  /* [2444] */
    (xdc_Char)0x5f,  /* [2445] */
    (xdc_Char)0x7a,  /* [2446] */
    (xdc_Char)0x65,  /* [2447] */
    (xdc_Char)0x72,  /* [2448] */
    (xdc_Char)0x6f,  /* [2449] */
    (xdc_Char)0x42,  /* [2450] */
    (xdc_Char)0x6c,  /* [2451] */
    (xdc_Char)0x6f,  /* [2452] */
    (xdc_Char)0x63,  /* [2453] */
    (xdc_Char)0x6b,  /* [2454] */
    (xdc_Char)0x3a,  /* [2455] */
    (xdc_Char)0x20,  /* [2456] */
    (xdc_Char)0x43,  /* [2457] */
    (xdc_Char)0x61,  /* [2458] */
    (xdc_Char)0x6e,  /* [2459] */
    (xdc_Char)0x6e,  /* [2460] */
    (xdc_Char)0x6f,  /* [2461] */
    (xdc_Char)0x74,  /* [2462] */
    (xdc_Char)0x20,  /* [2463] */
    (xdc_Char)0x61,  /* [2464] */
    (xdc_Char)0x6c,  /* [2465] */
    (xdc_Char)0x6c,  /* [2466] */
    (xdc_Char)0x6f,  /* [2467] */
    (xdc_Char)0x63,  /* [2468] */
    (xdc_Char)0x61,  /* [2469] */
    (xdc_Char)0x74,  /* [2470] */
    (xdc_Char)0x65,  /* [2471] */
    (xdc_Char)0x20,  /* [2472] */
    (xdc_Char)0x73,  /* [2473] */
    (xdc_Char)0x69,  /* [2474] */
    (xdc_Char)0x7a,  /* [2475] */
    (xdc_Char)0x65,  /* [2476] */
    (xdc_Char)0x20,  /* [2477] */
    (xdc_Char)0x30,  /* [2478] */
    (xdc_Char)0x0,  /* [2479] */
    (xdc_Char)0x41,  /* [2480] */
    (xdc_Char)0x5f,  /* [2481] */
    (xdc_Char)0x68,  /* [2482] */
    (xdc_Char)0x65,  /* [2483] */
    (xdc_Char)0x61,  /* [2484] */
    (xdc_Char)0x70,  /* [2485] */
    (xdc_Char)0x53,  /* [2486] */
    (xdc_Char)0x69,  /* [2487] */
    (xdc_Char)0x7a,  /* [2488] */
    (xdc_Char)0x65,  /* [2489] */
    (xdc_Char)0x3a,  /* [2490] */
    (xdc_Char)0x20,  /* [2491] */
    (xdc_Char)0x52,  /* [2492] */
    (xdc_Char)0x65,  /* [2493] */
    (xdc_Char)0x71,  /* [2494] */
    (xdc_Char)0x75,  /* [2495] */
    (xdc_Char)0x65,  /* [2496] */
    (xdc_Char)0x73,  /* [2497] */
    (xdc_Char)0x74,  /* [2498] */
    (xdc_Char)0x65,  /* [2499] */
    (xdc_Char)0x64,  /* [2500] */
    (xdc_Char)0x20,  /* [2501] */
    (xdc_Char)0x68,  /* [2502] */
    (xdc_Char)0x65,  /* [2503] */
    (xdc_Char)0x61,  /* [2504] */
    (xdc_Char)0x70,  /* [2505] */
    (xdc_Char)0x20,  /* [2506] */
    (xdc_Char)0x73,  /* [2507] */
    (xdc_Char)0x69,  /* [2508] */
    (xdc_Char)0x7a,  /* [2509] */
    (xdc_Char)0x65,  /* [2510] */
    (xdc_Char)0x20,  /* [2511] */
    (xdc_Char)0x69,  /* [2512] */
    (xdc_Char)0x73,  /* [2513] */
    (xdc_Char)0x20,  /* [2514] */
    (xdc_Char)0x74,  /* [2515] */
    (xdc_Char)0x6f,  /* [2516] */
    (xdc_Char)0x6f,  /* [2517] */
    (xdc_Char)0x20,  /* [2518] */
    (xdc_Char)0x73,  /* [2519] */
    (xdc_Char)0x6d,  /* [2520] */
    (xdc_Char)0x61,  /* [2521] */
    (xdc_Char)0x6c,  /* [2522] */
    (xdc_Char)0x6c,  /* [2523] */
    (xdc_Char)0x0,  /* [2524] */
    (xdc_Char)0x41,  /* [2525] */
    (xdc_Char)0x5f,  /* [2526] */
    (xdc_Char)0x61,  /* [2527] */
    (xdc_Char)0x6c,  /* [2528] */
    (xdc_Char)0x69,  /* [2529] */
    (xdc_Char)0x67,  /* [2530] */
    (xdc_Char)0x6e,  /* [2531] */
    (xdc_Char)0x3a,  /* [2532] */
    (xdc_Char)0x20,  /* [2533] */
    (xdc_Char)0x52,  /* [2534] */
    (xdc_Char)0x65,  /* [2535] */
    (xdc_Char)0x71,  /* [2536] */
    (xdc_Char)0x75,  /* [2537] */
    (xdc_Char)0x65,  /* [2538] */
    (xdc_Char)0x73,  /* [2539] */
    (xdc_Char)0x74,  /* [2540] */
    (xdc_Char)0x65,  /* [2541] */
    (xdc_Char)0x64,  /* [2542] */
    (xdc_Char)0x20,  /* [2543] */
    (xdc_Char)0x61,  /* [2544] */
    (xdc_Char)0x6c,  /* [2545] */
    (xdc_Char)0x69,  /* [2546] */
    (xdc_Char)0x67,  /* [2547] */
    (xdc_Char)0x6e,  /* [2548] */
    (xdc_Char)0x20,  /* [2549] */
    (xdc_Char)0x69,  /* [2550] */
    (xdc_Char)0x73,  /* [2551] */
    (xdc_Char)0x20,  /* [2552] */
    (xdc_Char)0x6e,  /* [2553] */
    (xdc_Char)0x6f,  /* [2554] */
    (xdc_Char)0x74,  /* [2555] */
    (xdc_Char)0x20,  /* [2556] */
    (xdc_Char)0x61,  /* [2557] */
    (xdc_Char)0x20,  /* [2558] */
    (xdc_Char)0x70,  /* [2559] */
    (xdc_Char)0x6f,  /* [2560] */
    (xdc_Char)0x77,  /* [2561] */
    (xdc_Char)0x65,  /* [2562] */
    (xdc_Char)0x72,  /* [2563] */
    (xdc_Char)0x20,  /* [2564] */
    (xdc_Char)0x6f,  /* [2565] */
    (xdc_Char)0x66,  /* [2566] */
    (xdc_Char)0x20,  /* [2567] */
    (xdc_Char)0x32,  /* [2568] */
    (xdc_Char)0x0,  /* [2569] */
    (xdc_Char)0x49,  /* [2570] */
    (xdc_Char)0x6e,  /* [2571] */
    (xdc_Char)0x76,  /* [2572] */
    (xdc_Char)0x61,  /* [2573] */
    (xdc_Char)0x6c,  /* [2574] */
    (xdc_Char)0x69,  /* [2575] */
    (xdc_Char)0x64,  /* [2576] */
    (xdc_Char)0x20,  /* [2577] */
    (xdc_Char)0x62,  /* [2578] */
    (xdc_Char)0x6c,  /* [2579] */
    (xdc_Char)0x6f,  /* [2580] */
    (xdc_Char)0x63,  /* [2581] */
    (xdc_Char)0x6b,  /* [2582] */
    (xdc_Char)0x20,  /* [2583] */
    (xdc_Char)0x61,  /* [2584] */
    (xdc_Char)0x64,  /* [2585] */
    (xdc_Char)0x64,  /* [2586] */
    (xdc_Char)0x72,  /* [2587] */
    (xdc_Char)0x65,  /* [2588] */
    (xdc_Char)0x73,  /* [2589] */
    (xdc_Char)0x73,  /* [2590] */
    (xdc_Char)0x20,  /* [2591] */
    (xdc_Char)0x6f,  /* [2592] */
    (xdc_Char)0x6e,  /* [2593] */
    (xdc_Char)0x20,  /* [2594] */
    (xdc_Char)0x74,  /* [2595] */
    (xdc_Char)0x68,  /* [2596] */
    (xdc_Char)0x65,  /* [2597] */
    (xdc_Char)0x20,  /* [2598] */
    (xdc_Char)0x66,  /* [2599] */
    (xdc_Char)0x72,  /* [2600] */
    (xdc_Char)0x65,  /* [2601] */
    (xdc_Char)0x65,  /* [2602] */
    (xdc_Char)0x2e,  /* [2603] */
    (xdc_Char)0x20,  /* [2604] */
    (xdc_Char)0x46,  /* [2605] */
    (xdc_Char)0x61,  /* [2606] */
    (xdc_Char)0x69,  /* [2607] */
    (xdc_Char)0x6c,  /* [2608] */
    (xdc_Char)0x65,  /* [2609] */
    (xdc_Char)0x64,  /* [2610] */
    (xdc_Char)0x20,  /* [2611] */
    (xdc_Char)0x74,  /* [2612] */
    (xdc_Char)0x6f,  /* [2613] */
    (xdc_Char)0x20,  /* [2614] */
    (xdc_Char)0x66,  /* [2615] */
    (xdc_Char)0x72,  /* [2616] */
    (xdc_Char)0x65,  /* [2617] */
    (xdc_Char)0x65,  /* [2618] */
    (xdc_Char)0x20,  /* [2619] */
    (xdc_Char)0x62,  /* [2620] */
    (xdc_Char)0x6c,  /* [2621] */
    (xdc_Char)0x6f,  /* [2622] */
    (xdc_Char)0x63,  /* [2623] */
    (xdc_Char)0x6b,  /* [2624] */
    (xdc_Char)0x20,  /* [2625] */
    (xdc_Char)0x62,  /* [2626] */
    (xdc_Char)0x61,  /* [2627] */
    (xdc_Char)0x63,  /* [2628] */
    (xdc_Char)0x6b,  /* [2629] */
    (xdc_Char)0x20,  /* [2630] */
    (xdc_Char)0x74,  /* [2631] */
    (xdc_Char)0x6f,  /* [2632] */
    (xdc_Char)0x20,  /* [2633] */
    (xdc_Char)0x68,  /* [2634] */
    (xdc_Char)0x65,  /* [2635] */
    (xdc_Char)0x61,  /* [2636] */
    (xdc_Char)0x70,  /* [2637] */
    (xdc_Char)0x2e,  /* [2638] */
    (xdc_Char)0x0,  /* [2639] */
    (xdc_Char)0x41,  /* [2640] */
    (xdc_Char)0x5f,  /* [2641] */
    (xdc_Char)0x64,  /* [2642] */
    (xdc_Char)0x6f,  /* [2643] */
    (xdc_Char)0x75,  /* [2644] */
    (xdc_Char)0x62,  /* [2645] */
    (xdc_Char)0x6c,  /* [2646] */
    (xdc_Char)0x65,  /* [2647] */
    (xdc_Char)0x46,  /* [2648] */
    (xdc_Char)0x72,  /* [2649] */
    (xdc_Char)0x65,  /* [2650] */
    (xdc_Char)0x65,  /* [2651] */
    (xdc_Char)0x3a,  /* [2652] */
    (xdc_Char)0x20,  /* [2653] */
    (xdc_Char)0x42,  /* [2654] */
    (xdc_Char)0x75,  /* [2655] */
    (xdc_Char)0x66,  /* [2656] */
    (xdc_Char)0x66,  /* [2657] */
    (xdc_Char)0x65,  /* [2658] */
    (xdc_Char)0x72,  /* [2659] */
    (xdc_Char)0x20,  /* [2660] */
    (xdc_Char)0x61,  /* [2661] */
    (xdc_Char)0x6c,  /* [2662] */
    (xdc_Char)0x72,  /* [2663] */
    (xdc_Char)0x65,  /* [2664] */
    (xdc_Char)0x61,  /* [2665] */
    (xdc_Char)0x64,  /* [2666] */
    (xdc_Char)0x79,  /* [2667] */
    (xdc_Char)0x20,  /* [2668] */
    (xdc_Char)0x66,  /* [2669] */
    (xdc_Char)0x72,  /* [2670] */
    (xdc_Char)0x65,  /* [2671] */
    (xdc_Char)0x65,  /* [2672] */
    (xdc_Char)0x0,  /* [2673] */
    (xdc_Char)0x41,  /* [2674] */
    (xdc_Char)0x5f,  /* [2675] */
    (xdc_Char)0x62,  /* [2676] */
    (xdc_Char)0x75,  /* [2677] */
    (xdc_Char)0x66,  /* [2678] */
    (xdc_Char)0x4f,  /* [2679] */
    (xdc_Char)0x76,  /* [2680] */
    (xdc_Char)0x65,  /* [2681] */
    (xdc_Char)0x72,  /* [2682] */
    (xdc_Char)0x66,  /* [2683] */
    (xdc_Char)0x6c,  /* [2684] */
    (xdc_Char)0x6f,  /* [2685] */
    (xdc_Char)0x77,  /* [2686] */
    (xdc_Char)0x3a,  /* [2687] */
    (xdc_Char)0x20,  /* [2688] */
    (xdc_Char)0x42,  /* [2689] */
    (xdc_Char)0x75,  /* [2690] */
    (xdc_Char)0x66,  /* [2691] */
    (xdc_Char)0x66,  /* [2692] */
    (xdc_Char)0x65,  /* [2693] */
    (xdc_Char)0x72,  /* [2694] */
    (xdc_Char)0x20,  /* [2695] */
    (xdc_Char)0x6f,  /* [2696] */
    (xdc_Char)0x76,  /* [2697] */
    (xdc_Char)0x65,  /* [2698] */
    (xdc_Char)0x72,  /* [2699] */
    (xdc_Char)0x66,  /* [2700] */
    (xdc_Char)0x6c,  /* [2701] */
    (xdc_Char)0x6f,  /* [2702] */
    (xdc_Char)0x77,  /* [2703] */
    (xdc_Char)0x0,  /* [2704] */
    (xdc_Char)0x41,  /* [2705] */
    (xdc_Char)0x5f,  /* [2706] */
    (xdc_Char)0x6e,  /* [2707] */
    (xdc_Char)0x6f,  /* [2708] */
    (xdc_Char)0x74,  /* [2709] */
    (xdc_Char)0x45,  /* [2710] */
    (xdc_Char)0x6d,  /* [2711] */
    (xdc_Char)0x70,  /* [2712] */
    (xdc_Char)0x74,  /* [2713] */
    (xdc_Char)0x79,  /* [2714] */
    (xdc_Char)0x3a,  /* [2715] */
    (xdc_Char)0x20,  /* [2716] */
    (xdc_Char)0x48,  /* [2717] */
    (xdc_Char)0x65,  /* [2718] */
    (xdc_Char)0x61,  /* [2719] */
    (xdc_Char)0x70,  /* [2720] */
    (xdc_Char)0x20,  /* [2721] */
    (xdc_Char)0x6e,  /* [2722] */
    (xdc_Char)0x6f,  /* [2723] */
    (xdc_Char)0x74,  /* [2724] */
    (xdc_Char)0x20,  /* [2725] */
    (xdc_Char)0x65,  /* [2726] */
    (xdc_Char)0x6d,  /* [2727] */
    (xdc_Char)0x70,  /* [2728] */
    (xdc_Char)0x74,  /* [2729] */
    (xdc_Char)0x79,  /* [2730] */
    (xdc_Char)0x0,  /* [2731] */
    (xdc_Char)0x41,  /* [2732] */
    (xdc_Char)0x5f,  /* [2733] */
    (xdc_Char)0x6e,  /* [2734] */
    (xdc_Char)0x75,  /* [2735] */
    (xdc_Char)0x6c,  /* [2736] */
    (xdc_Char)0x6c,  /* [2737] */
    (xdc_Char)0x4f,  /* [2738] */
    (xdc_Char)0x62,  /* [2739] */
    (xdc_Char)0x6a,  /* [2740] */
    (xdc_Char)0x65,  /* [2741] */
    (xdc_Char)0x63,  /* [2742] */
    (xdc_Char)0x74,  /* [2743] */
    (xdc_Char)0x3a,  /* [2744] */
    (xdc_Char)0x20,  /* [2745] */
    (xdc_Char)0x48,  /* [2746] */
    (xdc_Char)0x65,  /* [2747] */
    (xdc_Char)0x61,  /* [2748] */
    (xdc_Char)0x70,  /* [2749] */
    (xdc_Char)0x54,  /* [2750] */
    (xdc_Char)0x72,  /* [2751] */
    (xdc_Char)0x61,  /* [2752] */
    (xdc_Char)0x63,  /* [2753] */
    (xdc_Char)0x6b,  /* [2754] */
    (xdc_Char)0x5f,  /* [2755] */
    (xdc_Char)0x70,  /* [2756] */
    (xdc_Char)0x72,  /* [2757] */
    (xdc_Char)0x69,  /* [2758] */
    (xdc_Char)0x6e,  /* [2759] */
    (xdc_Char)0x74,  /* [2760] */
    (xdc_Char)0x48,  /* [2761] */
    (xdc_Char)0x65,  /* [2762] */
    (xdc_Char)0x61,  /* [2763] */
    (xdc_Char)0x70,  /* [2764] */
    (xdc_Char)0x20,  /* [2765] */
    (xdc_Char)0x63,  /* [2766] */
    (xdc_Char)0x61,  /* [2767] */
    (xdc_Char)0x6c,  /* [2768] */
    (xdc_Char)0x6c,  /* [2769] */
    (xdc_Char)0x65,  /* [2770] */
    (xdc_Char)0x64,  /* [2771] */
    (xdc_Char)0x20,  /* [2772] */
    (xdc_Char)0x77,  /* [2773] */
    (xdc_Char)0x69,  /* [2774] */
    (xdc_Char)0x74,  /* [2775] */
    (xdc_Char)0x68,  /* [2776] */
    (xdc_Char)0x20,  /* [2777] */
    (xdc_Char)0x6e,  /* [2778] */
    (xdc_Char)0x75,  /* [2779] */
    (xdc_Char)0x6c,  /* [2780] */
    (xdc_Char)0x6c,  /* [2781] */
    (xdc_Char)0x20,  /* [2782] */
    (xdc_Char)0x6f,  /* [2783] */
    (xdc_Char)0x62,  /* [2784] */
    (xdc_Char)0x6a,  /* [2785] */
    (xdc_Char)0x0,  /* [2786] */
    (xdc_Char)0x41,  /* [2787] */
    (xdc_Char)0x5f,  /* [2788] */
    (xdc_Char)0x69,  /* [2789] */
    (xdc_Char)0x70,  /* [2790] */
    (xdc_Char)0x63,  /* [2791] */
    (xdc_Char)0x46,  /* [2792] */
    (xdc_Char)0x61,  /* [2793] */
    (xdc_Char)0x69,  /* [2794] */
    (xdc_Char)0x6c,  /* [2795] */
    (xdc_Char)0x65,  /* [2796] */
    (xdc_Char)0x64,  /* [2797] */
    (xdc_Char)0x3a,  /* [2798] */
    (xdc_Char)0x20,  /* [2799] */
    (xdc_Char)0x55,  /* [2800] */
    (xdc_Char)0x6e,  /* [2801] */
    (xdc_Char)0x65,  /* [2802] */
    (xdc_Char)0x78,  /* [2803] */
    (xdc_Char)0x70,  /* [2804] */
    (xdc_Char)0x65,  /* [2805] */
    (xdc_Char)0x63,  /* [2806] */
    (xdc_Char)0x74,  /* [2807] */
    (xdc_Char)0x65,  /* [2808] */
    (xdc_Char)0x64,  /* [2809] */
    (xdc_Char)0x20,  /* [2810] */
    (xdc_Char)0x4d,  /* [2811] */
    (xdc_Char)0x65,  /* [2812] */
    (xdc_Char)0x73,  /* [2813] */
    (xdc_Char)0x73,  /* [2814] */
    (xdc_Char)0x61,  /* [2815] */
    (xdc_Char)0x67,  /* [2816] */
    (xdc_Char)0x65,  /* [2817] */
    (xdc_Char)0x51,  /* [2818] */
    (xdc_Char)0x20,  /* [2819] */
    (xdc_Char)0x66,  /* [2820] */
    (xdc_Char)0x61,  /* [2821] */
    (xdc_Char)0x69,  /* [2822] */
    (xdc_Char)0x6c,  /* [2823] */
    (xdc_Char)0x65,  /* [2824] */
    (xdc_Char)0x64,  /* [2825] */
    (xdc_Char)0x0,  /* [2826] */
    (xdc_Char)0x41,  /* [2827] */
    (xdc_Char)0x5f,  /* [2828] */
    (xdc_Char)0x69,  /* [2829] */
    (xdc_Char)0x6e,  /* [2830] */
    (xdc_Char)0x76,  /* [2831] */
    (xdc_Char)0x61,  /* [2832] */
    (xdc_Char)0x6c,  /* [2833] */
    (xdc_Char)0x69,  /* [2834] */
    (xdc_Char)0x64,  /* [2835] */
    (xdc_Char)0x48,  /* [2836] */
    (xdc_Char)0x64,  /* [2837] */
    (xdc_Char)0x72,  /* [2838] */
    (xdc_Char)0x54,  /* [2839] */
    (xdc_Char)0x79,  /* [2840] */
    (xdc_Char)0x70,  /* [2841] */
    (xdc_Char)0x65,  /* [2842] */
    (xdc_Char)0x3a,  /* [2843] */
    (xdc_Char)0x20,  /* [2844] */
    (xdc_Char)0x49,  /* [2845] */
    (xdc_Char)0x6e,  /* [2846] */
    (xdc_Char)0x76,  /* [2847] */
    (xdc_Char)0x61,  /* [2848] */
    (xdc_Char)0x6c,  /* [2849] */
    (xdc_Char)0x69,  /* [2850] */
    (xdc_Char)0x64,  /* [2851] */
    (xdc_Char)0x20,  /* [2852] */
    (xdc_Char)0x48,  /* [2853] */
    (xdc_Char)0x64,  /* [2854] */
    (xdc_Char)0x72,  /* [2855] */
    (xdc_Char)0x54,  /* [2856] */
    (xdc_Char)0x79,  /* [2857] */
    (xdc_Char)0x70,  /* [2858] */
    (xdc_Char)0x65,  /* [2859] */
    (xdc_Char)0x20,  /* [2860] */
    (xdc_Char)0x73,  /* [2861] */
    (xdc_Char)0x70,  /* [2862] */
    (xdc_Char)0x65,  /* [2863] */
    (xdc_Char)0x63,  /* [2864] */
    (xdc_Char)0x69,  /* [2865] */
    (xdc_Char)0x66,  /* [2866] */
    (xdc_Char)0x69,  /* [2867] */
    (xdc_Char)0x65,  /* [2868] */
    (xdc_Char)0x64,  /* [2869] */
    (xdc_Char)0x0,  /* [2870] */
    (xdc_Char)0x41,  /* [2871] */
    (xdc_Char)0x5f,  /* [2872] */
    (xdc_Char)0x69,  /* [2873] */
    (xdc_Char)0x6e,  /* [2874] */
    (xdc_Char)0x76,  /* [2875] */
    (xdc_Char)0x61,  /* [2876] */
    (xdc_Char)0x6c,  /* [2877] */
    (xdc_Char)0x69,  /* [2878] */
    (xdc_Char)0x64,  /* [2879] */
    (xdc_Char)0x53,  /* [2880] */
    (xdc_Char)0x65,  /* [2881] */
    (xdc_Char)0x72,  /* [2882] */
    (xdc_Char)0x76,  /* [2883] */
    (xdc_Char)0x69,  /* [2884] */
    (xdc_Char)0x63,  /* [2885] */
    (xdc_Char)0x65,  /* [2886] */
    (xdc_Char)0x49,  /* [2887] */
    (xdc_Char)0x64,  /* [2888] */
    (xdc_Char)0x3a,  /* [2889] */
    (xdc_Char)0x20,  /* [2890] */
    (xdc_Char)0x53,  /* [2891] */
    (xdc_Char)0x65,  /* [2892] */
    (xdc_Char)0x72,  /* [2893] */
    (xdc_Char)0x76,  /* [2894] */
    (xdc_Char)0x69,  /* [2895] */
    (xdc_Char)0x63,  /* [2896] */
    (xdc_Char)0x65,  /* [2897] */
    (xdc_Char)0x49,  /* [2898] */
    (xdc_Char)0x64,  /* [2899] */
    (xdc_Char)0x20,  /* [2900] */
    (xdc_Char)0x6f,  /* [2901] */
    (xdc_Char)0x75,  /* [2902] */
    (xdc_Char)0x74,  /* [2903] */
    (xdc_Char)0x20,  /* [2904] */
    (xdc_Char)0x6f,  /* [2905] */
    (xdc_Char)0x66,  /* [2906] */
    (xdc_Char)0x20,  /* [2907] */
    (xdc_Char)0x72,  /* [2908] */
    (xdc_Char)0x61,  /* [2909] */
    (xdc_Char)0x6e,  /* [2910] */
    (xdc_Char)0x67,  /* [2911] */
    (xdc_Char)0x65,  /* [2912] */
    (xdc_Char)0x0,  /* [2913] */
    (xdc_Char)0x41,  /* [2914] */
    (xdc_Char)0x5f,  /* [2915] */
    (xdc_Char)0x69,  /* [2916] */
    (xdc_Char)0x6e,  /* [2917] */
    (xdc_Char)0x76,  /* [2918] */
    (xdc_Char)0x61,  /* [2919] */
    (xdc_Char)0x6c,  /* [2920] */
    (xdc_Char)0x69,  /* [2921] */
    (xdc_Char)0x64,  /* [2922] */
    (xdc_Char)0x50,  /* [2923] */
    (xdc_Char)0x72,  /* [2924] */
    (xdc_Char)0x6f,  /* [2925] */
    (xdc_Char)0x63,  /* [2926] */
    (xdc_Char)0x65,  /* [2927] */
    (xdc_Char)0x73,  /* [2928] */
    (xdc_Char)0x73,  /* [2929] */
    (xdc_Char)0x43,  /* [2930] */
    (xdc_Char)0x61,  /* [2931] */
    (xdc_Char)0x6c,  /* [2932] */
    (xdc_Char)0x6c,  /* [2933] */
    (xdc_Char)0x62,  /* [2934] */
    (xdc_Char)0x61,  /* [2935] */
    (xdc_Char)0x63,  /* [2936] */
    (xdc_Char)0x6b,  /* [2937] */
    (xdc_Char)0x46,  /* [2938] */
    (xdc_Char)0x78,  /* [2939] */
    (xdc_Char)0x6e,  /* [2940] */
    (xdc_Char)0x3a,  /* [2941] */
    (xdc_Char)0x20,  /* [2942] */
    (xdc_Char)0x43,  /* [2943] */
    (xdc_Char)0x61,  /* [2944] */
    (xdc_Char)0x6c,  /* [2945] */
    (xdc_Char)0x6c,  /* [2946] */
    (xdc_Char)0x62,  /* [2947] */
    (xdc_Char)0x61,  /* [2948] */
    (xdc_Char)0x63,  /* [2949] */
    (xdc_Char)0x6b,  /* [2950] */
    (xdc_Char)0x20,  /* [2951] */
    (xdc_Char)0x63,  /* [2952] */
    (xdc_Char)0x61,  /* [2953] */
    (xdc_Char)0x6e,  /* [2954] */
    (xdc_Char)0x6e,  /* [2955] */
    (xdc_Char)0x6f,  /* [2956] */
    (xdc_Char)0x74,  /* [2957] */
    (xdc_Char)0x20,  /* [2958] */
    (xdc_Char)0x62,  /* [2959] */
    (xdc_Char)0x65,  /* [2960] */
    (xdc_Char)0x20,  /* [2961] */
    (xdc_Char)0x4e,  /* [2962] */
    (xdc_Char)0x55,  /* [2963] */
    (xdc_Char)0x4c,  /* [2964] */
    (xdc_Char)0x4c,  /* [2965] */
    (xdc_Char)0x0,  /* [2966] */
    (xdc_Char)0x41,  /* [2967] */
    (xdc_Char)0x5f,  /* [2968] */
    (xdc_Char)0x7a,  /* [2969] */
    (xdc_Char)0x65,  /* [2970] */
    (xdc_Char)0x72,  /* [2971] */
    (xdc_Char)0x6f,  /* [2972] */
    (xdc_Char)0x54,  /* [2973] */
    (xdc_Char)0x69,  /* [2974] */
    (xdc_Char)0x6d,  /* [2975] */
    (xdc_Char)0x65,  /* [2976] */
    (xdc_Char)0x6f,  /* [2977] */
    (xdc_Char)0x75,  /* [2978] */
    (xdc_Char)0x74,  /* [2979] */
    (xdc_Char)0x3a,  /* [2980] */
    (xdc_Char)0x20,  /* [2981] */
    (xdc_Char)0x54,  /* [2982] */
    (xdc_Char)0x69,  /* [2983] */
    (xdc_Char)0x6d,  /* [2984] */
    (xdc_Char)0x65,  /* [2985] */
    (xdc_Char)0x6f,  /* [2986] */
    (xdc_Char)0x75,  /* [2987] */
    (xdc_Char)0x74,  /* [2988] */
    (xdc_Char)0x20,  /* [2989] */
    (xdc_Char)0x76,  /* [2990] */
    (xdc_Char)0x61,  /* [2991] */
    (xdc_Char)0x6c,  /* [2992] */
    (xdc_Char)0x75,  /* [2993] */
    (xdc_Char)0x65,  /* [2994] */
    (xdc_Char)0x20,  /* [2995] */
    (xdc_Char)0x61,  /* [2996] */
    (xdc_Char)0x6e,  /* [2997] */
    (xdc_Char)0x6e,  /* [2998] */
    (xdc_Char)0x6f,  /* [2999] */
    (xdc_Char)0x74,  /* [3000] */
    (xdc_Char)0x20,  /* [3001] */
    (xdc_Char)0x62,  /* [3002] */
    (xdc_Char)0x65,  /* [3003] */
    (xdc_Char)0x20,  /* [3004] */
    (xdc_Char)0x7a,  /* [3005] */
    (xdc_Char)0x65,  /* [3006] */
    (xdc_Char)0x72,  /* [3007] */
    (xdc_Char)0x6f,  /* [3008] */
    (xdc_Char)0x0,  /* [3009] */
    (xdc_Char)0x41,  /* [3010] */
    (xdc_Char)0x5f,  /* [3011] */
    (xdc_Char)0x69,  /* [3012] */
    (xdc_Char)0x6e,  /* [3013] */
    (xdc_Char)0x76,  /* [3014] */
    (xdc_Char)0x61,  /* [3015] */
    (xdc_Char)0x6c,  /* [3016] */
    (xdc_Char)0x69,  /* [3017] */
    (xdc_Char)0x64,  /* [3018] */
    (xdc_Char)0x4b,  /* [3019] */
    (xdc_Char)0x65,  /* [3020] */
    (xdc_Char)0x79,  /* [3021] */
    (xdc_Char)0x3a,  /* [3022] */
    (xdc_Char)0x20,  /* [3023] */
    (xdc_Char)0x74,  /* [3024] */
    (xdc_Char)0x68,  /* [3025] */
    (xdc_Char)0x65,  /* [3026] */
    (xdc_Char)0x20,  /* [3027] */
    (xdc_Char)0x6b,  /* [3028] */
    (xdc_Char)0x65,  /* [3029] */
    (xdc_Char)0x79,  /* [3030] */
    (xdc_Char)0x20,  /* [3031] */
    (xdc_Char)0x6d,  /* [3032] */
    (xdc_Char)0x75,  /* [3033] */
    (xdc_Char)0x73,  /* [3034] */
    (xdc_Char)0x74,  /* [3035] */
    (xdc_Char)0x20,  /* [3036] */
    (xdc_Char)0x62,  /* [3037] */
    (xdc_Char)0x65,  /* [3038] */
    (xdc_Char)0x20,  /* [3039] */
    (xdc_Char)0x73,  /* [3040] */
    (xdc_Char)0x65,  /* [3041] */
    (xdc_Char)0x74,  /* [3042] */
    (xdc_Char)0x20,  /* [3043] */
    (xdc_Char)0x74,  /* [3044] */
    (xdc_Char)0x6f,  /* [3045] */
    (xdc_Char)0x20,  /* [3046] */
    (xdc_Char)0x61,  /* [3047] */
    (xdc_Char)0x20,  /* [3048] */
    (xdc_Char)0x6e,  /* [3049] */
    (xdc_Char)0x6f,  /* [3050] */
    (xdc_Char)0x6e,  /* [3051] */
    (xdc_Char)0x2d,  /* [3052] */
    (xdc_Char)0x64,  /* [3053] */
    (xdc_Char)0x65,  /* [3054] */
    (xdc_Char)0x66,  /* [3055] */
    (xdc_Char)0x61,  /* [3056] */
    (xdc_Char)0x75,  /* [3057] */
    (xdc_Char)0x6c,  /* [3058] */
    (xdc_Char)0x74,  /* [3059] */
    (xdc_Char)0x20,  /* [3060] */
    (xdc_Char)0x76,  /* [3061] */
    (xdc_Char)0x61,  /* [3062] */
    (xdc_Char)0x6c,  /* [3063] */
    (xdc_Char)0x75,  /* [3064] */
    (xdc_Char)0x65,  /* [3065] */
    (xdc_Char)0x0,  /* [3066] */
    (xdc_Char)0x41,  /* [3067] */
    (xdc_Char)0x5f,  /* [3068] */
    (xdc_Char)0x6e,  /* [3069] */
    (xdc_Char)0x75,  /* [3070] */
    (xdc_Char)0x6c,  /* [3071] */
    (xdc_Char)0x6c,  /* [3072] */
    (xdc_Char)0x48,  /* [3073] */
    (xdc_Char)0x61,  /* [3074] */
    (xdc_Char)0x6e,  /* [3075] */
    (xdc_Char)0x64,  /* [3076] */
    (xdc_Char)0x6c,  /* [3077] */
    (xdc_Char)0x65,  /* [3078] */
    (xdc_Char)0x3a,  /* [3079] */
    (xdc_Char)0x20,  /* [3080] */
    (xdc_Char)0x4e,  /* [3081] */
    (xdc_Char)0x75,  /* [3082] */
    (xdc_Char)0x6c,  /* [3083] */
    (xdc_Char)0x6c,  /* [3084] */
    (xdc_Char)0x20,  /* [3085] */
    (xdc_Char)0x68,  /* [3086] */
    (xdc_Char)0x61,  /* [3087] */
    (xdc_Char)0x6e,  /* [3088] */
    (xdc_Char)0x64,  /* [3089] */
    (xdc_Char)0x6c,  /* [3090] */
    (xdc_Char)0x65,  /* [3091] */
    (xdc_Char)0x20,  /* [3092] */
    (xdc_Char)0x70,  /* [3093] */
    (xdc_Char)0x61,  /* [3094] */
    (xdc_Char)0x73,  /* [3095] */
    (xdc_Char)0x73,  /* [3096] */
    (xdc_Char)0x65,  /* [3097] */
    (xdc_Char)0x64,  /* [3098] */
    (xdc_Char)0x20,  /* [3099] */
    (xdc_Char)0x74,  /* [3100] */
    (xdc_Char)0x6f,  /* [3101] */
    (xdc_Char)0x20,  /* [3102] */
    (xdc_Char)0x63,  /* [3103] */
    (xdc_Char)0x72,  /* [3104] */
    (xdc_Char)0x65,  /* [3105] */
    (xdc_Char)0x61,  /* [3106] */
    (xdc_Char)0x74,  /* [3107] */
    (xdc_Char)0x65,  /* [3108] */
    (xdc_Char)0x0,  /* [3109] */
    (xdc_Char)0x41,  /* [3110] */
    (xdc_Char)0x5f,  /* [3111] */
    (xdc_Char)0x49,  /* [3112] */
    (xdc_Char)0x70,  /* [3113] */
    (xdc_Char)0x63,  /* [3114] */
    (xdc_Char)0x4d,  /* [3115] */
    (xdc_Char)0x50,  /* [3116] */
    (xdc_Char)0x46,  /* [3117] */
    (xdc_Char)0x61,  /* [3118] */
    (xdc_Char)0x69,  /* [3119] */
    (xdc_Char)0x6c,  /* [3120] */
    (xdc_Char)0x75,  /* [3121] */
    (xdc_Char)0x72,  /* [3122] */
    (xdc_Char)0x65,  /* [3123] */
    (xdc_Char)0x3a,  /* [3124] */
    (xdc_Char)0x20,  /* [3125] */
    (xdc_Char)0x55,  /* [3126] */
    (xdc_Char)0x6e,  /* [3127] */
    (xdc_Char)0x65,  /* [3128] */
    (xdc_Char)0x78,  /* [3129] */
    (xdc_Char)0x70,  /* [3130] */
    (xdc_Char)0x65,  /* [3131] */
    (xdc_Char)0x63,  /* [3132] */
    (xdc_Char)0x74,  /* [3133] */
    (xdc_Char)0x65,  /* [3134] */
    (xdc_Char)0x64,  /* [3135] */
    (xdc_Char)0x20,  /* [3136] */
    (xdc_Char)0x66,  /* [3137] */
    (xdc_Char)0x61,  /* [3138] */
    (xdc_Char)0x69,  /* [3139] */
    (xdc_Char)0x6c,  /* [3140] */
    (xdc_Char)0x75,  /* [3141] */
    (xdc_Char)0x72,  /* [3142] */
    (xdc_Char)0x65,  /* [3143] */
    (xdc_Char)0x20,  /* [3144] */
    (xdc_Char)0x77,  /* [3145] */
    (xdc_Char)0x69,  /* [3146] */
    (xdc_Char)0x74,  /* [3147] */
    (xdc_Char)0x68,  /* [3148] */
    (xdc_Char)0x20,  /* [3149] */
    (xdc_Char)0x74,  /* [3150] */
    (xdc_Char)0x68,  /* [3151] */
    (xdc_Char)0x65,  /* [3152] */
    (xdc_Char)0x20,  /* [3153] */
    (xdc_Char)0x49,  /* [3154] */
    (xdc_Char)0x70,  /* [3155] */
    (xdc_Char)0x63,  /* [3156] */
    (xdc_Char)0x4d,  /* [3157] */
    (xdc_Char)0x50,  /* [3158] */
    (xdc_Char)0x0,  /* [3159] */
    (xdc_Char)0x4c,  /* [3160] */
    (xdc_Char)0x6f,  /* [3161] */
    (xdc_Char)0x67,  /* [3162] */
    (xdc_Char)0x67,  /* [3163] */
    (xdc_Char)0x65,  /* [3164] */
    (xdc_Char)0x72,  /* [3165] */
    (xdc_Char)0x53,  /* [3166] */
    (xdc_Char)0x74,  /* [3167] */
    (xdc_Char)0x72,  /* [3168] */
    (xdc_Char)0x65,  /* [3169] */
    (xdc_Char)0x61,  /* [3170] */
    (xdc_Char)0x6d,  /* [3171] */
    (xdc_Char)0x65,  /* [3172] */
    (xdc_Char)0x72,  /* [3173] */
    (xdc_Char)0x32,  /* [3174] */
    (xdc_Char)0x5f,  /* [3175] */
    (xdc_Char)0x63,  /* [3176] */
    (xdc_Char)0x72,  /* [3177] */
    (xdc_Char)0x65,  /* [3178] */
    (xdc_Char)0x61,  /* [3179] */
    (xdc_Char)0x74,  /* [3180] */
    (xdc_Char)0x65,  /* [3181] */
    (xdc_Char)0x27,  /* [3182] */
    (xdc_Char)0x73,  /* [3183] */
    (xdc_Char)0x20,  /* [3184] */
    (xdc_Char)0x62,  /* [3185] */
    (xdc_Char)0x75,  /* [3186] */
    (xdc_Char)0x66,  /* [3187] */
    (xdc_Char)0x66,  /* [3188] */
    (xdc_Char)0x65,  /* [3189] */
    (xdc_Char)0x72,  /* [3190] */
    (xdc_Char)0x20,  /* [3191] */
    (xdc_Char)0x72,  /* [3192] */
    (xdc_Char)0x65,  /* [3193] */
    (xdc_Char)0x74,  /* [3194] */
    (xdc_Char)0x75,  /* [3195] */
    (xdc_Char)0x72,  /* [3196] */
    (xdc_Char)0x6e,  /* [3197] */
    (xdc_Char)0x65,  /* [3198] */
    (xdc_Char)0x64,  /* [3199] */
    (xdc_Char)0x20,  /* [3200] */
    (xdc_Char)0x62,  /* [3201] */
    (xdc_Char)0x79,  /* [3202] */
    (xdc_Char)0x20,  /* [3203] */
    (xdc_Char)0x70,  /* [3204] */
    (xdc_Char)0x72,  /* [3205] */
    (xdc_Char)0x69,  /* [3206] */
    (xdc_Char)0x6d,  /* [3207] */
    (xdc_Char)0x65,  /* [3208] */
    (xdc_Char)0x46,  /* [3209] */
    (xdc_Char)0x78,  /* [3210] */
    (xdc_Char)0x6e,  /* [3211] */
    (xdc_Char)0x20,  /* [3212] */
    (xdc_Char)0x69,  /* [3213] */
    (xdc_Char)0x73,  /* [3214] */
    (xdc_Char)0x20,  /* [3215] */
    (xdc_Char)0x4e,  /* [3216] */
    (xdc_Char)0x55,  /* [3217] */
    (xdc_Char)0x4c,  /* [3218] */
    (xdc_Char)0x4c,  /* [3219] */
    (xdc_Char)0x0,  /* [3220] */
    (xdc_Char)0x41,  /* [3221] */
    (xdc_Char)0x5f,  /* [3222] */
    (xdc_Char)0x62,  /* [3223] */
    (xdc_Char)0x61,  /* [3224] */
    (xdc_Char)0x64,  /* [3225] */
    (xdc_Char)0x43,  /* [3226] */
    (xdc_Char)0x6f,  /* [3227] */
    (xdc_Char)0x6e,  /* [3228] */
    (xdc_Char)0x74,  /* [3229] */
    (xdc_Char)0x65,  /* [3230] */
    (xdc_Char)0x78,  /* [3231] */
    (xdc_Char)0x74,  /* [3232] */
    (xdc_Char)0x3a,  /* [3233] */
    (xdc_Char)0x20,  /* [3234] */
    (xdc_Char)0x62,  /* [3235] */
    (xdc_Char)0x61,  /* [3236] */
    (xdc_Char)0x64,  /* [3237] */
    (xdc_Char)0x20,  /* [3238] */
    (xdc_Char)0x63,  /* [3239] */
    (xdc_Char)0x61,  /* [3240] */
    (xdc_Char)0x6c,  /* [3241] */
    (xdc_Char)0x6c,  /* [3242] */
    (xdc_Char)0x69,  /* [3243] */
    (xdc_Char)0x6e,  /* [3244] */
    (xdc_Char)0x67,  /* [3245] */
    (xdc_Char)0x20,  /* [3246] */
    (xdc_Char)0x63,  /* [3247] */
    (xdc_Char)0x6f,  /* [3248] */
    (xdc_Char)0x6e,  /* [3249] */
    (xdc_Char)0x74,  /* [3250] */
    (xdc_Char)0x65,  /* [3251] */
    (xdc_Char)0x78,  /* [3252] */
    (xdc_Char)0x74,  /* [3253] */
    (xdc_Char)0x2e,  /* [3254] */
    (xdc_Char)0x20,  /* [3255] */
    (xdc_Char)0x4d,  /* [3256] */
    (xdc_Char)0x61,  /* [3257] */
    (xdc_Char)0x79,  /* [3258] */
    (xdc_Char)0x20,  /* [3259] */
    (xdc_Char)0x6e,  /* [3260] */
    (xdc_Char)0x6f,  /* [3261] */
    (xdc_Char)0x74,  /* [3262] */
    (xdc_Char)0x20,  /* [3263] */
    (xdc_Char)0x62,  /* [3264] */
    (xdc_Char)0x65,  /* [3265] */
    (xdc_Char)0x20,  /* [3266] */
    (xdc_Char)0x65,  /* [3267] */
    (xdc_Char)0x6e,  /* [3268] */
    (xdc_Char)0x74,  /* [3269] */
    (xdc_Char)0x65,  /* [3270] */
    (xdc_Char)0x72,  /* [3271] */
    (xdc_Char)0x65,  /* [3272] */
    (xdc_Char)0x64,  /* [3273] */
    (xdc_Char)0x20,  /* [3274] */
    (xdc_Char)0x66,  /* [3275] */
    (xdc_Char)0x72,  /* [3276] */
    (xdc_Char)0x6f,  /* [3277] */
    (xdc_Char)0x6d,  /* [3278] */
    (xdc_Char)0x20,  /* [3279] */
    (xdc_Char)0x61,  /* [3280] */
    (xdc_Char)0x20,  /* [3281] */
    (xdc_Char)0x68,  /* [3282] */
    (xdc_Char)0x61,  /* [3283] */
    (xdc_Char)0x72,  /* [3284] */
    (xdc_Char)0x64,  /* [3285] */
    (xdc_Char)0x77,  /* [3286] */
    (xdc_Char)0x61,  /* [3287] */
    (xdc_Char)0x72,  /* [3288] */
    (xdc_Char)0x65,  /* [3289] */
    (xdc_Char)0x20,  /* [3290] */
    (xdc_Char)0x69,  /* [3291] */
    (xdc_Char)0x6e,  /* [3292] */
    (xdc_Char)0x74,  /* [3293] */
    (xdc_Char)0x65,  /* [3294] */
    (xdc_Char)0x72,  /* [3295] */
    (xdc_Char)0x72,  /* [3296] */
    (xdc_Char)0x75,  /* [3297] */
    (xdc_Char)0x70,  /* [3298] */
    (xdc_Char)0x74,  /* [3299] */
    (xdc_Char)0x20,  /* [3300] */
    (xdc_Char)0x74,  /* [3301] */
    (xdc_Char)0x68,  /* [3302] */
    (xdc_Char)0x72,  /* [3303] */
    (xdc_Char)0x65,  /* [3304] */
    (xdc_Char)0x61,  /* [3305] */
    (xdc_Char)0x64,  /* [3306] */
    (xdc_Char)0x2e,  /* [3307] */
    (xdc_Char)0x0,  /* [3308] */
    (xdc_Char)0x41,  /* [3309] */
    (xdc_Char)0x5f,  /* [3310] */
    (xdc_Char)0x62,  /* [3311] */
    (xdc_Char)0x61,  /* [3312] */
    (xdc_Char)0x64,  /* [3313] */
    (xdc_Char)0x43,  /* [3314] */
    (xdc_Char)0x6f,  /* [3315] */
    (xdc_Char)0x6e,  /* [3316] */
    (xdc_Char)0x74,  /* [3317] */
    (xdc_Char)0x65,  /* [3318] */
    (xdc_Char)0x78,  /* [3319] */
    (xdc_Char)0x74,  /* [3320] */
    (xdc_Char)0x3a,  /* [3321] */
    (xdc_Char)0x20,  /* [3322] */
    (xdc_Char)0x62,  /* [3323] */
    (xdc_Char)0x61,  /* [3324] */
    (xdc_Char)0x64,  /* [3325] */
    (xdc_Char)0x20,  /* [3326] */
    (xdc_Char)0x63,  /* [3327] */
    (xdc_Char)0x61,  /* [3328] */
    (xdc_Char)0x6c,  /* [3329] */
    (xdc_Char)0x6c,  /* [3330] */
    (xdc_Char)0x69,  /* [3331] */
    (xdc_Char)0x6e,  /* [3332] */
    (xdc_Char)0x67,  /* [3333] */
    (xdc_Char)0x20,  /* [3334] */
    (xdc_Char)0x63,  /* [3335] */
    (xdc_Char)0x6f,  /* [3336] */
    (xdc_Char)0x6e,  /* [3337] */
    (xdc_Char)0x74,  /* [3338] */
    (xdc_Char)0x65,  /* [3339] */
    (xdc_Char)0x78,  /* [3340] */
    (xdc_Char)0x74,  /* [3341] */
    (xdc_Char)0x2e,  /* [3342] */
    (xdc_Char)0x20,  /* [3343] */
    (xdc_Char)0x4d,  /* [3344] */
    (xdc_Char)0x61,  /* [3345] */
    (xdc_Char)0x79,  /* [3346] */
    (xdc_Char)0x20,  /* [3347] */
    (xdc_Char)0x6e,  /* [3348] */
    (xdc_Char)0x6f,  /* [3349] */
    (xdc_Char)0x74,  /* [3350] */
    (xdc_Char)0x20,  /* [3351] */
    (xdc_Char)0x62,  /* [3352] */
    (xdc_Char)0x65,  /* [3353] */
    (xdc_Char)0x20,  /* [3354] */
    (xdc_Char)0x65,  /* [3355] */
    (xdc_Char)0x6e,  /* [3356] */
    (xdc_Char)0x74,  /* [3357] */
    (xdc_Char)0x65,  /* [3358] */
    (xdc_Char)0x72,  /* [3359] */
    (xdc_Char)0x65,  /* [3360] */
    (xdc_Char)0x64,  /* [3361] */
    (xdc_Char)0x20,  /* [3362] */
    (xdc_Char)0x66,  /* [3363] */
    (xdc_Char)0x72,  /* [3364] */
    (xdc_Char)0x6f,  /* [3365] */
    (xdc_Char)0x6d,  /* [3366] */
    (xdc_Char)0x20,  /* [3367] */
    (xdc_Char)0x61,  /* [3368] */
    (xdc_Char)0x20,  /* [3369] */
    (xdc_Char)0x73,  /* [3370] */
    (xdc_Char)0x6f,  /* [3371] */
    (xdc_Char)0x66,  /* [3372] */
    (xdc_Char)0x74,  /* [3373] */
    (xdc_Char)0x77,  /* [3374] */
    (xdc_Char)0x61,  /* [3375] */
    (xdc_Char)0x72,  /* [3376] */
    (xdc_Char)0x65,  /* [3377] */
    (xdc_Char)0x20,  /* [3378] */
    (xdc_Char)0x6f,  /* [3379] */
    (xdc_Char)0x72,  /* [3380] */
    (xdc_Char)0x20,  /* [3381] */
    (xdc_Char)0x68,  /* [3382] */
    (xdc_Char)0x61,  /* [3383] */
    (xdc_Char)0x72,  /* [3384] */
    (xdc_Char)0x64,  /* [3385] */
    (xdc_Char)0x77,  /* [3386] */
    (xdc_Char)0x61,  /* [3387] */
    (xdc_Char)0x72,  /* [3388] */
    (xdc_Char)0x65,  /* [3389] */
    (xdc_Char)0x20,  /* [3390] */
    (xdc_Char)0x69,  /* [3391] */
    (xdc_Char)0x6e,  /* [3392] */
    (xdc_Char)0x74,  /* [3393] */
    (xdc_Char)0x65,  /* [3394] */
    (xdc_Char)0x72,  /* [3395] */
    (xdc_Char)0x72,  /* [3396] */
    (xdc_Char)0x75,  /* [3397] */
    (xdc_Char)0x70,  /* [3398] */
    (xdc_Char)0x74,  /* [3399] */
    (xdc_Char)0x20,  /* [3400] */
    (xdc_Char)0x74,  /* [3401] */
    (xdc_Char)0x68,  /* [3402] */
    (xdc_Char)0x72,  /* [3403] */
    (xdc_Char)0x65,  /* [3404] */
    (xdc_Char)0x61,  /* [3405] */
    (xdc_Char)0x64,  /* [3406] */
    (xdc_Char)0x2e,  /* [3407] */
    (xdc_Char)0x0,  /* [3408] */
    (xdc_Char)0x41,  /* [3409] */
    (xdc_Char)0x5f,  /* [3410] */
    (xdc_Char)0x62,  /* [3411] */
    (xdc_Char)0x61,  /* [3412] */
    (xdc_Char)0x64,  /* [3413] */
    (xdc_Char)0x43,  /* [3414] */
    (xdc_Char)0x6f,  /* [3415] */
    (xdc_Char)0x6e,  /* [3416] */
    (xdc_Char)0x74,  /* [3417] */
    (xdc_Char)0x65,  /* [3418] */
    (xdc_Char)0x78,  /* [3419] */
    (xdc_Char)0x74,  /* [3420] */
    (xdc_Char)0x3a,  /* [3421] */
    (xdc_Char)0x20,  /* [3422] */
    (xdc_Char)0x62,  /* [3423] */
    (xdc_Char)0x61,  /* [3424] */
    (xdc_Char)0x64,  /* [3425] */
    (xdc_Char)0x20,  /* [3426] */
    (xdc_Char)0x63,  /* [3427] */
    (xdc_Char)0x61,  /* [3428] */
    (xdc_Char)0x6c,  /* [3429] */
    (xdc_Char)0x6c,  /* [3430] */
    (xdc_Char)0x69,  /* [3431] */
    (xdc_Char)0x6e,  /* [3432] */
    (xdc_Char)0x67,  /* [3433] */
    (xdc_Char)0x20,  /* [3434] */
    (xdc_Char)0x63,  /* [3435] */
    (xdc_Char)0x6f,  /* [3436] */
    (xdc_Char)0x6e,  /* [3437] */
    (xdc_Char)0x74,  /* [3438] */
    (xdc_Char)0x65,  /* [3439] */
    (xdc_Char)0x78,  /* [3440] */
    (xdc_Char)0x74,  /* [3441] */
    (xdc_Char)0x2e,  /* [3442] */
    (xdc_Char)0x20,  /* [3443] */
    (xdc_Char)0x53,  /* [3444] */
    (xdc_Char)0x65,  /* [3445] */
    (xdc_Char)0x65,  /* [3446] */
    (xdc_Char)0x20,  /* [3447] */
    (xdc_Char)0x47,  /* [3448] */
    (xdc_Char)0x61,  /* [3449] */
    (xdc_Char)0x74,  /* [3450] */
    (xdc_Char)0x65,  /* [3451] */
    (xdc_Char)0x4d,  /* [3452] */
    (xdc_Char)0x75,  /* [3453] */
    (xdc_Char)0x74,  /* [3454] */
    (xdc_Char)0x65,  /* [3455] */
    (xdc_Char)0x78,  /* [3456] */
    (xdc_Char)0x50,  /* [3457] */
    (xdc_Char)0x72,  /* [3458] */
    (xdc_Char)0x69,  /* [3459] */
    (xdc_Char)0x20,  /* [3460] */
    (xdc_Char)0x41,  /* [3461] */
    (xdc_Char)0x50,  /* [3462] */
    (xdc_Char)0x49,  /* [3463] */
    (xdc_Char)0x20,  /* [3464] */
    (xdc_Char)0x64,  /* [3465] */
    (xdc_Char)0x6f,  /* [3466] */
    (xdc_Char)0x63,  /* [3467] */
    (xdc_Char)0x20,  /* [3468] */
    (xdc_Char)0x66,  /* [3469] */
    (xdc_Char)0x6f,  /* [3470] */
    (xdc_Char)0x72,  /* [3471] */
    (xdc_Char)0x20,  /* [3472] */
    (xdc_Char)0x64,  /* [3473] */
    (xdc_Char)0x65,  /* [3474] */
    (xdc_Char)0x74,  /* [3475] */
    (xdc_Char)0x61,  /* [3476] */
    (xdc_Char)0x69,  /* [3477] */
    (xdc_Char)0x6c,  /* [3478] */
    (xdc_Char)0x73,  /* [3479] */
    (xdc_Char)0x2e,  /* [3480] */
    (xdc_Char)0x0,  /* [3481] */
    (xdc_Char)0x41,  /* [3482] */
    (xdc_Char)0x5f,  /* [3483] */
    (xdc_Char)0x65,  /* [3484] */
    (xdc_Char)0x6e,  /* [3485] */
    (xdc_Char)0x74,  /* [3486] */
    (xdc_Char)0x65,  /* [3487] */
    (xdc_Char)0x72,  /* [3488] */
    (xdc_Char)0x54,  /* [3489] */
    (xdc_Char)0x61,  /* [3490] */
    (xdc_Char)0x73,  /* [3491] */
    (xdc_Char)0x6b,  /* [3492] */
    (xdc_Char)0x44,  /* [3493] */
    (xdc_Char)0x69,  /* [3494] */
    (xdc_Char)0x73,  /* [3495] */
    (xdc_Char)0x61,  /* [3496] */
    (xdc_Char)0x62,  /* [3497] */
    (xdc_Char)0x6c,  /* [3498] */
    (xdc_Char)0x65,  /* [3499] */
    (xdc_Char)0x64,  /* [3500] */
    (xdc_Char)0x3a,  /* [3501] */
    (xdc_Char)0x20,  /* [3502] */
    (xdc_Char)0x43,  /* [3503] */
    (xdc_Char)0x61,  /* [3504] */
    (xdc_Char)0x6e,  /* [3505] */
    (xdc_Char)0x6e,  /* [3506] */
    (xdc_Char)0x6f,  /* [3507] */
    (xdc_Char)0x74,  /* [3508] */
    (xdc_Char)0x20,  /* [3509] */
    (xdc_Char)0x63,  /* [3510] */
    (xdc_Char)0x61,  /* [3511] */
    (xdc_Char)0x6c,  /* [3512] */
    (xdc_Char)0x6c,  /* [3513] */
    (xdc_Char)0x20,  /* [3514] */
    (xdc_Char)0x47,  /* [3515] */
    (xdc_Char)0x61,  /* [3516] */
    (xdc_Char)0x74,  /* [3517] */
    (xdc_Char)0x65,  /* [3518] */
    (xdc_Char)0x4d,  /* [3519] */
    (xdc_Char)0x75,  /* [3520] */
    (xdc_Char)0x74,  /* [3521] */
    (xdc_Char)0x65,  /* [3522] */
    (xdc_Char)0x78,  /* [3523] */
    (xdc_Char)0x50,  /* [3524] */
    (xdc_Char)0x72,  /* [3525] */
    (xdc_Char)0x69,  /* [3526] */
    (xdc_Char)0x5f,  /* [3527] */
    (xdc_Char)0x65,  /* [3528] */
    (xdc_Char)0x6e,  /* [3529] */
    (xdc_Char)0x74,  /* [3530] */
    (xdc_Char)0x65,  /* [3531] */
    (xdc_Char)0x72,  /* [3532] */
    (xdc_Char)0x28,  /* [3533] */
    (xdc_Char)0x29,  /* [3534] */
    (xdc_Char)0x20,  /* [3535] */
    (xdc_Char)0x77,  /* [3536] */
    (xdc_Char)0x68,  /* [3537] */
    (xdc_Char)0x69,  /* [3538] */
    (xdc_Char)0x6c,  /* [3539] */
    (xdc_Char)0x65,  /* [3540] */
    (xdc_Char)0x20,  /* [3541] */
    (xdc_Char)0x74,  /* [3542] */
    (xdc_Char)0x68,  /* [3543] */
    (xdc_Char)0x65,  /* [3544] */
    (xdc_Char)0x20,  /* [3545] */
    (xdc_Char)0x54,  /* [3546] */
    (xdc_Char)0x61,  /* [3547] */
    (xdc_Char)0x73,  /* [3548] */
    (xdc_Char)0x6b,  /* [3549] */
    (xdc_Char)0x20,  /* [3550] */
    (xdc_Char)0x6f,  /* [3551] */
    (xdc_Char)0x72,  /* [3552] */
    (xdc_Char)0x20,  /* [3553] */
    (xdc_Char)0x53,  /* [3554] */
    (xdc_Char)0x77,  /* [3555] */
    (xdc_Char)0x69,  /* [3556] */
    (xdc_Char)0x20,  /* [3557] */
    (xdc_Char)0x73,  /* [3558] */
    (xdc_Char)0x63,  /* [3559] */
    (xdc_Char)0x68,  /* [3560] */
    (xdc_Char)0x65,  /* [3561] */
    (xdc_Char)0x64,  /* [3562] */
    (xdc_Char)0x75,  /* [3563] */
    (xdc_Char)0x6c,  /* [3564] */
    (xdc_Char)0x65,  /* [3565] */
    (xdc_Char)0x72,  /* [3566] */
    (xdc_Char)0x20,  /* [3567] */
    (xdc_Char)0x69,  /* [3568] */
    (xdc_Char)0x73,  /* [3569] */
    (xdc_Char)0x20,  /* [3570] */
    (xdc_Char)0x64,  /* [3571] */
    (xdc_Char)0x69,  /* [3572] */
    (xdc_Char)0x73,  /* [3573] */
    (xdc_Char)0x61,  /* [3574] */
    (xdc_Char)0x62,  /* [3575] */
    (xdc_Char)0x6c,  /* [3576] */
    (xdc_Char)0x65,  /* [3577] */
    (xdc_Char)0x64,  /* [3578] */
    (xdc_Char)0x2e,  /* [3579] */
    (xdc_Char)0x0,  /* [3580] */
    (xdc_Char)0x41,  /* [3581] */
    (xdc_Char)0x5f,  /* [3582] */
    (xdc_Char)0x62,  /* [3583] */
    (xdc_Char)0x61,  /* [3584] */
    (xdc_Char)0x64,  /* [3585] */
    (xdc_Char)0x43,  /* [3586] */
    (xdc_Char)0x6f,  /* [3587] */
    (xdc_Char)0x6e,  /* [3588] */
    (xdc_Char)0x74,  /* [3589] */
    (xdc_Char)0x65,  /* [3590] */
    (xdc_Char)0x78,  /* [3591] */
    (xdc_Char)0x74,  /* [3592] */
    (xdc_Char)0x3a,  /* [3593] */
    (xdc_Char)0x20,  /* [3594] */
    (xdc_Char)0x62,  /* [3595] */
    (xdc_Char)0x61,  /* [3596] */
    (xdc_Char)0x64,  /* [3597] */
    (xdc_Char)0x20,  /* [3598] */
    (xdc_Char)0x63,  /* [3599] */
    (xdc_Char)0x61,  /* [3600] */
    (xdc_Char)0x6c,  /* [3601] */
    (xdc_Char)0x6c,  /* [3602] */
    (xdc_Char)0x69,  /* [3603] */
    (xdc_Char)0x6e,  /* [3604] */
    (xdc_Char)0x67,  /* [3605] */
    (xdc_Char)0x20,  /* [3606] */
    (xdc_Char)0x63,  /* [3607] */
    (xdc_Char)0x6f,  /* [3608] */
    (xdc_Char)0x6e,  /* [3609] */
    (xdc_Char)0x74,  /* [3610] */
    (xdc_Char)0x65,  /* [3611] */
    (xdc_Char)0x78,  /* [3612] */
    (xdc_Char)0x74,  /* [3613] */
    (xdc_Char)0x2e,  /* [3614] */
    (xdc_Char)0x20,  /* [3615] */
    (xdc_Char)0x53,  /* [3616] */
    (xdc_Char)0x65,  /* [3617] */
    (xdc_Char)0x65,  /* [3618] */
    (xdc_Char)0x20,  /* [3619] */
    (xdc_Char)0x47,  /* [3620] */
    (xdc_Char)0x61,  /* [3621] */
    (xdc_Char)0x74,  /* [3622] */
    (xdc_Char)0x65,  /* [3623] */
    (xdc_Char)0x4d,  /* [3624] */
    (xdc_Char)0x75,  /* [3625] */
    (xdc_Char)0x74,  /* [3626] */
    (xdc_Char)0x65,  /* [3627] */
    (xdc_Char)0x78,  /* [3628] */
    (xdc_Char)0x20,  /* [3629] */
    (xdc_Char)0x41,  /* [3630] */
    (xdc_Char)0x50,  /* [3631] */
    (xdc_Char)0x49,  /* [3632] */
    (xdc_Char)0x20,  /* [3633] */
    (xdc_Char)0x64,  /* [3634] */
    (xdc_Char)0x6f,  /* [3635] */
    (xdc_Char)0x63,  /* [3636] */
    (xdc_Char)0x20,  /* [3637] */
    (xdc_Char)0x66,  /* [3638] */
    (xdc_Char)0x6f,  /* [3639] */
    (xdc_Char)0x72,  /* [3640] */
    (xdc_Char)0x20,  /* [3641] */
    (xdc_Char)0x64,  /* [3642] */
    (xdc_Char)0x65,  /* [3643] */
    (xdc_Char)0x74,  /* [3644] */
    (xdc_Char)0x61,  /* [3645] */
    (xdc_Char)0x69,  /* [3646] */
    (xdc_Char)0x6c,  /* [3647] */
    (xdc_Char)0x73,  /* [3648] */
    (xdc_Char)0x2e,  /* [3649] */
    (xdc_Char)0x0,  /* [3650] */
    (xdc_Char)0x61,  /* [3651] */
    (xdc_Char)0x73,  /* [3652] */
    (xdc_Char)0x73,  /* [3653] */
    (xdc_Char)0x65,  /* [3654] */
    (xdc_Char)0x72,  /* [3655] */
    (xdc_Char)0x74,  /* [3656] */
    (xdc_Char)0x69,  /* [3657] */
    (xdc_Char)0x6f,  /* [3658] */
    (xdc_Char)0x6e,  /* [3659] */
    (xdc_Char)0x20,  /* [3660] */
    (xdc_Char)0x66,  /* [3661] */
    (xdc_Char)0x61,  /* [3662] */
    (xdc_Char)0x69,  /* [3663] */
    (xdc_Char)0x6c,  /* [3664] */
    (xdc_Char)0x75,  /* [3665] */
    (xdc_Char)0x72,  /* [3666] */
    (xdc_Char)0x65,  /* [3667] */
    (xdc_Char)0x25,  /* [3668] */
    (xdc_Char)0x73,  /* [3669] */
    (xdc_Char)0x25,  /* [3670] */
    (xdc_Char)0x73,  /* [3671] */
    (xdc_Char)0x0,  /* [3672] */
    (xdc_Char)0x25,  /* [3673] */
    (xdc_Char)0x24,  /* [3674] */
    (xdc_Char)0x53,  /* [3675] */
    (xdc_Char)0x0,  /* [3676] */
    (xdc_Char)0x6f,  /* [3677] */
    (xdc_Char)0x75,  /* [3678] */
    (xdc_Char)0x74,  /* [3679] */
    (xdc_Char)0x20,  /* [3680] */
    (xdc_Char)0x6f,  /* [3681] */
    (xdc_Char)0x66,  /* [3682] */
    (xdc_Char)0x20,  /* [3683] */
    (xdc_Char)0x6d,  /* [3684] */
    (xdc_Char)0x65,  /* [3685] */
    (xdc_Char)0x6d,  /* [3686] */
    (xdc_Char)0x6f,  /* [3687] */
    (xdc_Char)0x72,  /* [3688] */
    (xdc_Char)0x79,  /* [3689] */
    (xdc_Char)0x3a,  /* [3690] */
    (xdc_Char)0x20,  /* [3691] */
    (xdc_Char)0x68,  /* [3692] */
    (xdc_Char)0x65,  /* [3693] */
    (xdc_Char)0x61,  /* [3694] */
    (xdc_Char)0x70,  /* [3695] */
    (xdc_Char)0x3d,  /* [3696] */
    (xdc_Char)0x30,  /* [3697] */
    (xdc_Char)0x78,  /* [3698] */
    (xdc_Char)0x25,  /* [3699] */
    (xdc_Char)0x78,  /* [3700] */
    (xdc_Char)0x2c,  /* [3701] */
    (xdc_Char)0x20,  /* [3702] */
    (xdc_Char)0x73,  /* [3703] */
    (xdc_Char)0x69,  /* [3704] */
    (xdc_Char)0x7a,  /* [3705] */
    (xdc_Char)0x65,  /* [3706] */
    (xdc_Char)0x3d,  /* [3707] */
    (xdc_Char)0x25,  /* [3708] */
    (xdc_Char)0x75,  /* [3709] */
    (xdc_Char)0x0,  /* [3710] */
    (xdc_Char)0x25,  /* [3711] */
    (xdc_Char)0x73,  /* [3712] */
    (xdc_Char)0x20,  /* [3713] */
    (xdc_Char)0x30,  /* [3714] */
    (xdc_Char)0x78,  /* [3715] */
    (xdc_Char)0x25,  /* [3716] */
    (xdc_Char)0x78,  /* [3717] */
    (xdc_Char)0x0,  /* [3718] */
    (xdc_Char)0x45,  /* [3719] */
    (xdc_Char)0x5f,  /* [3720] */
    (xdc_Char)0x62,  /* [3721] */
    (xdc_Char)0x61,  /* [3722] */
    (xdc_Char)0x64,  /* [3723] */
    (xdc_Char)0x4c,  /* [3724] */
    (xdc_Char)0x65,  /* [3725] */
    (xdc_Char)0x76,  /* [3726] */
    (xdc_Char)0x65,  /* [3727] */
    (xdc_Char)0x6c,  /* [3728] */
    (xdc_Char)0x3a,  /* [3729] */
    (xdc_Char)0x20,  /* [3730] */
    (xdc_Char)0x42,  /* [3731] */
    (xdc_Char)0x61,  /* [3732] */
    (xdc_Char)0x64,  /* [3733] */
    (xdc_Char)0x20,  /* [3734] */
    (xdc_Char)0x66,  /* [3735] */
    (xdc_Char)0x69,  /* [3736] */
    (xdc_Char)0x6c,  /* [3737] */
    (xdc_Char)0x74,  /* [3738] */
    (xdc_Char)0x65,  /* [3739] */
    (xdc_Char)0x72,  /* [3740] */
    (xdc_Char)0x20,  /* [3741] */
    (xdc_Char)0x6c,  /* [3742] */
    (xdc_Char)0x65,  /* [3743] */
    (xdc_Char)0x76,  /* [3744] */
    (xdc_Char)0x65,  /* [3745] */
    (xdc_Char)0x6c,  /* [3746] */
    (xdc_Char)0x20,  /* [3747] */
    (xdc_Char)0x76,  /* [3748] */
    (xdc_Char)0x61,  /* [3749] */
    (xdc_Char)0x6c,  /* [3750] */
    (xdc_Char)0x75,  /* [3751] */
    (xdc_Char)0x65,  /* [3752] */
    (xdc_Char)0x3a,  /* [3753] */
    (xdc_Char)0x20,  /* [3754] */
    (xdc_Char)0x25,  /* [3755] */
    (xdc_Char)0x64,  /* [3756] */
    (xdc_Char)0x0,  /* [3757] */
    (xdc_Char)0x66,  /* [3758] */
    (xdc_Char)0x72,  /* [3759] */
    (xdc_Char)0x65,  /* [3760] */
    (xdc_Char)0x65,  /* [3761] */
    (xdc_Char)0x28,  /* [3762] */
    (xdc_Char)0x29,  /* [3763] */
    (xdc_Char)0x20,  /* [3764] */
    (xdc_Char)0x69,  /* [3765] */
    (xdc_Char)0x6e,  /* [3766] */
    (xdc_Char)0x76,  /* [3767] */
    (xdc_Char)0x61,  /* [3768] */
    (xdc_Char)0x6c,  /* [3769] */
    (xdc_Char)0x69,  /* [3770] */
    (xdc_Char)0x64,  /* [3771] */
    (xdc_Char)0x20,  /* [3772] */
    (xdc_Char)0x69,  /* [3773] */
    (xdc_Char)0x6e,  /* [3774] */
    (xdc_Char)0x20,  /* [3775] */
    (xdc_Char)0x67,  /* [3776] */
    (xdc_Char)0x72,  /* [3777] */
    (xdc_Char)0x6f,  /* [3778] */
    (xdc_Char)0x77,  /* [3779] */
    (xdc_Char)0x74,  /* [3780] */
    (xdc_Char)0x68,  /* [3781] */
    (xdc_Char)0x2d,  /* [3782] */
    (xdc_Char)0x6f,  /* [3783] */
    (xdc_Char)0x6e,  /* [3784] */
    (xdc_Char)0x6c,  /* [3785] */
    (xdc_Char)0x79,  /* [3786] */
    (xdc_Char)0x20,  /* [3787] */
    (xdc_Char)0x48,  /* [3788] */
    (xdc_Char)0x65,  /* [3789] */
    (xdc_Char)0x61,  /* [3790] */
    (xdc_Char)0x70,  /* [3791] */
    (xdc_Char)0x4d,  /* [3792] */
    (xdc_Char)0x69,  /* [3793] */
    (xdc_Char)0x6e,  /* [3794] */
    (xdc_Char)0x0,  /* [3795] */
    (xdc_Char)0x54,  /* [3796] */
    (xdc_Char)0x68,  /* [3797] */
    (xdc_Char)0x65,  /* [3798] */
    (xdc_Char)0x20,  /* [3799] */
    (xdc_Char)0x52,  /* [3800] */
    (xdc_Char)0x54,  /* [3801] */
    (xdc_Char)0x53,  /* [3802] */
    (xdc_Char)0x20,  /* [3803] */
    (xdc_Char)0x68,  /* [3804] */
    (xdc_Char)0x65,  /* [3805] */
    (xdc_Char)0x61,  /* [3806] */
    (xdc_Char)0x70,  /* [3807] */
    (xdc_Char)0x20,  /* [3808] */
    (xdc_Char)0x69,  /* [3809] */
    (xdc_Char)0x73,  /* [3810] */
    (xdc_Char)0x20,  /* [3811] */
    (xdc_Char)0x75,  /* [3812] */
    (xdc_Char)0x73,  /* [3813] */
    (xdc_Char)0x65,  /* [3814] */
    (xdc_Char)0x64,  /* [3815] */
    (xdc_Char)0x20,  /* [3816] */
    (xdc_Char)0x75,  /* [3817] */
    (xdc_Char)0x70,  /* [3818] */
    (xdc_Char)0x2e,  /* [3819] */
    (xdc_Char)0x20,  /* [3820] */
    (xdc_Char)0x45,  /* [3821] */
    (xdc_Char)0x78,  /* [3822] */
    (xdc_Char)0x61,  /* [3823] */
    (xdc_Char)0x6d,  /* [3824] */
    (xdc_Char)0x69,  /* [3825] */
    (xdc_Char)0x6e,  /* [3826] */
    (xdc_Char)0x65,  /* [3827] */
    (xdc_Char)0x20,  /* [3828] */
    (xdc_Char)0x50,  /* [3829] */
    (xdc_Char)0x72,  /* [3830] */
    (xdc_Char)0x6f,  /* [3831] */
    (xdc_Char)0x67,  /* [3832] */
    (xdc_Char)0x72,  /* [3833] */
    (xdc_Char)0x61,  /* [3834] */
    (xdc_Char)0x6d,  /* [3835] */
    (xdc_Char)0x2e,  /* [3836] */
    (xdc_Char)0x68,  /* [3837] */
    (xdc_Char)0x65,  /* [3838] */
    (xdc_Char)0x61,  /* [3839] */
    (xdc_Char)0x70,  /* [3840] */
    (xdc_Char)0x2e,  /* [3841] */
    (xdc_Char)0x0,  /* [3842] */
    (xdc_Char)0x45,  /* [3843] */
    (xdc_Char)0x5f,  /* [3844] */
    (xdc_Char)0x62,  /* [3845] */
    (xdc_Char)0x61,  /* [3846] */
    (xdc_Char)0x64,  /* [3847] */
    (xdc_Char)0x43,  /* [3848] */
    (xdc_Char)0x6f,  /* [3849] */
    (xdc_Char)0x6d,  /* [3850] */
    (xdc_Char)0x6d,  /* [3851] */
    (xdc_Char)0x61,  /* [3852] */
    (xdc_Char)0x6e,  /* [3853] */
    (xdc_Char)0x64,  /* [3854] */
    (xdc_Char)0x3a,  /* [3855] */
    (xdc_Char)0x20,  /* [3856] */
    (xdc_Char)0x52,  /* [3857] */
    (xdc_Char)0x65,  /* [3858] */
    (xdc_Char)0x63,  /* [3859] */
    (xdc_Char)0x65,  /* [3860] */
    (xdc_Char)0x69,  /* [3861] */
    (xdc_Char)0x76,  /* [3862] */
    (xdc_Char)0x65,  /* [3863] */
    (xdc_Char)0x64,  /* [3864] */
    (xdc_Char)0x20,  /* [3865] */
    (xdc_Char)0x69,  /* [3866] */
    (xdc_Char)0x6e,  /* [3867] */
    (xdc_Char)0x76,  /* [3868] */
    (xdc_Char)0x61,  /* [3869] */
    (xdc_Char)0x6c,  /* [3870] */
    (xdc_Char)0x69,  /* [3871] */
    (xdc_Char)0x64,  /* [3872] */
    (xdc_Char)0x20,  /* [3873] */
    (xdc_Char)0x63,  /* [3874] */
    (xdc_Char)0x6f,  /* [3875] */
    (xdc_Char)0x6d,  /* [3876] */
    (xdc_Char)0x6d,  /* [3877] */
    (xdc_Char)0x61,  /* [3878] */
    (xdc_Char)0x6e,  /* [3879] */
    (xdc_Char)0x64,  /* [3880] */
    (xdc_Char)0x2c,  /* [3881] */
    (xdc_Char)0x20,  /* [3882] */
    (xdc_Char)0x69,  /* [3883] */
    (xdc_Char)0x64,  /* [3884] */
    (xdc_Char)0x3a,  /* [3885] */
    (xdc_Char)0x20,  /* [3886] */
    (xdc_Char)0x25,  /* [3887] */
    (xdc_Char)0x64,  /* [3888] */
    (xdc_Char)0x2e,  /* [3889] */
    (xdc_Char)0x0,  /* [3890] */
    (xdc_Char)0x45,  /* [3891] */
    (xdc_Char)0x5f,  /* [3892] */
    (xdc_Char)0x73,  /* [3893] */
    (xdc_Char)0x74,  /* [3894] */
    (xdc_Char)0x61,  /* [3895] */
    (xdc_Char)0x63,  /* [3896] */
    (xdc_Char)0x6b,  /* [3897] */
    (xdc_Char)0x4f,  /* [3898] */
    (xdc_Char)0x76,  /* [3899] */
    (xdc_Char)0x65,  /* [3900] */
    (xdc_Char)0x72,  /* [3901] */
    (xdc_Char)0x66,  /* [3902] */
    (xdc_Char)0x6c,  /* [3903] */
    (xdc_Char)0x6f,  /* [3904] */
    (xdc_Char)0x77,  /* [3905] */
    (xdc_Char)0x3a,  /* [3906] */
    (xdc_Char)0x20,  /* [3907] */
    (xdc_Char)0x49,  /* [3908] */
    (xdc_Char)0x53,  /* [3909] */
    (xdc_Char)0x52,  /* [3910] */
    (xdc_Char)0x20,  /* [3911] */
    (xdc_Char)0x73,  /* [3912] */
    (xdc_Char)0x74,  /* [3913] */
    (xdc_Char)0x61,  /* [3914] */
    (xdc_Char)0x63,  /* [3915] */
    (xdc_Char)0x6b,  /* [3916] */
    (xdc_Char)0x20,  /* [3917] */
    (xdc_Char)0x6f,  /* [3918] */
    (xdc_Char)0x76,  /* [3919] */
    (xdc_Char)0x65,  /* [3920] */
    (xdc_Char)0x72,  /* [3921] */
    (xdc_Char)0x66,  /* [3922] */
    (xdc_Char)0x6c,  /* [3923] */
    (xdc_Char)0x6f,  /* [3924] */
    (xdc_Char)0x77,  /* [3925] */
    (xdc_Char)0x2e,  /* [3926] */
    (xdc_Char)0x0,  /* [3927] */
    (xdc_Char)0x45,  /* [3928] */
    (xdc_Char)0x5f,  /* [3929] */
    (xdc_Char)0x73,  /* [3930] */
    (xdc_Char)0x74,  /* [3931] */
    (xdc_Char)0x61,  /* [3932] */
    (xdc_Char)0x63,  /* [3933] */
    (xdc_Char)0x6b,  /* [3934] */
    (xdc_Char)0x4f,  /* [3935] */
    (xdc_Char)0x76,  /* [3936] */
    (xdc_Char)0x65,  /* [3937] */
    (xdc_Char)0x72,  /* [3938] */
    (xdc_Char)0x66,  /* [3939] */
    (xdc_Char)0x6c,  /* [3940] */
    (xdc_Char)0x6f,  /* [3941] */
    (xdc_Char)0x77,  /* [3942] */
    (xdc_Char)0x3a,  /* [3943] */
    (xdc_Char)0x20,  /* [3944] */
    (xdc_Char)0x54,  /* [3945] */
    (xdc_Char)0x61,  /* [3946] */
    (xdc_Char)0x73,  /* [3947] */
    (xdc_Char)0x6b,  /* [3948] */
    (xdc_Char)0x20,  /* [3949] */
    (xdc_Char)0x30,  /* [3950] */
    (xdc_Char)0x78,  /* [3951] */
    (xdc_Char)0x25,  /* [3952] */
    (xdc_Char)0x78,  /* [3953] */
    (xdc_Char)0x20,  /* [3954] */
    (xdc_Char)0x73,  /* [3955] */
    (xdc_Char)0x74,  /* [3956] */
    (xdc_Char)0x61,  /* [3957] */
    (xdc_Char)0x63,  /* [3958] */
    (xdc_Char)0x6b,  /* [3959] */
    (xdc_Char)0x20,  /* [3960] */
    (xdc_Char)0x6f,  /* [3961] */
    (xdc_Char)0x76,  /* [3962] */
    (xdc_Char)0x65,  /* [3963] */
    (xdc_Char)0x72,  /* [3964] */
    (xdc_Char)0x66,  /* [3965] */
    (xdc_Char)0x6c,  /* [3966] */
    (xdc_Char)0x6f,  /* [3967] */
    (xdc_Char)0x77,  /* [3968] */
    (xdc_Char)0x2e,  /* [3969] */
    (xdc_Char)0x0,  /* [3970] */
    (xdc_Char)0x45,  /* [3971] */
    (xdc_Char)0x5f,  /* [3972] */
    (xdc_Char)0x73,  /* [3973] */
    (xdc_Char)0x70,  /* [3974] */
    (xdc_Char)0x4f,  /* [3975] */
    (xdc_Char)0x75,  /* [3976] */
    (xdc_Char)0x74,  /* [3977] */
    (xdc_Char)0x4f,  /* [3978] */
    (xdc_Char)0x66,  /* [3979] */
    (xdc_Char)0x42,  /* [3980] */
    (xdc_Char)0x6f,  /* [3981] */
    (xdc_Char)0x75,  /* [3982] */
    (xdc_Char)0x6e,  /* [3983] */
    (xdc_Char)0x64,  /* [3984] */
    (xdc_Char)0x73,  /* [3985] */
    (xdc_Char)0x3a,  /* [3986] */
    (xdc_Char)0x20,  /* [3987] */
    (xdc_Char)0x54,  /* [3988] */
    (xdc_Char)0x61,  /* [3989] */
    (xdc_Char)0x73,  /* [3990] */
    (xdc_Char)0x6b,  /* [3991] */
    (xdc_Char)0x20,  /* [3992] */
    (xdc_Char)0x30,  /* [3993] */
    (xdc_Char)0x78,  /* [3994] */
    (xdc_Char)0x25,  /* [3995] */
    (xdc_Char)0x78,  /* [3996] */
    (xdc_Char)0x20,  /* [3997] */
    (xdc_Char)0x73,  /* [3998] */
    (xdc_Char)0x74,  /* [3999] */
    (xdc_Char)0x61,  /* [4000] */
    (xdc_Char)0x63,  /* [4001] */
    (xdc_Char)0x6b,  /* [4002] */
    (xdc_Char)0x20,  /* [4003] */
    (xdc_Char)0x65,  /* [4004] */
    (xdc_Char)0x72,  /* [4005] */
    (xdc_Char)0x72,  /* [4006] */
    (xdc_Char)0x6f,  /* [4007] */
    (xdc_Char)0x72,  /* [4008] */
    (xdc_Char)0x2c,  /* [4009] */
    (xdc_Char)0x20,  /* [4010] */
    (xdc_Char)0x53,  /* [4011] */
    (xdc_Char)0x50,  /* [4012] */
    (xdc_Char)0x20,  /* [4013] */
    (xdc_Char)0x3d,  /* [4014] */
    (xdc_Char)0x20,  /* [4015] */
    (xdc_Char)0x30,  /* [4016] */
    (xdc_Char)0x78,  /* [4017] */
    (xdc_Char)0x25,  /* [4018] */
    (xdc_Char)0x78,  /* [4019] */
    (xdc_Char)0x2e,  /* [4020] */
    (xdc_Char)0x0,  /* [4021] */
    (xdc_Char)0x45,  /* [4022] */
    (xdc_Char)0x5f,  /* [4023] */
    (xdc_Char)0x64,  /* [4024] */
    (xdc_Char)0x65,  /* [4025] */
    (xdc_Char)0x6c,  /* [4026] */
    (xdc_Char)0x65,  /* [4027] */
    (xdc_Char)0x74,  /* [4028] */
    (xdc_Char)0x65,  /* [4029] */
    (xdc_Char)0x4e,  /* [4030] */
    (xdc_Char)0x6f,  /* [4031] */
    (xdc_Char)0x74,  /* [4032] */
    (xdc_Char)0x41,  /* [4033] */
    (xdc_Char)0x6c,  /* [4034] */
    (xdc_Char)0x6c,  /* [4035] */
    (xdc_Char)0x6f,  /* [4036] */
    (xdc_Char)0x77,  /* [4037] */
    (xdc_Char)0x65,  /* [4038] */
    (xdc_Char)0x64,  /* [4039] */
    (xdc_Char)0x3a,  /* [4040] */
    (xdc_Char)0x20,  /* [4041] */
    (xdc_Char)0x54,  /* [4042] */
    (xdc_Char)0x61,  /* [4043] */
    (xdc_Char)0x73,  /* [4044] */
    (xdc_Char)0x6b,  /* [4045] */
    (xdc_Char)0x20,  /* [4046] */
    (xdc_Char)0x30,  /* [4047] */
    (xdc_Char)0x78,  /* [4048] */
    (xdc_Char)0x25,  /* [4049] */
    (xdc_Char)0x78,  /* [4050] */
    (xdc_Char)0x2e,  /* [4051] */
    (xdc_Char)0x0,  /* [4052] */
    (xdc_Char)0x45,  /* [4053] */
    (xdc_Char)0x5f,  /* [4054] */
    (xdc_Char)0x61,  /* [4055] */
    (xdc_Char)0x6c,  /* [4056] */
    (xdc_Char)0x72,  /* [4057] */
    (xdc_Char)0x65,  /* [4058] */
    (xdc_Char)0x61,  /* [4059] */
    (xdc_Char)0x64,  /* [4060] */
    (xdc_Char)0x79,  /* [4061] */
    (xdc_Char)0x44,  /* [4062] */
    (xdc_Char)0x65,  /* [4063] */
    (xdc_Char)0x66,  /* [4064] */
    (xdc_Char)0x69,  /* [4065] */
    (xdc_Char)0x6e,  /* [4066] */
    (xdc_Char)0x65,  /* [4067] */
    (xdc_Char)0x64,  /* [4068] */
    (xdc_Char)0x3a,  /* [4069] */
    (xdc_Char)0x20,  /* [4070] */
    (xdc_Char)0x48,  /* [4071] */
    (xdc_Char)0x77,  /* [4072] */
    (xdc_Char)0x69,  /* [4073] */
    (xdc_Char)0x20,  /* [4074] */
    (xdc_Char)0x61,  /* [4075] */
    (xdc_Char)0x6c,  /* [4076] */
    (xdc_Char)0x72,  /* [4077] */
    (xdc_Char)0x65,  /* [4078] */
    (xdc_Char)0x61,  /* [4079] */
    (xdc_Char)0x64,  /* [4080] */
    (xdc_Char)0x79,  /* [4081] */
    (xdc_Char)0x20,  /* [4082] */
    (xdc_Char)0x64,  /* [4083] */
    (xdc_Char)0x65,  /* [4084] */
    (xdc_Char)0x66,  /* [4085] */
    (xdc_Char)0x69,  /* [4086] */
    (xdc_Char)0x6e,  /* [4087] */
    (xdc_Char)0x65,  /* [4088] */
    (xdc_Char)0x64,  /* [4089] */
    (xdc_Char)0x3a,  /* [4090] */
    (xdc_Char)0x20,  /* [4091] */
    (xdc_Char)0x69,  /* [4092] */
    (xdc_Char)0x6e,  /* [4093] */
    (xdc_Char)0x74,  /* [4094] */
    (xdc_Char)0x72,  /* [4095] */
    (xdc_Char)0x23,  /* [4096] */
    (xdc_Char)0x20,  /* [4097] */
    (xdc_Char)0x25,  /* [4098] */
    (xdc_Char)0x64,  /* [4099] */
    (xdc_Char)0x0,  /* [4100] */
    (xdc_Char)0x45,  /* [4101] */
    (xdc_Char)0x5f,  /* [4102] */
    (xdc_Char)0x65,  /* [4103] */
    (xdc_Char)0x78,  /* [4104] */
    (xdc_Char)0x63,  /* [4105] */
    (xdc_Char)0x65,  /* [4106] */
    (xdc_Char)0x70,  /* [4107] */
    (xdc_Char)0x74,  /* [4108] */
    (xdc_Char)0x69,  /* [4109] */
    (xdc_Char)0x6f,  /* [4110] */
    (xdc_Char)0x6e,  /* [4111] */
    (xdc_Char)0x3a,  /* [4112] */
    (xdc_Char)0x20,  /* [4113] */
    (xdc_Char)0x69,  /* [4114] */
    (xdc_Char)0x64,  /* [4115] */
    (xdc_Char)0x20,  /* [4116] */
    (xdc_Char)0x3d,  /* [4117] */
    (xdc_Char)0x20,  /* [4118] */
    (xdc_Char)0x25,  /* [4119] */
    (xdc_Char)0x64,  /* [4120] */
    (xdc_Char)0x2c,  /* [4121] */
    (xdc_Char)0x20,  /* [4122] */
    (xdc_Char)0x70,  /* [4123] */
    (xdc_Char)0x63,  /* [4124] */
    (xdc_Char)0x20,  /* [4125] */
    (xdc_Char)0x3d,  /* [4126] */
    (xdc_Char)0x20,  /* [4127] */
    (xdc_Char)0x25,  /* [4128] */
    (xdc_Char)0x30,  /* [4129] */
    (xdc_Char)0x38,  /* [4130] */
    (xdc_Char)0x78,  /* [4131] */
    (xdc_Char)0x2e,  /* [4132] */
    (xdc_Char)0xa,  /* [4133] */
    (xdc_Char)0x54,  /* [4134] */
    (xdc_Char)0x6f,  /* [4135] */
    (xdc_Char)0x20,  /* [4136] */
    (xdc_Char)0x73,  /* [4137] */
    (xdc_Char)0x65,  /* [4138] */
    (xdc_Char)0x65,  /* [4139] */
    (xdc_Char)0x20,  /* [4140] */
    (xdc_Char)0x6d,  /* [4141] */
    (xdc_Char)0x6f,  /* [4142] */
    (xdc_Char)0x72,  /* [4143] */
    (xdc_Char)0x65,  /* [4144] */
    (xdc_Char)0x20,  /* [4145] */
    (xdc_Char)0x65,  /* [4146] */
    (xdc_Char)0x78,  /* [4147] */
    (xdc_Char)0x63,  /* [4148] */
    (xdc_Char)0x65,  /* [4149] */
    (xdc_Char)0x70,  /* [4150] */
    (xdc_Char)0x74,  /* [4151] */
    (xdc_Char)0x69,  /* [4152] */
    (xdc_Char)0x6f,  /* [4153] */
    (xdc_Char)0x6e,  /* [4154] */
    (xdc_Char)0x20,  /* [4155] */
    (xdc_Char)0x64,  /* [4156] */
    (xdc_Char)0x65,  /* [4157] */
    (xdc_Char)0x74,  /* [4158] */
    (xdc_Char)0x61,  /* [4159] */
    (xdc_Char)0x69,  /* [4160] */
    (xdc_Char)0x6c,  /* [4161] */
    (xdc_Char)0x2c,  /* [4162] */
    (xdc_Char)0x20,  /* [4163] */
    (xdc_Char)0x73,  /* [4164] */
    (xdc_Char)0x65,  /* [4165] */
    (xdc_Char)0x74,  /* [4166] */
    (xdc_Char)0x20,  /* [4167] */
    (xdc_Char)0x74,  /* [4168] */
    (xdc_Char)0x69,  /* [4169] */
    (xdc_Char)0x2e,  /* [4170] */
    (xdc_Char)0x73,  /* [4171] */
    (xdc_Char)0x79,  /* [4172] */
    (xdc_Char)0x73,  /* [4173] */
    (xdc_Char)0x62,  /* [4174] */
    (xdc_Char)0x69,  /* [4175] */
    (xdc_Char)0x6f,  /* [4176] */
    (xdc_Char)0x73,  /* [4177] */
    (xdc_Char)0x2e,  /* [4178] */
    (xdc_Char)0x66,  /* [4179] */
    (xdc_Char)0x61,  /* [4180] */
    (xdc_Char)0x6d,  /* [4181] */
    (xdc_Char)0x69,  /* [4182] */
    (xdc_Char)0x6c,  /* [4183] */
    (xdc_Char)0x79,  /* [4184] */
    (xdc_Char)0x2e,  /* [4185] */
    (xdc_Char)0x61,  /* [4186] */
    (xdc_Char)0x72,  /* [4187] */
    (xdc_Char)0x6d,  /* [4188] */
    (xdc_Char)0x2e,  /* [4189] */
    (xdc_Char)0x6d,  /* [4190] */
    (xdc_Char)0x33,  /* [4191] */
    (xdc_Char)0x2e,  /* [4192] */
    (xdc_Char)0x48,  /* [4193] */
    (xdc_Char)0x77,  /* [4194] */
    (xdc_Char)0x69,  /* [4195] */
    (xdc_Char)0x2e,  /* [4196] */
    (xdc_Char)0x65,  /* [4197] */
    (xdc_Char)0x6e,  /* [4198] */
    (xdc_Char)0x61,  /* [4199] */
    (xdc_Char)0x62,  /* [4200] */
    (xdc_Char)0x6c,  /* [4201] */
    (xdc_Char)0x65,  /* [4202] */
    (xdc_Char)0x45,  /* [4203] */
    (xdc_Char)0x78,  /* [4204] */
    (xdc_Char)0x63,  /* [4205] */
    (xdc_Char)0x65,  /* [4206] */
    (xdc_Char)0x70,  /* [4207] */
    (xdc_Char)0x74,  /* [4208] */
    (xdc_Char)0x69,  /* [4209] */
    (xdc_Char)0x6f,  /* [4210] */
    (xdc_Char)0x6e,  /* [4211] */
    (xdc_Char)0x20,  /* [4212] */
    (xdc_Char)0x3d,  /* [4213] */
    (xdc_Char)0x20,  /* [4214] */
    (xdc_Char)0x74,  /* [4215] */
    (xdc_Char)0x72,  /* [4216] */
    (xdc_Char)0x75,  /* [4217] */
    (xdc_Char)0x65,  /* [4218] */
    (xdc_Char)0x20,  /* [4219] */
    (xdc_Char)0x6f,  /* [4220] */
    (xdc_Char)0x72,  /* [4221] */
    (xdc_Char)0x2c,  /* [4222] */
    (xdc_Char)0xa,  /* [4223] */
    (xdc_Char)0x65,  /* [4224] */
    (xdc_Char)0x78,  /* [4225] */
    (xdc_Char)0x61,  /* [4226] */
    (xdc_Char)0x6d,  /* [4227] */
    (xdc_Char)0x69,  /* [4228] */
    (xdc_Char)0x6e,  /* [4229] */
    (xdc_Char)0x65,  /* [4230] */
    (xdc_Char)0x20,  /* [4231] */
    (xdc_Char)0x74,  /* [4232] */
    (xdc_Char)0x68,  /* [4233] */
    (xdc_Char)0x65,  /* [4234] */
    (xdc_Char)0x20,  /* [4235] */
    (xdc_Char)0x45,  /* [4236] */
    (xdc_Char)0x78,  /* [4237] */
    (xdc_Char)0x63,  /* [4238] */
    (xdc_Char)0x65,  /* [4239] */
    (xdc_Char)0x70,  /* [4240] */
    (xdc_Char)0x74,  /* [4241] */
    (xdc_Char)0x69,  /* [4242] */
    (xdc_Char)0x6f,  /* [4243] */
    (xdc_Char)0x6e,  /* [4244] */
    (xdc_Char)0x20,  /* [4245] */
    (xdc_Char)0x76,  /* [4246] */
    (xdc_Char)0x69,  /* [4247] */
    (xdc_Char)0x65,  /* [4248] */
    (xdc_Char)0x77,  /* [4249] */
    (xdc_Char)0x20,  /* [4250] */
    (xdc_Char)0x66,  /* [4251] */
    (xdc_Char)0x6f,  /* [4252] */
    (xdc_Char)0x72,  /* [4253] */
    (xdc_Char)0x20,  /* [4254] */
    (xdc_Char)0x74,  /* [4255] */
    (xdc_Char)0x68,  /* [4256] */
    (xdc_Char)0x65,  /* [4257] */
    (xdc_Char)0x20,  /* [4258] */
    (xdc_Char)0x74,  /* [4259] */
    (xdc_Char)0x69,  /* [4260] */
    (xdc_Char)0x2e,  /* [4261] */
    (xdc_Char)0x73,  /* [4262] */
    (xdc_Char)0x79,  /* [4263] */
    (xdc_Char)0x73,  /* [4264] */
    (xdc_Char)0x62,  /* [4265] */
    (xdc_Char)0x69,  /* [4266] */
    (xdc_Char)0x6f,  /* [4267] */
    (xdc_Char)0x73,  /* [4268] */
    (xdc_Char)0x2e,  /* [4269] */
    (xdc_Char)0x66,  /* [4270] */
    (xdc_Char)0x61,  /* [4271] */
    (xdc_Char)0x6d,  /* [4272] */
    (xdc_Char)0x69,  /* [4273] */
    (xdc_Char)0x6c,  /* [4274] */
    (xdc_Char)0x79,  /* [4275] */
    (xdc_Char)0x2e,  /* [4276] */
    (xdc_Char)0x61,  /* [4277] */
    (xdc_Char)0x72,  /* [4278] */
    (xdc_Char)0x6d,  /* [4279] */
    (xdc_Char)0x2e,  /* [4280] */
    (xdc_Char)0x6d,  /* [4281] */
    (xdc_Char)0x33,  /* [4282] */
    (xdc_Char)0x2e,  /* [4283] */
    (xdc_Char)0x48,  /* [4284] */
    (xdc_Char)0x77,  /* [4285] */
    (xdc_Char)0x69,  /* [4286] */
    (xdc_Char)0x20,  /* [4287] */
    (xdc_Char)0x6d,  /* [4288] */
    (xdc_Char)0x6f,  /* [4289] */
    (xdc_Char)0x64,  /* [4290] */
    (xdc_Char)0x75,  /* [4291] */
    (xdc_Char)0x6c,  /* [4292] */
    (xdc_Char)0x65,  /* [4293] */
    (xdc_Char)0x20,  /* [4294] */
    (xdc_Char)0x75,  /* [4295] */
    (xdc_Char)0x73,  /* [4296] */
    (xdc_Char)0x69,  /* [4297] */
    (xdc_Char)0x6e,  /* [4298] */
    (xdc_Char)0x67,  /* [4299] */
    (xdc_Char)0x20,  /* [4300] */
    (xdc_Char)0x52,  /* [4301] */
    (xdc_Char)0x4f,  /* [4302] */
    (xdc_Char)0x56,  /* [4303] */
    (xdc_Char)0x2e,  /* [4304] */
    (xdc_Char)0x0,  /* [4305] */
    (xdc_Char)0x45,  /* [4306] */
    (xdc_Char)0x5f,  /* [4307] */
    (xdc_Char)0x6e,  /* [4308] */
    (xdc_Char)0x6f,  /* [4309] */
    (xdc_Char)0x49,  /* [4310] */
    (xdc_Char)0x73,  /* [4311] */
    (xdc_Char)0x72,  /* [4312] */
    (xdc_Char)0x3a,  /* [4313] */
    (xdc_Char)0x20,  /* [4314] */
    (xdc_Char)0x69,  /* [4315] */
    (xdc_Char)0x64,  /* [4316] */
    (xdc_Char)0x20,  /* [4317] */
    (xdc_Char)0x3d,  /* [4318] */
    (xdc_Char)0x20,  /* [4319] */
    (xdc_Char)0x25,  /* [4320] */
    (xdc_Char)0x64,  /* [4321] */
    (xdc_Char)0x2c,  /* [4322] */
    (xdc_Char)0x20,  /* [4323] */
    (xdc_Char)0x70,  /* [4324] */
    (xdc_Char)0x63,  /* [4325] */
    (xdc_Char)0x20,  /* [4326] */
    (xdc_Char)0x3d,  /* [4327] */
    (xdc_Char)0x20,  /* [4328] */
    (xdc_Char)0x25,  /* [4329] */
    (xdc_Char)0x30,  /* [4330] */
    (xdc_Char)0x38,  /* [4331] */
    (xdc_Char)0x78,  /* [4332] */
    (xdc_Char)0x0,  /* [4333] */
    (xdc_Char)0x45,  /* [4334] */
    (xdc_Char)0x5f,  /* [4335] */
    (xdc_Char)0x4e,  /* [4336] */
    (xdc_Char)0x4d,  /* [4337] */
    (xdc_Char)0x49,  /* [4338] */
    (xdc_Char)0x3a,  /* [4339] */
    (xdc_Char)0x20,  /* [4340] */
    (xdc_Char)0x25,  /* [4341] */
    (xdc_Char)0x73,  /* [4342] */
    (xdc_Char)0x0,  /* [4343] */
    (xdc_Char)0x45,  /* [4344] */
    (xdc_Char)0x5f,  /* [4345] */
    (xdc_Char)0x68,  /* [4346] */
    (xdc_Char)0x61,  /* [4347] */
    (xdc_Char)0x72,  /* [4348] */
    (xdc_Char)0x64,  /* [4349] */
    (xdc_Char)0x46,  /* [4350] */
    (xdc_Char)0x61,  /* [4351] */
    (xdc_Char)0x75,  /* [4352] */
    (xdc_Char)0x6c,  /* [4353] */
    (xdc_Char)0x74,  /* [4354] */
    (xdc_Char)0x3a,  /* [4355] */
    (xdc_Char)0x20,  /* [4356] */
    (xdc_Char)0x25,  /* [4357] */
    (xdc_Char)0x73,  /* [4358] */
    (xdc_Char)0x0,  /* [4359] */
    (xdc_Char)0x45,  /* [4360] */
    (xdc_Char)0x5f,  /* [4361] */
    (xdc_Char)0x6d,  /* [4362] */
    (xdc_Char)0x65,  /* [4363] */
    (xdc_Char)0x6d,  /* [4364] */
    (xdc_Char)0x46,  /* [4365] */
    (xdc_Char)0x61,  /* [4366] */
    (xdc_Char)0x75,  /* [4367] */
    (xdc_Char)0x6c,  /* [4368] */
    (xdc_Char)0x74,  /* [4369] */
    (xdc_Char)0x3a,  /* [4370] */
    (xdc_Char)0x20,  /* [4371] */
    (xdc_Char)0x25,  /* [4372] */
    (xdc_Char)0x73,  /* [4373] */
    (xdc_Char)0x2c,  /* [4374] */
    (xdc_Char)0x20,  /* [4375] */
    (xdc_Char)0x61,  /* [4376] */
    (xdc_Char)0x64,  /* [4377] */
    (xdc_Char)0x64,  /* [4378] */
    (xdc_Char)0x72,  /* [4379] */
    (xdc_Char)0x65,  /* [4380] */
    (xdc_Char)0x73,  /* [4381] */
    (xdc_Char)0x73,  /* [4382] */
    (xdc_Char)0x3a,  /* [4383] */
    (xdc_Char)0x20,  /* [4384] */
    (xdc_Char)0x25,  /* [4385] */
    (xdc_Char)0x30,  /* [4386] */
    (xdc_Char)0x38,  /* [4387] */
    (xdc_Char)0x78,  /* [4388] */
    (xdc_Char)0x0,  /* [4389] */
    (xdc_Char)0x45,  /* [4390] */
    (xdc_Char)0x5f,  /* [4391] */
    (xdc_Char)0x62,  /* [4392] */
    (xdc_Char)0x75,  /* [4393] */
    (xdc_Char)0x73,  /* [4394] */
    (xdc_Char)0x46,  /* [4395] */
    (xdc_Char)0x61,  /* [4396] */
    (xdc_Char)0x75,  /* [4397] */
    (xdc_Char)0x6c,  /* [4398] */
    (xdc_Char)0x74,  /* [4399] */
    (xdc_Char)0x3a,  /* [4400] */
    (xdc_Char)0x20,  /* [4401] */
    (xdc_Char)0x25,  /* [4402] */
    (xdc_Char)0x73,  /* [4403] */
    (xdc_Char)0x2c,  /* [4404] */
    (xdc_Char)0x20,  /* [4405] */
    (xdc_Char)0x61,  /* [4406] */
    (xdc_Char)0x64,  /* [4407] */
    (xdc_Char)0x64,  /* [4408] */
    (xdc_Char)0x72,  /* [4409] */
    (xdc_Char)0x65,  /* [4410] */
    (xdc_Char)0x73,  /* [4411] */
    (xdc_Char)0x73,  /* [4412] */
    (xdc_Char)0x3a,  /* [4413] */
    (xdc_Char)0x20,  /* [4414] */
    (xdc_Char)0x25,  /* [4415] */
    (xdc_Char)0x30,  /* [4416] */
    (xdc_Char)0x38,  /* [4417] */
    (xdc_Char)0x78,  /* [4418] */
    (xdc_Char)0x0,  /* [4419] */
    (xdc_Char)0x45,  /* [4420] */
    (xdc_Char)0x5f,  /* [4421] */
    (xdc_Char)0x75,  /* [4422] */
    (xdc_Char)0x73,  /* [4423] */
    (xdc_Char)0x61,  /* [4424] */
    (xdc_Char)0x67,  /* [4425] */
    (xdc_Char)0x65,  /* [4426] */
    (xdc_Char)0x46,  /* [4427] */
    (xdc_Char)0x61,  /* [4428] */
    (xdc_Char)0x75,  /* [4429] */
    (xdc_Char)0x6c,  /* [4430] */
    (xdc_Char)0x74,  /* [4431] */
    (xdc_Char)0x3a,  /* [4432] */
    (xdc_Char)0x20,  /* [4433] */
    (xdc_Char)0x25,  /* [4434] */
    (xdc_Char)0x73,  /* [4435] */
    (xdc_Char)0x0,  /* [4436] */
    (xdc_Char)0x45,  /* [4437] */
    (xdc_Char)0x5f,  /* [4438] */
    (xdc_Char)0x73,  /* [4439] */
    (xdc_Char)0x76,  /* [4440] */
    (xdc_Char)0x43,  /* [4441] */
    (xdc_Char)0x61,  /* [4442] */
    (xdc_Char)0x6c,  /* [4443] */
    (xdc_Char)0x6c,  /* [4444] */
    (xdc_Char)0x3a,  /* [4445] */
    (xdc_Char)0x20,  /* [4446] */
    (xdc_Char)0x73,  /* [4447] */
    (xdc_Char)0x76,  /* [4448] */
    (xdc_Char)0x4e,  /* [4449] */
    (xdc_Char)0x75,  /* [4450] */
    (xdc_Char)0x6d,  /* [4451] */
    (xdc_Char)0x20,  /* [4452] */
    (xdc_Char)0x3d,  /* [4453] */
    (xdc_Char)0x20,  /* [4454] */
    (xdc_Char)0x25,  /* [4455] */
    (xdc_Char)0x64,  /* [4456] */
    (xdc_Char)0x0,  /* [4457] */
    (xdc_Char)0x45,  /* [4458] */
    (xdc_Char)0x5f,  /* [4459] */
    (xdc_Char)0x64,  /* [4460] */
    (xdc_Char)0x65,  /* [4461] */
    (xdc_Char)0x62,  /* [4462] */
    (xdc_Char)0x75,  /* [4463] */
    (xdc_Char)0x67,  /* [4464] */
    (xdc_Char)0x4d,  /* [4465] */
    (xdc_Char)0x6f,  /* [4466] */
    (xdc_Char)0x6e,  /* [4467] */
    (xdc_Char)0x3a,  /* [4468] */
    (xdc_Char)0x20,  /* [4469] */
    (xdc_Char)0x25,  /* [4470] */
    (xdc_Char)0x73,  /* [4471] */
    (xdc_Char)0x0,  /* [4472] */
    (xdc_Char)0x45,  /* [4473] */
    (xdc_Char)0x5f,  /* [4474] */
    (xdc_Char)0x72,  /* [4475] */
    (xdc_Char)0x65,  /* [4476] */
    (xdc_Char)0x73,  /* [4477] */
    (xdc_Char)0x65,  /* [4478] */
    (xdc_Char)0x72,  /* [4479] */
    (xdc_Char)0x76,  /* [4480] */
    (xdc_Char)0x65,  /* [4481] */
    (xdc_Char)0x64,  /* [4482] */
    (xdc_Char)0x3a,  /* [4483] */
    (xdc_Char)0x20,  /* [4484] */
    (xdc_Char)0x25,  /* [4485] */
    (xdc_Char)0x73,  /* [4486] */
    (xdc_Char)0x20,  /* [4487] */
    (xdc_Char)0x25,  /* [4488] */
    (xdc_Char)0x64,  /* [4489] */
    (xdc_Char)0x0,  /* [4490] */
    (xdc_Char)0x45,  /* [4491] */
    (xdc_Char)0x5f,  /* [4492] */
    (xdc_Char)0x69,  /* [4493] */
    (xdc_Char)0x6e,  /* [4494] */
    (xdc_Char)0x76,  /* [4495] */
    (xdc_Char)0x61,  /* [4496] */
    (xdc_Char)0x6c,  /* [4497] */
    (xdc_Char)0x69,  /* [4498] */
    (xdc_Char)0x64,  /* [4499] */
    (xdc_Char)0x54,  /* [4500] */
    (xdc_Char)0x69,  /* [4501] */
    (xdc_Char)0x6d,  /* [4502] */
    (xdc_Char)0x65,  /* [4503] */
    (xdc_Char)0x72,  /* [4504] */
    (xdc_Char)0x3a,  /* [4505] */
    (xdc_Char)0x20,  /* [4506] */
    (xdc_Char)0x49,  /* [4507] */
    (xdc_Char)0x6e,  /* [4508] */
    (xdc_Char)0x76,  /* [4509] */
    (xdc_Char)0x61,  /* [4510] */
    (xdc_Char)0x6c,  /* [4511] */
    (xdc_Char)0x69,  /* [4512] */
    (xdc_Char)0x64,  /* [4513] */
    (xdc_Char)0x20,  /* [4514] */
    (xdc_Char)0x54,  /* [4515] */
    (xdc_Char)0x69,  /* [4516] */
    (xdc_Char)0x6d,  /* [4517] */
    (xdc_Char)0x65,  /* [4518] */
    (xdc_Char)0x72,  /* [4519] */
    (xdc_Char)0x20,  /* [4520] */
    (xdc_Char)0x49,  /* [4521] */
    (xdc_Char)0x64,  /* [4522] */
    (xdc_Char)0x20,  /* [4523] */
    (xdc_Char)0x25,  /* [4524] */
    (xdc_Char)0x64,  /* [4525] */
    (xdc_Char)0x0,  /* [4526] */
    (xdc_Char)0x45,  /* [4527] */
    (xdc_Char)0x5f,  /* [4528] */
    (xdc_Char)0x6e,  /* [4529] */
    (xdc_Char)0x6f,  /* [4530] */
    (xdc_Char)0x74,  /* [4531] */
    (xdc_Char)0x41,  /* [4532] */
    (xdc_Char)0x76,  /* [4533] */
    (xdc_Char)0x61,  /* [4534] */
    (xdc_Char)0x69,  /* [4535] */
    (xdc_Char)0x6c,  /* [4536] */
    (xdc_Char)0x61,  /* [4537] */
    (xdc_Char)0x62,  /* [4538] */
    (xdc_Char)0x6c,  /* [4539] */
    (xdc_Char)0x65,  /* [4540] */
    (xdc_Char)0x3a,  /* [4541] */
    (xdc_Char)0x20,  /* [4542] */
    (xdc_Char)0x54,  /* [4543] */
    (xdc_Char)0x69,  /* [4544] */
    (xdc_Char)0x6d,  /* [4545] */
    (xdc_Char)0x65,  /* [4546] */
    (xdc_Char)0x72,  /* [4547] */
    (xdc_Char)0x20,  /* [4548] */
    (xdc_Char)0x6e,  /* [4549] */
    (xdc_Char)0x6f,  /* [4550] */
    (xdc_Char)0x74,  /* [4551] */
    (xdc_Char)0x20,  /* [4552] */
    (xdc_Char)0x61,  /* [4553] */
    (xdc_Char)0x76,  /* [4554] */
    (xdc_Char)0x61,  /* [4555] */
    (xdc_Char)0x69,  /* [4556] */
    (xdc_Char)0x6c,  /* [4557] */
    (xdc_Char)0x61,  /* [4558] */
    (xdc_Char)0x62,  /* [4559] */
    (xdc_Char)0x6c,  /* [4560] */
    (xdc_Char)0x65,  /* [4561] */
    (xdc_Char)0x20,  /* [4562] */
    (xdc_Char)0x25,  /* [4563] */
    (xdc_Char)0x64,  /* [4564] */
    (xdc_Char)0x0,  /* [4565] */
    (xdc_Char)0x45,  /* [4566] */
    (xdc_Char)0x5f,  /* [4567] */
    (xdc_Char)0x63,  /* [4568] */
    (xdc_Char)0x61,  /* [4569] */
    (xdc_Char)0x6e,  /* [4570] */
    (xdc_Char)0x6e,  /* [4571] */
    (xdc_Char)0x6f,  /* [4572] */
    (xdc_Char)0x74,  /* [4573] */
    (xdc_Char)0x53,  /* [4574] */
    (xdc_Char)0x75,  /* [4575] */
    (xdc_Char)0x70,  /* [4576] */
    (xdc_Char)0x70,  /* [4577] */
    (xdc_Char)0x6f,  /* [4578] */
    (xdc_Char)0x72,  /* [4579] */
    (xdc_Char)0x74,  /* [4580] */
    (xdc_Char)0x3a,  /* [4581] */
    (xdc_Char)0x20,  /* [4582] */
    (xdc_Char)0x54,  /* [4583] */
    (xdc_Char)0x69,  /* [4584] */
    (xdc_Char)0x6d,  /* [4585] */
    (xdc_Char)0x65,  /* [4586] */
    (xdc_Char)0x72,  /* [4587] */
    (xdc_Char)0x20,  /* [4588] */
    (xdc_Char)0x63,  /* [4589] */
    (xdc_Char)0x61,  /* [4590] */
    (xdc_Char)0x6e,  /* [4591] */
    (xdc_Char)0x6e,  /* [4592] */
    (xdc_Char)0x6f,  /* [4593] */
    (xdc_Char)0x74,  /* [4594] */
    (xdc_Char)0x20,  /* [4595] */
    (xdc_Char)0x73,  /* [4596] */
    (xdc_Char)0x75,  /* [4597] */
    (xdc_Char)0x70,  /* [4598] */
    (xdc_Char)0x70,  /* [4599] */
    (xdc_Char)0x6f,  /* [4600] */
    (xdc_Char)0x72,  /* [4601] */
    (xdc_Char)0x74,  /* [4602] */
    (xdc_Char)0x20,  /* [4603] */
    (xdc_Char)0x72,  /* [4604] */
    (xdc_Char)0x65,  /* [4605] */
    (xdc_Char)0x71,  /* [4606] */
    (xdc_Char)0x75,  /* [4607] */
    (xdc_Char)0x65,  /* [4608] */
    (xdc_Char)0x73,  /* [4609] */
    (xdc_Char)0x74,  /* [4610] */
    (xdc_Char)0x65,  /* [4611] */
    (xdc_Char)0x64,  /* [4612] */
    (xdc_Char)0x20,  /* [4613] */
    (xdc_Char)0x70,  /* [4614] */
    (xdc_Char)0x65,  /* [4615] */
    (xdc_Char)0x72,  /* [4616] */
    (xdc_Char)0x69,  /* [4617] */
    (xdc_Char)0x6f,  /* [4618] */
    (xdc_Char)0x64,  /* [4619] */
    (xdc_Char)0x20,  /* [4620] */
    (xdc_Char)0x25,  /* [4621] */
    (xdc_Char)0x64,  /* [4622] */
    (xdc_Char)0x0,  /* [4623] */
    (xdc_Char)0x72,  /* [4624] */
    (xdc_Char)0x65,  /* [4625] */
    (xdc_Char)0x71,  /* [4626] */
    (xdc_Char)0x75,  /* [4627] */
    (xdc_Char)0x65,  /* [4628] */
    (xdc_Char)0x73,  /* [4629] */
    (xdc_Char)0x74,  /* [4630] */
    (xdc_Char)0x65,  /* [4631] */
    (xdc_Char)0x64,  /* [4632] */
    (xdc_Char)0x20,  /* [4633] */
    (xdc_Char)0x73,  /* [4634] */
    (xdc_Char)0x69,  /* [4635] */
    (xdc_Char)0x7a,  /* [4636] */
    (xdc_Char)0x65,  /* [4637] */
    (xdc_Char)0x20,  /* [4638] */
    (xdc_Char)0x69,  /* [4639] */
    (xdc_Char)0x73,  /* [4640] */
    (xdc_Char)0x20,  /* [4641] */
    (xdc_Char)0x74,  /* [4642] */
    (xdc_Char)0x6f,  /* [4643] */
    (xdc_Char)0x6f,  /* [4644] */
    (xdc_Char)0x20,  /* [4645] */
    (xdc_Char)0x62,  /* [4646] */
    (xdc_Char)0x69,  /* [4647] */
    (xdc_Char)0x67,  /* [4648] */
    (xdc_Char)0x3a,  /* [4649] */
    (xdc_Char)0x20,  /* [4650] */
    (xdc_Char)0x68,  /* [4651] */
    (xdc_Char)0x61,  /* [4652] */
    (xdc_Char)0x6e,  /* [4653] */
    (xdc_Char)0x64,  /* [4654] */
    (xdc_Char)0x6c,  /* [4655] */
    (xdc_Char)0x65,  /* [4656] */
    (xdc_Char)0x3d,  /* [4657] */
    (xdc_Char)0x30,  /* [4658] */
    (xdc_Char)0x78,  /* [4659] */
    (xdc_Char)0x25,  /* [4660] */
    (xdc_Char)0x78,  /* [4661] */
    (xdc_Char)0x2c,  /* [4662] */
    (xdc_Char)0x20,  /* [4663] */
    (xdc_Char)0x73,  /* [4664] */
    (xdc_Char)0x69,  /* [4665] */
    (xdc_Char)0x7a,  /* [4666] */
    (xdc_Char)0x65,  /* [4667] */
    (xdc_Char)0x3d,  /* [4668] */
    (xdc_Char)0x25,  /* [4669] */
    (xdc_Char)0x75,  /* [4670] */
    (xdc_Char)0x0,  /* [4671] */
    (xdc_Char)0x6f,  /* [4672] */
    (xdc_Char)0x75,  /* [4673] */
    (xdc_Char)0x74,  /* [4674] */
    (xdc_Char)0x20,  /* [4675] */
    (xdc_Char)0x6f,  /* [4676] */
    (xdc_Char)0x66,  /* [4677] */
    (xdc_Char)0x20,  /* [4678] */
    (xdc_Char)0x6d,  /* [4679] */
    (xdc_Char)0x65,  /* [4680] */
    (xdc_Char)0x6d,  /* [4681] */
    (xdc_Char)0x6f,  /* [4682] */
    (xdc_Char)0x72,  /* [4683] */
    (xdc_Char)0x79,  /* [4684] */
    (xdc_Char)0x3a,  /* [4685] */
    (xdc_Char)0x20,  /* [4686] */
    (xdc_Char)0x68,  /* [4687] */
    (xdc_Char)0x61,  /* [4688] */
    (xdc_Char)0x6e,  /* [4689] */
    (xdc_Char)0x64,  /* [4690] */
    (xdc_Char)0x6c,  /* [4691] */
    (xdc_Char)0x65,  /* [4692] */
    (xdc_Char)0x3d,  /* [4693] */
    (xdc_Char)0x30,  /* [4694] */
    (xdc_Char)0x78,  /* [4695] */
    (xdc_Char)0x25,  /* [4696] */
    (xdc_Char)0x78,  /* [4697] */
    (xdc_Char)0x2c,  /* [4698] */
    (xdc_Char)0x20,  /* [4699] */
    (xdc_Char)0x73,  /* [4700] */
    (xdc_Char)0x69,  /* [4701] */
    (xdc_Char)0x7a,  /* [4702] */
    (xdc_Char)0x65,  /* [4703] */
    (xdc_Char)0x3d,  /* [4704] */
    (xdc_Char)0x25,  /* [4705] */
    (xdc_Char)0x75,  /* [4706] */
    (xdc_Char)0x0,  /* [4707] */
    (xdc_Char)0x45,  /* [4708] */
    (xdc_Char)0x5f,  /* [4709] */
    (xdc_Char)0x70,  /* [4710] */
    (xdc_Char)0x72,  /* [4711] */
    (xdc_Char)0x69,  /* [4712] */
    (xdc_Char)0x6f,  /* [4713] */
    (xdc_Char)0x72,  /* [4714] */
    (xdc_Char)0x69,  /* [4715] */
    (xdc_Char)0x74,  /* [4716] */
    (xdc_Char)0x79,  /* [4717] */
    (xdc_Char)0x3a,  /* [4718] */
    (xdc_Char)0x20,  /* [4719] */
    (xdc_Char)0x54,  /* [4720] */
    (xdc_Char)0x68,  /* [4721] */
    (xdc_Char)0x72,  /* [4722] */
    (xdc_Char)0x65,  /* [4723] */
    (xdc_Char)0x61,  /* [4724] */
    (xdc_Char)0x64,  /* [4725] */
    (xdc_Char)0x20,  /* [4726] */
    (xdc_Char)0x70,  /* [4727] */
    (xdc_Char)0x72,  /* [4728] */
    (xdc_Char)0x69,  /* [4729] */
    (xdc_Char)0x6f,  /* [4730] */
    (xdc_Char)0x72,  /* [4731] */
    (xdc_Char)0x69,  /* [4732] */
    (xdc_Char)0x74,  /* [4733] */
    (xdc_Char)0x79,  /* [4734] */
    (xdc_Char)0x20,  /* [4735] */
    (xdc_Char)0x69,  /* [4736] */
    (xdc_Char)0x73,  /* [4737] */
    (xdc_Char)0x20,  /* [4738] */
    (xdc_Char)0x69,  /* [4739] */
    (xdc_Char)0x6e,  /* [4740] */
    (xdc_Char)0x76,  /* [4741] */
    (xdc_Char)0x61,  /* [4742] */
    (xdc_Char)0x6c,  /* [4743] */
    (xdc_Char)0x69,  /* [4744] */
    (xdc_Char)0x64,  /* [4745] */
    (xdc_Char)0x20,  /* [4746] */
    (xdc_Char)0x25,  /* [4747] */
    (xdc_Char)0x64,  /* [4748] */
    (xdc_Char)0x0,  /* [4749] */
    (xdc_Char)0x3c,  /* [4750] */
    (xdc_Char)0x2d,  /* [4751] */
    (xdc_Char)0x2d,  /* [4752] */
    (xdc_Char)0x20,  /* [4753] */
    (xdc_Char)0x63,  /* [4754] */
    (xdc_Char)0x6f,  /* [4755] */
    (xdc_Char)0x6e,  /* [4756] */
    (xdc_Char)0x73,  /* [4757] */
    (xdc_Char)0x74,  /* [4758] */
    (xdc_Char)0x72,  /* [4759] */
    (xdc_Char)0x75,  /* [4760] */
    (xdc_Char)0x63,  /* [4761] */
    (xdc_Char)0x74,  /* [4762] */
    (xdc_Char)0x3a,  /* [4763] */
    (xdc_Char)0x20,  /* [4764] */
    (xdc_Char)0x25,  /* [4765] */
    (xdc_Char)0x70,  /* [4766] */
    (xdc_Char)0x28,  /* [4767] */
    (xdc_Char)0x27,  /* [4768] */
    (xdc_Char)0x25,  /* [4769] */
    (xdc_Char)0x73,  /* [4770] */
    (xdc_Char)0x27,  /* [4771] */
    (xdc_Char)0x29,  /* [4772] */
    (xdc_Char)0x0,  /* [4773] */
    (xdc_Char)0x3c,  /* [4774] */
    (xdc_Char)0x2d,  /* [4775] */
    (xdc_Char)0x2d,  /* [4776] */
    (xdc_Char)0x20,  /* [4777] */
    (xdc_Char)0x63,  /* [4778] */
    (xdc_Char)0x72,  /* [4779] */
    (xdc_Char)0x65,  /* [4780] */
    (xdc_Char)0x61,  /* [4781] */
    (xdc_Char)0x74,  /* [4782] */
    (xdc_Char)0x65,  /* [4783] */
    (xdc_Char)0x3a,  /* [4784] */
    (xdc_Char)0x20,  /* [4785] */
    (xdc_Char)0x25,  /* [4786] */
    (xdc_Char)0x70,  /* [4787] */
    (xdc_Char)0x28,  /* [4788] */
    (xdc_Char)0x27,  /* [4789] */
    (xdc_Char)0x25,  /* [4790] */
    (xdc_Char)0x73,  /* [4791] */
    (xdc_Char)0x27,  /* [4792] */
    (xdc_Char)0x29,  /* [4793] */
    (xdc_Char)0x0,  /* [4794] */
    (xdc_Char)0x2d,  /* [4795] */
    (xdc_Char)0x2d,  /* [4796] */
    (xdc_Char)0x3e,  /* [4797] */
    (xdc_Char)0x20,  /* [4798] */
    (xdc_Char)0x64,  /* [4799] */
    (xdc_Char)0x65,  /* [4800] */
    (xdc_Char)0x73,  /* [4801] */
    (xdc_Char)0x74,  /* [4802] */
    (xdc_Char)0x72,  /* [4803] */
    (xdc_Char)0x75,  /* [4804] */
    (xdc_Char)0x63,  /* [4805] */
    (xdc_Char)0x74,  /* [4806] */
    (xdc_Char)0x3a,  /* [4807] */
    (xdc_Char)0x20,  /* [4808] */
    (xdc_Char)0x28,  /* [4809] */
    (xdc_Char)0x25,  /* [4810] */
    (xdc_Char)0x70,  /* [4811] */
    (xdc_Char)0x29,  /* [4812] */
    (xdc_Char)0x0,  /* [4813] */
    (xdc_Char)0x2d,  /* [4814] */
    (xdc_Char)0x2d,  /* [4815] */
    (xdc_Char)0x3e,  /* [4816] */
    (xdc_Char)0x20,  /* [4817] */
    (xdc_Char)0x64,  /* [4818] */
    (xdc_Char)0x65,  /* [4819] */
    (xdc_Char)0x6c,  /* [4820] */
    (xdc_Char)0x65,  /* [4821] */
    (xdc_Char)0x74,  /* [4822] */
    (xdc_Char)0x65,  /* [4823] */
    (xdc_Char)0x3a,  /* [4824] */
    (xdc_Char)0x20,  /* [4825] */
    (xdc_Char)0x28,  /* [4826] */
    (xdc_Char)0x25,  /* [4827] */
    (xdc_Char)0x70,  /* [4828] */
    (xdc_Char)0x29,  /* [4829] */
    (xdc_Char)0x0,  /* [4830] */
    (xdc_Char)0x45,  /* [4831] */
    (xdc_Char)0x52,  /* [4832] */
    (xdc_Char)0x52,  /* [4833] */
    (xdc_Char)0x4f,  /* [4834] */
    (xdc_Char)0x52,  /* [4835] */
    (xdc_Char)0x3a,  /* [4836] */
    (xdc_Char)0x20,  /* [4837] */
    (xdc_Char)0x25,  /* [4838] */
    (xdc_Char)0x24,  /* [4839] */
    (xdc_Char)0x46,  /* [4840] */
    (xdc_Char)0x25,  /* [4841] */
    (xdc_Char)0x24,  /* [4842] */
    (xdc_Char)0x53,  /* [4843] */
    (xdc_Char)0x0,  /* [4844] */
    (xdc_Char)0x57,  /* [4845] */
    (xdc_Char)0x41,  /* [4846] */
    (xdc_Char)0x52,  /* [4847] */
    (xdc_Char)0x4e,  /* [4848] */
    (xdc_Char)0x49,  /* [4849] */
    (xdc_Char)0x4e,  /* [4850] */
    (xdc_Char)0x47,  /* [4851] */
    (xdc_Char)0x3a,  /* [4852] */
    (xdc_Char)0x20,  /* [4853] */
    (xdc_Char)0x25,  /* [4854] */
    (xdc_Char)0x24,  /* [4855] */
    (xdc_Char)0x46,  /* [4856] */
    (xdc_Char)0x25,  /* [4857] */
    (xdc_Char)0x24,  /* [4858] */
    (xdc_Char)0x53,  /* [4859] */
    (xdc_Char)0x0,  /* [4860] */
    (xdc_Char)0x25,  /* [4861] */
    (xdc_Char)0x24,  /* [4862] */
    (xdc_Char)0x46,  /* [4863] */
    (xdc_Char)0x25,  /* [4864] */
    (xdc_Char)0x24,  /* [4865] */
    (xdc_Char)0x53,  /* [4866] */
    (xdc_Char)0x0,  /* [4867] */
    (xdc_Char)0x53,  /* [4868] */
    (xdc_Char)0x74,  /* [4869] */
    (xdc_Char)0x61,  /* [4870] */
    (xdc_Char)0x72,  /* [4871] */
    (xdc_Char)0x74,  /* [4872] */
    (xdc_Char)0x3a,  /* [4873] */
    (xdc_Char)0x20,  /* [4874] */
    (xdc_Char)0x25,  /* [4875] */
    (xdc_Char)0x24,  /* [4876] */
    (xdc_Char)0x53,  /* [4877] */
    (xdc_Char)0x0,  /* [4878] */
    (xdc_Char)0x53,  /* [4879] */
    (xdc_Char)0x74,  /* [4880] */
    (xdc_Char)0x6f,  /* [4881] */
    (xdc_Char)0x70,  /* [4882] */
    (xdc_Char)0x3a,  /* [4883] */
    (xdc_Char)0x20,  /* [4884] */
    (xdc_Char)0x25,  /* [4885] */
    (xdc_Char)0x24,  /* [4886] */
    (xdc_Char)0x53,  /* [4887] */
    (xdc_Char)0x0,  /* [4888] */
    (xdc_Char)0x53,  /* [4889] */
    (xdc_Char)0x74,  /* [4890] */
    (xdc_Char)0x61,  /* [4891] */
    (xdc_Char)0x72,  /* [4892] */
    (xdc_Char)0x74,  /* [4893] */
    (xdc_Char)0x49,  /* [4894] */
    (xdc_Char)0x6e,  /* [4895] */
    (xdc_Char)0x73,  /* [4896] */
    (xdc_Char)0x74,  /* [4897] */
    (xdc_Char)0x61,  /* [4898] */
    (xdc_Char)0x6e,  /* [4899] */
    (xdc_Char)0x63,  /* [4900] */
    (xdc_Char)0x65,  /* [4901] */
    (xdc_Char)0x3a,  /* [4902] */
    (xdc_Char)0x20,  /* [4903] */
    (xdc_Char)0x25,  /* [4904] */
    (xdc_Char)0x24,  /* [4905] */
    (xdc_Char)0x53,  /* [4906] */
    (xdc_Char)0x0,  /* [4907] */
    (xdc_Char)0x53,  /* [4908] */
    (xdc_Char)0x74,  /* [4909] */
    (xdc_Char)0x6f,  /* [4910] */
    (xdc_Char)0x70,  /* [4911] */
    (xdc_Char)0x49,  /* [4912] */
    (xdc_Char)0x6e,  /* [4913] */
    (xdc_Char)0x73,  /* [4914] */
    (xdc_Char)0x74,  /* [4915] */
    (xdc_Char)0x61,  /* [4916] */
    (xdc_Char)0x6e,  /* [4917] */
    (xdc_Char)0x63,  /* [4918] */
    (xdc_Char)0x65,  /* [4919] */
    (xdc_Char)0x3a,  /* [4920] */
    (xdc_Char)0x20,  /* [4921] */
    (xdc_Char)0x25,  /* [4922] */
    (xdc_Char)0x24,  /* [4923] */
    (xdc_Char)0x53,  /* [4924] */
    (xdc_Char)0x0,  /* [4925] */
    (xdc_Char)0x4c,  /* [4926] */
    (xdc_Char)0x57,  /* [4927] */
    (xdc_Char)0x5f,  /* [4928] */
    (xdc_Char)0x64,  /* [4929] */
    (xdc_Char)0x65,  /* [4930] */
    (xdc_Char)0x6c,  /* [4931] */
    (xdc_Char)0x61,  /* [4932] */
    (xdc_Char)0x79,  /* [4933] */
    (xdc_Char)0x65,  /* [4934] */
    (xdc_Char)0x64,  /* [4935] */
    (xdc_Char)0x3a,  /* [4936] */
    (xdc_Char)0x20,  /* [4937] */
    (xdc_Char)0x64,  /* [4938] */
    (xdc_Char)0x65,  /* [4939] */
    (xdc_Char)0x6c,  /* [4940] */
    (xdc_Char)0x61,  /* [4941] */
    (xdc_Char)0x79,  /* [4942] */
    (xdc_Char)0x3a,  /* [4943] */
    (xdc_Char)0x20,  /* [4944] */
    (xdc_Char)0x25,  /* [4945] */
    (xdc_Char)0x64,  /* [4946] */
    (xdc_Char)0x0,  /* [4947] */
    (xdc_Char)0x4c,  /* [4948] */
    (xdc_Char)0x4d,  /* [4949] */
    (xdc_Char)0x5f,  /* [4950] */
    (xdc_Char)0x74,  /* [4951] */
    (xdc_Char)0x69,  /* [4952] */
    (xdc_Char)0x63,  /* [4953] */
    (xdc_Char)0x6b,  /* [4954] */
    (xdc_Char)0x3a,  /* [4955] */
    (xdc_Char)0x20,  /* [4956] */
    (xdc_Char)0x74,  /* [4957] */
    (xdc_Char)0x69,  /* [4958] */
    (xdc_Char)0x63,  /* [4959] */
    (xdc_Char)0x6b,  /* [4960] */
    (xdc_Char)0x3a,  /* [4961] */
    (xdc_Char)0x20,  /* [4962] */
    (xdc_Char)0x25,  /* [4963] */
    (xdc_Char)0x64,  /* [4964] */
    (xdc_Char)0x0,  /* [4965] */
    (xdc_Char)0x4c,  /* [4966] */
    (xdc_Char)0x4d,  /* [4967] */
    (xdc_Char)0x5f,  /* [4968] */
    (xdc_Char)0x62,  /* [4969] */
    (xdc_Char)0x65,  /* [4970] */
    (xdc_Char)0x67,  /* [4971] */
    (xdc_Char)0x69,  /* [4972] */
    (xdc_Char)0x6e,  /* [4973] */
    (xdc_Char)0x3a,  /* [4974] */
    (xdc_Char)0x20,  /* [4975] */
    (xdc_Char)0x63,  /* [4976] */
    (xdc_Char)0x6c,  /* [4977] */
    (xdc_Char)0x6b,  /* [4978] */
    (xdc_Char)0x3a,  /* [4979] */
    (xdc_Char)0x20,  /* [4980] */
    (xdc_Char)0x30,  /* [4981] */
    (xdc_Char)0x78,  /* [4982] */
    (xdc_Char)0x25,  /* [4983] */
    (xdc_Char)0x78,  /* [4984] */
    (xdc_Char)0x2c,  /* [4985] */
    (xdc_Char)0x20,  /* [4986] */
    (xdc_Char)0x66,  /* [4987] */
    (xdc_Char)0x75,  /* [4988] */
    (xdc_Char)0x6e,  /* [4989] */
    (xdc_Char)0x63,  /* [4990] */
    (xdc_Char)0x3a,  /* [4991] */
    (xdc_Char)0x20,  /* [4992] */
    (xdc_Char)0x30,  /* [4993] */
    (xdc_Char)0x78,  /* [4994] */
    (xdc_Char)0x25,  /* [4995] */
    (xdc_Char)0x78,  /* [4996] */
    (xdc_Char)0x0,  /* [4997] */
    (xdc_Char)0x4c,  /* [4998] */
    (xdc_Char)0x4d,  /* [4999] */
    (xdc_Char)0x5f,  /* [5000] */
    (xdc_Char)0x70,  /* [5001] */
    (xdc_Char)0x6f,  /* [5002] */
    (xdc_Char)0x73,  /* [5003] */
    (xdc_Char)0x74,  /* [5004] */
    (xdc_Char)0x3a,  /* [5005] */
    (xdc_Char)0x20,  /* [5006] */
    (xdc_Char)0x65,  /* [5007] */
    (xdc_Char)0x76,  /* [5008] */
    (xdc_Char)0x65,  /* [5009] */
    (xdc_Char)0x6e,  /* [5010] */
    (xdc_Char)0x74,  /* [5011] */
    (xdc_Char)0x3a,  /* [5012] */
    (xdc_Char)0x20,  /* [5013] */
    (xdc_Char)0x30,  /* [5014] */
    (xdc_Char)0x78,  /* [5015] */
    (xdc_Char)0x25,  /* [5016] */
    (xdc_Char)0x78,  /* [5017] */
    (xdc_Char)0x2c,  /* [5018] */
    (xdc_Char)0x20,  /* [5019] */
    (xdc_Char)0x63,  /* [5020] */
    (xdc_Char)0x75,  /* [5021] */
    (xdc_Char)0x72,  /* [5022] */
    (xdc_Char)0x72,  /* [5023] */
    (xdc_Char)0x45,  /* [5024] */
    (xdc_Char)0x76,  /* [5025] */
    (xdc_Char)0x65,  /* [5026] */
    (xdc_Char)0x6e,  /* [5027] */
    (xdc_Char)0x74,  /* [5028] */
    (xdc_Char)0x73,  /* [5029] */
    (xdc_Char)0x3a,  /* [5030] */
    (xdc_Char)0x20,  /* [5031] */
    (xdc_Char)0x30,  /* [5032] */
    (xdc_Char)0x78,  /* [5033] */
    (xdc_Char)0x25,  /* [5034] */
    (xdc_Char)0x78,  /* [5035] */
    (xdc_Char)0x2c,  /* [5036] */
    (xdc_Char)0x20,  /* [5037] */
    (xdc_Char)0x65,  /* [5038] */
    (xdc_Char)0x76,  /* [5039] */
    (xdc_Char)0x65,  /* [5040] */
    (xdc_Char)0x6e,  /* [5041] */
    (xdc_Char)0x74,  /* [5042] */
    (xdc_Char)0x49,  /* [5043] */
    (xdc_Char)0x64,  /* [5044] */
    (xdc_Char)0x3a,  /* [5045] */
    (xdc_Char)0x20,  /* [5046] */
    (xdc_Char)0x30,  /* [5047] */
    (xdc_Char)0x78,  /* [5048] */
    (xdc_Char)0x25,  /* [5049] */
    (xdc_Char)0x78,  /* [5050] */
    (xdc_Char)0x0,  /* [5051] */
    (xdc_Char)0x4c,  /* [5052] */
    (xdc_Char)0x4d,  /* [5053] */
    (xdc_Char)0x5f,  /* [5054] */
    (xdc_Char)0x70,  /* [5055] */
    (xdc_Char)0x65,  /* [5056] */
    (xdc_Char)0x6e,  /* [5057] */
    (xdc_Char)0x64,  /* [5058] */
    (xdc_Char)0x3a,  /* [5059] */
    (xdc_Char)0x20,  /* [5060] */
    (xdc_Char)0x65,  /* [5061] */
    (xdc_Char)0x76,  /* [5062] */
    (xdc_Char)0x65,  /* [5063] */
    (xdc_Char)0x6e,  /* [5064] */
    (xdc_Char)0x74,  /* [5065] */
    (xdc_Char)0x3a,  /* [5066] */
    (xdc_Char)0x20,  /* [5067] */
    (xdc_Char)0x30,  /* [5068] */
    (xdc_Char)0x78,  /* [5069] */
    (xdc_Char)0x25,  /* [5070] */
    (xdc_Char)0x78,  /* [5071] */
    (xdc_Char)0x2c,  /* [5072] */
    (xdc_Char)0x20,  /* [5073] */
    (xdc_Char)0x63,  /* [5074] */
    (xdc_Char)0x75,  /* [5075] */
    (xdc_Char)0x72,  /* [5076] */
    (xdc_Char)0x72,  /* [5077] */
    (xdc_Char)0x45,  /* [5078] */
    (xdc_Char)0x76,  /* [5079] */
    (xdc_Char)0x65,  /* [5080] */
    (xdc_Char)0x6e,  /* [5081] */
    (xdc_Char)0x74,  /* [5082] */
    (xdc_Char)0x73,  /* [5083] */
    (xdc_Char)0x3a,  /* [5084] */
    (xdc_Char)0x20,  /* [5085] */
    (xdc_Char)0x30,  /* [5086] */
    (xdc_Char)0x78,  /* [5087] */
    (xdc_Char)0x25,  /* [5088] */
    (xdc_Char)0x78,  /* [5089] */
    (xdc_Char)0x2c,  /* [5090] */
    (xdc_Char)0x20,  /* [5091] */
    (xdc_Char)0x61,  /* [5092] */
    (xdc_Char)0x6e,  /* [5093] */
    (xdc_Char)0x64,  /* [5094] */
    (xdc_Char)0x4d,  /* [5095] */
    (xdc_Char)0x61,  /* [5096] */
    (xdc_Char)0x73,  /* [5097] */
    (xdc_Char)0x6b,  /* [5098] */
    (xdc_Char)0x3a,  /* [5099] */
    (xdc_Char)0x20,  /* [5100] */
    (xdc_Char)0x30,  /* [5101] */
    (xdc_Char)0x78,  /* [5102] */
    (xdc_Char)0x25,  /* [5103] */
    (xdc_Char)0x78,  /* [5104] */
    (xdc_Char)0x2c,  /* [5105] */
    (xdc_Char)0x20,  /* [5106] */
    (xdc_Char)0x6f,  /* [5107] */
    (xdc_Char)0x72,  /* [5108] */
    (xdc_Char)0x4d,  /* [5109] */
    (xdc_Char)0x61,  /* [5110] */
    (xdc_Char)0x73,  /* [5111] */
    (xdc_Char)0x6b,  /* [5112] */
    (xdc_Char)0x3a,  /* [5113] */
    (xdc_Char)0x20,  /* [5114] */
    (xdc_Char)0x30,  /* [5115] */
    (xdc_Char)0x78,  /* [5116] */
    (xdc_Char)0x25,  /* [5117] */
    (xdc_Char)0x78,  /* [5118] */
    (xdc_Char)0x2c,  /* [5119] */
    (xdc_Char)0x20,  /* [5120] */
    (xdc_Char)0x74,  /* [5121] */
    (xdc_Char)0x69,  /* [5122] */
    (xdc_Char)0x6d,  /* [5123] */
    (xdc_Char)0x65,  /* [5124] */
    (xdc_Char)0x6f,  /* [5125] */
    (xdc_Char)0x75,  /* [5126] */
    (xdc_Char)0x74,  /* [5127] */
    (xdc_Char)0x3a,  /* [5128] */
    (xdc_Char)0x20,  /* [5129] */
    (xdc_Char)0x25,  /* [5130] */
    (xdc_Char)0x64,  /* [5131] */
    (xdc_Char)0x0,  /* [5132] */
    (xdc_Char)0x4c,  /* [5133] */
    (xdc_Char)0x4d,  /* [5134] */
    (xdc_Char)0x5f,  /* [5135] */
    (xdc_Char)0x70,  /* [5136] */
    (xdc_Char)0x6f,  /* [5137] */
    (xdc_Char)0x73,  /* [5138] */
    (xdc_Char)0x74,  /* [5139] */
    (xdc_Char)0x3a,  /* [5140] */
    (xdc_Char)0x20,  /* [5141] */
    (xdc_Char)0x73,  /* [5142] */
    (xdc_Char)0x65,  /* [5143] */
    (xdc_Char)0x6d,  /* [5144] */
    (xdc_Char)0x3a,  /* [5145] */
    (xdc_Char)0x20,  /* [5146] */
    (xdc_Char)0x30,  /* [5147] */
    (xdc_Char)0x78,  /* [5148] */
    (xdc_Char)0x25,  /* [5149] */
    (xdc_Char)0x78,  /* [5150] */
    (xdc_Char)0x2c,  /* [5151] */
    (xdc_Char)0x20,  /* [5152] */
    (xdc_Char)0x63,  /* [5153] */
    (xdc_Char)0x6f,  /* [5154] */
    (xdc_Char)0x75,  /* [5155] */
    (xdc_Char)0x6e,  /* [5156] */
    (xdc_Char)0x74,  /* [5157] */
    (xdc_Char)0x3a,  /* [5158] */
    (xdc_Char)0x20,  /* [5159] */
    (xdc_Char)0x25,  /* [5160] */
    (xdc_Char)0x64,  /* [5161] */
    (xdc_Char)0x0,  /* [5162] */
    (xdc_Char)0x4c,  /* [5163] */
    (xdc_Char)0x4d,  /* [5164] */
    (xdc_Char)0x5f,  /* [5165] */
    (xdc_Char)0x70,  /* [5166] */
    (xdc_Char)0x65,  /* [5167] */
    (xdc_Char)0x6e,  /* [5168] */
    (xdc_Char)0x64,  /* [5169] */
    (xdc_Char)0x3a,  /* [5170] */
    (xdc_Char)0x20,  /* [5171] */
    (xdc_Char)0x73,  /* [5172] */
    (xdc_Char)0x65,  /* [5173] */
    (xdc_Char)0x6d,  /* [5174] */
    (xdc_Char)0x3a,  /* [5175] */
    (xdc_Char)0x20,  /* [5176] */
    (xdc_Char)0x30,  /* [5177] */
    (xdc_Char)0x78,  /* [5178] */
    (xdc_Char)0x25,  /* [5179] */
    (xdc_Char)0x78,  /* [5180] */
    (xdc_Char)0x2c,  /* [5181] */
    (xdc_Char)0x20,  /* [5182] */
    (xdc_Char)0x63,  /* [5183] */
    (xdc_Char)0x6f,  /* [5184] */
    (xdc_Char)0x75,  /* [5185] */
    (xdc_Char)0x6e,  /* [5186] */
    (xdc_Char)0x74,  /* [5187] */
    (xdc_Char)0x3a,  /* [5188] */
    (xdc_Char)0x20,  /* [5189] */
    (xdc_Char)0x25,  /* [5190] */
    (xdc_Char)0x64,  /* [5191] */
    (xdc_Char)0x2c,  /* [5192] */
    (xdc_Char)0x20,  /* [5193] */
    (xdc_Char)0x74,  /* [5194] */
    (xdc_Char)0x69,  /* [5195] */
    (xdc_Char)0x6d,  /* [5196] */
    (xdc_Char)0x65,  /* [5197] */
    (xdc_Char)0x6f,  /* [5198] */
    (xdc_Char)0x75,  /* [5199] */
    (xdc_Char)0x74,  /* [5200] */
    (xdc_Char)0x3a,  /* [5201] */
    (xdc_Char)0x20,  /* [5202] */
    (xdc_Char)0x25,  /* [5203] */
    (xdc_Char)0x64,  /* [5204] */
    (xdc_Char)0x0,  /* [5205] */
    (xdc_Char)0x4c,  /* [5206] */
    (xdc_Char)0x4d,  /* [5207] */
    (xdc_Char)0x5f,  /* [5208] */
    (xdc_Char)0x62,  /* [5209] */
    (xdc_Char)0x65,  /* [5210] */
    (xdc_Char)0x67,  /* [5211] */
    (xdc_Char)0x69,  /* [5212] */
    (xdc_Char)0x6e,  /* [5213] */
    (xdc_Char)0x3a,  /* [5214] */
    (xdc_Char)0x20,  /* [5215] */
    (xdc_Char)0x73,  /* [5216] */
    (xdc_Char)0x77,  /* [5217] */
    (xdc_Char)0x69,  /* [5218] */
    (xdc_Char)0x3a,  /* [5219] */
    (xdc_Char)0x20,  /* [5220] */
    (xdc_Char)0x30,  /* [5221] */
    (xdc_Char)0x78,  /* [5222] */
    (xdc_Char)0x25,  /* [5223] */
    (xdc_Char)0x78,  /* [5224] */
    (xdc_Char)0x2c,  /* [5225] */
    (xdc_Char)0x20,  /* [5226] */
    (xdc_Char)0x66,  /* [5227] */
    (xdc_Char)0x75,  /* [5228] */
    (xdc_Char)0x6e,  /* [5229] */
    (xdc_Char)0x63,  /* [5230] */
    (xdc_Char)0x3a,  /* [5231] */
    (xdc_Char)0x20,  /* [5232] */
    (xdc_Char)0x30,  /* [5233] */
    (xdc_Char)0x78,  /* [5234] */
    (xdc_Char)0x25,  /* [5235] */
    (xdc_Char)0x78,  /* [5236] */
    (xdc_Char)0x2c,  /* [5237] */
    (xdc_Char)0x20,  /* [5238] */
    (xdc_Char)0x70,  /* [5239] */
    (xdc_Char)0x72,  /* [5240] */
    (xdc_Char)0x65,  /* [5241] */
    (xdc_Char)0x54,  /* [5242] */
    (xdc_Char)0x68,  /* [5243] */
    (xdc_Char)0x72,  /* [5244] */
    (xdc_Char)0x65,  /* [5245] */
    (xdc_Char)0x61,  /* [5246] */
    (xdc_Char)0x64,  /* [5247] */
    (xdc_Char)0x3a,  /* [5248] */
    (xdc_Char)0x20,  /* [5249] */
    (xdc_Char)0x25,  /* [5250] */
    (xdc_Char)0x64,  /* [5251] */
    (xdc_Char)0x0,  /* [5252] */
    (xdc_Char)0x4c,  /* [5253] */
    (xdc_Char)0x44,  /* [5254] */
    (xdc_Char)0x5f,  /* [5255] */
    (xdc_Char)0x65,  /* [5256] */
    (xdc_Char)0x6e,  /* [5257] */
    (xdc_Char)0x64,  /* [5258] */
    (xdc_Char)0x3a,  /* [5259] */
    (xdc_Char)0x20,  /* [5260] */
    (xdc_Char)0x73,  /* [5261] */
    (xdc_Char)0x77,  /* [5262] */
    (xdc_Char)0x69,  /* [5263] */
    (xdc_Char)0x3a,  /* [5264] */
    (xdc_Char)0x20,  /* [5265] */
    (xdc_Char)0x30,  /* [5266] */
    (xdc_Char)0x78,  /* [5267] */
    (xdc_Char)0x25,  /* [5268] */
    (xdc_Char)0x78,  /* [5269] */
    (xdc_Char)0x0,  /* [5270] */
    (xdc_Char)0x4c,  /* [5271] */
    (xdc_Char)0x4d,  /* [5272] */
    (xdc_Char)0x5f,  /* [5273] */
    (xdc_Char)0x70,  /* [5274] */
    (xdc_Char)0x6f,  /* [5275] */
    (xdc_Char)0x73,  /* [5276] */
    (xdc_Char)0x74,  /* [5277] */
    (xdc_Char)0x3a,  /* [5278] */
    (xdc_Char)0x20,  /* [5279] */
    (xdc_Char)0x73,  /* [5280] */
    (xdc_Char)0x77,  /* [5281] */
    (xdc_Char)0x69,  /* [5282] */
    (xdc_Char)0x3a,  /* [5283] */
    (xdc_Char)0x20,  /* [5284] */
    (xdc_Char)0x30,  /* [5285] */
    (xdc_Char)0x78,  /* [5286] */
    (xdc_Char)0x25,  /* [5287] */
    (xdc_Char)0x78,  /* [5288] */
    (xdc_Char)0x2c,  /* [5289] */
    (xdc_Char)0x20,  /* [5290] */
    (xdc_Char)0x66,  /* [5291] */
    (xdc_Char)0x75,  /* [5292] */
    (xdc_Char)0x6e,  /* [5293] */
    (xdc_Char)0x63,  /* [5294] */
    (xdc_Char)0x3a,  /* [5295] */
    (xdc_Char)0x20,  /* [5296] */
    (xdc_Char)0x30,  /* [5297] */
    (xdc_Char)0x78,  /* [5298] */
    (xdc_Char)0x25,  /* [5299] */
    (xdc_Char)0x78,  /* [5300] */
    (xdc_Char)0x2c,  /* [5301] */
    (xdc_Char)0x20,  /* [5302] */
    (xdc_Char)0x70,  /* [5303] */
    (xdc_Char)0x72,  /* [5304] */
    (xdc_Char)0x69,  /* [5305] */
    (xdc_Char)0x3a,  /* [5306] */
    (xdc_Char)0x20,  /* [5307] */
    (xdc_Char)0x25,  /* [5308] */
    (xdc_Char)0x64,  /* [5309] */
    (xdc_Char)0x0,  /* [5310] */
    (xdc_Char)0x4c,  /* [5311] */
    (xdc_Char)0x4d,  /* [5312] */
    (xdc_Char)0x5f,  /* [5313] */
    (xdc_Char)0x73,  /* [5314] */
    (xdc_Char)0x77,  /* [5315] */
    (xdc_Char)0x69,  /* [5316] */
    (xdc_Char)0x74,  /* [5317] */
    (xdc_Char)0x63,  /* [5318] */
    (xdc_Char)0x68,  /* [5319] */
    (xdc_Char)0x3a,  /* [5320] */
    (xdc_Char)0x20,  /* [5321] */
    (xdc_Char)0x6f,  /* [5322] */
    (xdc_Char)0x6c,  /* [5323] */
    (xdc_Char)0x64,  /* [5324] */
    (xdc_Char)0x74,  /* [5325] */
    (xdc_Char)0x73,  /* [5326] */
    (xdc_Char)0x6b,  /* [5327] */
    (xdc_Char)0x3a,  /* [5328] */
    (xdc_Char)0x20,  /* [5329] */
    (xdc_Char)0x30,  /* [5330] */
    (xdc_Char)0x78,  /* [5331] */
    (xdc_Char)0x25,  /* [5332] */
    (xdc_Char)0x78,  /* [5333] */
    (xdc_Char)0x2c,  /* [5334] */
    (xdc_Char)0x20,  /* [5335] */
    (xdc_Char)0x6f,  /* [5336] */
    (xdc_Char)0x6c,  /* [5337] */
    (xdc_Char)0x64,  /* [5338] */
    (xdc_Char)0x66,  /* [5339] */
    (xdc_Char)0x75,  /* [5340] */
    (xdc_Char)0x6e,  /* [5341] */
    (xdc_Char)0x63,  /* [5342] */
    (xdc_Char)0x3a,  /* [5343] */
    (xdc_Char)0x20,  /* [5344] */
    (xdc_Char)0x30,  /* [5345] */
    (xdc_Char)0x78,  /* [5346] */
    (xdc_Char)0x25,  /* [5347] */
    (xdc_Char)0x78,  /* [5348] */
    (xdc_Char)0x2c,  /* [5349] */
    (xdc_Char)0x20,  /* [5350] */
    (xdc_Char)0x6e,  /* [5351] */
    (xdc_Char)0x65,  /* [5352] */
    (xdc_Char)0x77,  /* [5353] */
    (xdc_Char)0x74,  /* [5354] */
    (xdc_Char)0x73,  /* [5355] */
    (xdc_Char)0x6b,  /* [5356] */
    (xdc_Char)0x3a,  /* [5357] */
    (xdc_Char)0x20,  /* [5358] */
    (xdc_Char)0x30,  /* [5359] */
    (xdc_Char)0x78,  /* [5360] */
    (xdc_Char)0x25,  /* [5361] */
    (xdc_Char)0x78,  /* [5362] */
    (xdc_Char)0x2c,  /* [5363] */
    (xdc_Char)0x20,  /* [5364] */
    (xdc_Char)0x6e,  /* [5365] */
    (xdc_Char)0x65,  /* [5366] */
    (xdc_Char)0x77,  /* [5367] */
    (xdc_Char)0x66,  /* [5368] */
    (xdc_Char)0x75,  /* [5369] */
    (xdc_Char)0x6e,  /* [5370] */
    (xdc_Char)0x63,  /* [5371] */
    (xdc_Char)0x3a,  /* [5372] */
    (xdc_Char)0x20,  /* [5373] */
    (xdc_Char)0x30,  /* [5374] */
    (xdc_Char)0x78,  /* [5375] */
    (xdc_Char)0x25,  /* [5376] */
    (xdc_Char)0x78,  /* [5377] */
    (xdc_Char)0x0,  /* [5378] */
    (xdc_Char)0x4c,  /* [5379] */
    (xdc_Char)0x4d,  /* [5380] */
    (xdc_Char)0x5f,  /* [5381] */
    (xdc_Char)0x73,  /* [5382] */
    (xdc_Char)0x6c,  /* [5383] */
    (xdc_Char)0x65,  /* [5384] */
    (xdc_Char)0x65,  /* [5385] */
    (xdc_Char)0x70,  /* [5386] */
    (xdc_Char)0x3a,  /* [5387] */
    (xdc_Char)0x20,  /* [5388] */
    (xdc_Char)0x74,  /* [5389] */
    (xdc_Char)0x73,  /* [5390] */
    (xdc_Char)0x6b,  /* [5391] */
    (xdc_Char)0x3a,  /* [5392] */
    (xdc_Char)0x20,  /* [5393] */
    (xdc_Char)0x30,  /* [5394] */
    (xdc_Char)0x78,  /* [5395] */
    (xdc_Char)0x25,  /* [5396] */
    (xdc_Char)0x78,  /* [5397] */
    (xdc_Char)0x2c,  /* [5398] */
    (xdc_Char)0x20,  /* [5399] */
    (xdc_Char)0x66,  /* [5400] */
    (xdc_Char)0x75,  /* [5401] */
    (xdc_Char)0x6e,  /* [5402] */
    (xdc_Char)0x63,  /* [5403] */
    (xdc_Char)0x3a,  /* [5404] */
    (xdc_Char)0x20,  /* [5405] */
    (xdc_Char)0x30,  /* [5406] */
    (xdc_Char)0x78,  /* [5407] */
    (xdc_Char)0x25,  /* [5408] */
    (xdc_Char)0x78,  /* [5409] */
    (xdc_Char)0x2c,  /* [5410] */
    (xdc_Char)0x20,  /* [5411] */
    (xdc_Char)0x74,  /* [5412] */
    (xdc_Char)0x69,  /* [5413] */
    (xdc_Char)0x6d,  /* [5414] */
    (xdc_Char)0x65,  /* [5415] */
    (xdc_Char)0x6f,  /* [5416] */
    (xdc_Char)0x75,  /* [5417] */
    (xdc_Char)0x74,  /* [5418] */
    (xdc_Char)0x3a,  /* [5419] */
    (xdc_Char)0x20,  /* [5420] */
    (xdc_Char)0x25,  /* [5421] */
    (xdc_Char)0x64,  /* [5422] */
    (xdc_Char)0x0,  /* [5423] */
    (xdc_Char)0x4c,  /* [5424] */
    (xdc_Char)0x44,  /* [5425] */
    (xdc_Char)0x5f,  /* [5426] */
    (xdc_Char)0x72,  /* [5427] */
    (xdc_Char)0x65,  /* [5428] */
    (xdc_Char)0x61,  /* [5429] */
    (xdc_Char)0x64,  /* [5430] */
    (xdc_Char)0x79,  /* [5431] */
    (xdc_Char)0x3a,  /* [5432] */
    (xdc_Char)0x20,  /* [5433] */
    (xdc_Char)0x74,  /* [5434] */
    (xdc_Char)0x73,  /* [5435] */
    (xdc_Char)0x6b,  /* [5436] */
    (xdc_Char)0x3a,  /* [5437] */
    (xdc_Char)0x20,  /* [5438] */
    (xdc_Char)0x30,  /* [5439] */
    (xdc_Char)0x78,  /* [5440] */
    (xdc_Char)0x25,  /* [5441] */
    (xdc_Char)0x78,  /* [5442] */
    (xdc_Char)0x2c,  /* [5443] */
    (xdc_Char)0x20,  /* [5444] */
    (xdc_Char)0x66,  /* [5445] */
    (xdc_Char)0x75,  /* [5446] */
    (xdc_Char)0x6e,  /* [5447] */
    (xdc_Char)0x63,  /* [5448] */
    (xdc_Char)0x3a,  /* [5449] */
    (xdc_Char)0x20,  /* [5450] */
    (xdc_Char)0x30,  /* [5451] */
    (xdc_Char)0x78,  /* [5452] */
    (xdc_Char)0x25,  /* [5453] */
    (xdc_Char)0x78,  /* [5454] */
    (xdc_Char)0x2c,  /* [5455] */
    (xdc_Char)0x20,  /* [5456] */
    (xdc_Char)0x70,  /* [5457] */
    (xdc_Char)0x72,  /* [5458] */
    (xdc_Char)0x69,  /* [5459] */
    (xdc_Char)0x3a,  /* [5460] */
    (xdc_Char)0x20,  /* [5461] */
    (xdc_Char)0x25,  /* [5462] */
    (xdc_Char)0x64,  /* [5463] */
    (xdc_Char)0x0,  /* [5464] */
    (xdc_Char)0x4c,  /* [5465] */
    (xdc_Char)0x44,  /* [5466] */
    (xdc_Char)0x5f,  /* [5467] */
    (xdc_Char)0x62,  /* [5468] */
    (xdc_Char)0x6c,  /* [5469] */
    (xdc_Char)0x6f,  /* [5470] */
    (xdc_Char)0x63,  /* [5471] */
    (xdc_Char)0x6b,  /* [5472] */
    (xdc_Char)0x3a,  /* [5473] */
    (xdc_Char)0x20,  /* [5474] */
    (xdc_Char)0x74,  /* [5475] */
    (xdc_Char)0x73,  /* [5476] */
    (xdc_Char)0x6b,  /* [5477] */
    (xdc_Char)0x3a,  /* [5478] */
    (xdc_Char)0x20,  /* [5479] */
    (xdc_Char)0x30,  /* [5480] */
    (xdc_Char)0x78,  /* [5481] */
    (xdc_Char)0x25,  /* [5482] */
    (xdc_Char)0x78,  /* [5483] */
    (xdc_Char)0x2c,  /* [5484] */
    (xdc_Char)0x20,  /* [5485] */
    (xdc_Char)0x66,  /* [5486] */
    (xdc_Char)0x75,  /* [5487] */
    (xdc_Char)0x6e,  /* [5488] */
    (xdc_Char)0x63,  /* [5489] */
    (xdc_Char)0x3a,  /* [5490] */
    (xdc_Char)0x20,  /* [5491] */
    (xdc_Char)0x30,  /* [5492] */
    (xdc_Char)0x78,  /* [5493] */
    (xdc_Char)0x25,  /* [5494] */
    (xdc_Char)0x78,  /* [5495] */
    (xdc_Char)0x0,  /* [5496] */
    (xdc_Char)0x4c,  /* [5497] */
    (xdc_Char)0x4d,  /* [5498] */
    (xdc_Char)0x5f,  /* [5499] */
    (xdc_Char)0x79,  /* [5500] */
    (xdc_Char)0x69,  /* [5501] */
    (xdc_Char)0x65,  /* [5502] */
    (xdc_Char)0x6c,  /* [5503] */
    (xdc_Char)0x64,  /* [5504] */
    (xdc_Char)0x3a,  /* [5505] */
    (xdc_Char)0x20,  /* [5506] */
    (xdc_Char)0x74,  /* [5507] */
    (xdc_Char)0x73,  /* [5508] */
    (xdc_Char)0x6b,  /* [5509] */
    (xdc_Char)0x3a,  /* [5510] */
    (xdc_Char)0x20,  /* [5511] */
    (xdc_Char)0x30,  /* [5512] */
    (xdc_Char)0x78,  /* [5513] */
    (xdc_Char)0x25,  /* [5514] */
    (xdc_Char)0x78,  /* [5515] */
    (xdc_Char)0x2c,  /* [5516] */
    (xdc_Char)0x20,  /* [5517] */
    (xdc_Char)0x66,  /* [5518] */
    (xdc_Char)0x75,  /* [5519] */
    (xdc_Char)0x6e,  /* [5520] */
    (xdc_Char)0x63,  /* [5521] */
    (xdc_Char)0x3a,  /* [5522] */
    (xdc_Char)0x20,  /* [5523] */
    (xdc_Char)0x30,  /* [5524] */
    (xdc_Char)0x78,  /* [5525] */
    (xdc_Char)0x25,  /* [5526] */
    (xdc_Char)0x78,  /* [5527] */
    (xdc_Char)0x2c,  /* [5528] */
    (xdc_Char)0x20,  /* [5529] */
    (xdc_Char)0x63,  /* [5530] */
    (xdc_Char)0x75,  /* [5531] */
    (xdc_Char)0x72,  /* [5532] */
    (xdc_Char)0x72,  /* [5533] */
    (xdc_Char)0x54,  /* [5534] */
    (xdc_Char)0x68,  /* [5535] */
    (xdc_Char)0x72,  /* [5536] */
    (xdc_Char)0x65,  /* [5537] */
    (xdc_Char)0x61,  /* [5538] */
    (xdc_Char)0x64,  /* [5539] */
    (xdc_Char)0x3a,  /* [5540] */
    (xdc_Char)0x20,  /* [5541] */
    (xdc_Char)0x25,  /* [5542] */
    (xdc_Char)0x64,  /* [5543] */
    (xdc_Char)0x0,  /* [5544] */
    (xdc_Char)0x4c,  /* [5545] */
    (xdc_Char)0x4d,  /* [5546] */
    (xdc_Char)0x5f,  /* [5547] */
    (xdc_Char)0x73,  /* [5548] */
    (xdc_Char)0x65,  /* [5549] */
    (xdc_Char)0x74,  /* [5550] */
    (xdc_Char)0x50,  /* [5551] */
    (xdc_Char)0x72,  /* [5552] */
    (xdc_Char)0x69,  /* [5553] */
    (xdc_Char)0x3a,  /* [5554] */
    (xdc_Char)0x20,  /* [5555] */
    (xdc_Char)0x74,  /* [5556] */
    (xdc_Char)0x73,  /* [5557] */
    (xdc_Char)0x6b,  /* [5558] */
    (xdc_Char)0x3a,  /* [5559] */
    (xdc_Char)0x20,  /* [5560] */
    (xdc_Char)0x30,  /* [5561] */
    (xdc_Char)0x78,  /* [5562] */
    (xdc_Char)0x25,  /* [5563] */
    (xdc_Char)0x78,  /* [5564] */
    (xdc_Char)0x2c,  /* [5565] */
    (xdc_Char)0x20,  /* [5566] */
    (xdc_Char)0x66,  /* [5567] */
    (xdc_Char)0x75,  /* [5568] */
    (xdc_Char)0x6e,  /* [5569] */
    (xdc_Char)0x63,  /* [5570] */
    (xdc_Char)0x3a,  /* [5571] */
    (xdc_Char)0x20,  /* [5572] */
    (xdc_Char)0x30,  /* [5573] */
    (xdc_Char)0x78,  /* [5574] */
    (xdc_Char)0x25,  /* [5575] */
    (xdc_Char)0x78,  /* [5576] */
    (xdc_Char)0x2c,  /* [5577] */
    (xdc_Char)0x20,  /* [5578] */
    (xdc_Char)0x6f,  /* [5579] */
    (xdc_Char)0x6c,  /* [5580] */
    (xdc_Char)0x64,  /* [5581] */
    (xdc_Char)0x50,  /* [5582] */
    (xdc_Char)0x72,  /* [5583] */
    (xdc_Char)0x69,  /* [5584] */
    (xdc_Char)0x3a,  /* [5585] */
    (xdc_Char)0x20,  /* [5586] */
    (xdc_Char)0x25,  /* [5587] */
    (xdc_Char)0x64,  /* [5588] */
    (xdc_Char)0x2c,  /* [5589] */
    (xdc_Char)0x20,  /* [5590] */
    (xdc_Char)0x6e,  /* [5591] */
    (xdc_Char)0x65,  /* [5592] */
    (xdc_Char)0x77,  /* [5593] */
    (xdc_Char)0x50,  /* [5594] */
    (xdc_Char)0x72,  /* [5595] */
    (xdc_Char)0x69,  /* [5596] */
    (xdc_Char)0x20,  /* [5597] */
    (xdc_Char)0x25,  /* [5598] */
    (xdc_Char)0x64,  /* [5599] */
    (xdc_Char)0x0,  /* [5600] */
    (xdc_Char)0x4c,  /* [5601] */
    (xdc_Char)0x44,  /* [5602] */
    (xdc_Char)0x5f,  /* [5603] */
    (xdc_Char)0x65,  /* [5604] */
    (xdc_Char)0x78,  /* [5605] */
    (xdc_Char)0x69,  /* [5606] */
    (xdc_Char)0x74,  /* [5607] */
    (xdc_Char)0x3a,  /* [5608] */
    (xdc_Char)0x20,  /* [5609] */
    (xdc_Char)0x74,  /* [5610] */
    (xdc_Char)0x73,  /* [5611] */
    (xdc_Char)0x6b,  /* [5612] */
    (xdc_Char)0x3a,  /* [5613] */
    (xdc_Char)0x20,  /* [5614] */
    (xdc_Char)0x30,  /* [5615] */
    (xdc_Char)0x78,  /* [5616] */
    (xdc_Char)0x25,  /* [5617] */
    (xdc_Char)0x78,  /* [5618] */
    (xdc_Char)0x2c,  /* [5619] */
    (xdc_Char)0x20,  /* [5620] */
    (xdc_Char)0x66,  /* [5621] */
    (xdc_Char)0x75,  /* [5622] */
    (xdc_Char)0x6e,  /* [5623] */
    (xdc_Char)0x63,  /* [5624] */
    (xdc_Char)0x3a,  /* [5625] */
    (xdc_Char)0x20,  /* [5626] */
    (xdc_Char)0x30,  /* [5627] */
    (xdc_Char)0x78,  /* [5628] */
    (xdc_Char)0x25,  /* [5629] */
    (xdc_Char)0x78,  /* [5630] */
    (xdc_Char)0x0,  /* [5631] */
    (xdc_Char)0x4c,  /* [5632] */
    (xdc_Char)0x4d,  /* [5633] */
    (xdc_Char)0x5f,  /* [5634] */
    (xdc_Char)0x73,  /* [5635] */
    (xdc_Char)0x65,  /* [5636] */
    (xdc_Char)0x74,  /* [5637] */
    (xdc_Char)0x41,  /* [5638] */
    (xdc_Char)0x66,  /* [5639] */
    (xdc_Char)0x66,  /* [5640] */
    (xdc_Char)0x69,  /* [5641] */
    (xdc_Char)0x6e,  /* [5642] */
    (xdc_Char)0x69,  /* [5643] */
    (xdc_Char)0x74,  /* [5644] */
    (xdc_Char)0x79,  /* [5645] */
    (xdc_Char)0x3a,  /* [5646] */
    (xdc_Char)0x20,  /* [5647] */
    (xdc_Char)0x74,  /* [5648] */
    (xdc_Char)0x73,  /* [5649] */
    (xdc_Char)0x6b,  /* [5650] */
    (xdc_Char)0x3a,  /* [5651] */
    (xdc_Char)0x20,  /* [5652] */
    (xdc_Char)0x30,  /* [5653] */
    (xdc_Char)0x78,  /* [5654] */
    (xdc_Char)0x25,  /* [5655] */
    (xdc_Char)0x78,  /* [5656] */
    (xdc_Char)0x2c,  /* [5657] */
    (xdc_Char)0x20,  /* [5658] */
    (xdc_Char)0x66,  /* [5659] */
    (xdc_Char)0x75,  /* [5660] */
    (xdc_Char)0x6e,  /* [5661] */
    (xdc_Char)0x63,  /* [5662] */
    (xdc_Char)0x3a,  /* [5663] */
    (xdc_Char)0x20,  /* [5664] */
    (xdc_Char)0x30,  /* [5665] */
    (xdc_Char)0x78,  /* [5666] */
    (xdc_Char)0x25,  /* [5667] */
    (xdc_Char)0x78,  /* [5668] */
    (xdc_Char)0x2c,  /* [5669] */
    (xdc_Char)0x20,  /* [5670] */
    (xdc_Char)0x6f,  /* [5671] */
    (xdc_Char)0x6c,  /* [5672] */
    (xdc_Char)0x64,  /* [5673] */
    (xdc_Char)0x43,  /* [5674] */
    (xdc_Char)0x6f,  /* [5675] */
    (xdc_Char)0x72,  /* [5676] */
    (xdc_Char)0x65,  /* [5677] */
    (xdc_Char)0x3a,  /* [5678] */
    (xdc_Char)0x20,  /* [5679] */
    (xdc_Char)0x25,  /* [5680] */
    (xdc_Char)0x64,  /* [5681] */
    (xdc_Char)0x2c,  /* [5682] */
    (xdc_Char)0x20,  /* [5683] */
    (xdc_Char)0x6f,  /* [5684] */
    (xdc_Char)0x6c,  /* [5685] */
    (xdc_Char)0x64,  /* [5686] */
    (xdc_Char)0x41,  /* [5687] */
    (xdc_Char)0x66,  /* [5688] */
    (xdc_Char)0x66,  /* [5689] */
    (xdc_Char)0x69,  /* [5690] */
    (xdc_Char)0x6e,  /* [5691] */
    (xdc_Char)0x69,  /* [5692] */
    (xdc_Char)0x74,  /* [5693] */
    (xdc_Char)0x79,  /* [5694] */
    (xdc_Char)0x20,  /* [5695] */
    (xdc_Char)0x25,  /* [5696] */
    (xdc_Char)0x64,  /* [5697] */
    (xdc_Char)0x2c,  /* [5698] */
    (xdc_Char)0x20,  /* [5699] */
    (xdc_Char)0x6e,  /* [5700] */
    (xdc_Char)0x65,  /* [5701] */
    (xdc_Char)0x77,  /* [5702] */
    (xdc_Char)0x41,  /* [5703] */
    (xdc_Char)0x66,  /* [5704] */
    (xdc_Char)0x66,  /* [5705] */
    (xdc_Char)0x69,  /* [5706] */
    (xdc_Char)0x6e,  /* [5707] */
    (xdc_Char)0x69,  /* [5708] */
    (xdc_Char)0x74,  /* [5709] */
    (xdc_Char)0x79,  /* [5710] */
    (xdc_Char)0x20,  /* [5711] */
    (xdc_Char)0x25,  /* [5712] */
    (xdc_Char)0x64,  /* [5713] */
    (xdc_Char)0x0,  /* [5714] */
    (xdc_Char)0x4c,  /* [5715] */
    (xdc_Char)0x44,  /* [5716] */
    (xdc_Char)0x5f,  /* [5717] */
    (xdc_Char)0x73,  /* [5718] */
    (xdc_Char)0x63,  /* [5719] */
    (xdc_Char)0x68,  /* [5720] */
    (xdc_Char)0x65,  /* [5721] */
    (xdc_Char)0x64,  /* [5722] */
    (xdc_Char)0x75,  /* [5723] */
    (xdc_Char)0x6c,  /* [5724] */
    (xdc_Char)0x65,  /* [5725] */
    (xdc_Char)0x3a,  /* [5726] */
    (xdc_Char)0x20,  /* [5727] */
    (xdc_Char)0x63,  /* [5728] */
    (xdc_Char)0x6f,  /* [5729] */
    (xdc_Char)0x72,  /* [5730] */
    (xdc_Char)0x65,  /* [5731] */
    (xdc_Char)0x49,  /* [5732] */
    (xdc_Char)0x64,  /* [5733] */
    (xdc_Char)0x3a,  /* [5734] */
    (xdc_Char)0x20,  /* [5735] */
    (xdc_Char)0x25,  /* [5736] */
    (xdc_Char)0x64,  /* [5737] */
    (xdc_Char)0x2c,  /* [5738] */
    (xdc_Char)0x20,  /* [5739] */
    (xdc_Char)0x77,  /* [5740] */
    (xdc_Char)0x6f,  /* [5741] */
    (xdc_Char)0x72,  /* [5742] */
    (xdc_Char)0x6b,  /* [5743] */
    (xdc_Char)0x46,  /* [5744] */
    (xdc_Char)0x6c,  /* [5745] */
    (xdc_Char)0x61,  /* [5746] */
    (xdc_Char)0x67,  /* [5747] */
    (xdc_Char)0x3a,  /* [5748] */
    (xdc_Char)0x20,  /* [5749] */
    (xdc_Char)0x25,  /* [5750] */
    (xdc_Char)0x64,  /* [5751] */
    (xdc_Char)0x2c,  /* [5752] */
    (xdc_Char)0x20,  /* [5753] */
    (xdc_Char)0x63,  /* [5754] */
    (xdc_Char)0x75,  /* [5755] */
    (xdc_Char)0x72,  /* [5756] */
    (xdc_Char)0x53,  /* [5757] */
    (xdc_Char)0x65,  /* [5758] */
    (xdc_Char)0x74,  /* [5759] */
    (xdc_Char)0x4c,  /* [5760] */
    (xdc_Char)0x6f,  /* [5761] */
    (xdc_Char)0x63,  /* [5762] */
    (xdc_Char)0x61,  /* [5763] */
    (xdc_Char)0x6c,  /* [5764] */
    (xdc_Char)0x3a,  /* [5765] */
    (xdc_Char)0x20,  /* [5766] */
    (xdc_Char)0x25,  /* [5767] */
    (xdc_Char)0x64,  /* [5768] */
    (xdc_Char)0x2c,  /* [5769] */
    (xdc_Char)0x20,  /* [5770] */
    (xdc_Char)0x63,  /* [5771] */
    (xdc_Char)0x75,  /* [5772] */
    (xdc_Char)0x72,  /* [5773] */
    (xdc_Char)0x53,  /* [5774] */
    (xdc_Char)0x65,  /* [5775] */
    (xdc_Char)0x74,  /* [5776] */
    (xdc_Char)0x58,  /* [5777] */
    (xdc_Char)0x3a,  /* [5778] */
    (xdc_Char)0x20,  /* [5779] */
    (xdc_Char)0x25,  /* [5780] */
    (xdc_Char)0x64,  /* [5781] */
    (xdc_Char)0x2c,  /* [5782] */
    (xdc_Char)0x20,  /* [5783] */
    (xdc_Char)0x63,  /* [5784] */
    (xdc_Char)0x75,  /* [5785] */
    (xdc_Char)0x72,  /* [5786] */
    (xdc_Char)0x4d,  /* [5787] */
    (xdc_Char)0x61,  /* [5788] */
    (xdc_Char)0x73,  /* [5789] */
    (xdc_Char)0x6b,  /* [5790] */
    (xdc_Char)0x4c,  /* [5791] */
    (xdc_Char)0x6f,  /* [5792] */
    (xdc_Char)0x63,  /* [5793] */
    (xdc_Char)0x61,  /* [5794] */
    (xdc_Char)0x6c,  /* [5795] */
    (xdc_Char)0x3a,  /* [5796] */
    (xdc_Char)0x20,  /* [5797] */
    (xdc_Char)0x25,  /* [5798] */
    (xdc_Char)0x64,  /* [5799] */
    (xdc_Char)0x0,  /* [5800] */
    (xdc_Char)0x4c,  /* [5801] */
    (xdc_Char)0x44,  /* [5802] */
    (xdc_Char)0x5f,  /* [5803] */
    (xdc_Char)0x6e,  /* [5804] */
    (xdc_Char)0x6f,  /* [5805] */
    (xdc_Char)0x57,  /* [5806] */
    (xdc_Char)0x6f,  /* [5807] */
    (xdc_Char)0x72,  /* [5808] */
    (xdc_Char)0x6b,  /* [5809] */
    (xdc_Char)0x3a,  /* [5810] */
    (xdc_Char)0x20,  /* [5811] */
    (xdc_Char)0x63,  /* [5812] */
    (xdc_Char)0x6f,  /* [5813] */
    (xdc_Char)0x72,  /* [5814] */
    (xdc_Char)0x65,  /* [5815] */
    (xdc_Char)0x49,  /* [5816] */
    (xdc_Char)0x64,  /* [5817] */
    (xdc_Char)0x3a,  /* [5818] */
    (xdc_Char)0x20,  /* [5819] */
    (xdc_Char)0x25,  /* [5820] */
    (xdc_Char)0x64,  /* [5821] */
    (xdc_Char)0x2c,  /* [5822] */
    (xdc_Char)0x20,  /* [5823] */
    (xdc_Char)0x63,  /* [5824] */
    (xdc_Char)0x75,  /* [5825] */
    (xdc_Char)0x72,  /* [5826] */
    (xdc_Char)0x53,  /* [5827] */
    (xdc_Char)0x65,  /* [5828] */
    (xdc_Char)0x74,  /* [5829] */
    (xdc_Char)0x4c,  /* [5830] */
    (xdc_Char)0x6f,  /* [5831] */
    (xdc_Char)0x63,  /* [5832] */
    (xdc_Char)0x61,  /* [5833] */
    (xdc_Char)0x6c,  /* [5834] */
    (xdc_Char)0x3a,  /* [5835] */
    (xdc_Char)0x20,  /* [5836] */
    (xdc_Char)0x25,  /* [5837] */
    (xdc_Char)0x64,  /* [5838] */
    (xdc_Char)0x2c,  /* [5839] */
    (xdc_Char)0x20,  /* [5840] */
    (xdc_Char)0x63,  /* [5841] */
    (xdc_Char)0x75,  /* [5842] */
    (xdc_Char)0x72,  /* [5843] */
    (xdc_Char)0x53,  /* [5844] */
    (xdc_Char)0x65,  /* [5845] */
    (xdc_Char)0x74,  /* [5846] */
    (xdc_Char)0x58,  /* [5847] */
    (xdc_Char)0x3a,  /* [5848] */
    (xdc_Char)0x20,  /* [5849] */
    (xdc_Char)0x25,  /* [5850] */
    (xdc_Char)0x64,  /* [5851] */
    (xdc_Char)0x2c,  /* [5852] */
    (xdc_Char)0x20,  /* [5853] */
    (xdc_Char)0x63,  /* [5854] */
    (xdc_Char)0x75,  /* [5855] */
    (xdc_Char)0x72,  /* [5856] */
    (xdc_Char)0x4d,  /* [5857] */
    (xdc_Char)0x61,  /* [5858] */
    (xdc_Char)0x73,  /* [5859] */
    (xdc_Char)0x6b,  /* [5860] */
    (xdc_Char)0x4c,  /* [5861] */
    (xdc_Char)0x6f,  /* [5862] */
    (xdc_Char)0x63,  /* [5863] */
    (xdc_Char)0x61,  /* [5864] */
    (xdc_Char)0x6c,  /* [5865] */
    (xdc_Char)0x3a,  /* [5866] */
    (xdc_Char)0x20,  /* [5867] */
    (xdc_Char)0x25,  /* [5868] */
    (xdc_Char)0x64,  /* [5869] */
    (xdc_Char)0x0,  /* [5870] */
    (xdc_Char)0x4c,  /* [5871] */
    (xdc_Char)0x4d,  /* [5872] */
    (xdc_Char)0x5f,  /* [5873] */
    (xdc_Char)0x62,  /* [5874] */
    (xdc_Char)0x65,  /* [5875] */
    (xdc_Char)0x67,  /* [5876] */
    (xdc_Char)0x69,  /* [5877] */
    (xdc_Char)0x6e,  /* [5878] */
    (xdc_Char)0x3a,  /* [5879] */
    (xdc_Char)0x20,  /* [5880] */
    (xdc_Char)0x68,  /* [5881] */
    (xdc_Char)0x77,  /* [5882] */
    (xdc_Char)0x69,  /* [5883] */
    (xdc_Char)0x3a,  /* [5884] */
    (xdc_Char)0x20,  /* [5885] */
    (xdc_Char)0x30,  /* [5886] */
    (xdc_Char)0x78,  /* [5887] */
    (xdc_Char)0x25,  /* [5888] */
    (xdc_Char)0x78,  /* [5889] */
    (xdc_Char)0x2c,  /* [5890] */
    (xdc_Char)0x20,  /* [5891] */
    (xdc_Char)0x66,  /* [5892] */
    (xdc_Char)0x75,  /* [5893] */
    (xdc_Char)0x6e,  /* [5894] */
    (xdc_Char)0x63,  /* [5895] */
    (xdc_Char)0x3a,  /* [5896] */
    (xdc_Char)0x20,  /* [5897] */
    (xdc_Char)0x30,  /* [5898] */
    (xdc_Char)0x78,  /* [5899] */
    (xdc_Char)0x25,  /* [5900] */
    (xdc_Char)0x78,  /* [5901] */
    (xdc_Char)0x2c,  /* [5902] */
    (xdc_Char)0x20,  /* [5903] */
    (xdc_Char)0x70,  /* [5904] */
    (xdc_Char)0x72,  /* [5905] */
    (xdc_Char)0x65,  /* [5906] */
    (xdc_Char)0x54,  /* [5907] */
    (xdc_Char)0x68,  /* [5908] */
    (xdc_Char)0x72,  /* [5909] */
    (xdc_Char)0x65,  /* [5910] */
    (xdc_Char)0x61,  /* [5911] */
    (xdc_Char)0x64,  /* [5912] */
    (xdc_Char)0x3a,  /* [5913] */
    (xdc_Char)0x20,  /* [5914] */
    (xdc_Char)0x25,  /* [5915] */
    (xdc_Char)0x64,  /* [5916] */
    (xdc_Char)0x2c,  /* [5917] */
    (xdc_Char)0x20,  /* [5918] */
    (xdc_Char)0x69,  /* [5919] */
    (xdc_Char)0x6e,  /* [5920] */
    (xdc_Char)0x74,  /* [5921] */
    (xdc_Char)0x4e,  /* [5922] */
    (xdc_Char)0x75,  /* [5923] */
    (xdc_Char)0x6d,  /* [5924] */
    (xdc_Char)0x3a,  /* [5925] */
    (xdc_Char)0x20,  /* [5926] */
    (xdc_Char)0x25,  /* [5927] */
    (xdc_Char)0x64,  /* [5928] */
    (xdc_Char)0x2c,  /* [5929] */
    (xdc_Char)0x20,  /* [5930] */
    (xdc_Char)0x69,  /* [5931] */
    (xdc_Char)0x72,  /* [5932] */
    (xdc_Char)0x70,  /* [5933] */
    (xdc_Char)0x3a,  /* [5934] */
    (xdc_Char)0x20,  /* [5935] */
    (xdc_Char)0x30,  /* [5936] */
    (xdc_Char)0x78,  /* [5937] */
    (xdc_Char)0x25,  /* [5938] */
    (xdc_Char)0x78,  /* [5939] */
    (xdc_Char)0x0,  /* [5940] */
    (xdc_Char)0x4c,  /* [5941] */
    (xdc_Char)0x44,  /* [5942] */
    (xdc_Char)0x5f,  /* [5943] */
    (xdc_Char)0x65,  /* [5944] */
    (xdc_Char)0x6e,  /* [5945] */
    (xdc_Char)0x64,  /* [5946] */
    (xdc_Char)0x3a,  /* [5947] */
    (xdc_Char)0x20,  /* [5948] */
    (xdc_Char)0x68,  /* [5949] */
    (xdc_Char)0x77,  /* [5950] */
    (xdc_Char)0x69,  /* [5951] */
    (xdc_Char)0x3a,  /* [5952] */
    (xdc_Char)0x20,  /* [5953] */
    (xdc_Char)0x30,  /* [5954] */
    (xdc_Char)0x78,  /* [5955] */
    (xdc_Char)0x25,  /* [5956] */
    (xdc_Char)0x78,  /* [5957] */
    (xdc_Char)0x0,  /* [5958] */
    (xdc_Char)0x53,  /* [5959] */
    (xdc_Char)0x74,  /* [5960] */
    (xdc_Char)0x61,  /* [5961] */
    (xdc_Char)0x72,  /* [5962] */
    (xdc_Char)0x74,  /* [5963] */
    (xdc_Char)0x3a,  /* [5964] */
    (xdc_Char)0x20,  /* [5965] */
    (xdc_Char)0x25,  /* [5966] */
    (xdc_Char)0x24,  /* [5967] */
    (xdc_Char)0x53,  /* [5968] */
    (xdc_Char)0x20,  /* [5969] */
    (xdc_Char)0x0,  /* [5970] */
    (xdc_Char)0x53,  /* [5971] */
    (xdc_Char)0x74,  /* [5972] */
    (xdc_Char)0x6f,  /* [5973] */
    (xdc_Char)0x70,  /* [5974] */
    (xdc_Char)0x3a,  /* [5975] */
    (xdc_Char)0x20,  /* [5976] */
    (xdc_Char)0x25,  /* [5977] */
    (xdc_Char)0x24,  /* [5978] */
    (xdc_Char)0x53,  /* [5979] */
    (xdc_Char)0x20,  /* [5980] */
    (xdc_Char)0x0,  /* [5981] */
    (xdc_Char)0x53,  /* [5982] */
    (xdc_Char)0x74,  /* [5983] */
    (xdc_Char)0x61,  /* [5984] */
    (xdc_Char)0x72,  /* [5985] */
    (xdc_Char)0x74,  /* [5986] */
    (xdc_Char)0x49,  /* [5987] */
    (xdc_Char)0x6e,  /* [5988] */
    (xdc_Char)0x73,  /* [5989] */
    (xdc_Char)0x74,  /* [5990] */
    (xdc_Char)0x61,  /* [5991] */
    (xdc_Char)0x6e,  /* [5992] */
    (xdc_Char)0x63,  /* [5993] */
    (xdc_Char)0x65,  /* [5994] */
    (xdc_Char)0x3a,  /* [5995] */
    (xdc_Char)0x20,  /* [5996] */
    (xdc_Char)0x25,  /* [5997] */
    (xdc_Char)0x24,  /* [5998] */
    (xdc_Char)0x53,  /* [5999] */
    (xdc_Char)0x20,  /* [6000] */
    (xdc_Char)0x0,  /* [6001] */
    (xdc_Char)0x53,  /* [6002] */
    (xdc_Char)0x74,  /* [6003] */
    (xdc_Char)0x6f,  /* [6004] */
    (xdc_Char)0x70,  /* [6005] */
    (xdc_Char)0x49,  /* [6006] */
    (xdc_Char)0x6e,  /* [6007] */
    (xdc_Char)0x73,  /* [6008] */
    (xdc_Char)0x74,  /* [6009] */
    (xdc_Char)0x61,  /* [6010] */
    (xdc_Char)0x6e,  /* [6011] */
    (xdc_Char)0x63,  /* [6012] */
    (xdc_Char)0x65,  /* [6013] */
    (xdc_Char)0x3a,  /* [6014] */
    (xdc_Char)0x20,  /* [6015] */
    (xdc_Char)0x25,  /* [6016] */
    (xdc_Char)0x24,  /* [6017] */
    (xdc_Char)0x53,  /* [6018] */
    (xdc_Char)0x20,  /* [6019] */
    (xdc_Char)0x0,  /* [6020] */
    (xdc_Char)0x53,  /* [6021] */
    (xdc_Char)0x74,  /* [6022] */
    (xdc_Char)0x61,  /* [6023] */
    (xdc_Char)0x72,  /* [6024] */
    (xdc_Char)0x74,  /* [6025] */
    (xdc_Char)0x49,  /* [6026] */
    (xdc_Char)0x6e,  /* [6027] */
    (xdc_Char)0x73,  /* [6028] */
    (xdc_Char)0x74,  /* [6029] */
    (xdc_Char)0x61,  /* [6030] */
    (xdc_Char)0x6e,  /* [6031] */
    (xdc_Char)0x63,  /* [6032] */
    (xdc_Char)0x65,  /* [6033] */
    (xdc_Char)0x57,  /* [6034] */
    (xdc_Char)0x69,  /* [6035] */
    (xdc_Char)0x74,  /* [6036] */
    (xdc_Char)0x68,  /* [6037] */
    (xdc_Char)0x41,  /* [6038] */
    (xdc_Char)0x64,  /* [6039] */
    (xdc_Char)0x72,  /* [6040] */
    (xdc_Char)0x73,  /* [6041] */
    (xdc_Char)0x3a,  /* [6042] */
    (xdc_Char)0x20,  /* [6043] */
    (xdc_Char)0x25,  /* [6044] */
    (xdc_Char)0x24,  /* [6045] */
    (xdc_Char)0x53,  /* [6046] */
    (xdc_Char)0x0,  /* [6047] */
    (xdc_Char)0x53,  /* [6048] */
    (xdc_Char)0x74,  /* [6049] */
    (xdc_Char)0x6f,  /* [6050] */
    (xdc_Char)0x70,  /* [6051] */
    (xdc_Char)0x49,  /* [6052] */
    (xdc_Char)0x6e,  /* [6053] */
    (xdc_Char)0x73,  /* [6054] */
    (xdc_Char)0x74,  /* [6055] */
    (xdc_Char)0x61,  /* [6056] */
    (xdc_Char)0x6e,  /* [6057] */
    (xdc_Char)0x63,  /* [6058] */
    (xdc_Char)0x65,  /* [6059] */
    (xdc_Char)0x57,  /* [6060] */
    (xdc_Char)0x69,  /* [6061] */
    (xdc_Char)0x74,  /* [6062] */
    (xdc_Char)0x68,  /* [6063] */
    (xdc_Char)0x41,  /* [6064] */
    (xdc_Char)0x64,  /* [6065] */
    (xdc_Char)0x72,  /* [6066] */
    (xdc_Char)0x73,  /* [6067] */
    (xdc_Char)0x3a,  /* [6068] */
    (xdc_Char)0x20,  /* [6069] */
    (xdc_Char)0x25,  /* [6070] */
    (xdc_Char)0x24,  /* [6071] */
    (xdc_Char)0x53,  /* [6072] */
    (xdc_Char)0x0,  /* [6073] */
    (xdc_Char)0x53,  /* [6074] */
    (xdc_Char)0x74,  /* [6075] */
    (xdc_Char)0x61,  /* [6076] */
    (xdc_Char)0x72,  /* [6077] */
    (xdc_Char)0x74,  /* [6078] */
    (xdc_Char)0x49,  /* [6079] */
    (xdc_Char)0x6e,  /* [6080] */
    (xdc_Char)0x73,  /* [6081] */
    (xdc_Char)0x74,  /* [6082] */
    (xdc_Char)0x61,  /* [6083] */
    (xdc_Char)0x6e,  /* [6084] */
    (xdc_Char)0x63,  /* [6085] */
    (xdc_Char)0x65,  /* [6086] */
    (xdc_Char)0x57,  /* [6087] */
    (xdc_Char)0x69,  /* [6088] */
    (xdc_Char)0x74,  /* [6089] */
    (xdc_Char)0x68,  /* [6090] */
    (xdc_Char)0x53,  /* [6091] */
    (xdc_Char)0x74,  /* [6092] */
    (xdc_Char)0x72,  /* [6093] */
    (xdc_Char)0x3a,  /* [6094] */
    (xdc_Char)0x20,  /* [6095] */
    (xdc_Char)0x25,  /* [6096] */
    (xdc_Char)0x24,  /* [6097] */
    (xdc_Char)0x53,  /* [6098] */
    (xdc_Char)0x0,  /* [6099] */
    (xdc_Char)0x53,  /* [6100] */
    (xdc_Char)0x74,  /* [6101] */
    (xdc_Char)0x6f,  /* [6102] */
    (xdc_Char)0x70,  /* [6103] */
    (xdc_Char)0x49,  /* [6104] */
    (xdc_Char)0x6e,  /* [6105] */
    (xdc_Char)0x73,  /* [6106] */
    (xdc_Char)0x74,  /* [6107] */
    (xdc_Char)0x61,  /* [6108] */
    (xdc_Char)0x6e,  /* [6109] */
    (xdc_Char)0x63,  /* [6110] */
    (xdc_Char)0x65,  /* [6111] */
    (xdc_Char)0x57,  /* [6112] */
    (xdc_Char)0x69,  /* [6113] */
    (xdc_Char)0x74,  /* [6114] */
    (xdc_Char)0x68,  /* [6115] */
    (xdc_Char)0x53,  /* [6116] */
    (xdc_Char)0x74,  /* [6117] */
    (xdc_Char)0x72,  /* [6118] */
    (xdc_Char)0x3a,  /* [6119] */
    (xdc_Char)0x20,  /* [6120] */
    (xdc_Char)0x25,  /* [6121] */
    (xdc_Char)0x24,  /* [6122] */
    (xdc_Char)0x53,  /* [6123] */
    (xdc_Char)0x0,  /* [6124] */
    (xdc_Char)0x45,  /* [6125] */
    (xdc_Char)0x52,  /* [6126] */
    (xdc_Char)0x52,  /* [6127] */
    (xdc_Char)0x4f,  /* [6128] */
    (xdc_Char)0x52,  /* [6129] */
    (xdc_Char)0x3a,  /* [6130] */
    (xdc_Char)0x20,  /* [6131] */
    (xdc_Char)0x45,  /* [6132] */
    (xdc_Char)0x72,  /* [6133] */
    (xdc_Char)0x72,  /* [6134] */
    (xdc_Char)0x6f,  /* [6135] */
    (xdc_Char)0x72,  /* [6136] */
    (xdc_Char)0x43,  /* [6137] */
    (xdc_Char)0x6f,  /* [6138] */
    (xdc_Char)0x64,  /* [6139] */
    (xdc_Char)0x65,  /* [6140] */
    (xdc_Char)0x3a,  /* [6141] */
    (xdc_Char)0x30,  /* [6142] */
    (xdc_Char)0x78,  /* [6143] */
    (xdc_Char)0x25,  /* [6144] */
    (xdc_Char)0x78,  /* [6145] */
    (xdc_Char)0x0,  /* [6146] */
    (xdc_Char)0x45,  /* [6147] */
    (xdc_Char)0x52,  /* [6148] */
    (xdc_Char)0x52,  /* [6149] */
    (xdc_Char)0x4f,  /* [6150] */
    (xdc_Char)0x52,  /* [6151] */
    (xdc_Char)0x3a,  /* [6152] */
    (xdc_Char)0x20,  /* [6153] */
    (xdc_Char)0x45,  /* [6154] */
    (xdc_Char)0x72,  /* [6155] */
    (xdc_Char)0x72,  /* [6156] */
    (xdc_Char)0x6f,  /* [6157] */
    (xdc_Char)0x72,  /* [6158] */
    (xdc_Char)0x43,  /* [6159] */
    (xdc_Char)0x6f,  /* [6160] */
    (xdc_Char)0x64,  /* [6161] */
    (xdc_Char)0x65,  /* [6162] */
    (xdc_Char)0x3a,  /* [6163] */
    (xdc_Char)0x30,  /* [6164] */
    (xdc_Char)0x78,  /* [6165] */
    (xdc_Char)0x25,  /* [6166] */
    (xdc_Char)0x78,  /* [6167] */
    (xdc_Char)0x2e,  /* [6168] */
    (xdc_Char)0x20,  /* [6169] */
    (xdc_Char)0x25,  /* [6170] */
    (xdc_Char)0x24,  /* [6171] */
    (xdc_Char)0x53,  /* [6172] */
    (xdc_Char)0x0,  /* [6173] */
    (xdc_Char)0x48,  /* [6174] */
    (xdc_Char)0x57,  /* [6175] */
    (xdc_Char)0x20,  /* [6176] */
    (xdc_Char)0x45,  /* [6177] */
    (xdc_Char)0x52,  /* [6178] */
    (xdc_Char)0x52,  /* [6179] */
    (xdc_Char)0x4f,  /* [6180] */
    (xdc_Char)0x52,  /* [6181] */
    (xdc_Char)0x3a,  /* [6182] */
    (xdc_Char)0x20,  /* [6183] */
    (xdc_Char)0x45,  /* [6184] */
    (xdc_Char)0x72,  /* [6185] */
    (xdc_Char)0x72,  /* [6186] */
    (xdc_Char)0x6f,  /* [6187] */
    (xdc_Char)0x72,  /* [6188] */
    (xdc_Char)0x43,  /* [6189] */
    (xdc_Char)0x6f,  /* [6190] */
    (xdc_Char)0x64,  /* [6191] */
    (xdc_Char)0x65,  /* [6192] */
    (xdc_Char)0x3a,  /* [6193] */
    (xdc_Char)0x30,  /* [6194] */
    (xdc_Char)0x78,  /* [6195] */
    (xdc_Char)0x25,  /* [6196] */
    (xdc_Char)0x78,  /* [6197] */
    (xdc_Char)0x0,  /* [6198] */
    (xdc_Char)0x48,  /* [6199] */
    (xdc_Char)0x57,  /* [6200] */
    (xdc_Char)0x20,  /* [6201] */
    (xdc_Char)0x45,  /* [6202] */
    (xdc_Char)0x52,  /* [6203] */
    (xdc_Char)0x52,  /* [6204] */
    (xdc_Char)0x4f,  /* [6205] */
    (xdc_Char)0x52,  /* [6206] */
    (xdc_Char)0x3a,  /* [6207] */
    (xdc_Char)0x20,  /* [6208] */
    (xdc_Char)0x45,  /* [6209] */
    (xdc_Char)0x72,  /* [6210] */
    (xdc_Char)0x72,  /* [6211] */
    (xdc_Char)0x6f,  /* [6212] */
    (xdc_Char)0x72,  /* [6213] */
    (xdc_Char)0x43,  /* [6214] */
    (xdc_Char)0x6f,  /* [6215] */
    (xdc_Char)0x64,  /* [6216] */
    (xdc_Char)0x65,  /* [6217] */
    (xdc_Char)0x3a,  /* [6218] */
    (xdc_Char)0x30,  /* [6219] */
    (xdc_Char)0x78,  /* [6220] */
    (xdc_Char)0x25,  /* [6221] */
    (xdc_Char)0x78,  /* [6222] */
    (xdc_Char)0x2e,  /* [6223] */
    (xdc_Char)0x20,  /* [6224] */
    (xdc_Char)0x25,  /* [6225] */
    (xdc_Char)0x24,  /* [6226] */
    (xdc_Char)0x53,  /* [6227] */
    (xdc_Char)0x0,  /* [6228] */
    (xdc_Char)0x46,  /* [6229] */
    (xdc_Char)0x41,  /* [6230] */
    (xdc_Char)0x54,  /* [6231] */
    (xdc_Char)0x41,  /* [6232] */
    (xdc_Char)0x4c,  /* [6233] */
    (xdc_Char)0x20,  /* [6234] */
    (xdc_Char)0x45,  /* [6235] */
    (xdc_Char)0x52,  /* [6236] */
    (xdc_Char)0x52,  /* [6237] */
    (xdc_Char)0x4f,  /* [6238] */
    (xdc_Char)0x52,  /* [6239] */
    (xdc_Char)0x3a,  /* [6240] */
    (xdc_Char)0x20,  /* [6241] */
    (xdc_Char)0x45,  /* [6242] */
    (xdc_Char)0x72,  /* [6243] */
    (xdc_Char)0x72,  /* [6244] */
    (xdc_Char)0x6f,  /* [6245] */
    (xdc_Char)0x72,  /* [6246] */
    (xdc_Char)0x43,  /* [6247] */
    (xdc_Char)0x6f,  /* [6248] */
    (xdc_Char)0x64,  /* [6249] */
    (xdc_Char)0x65,  /* [6250] */
    (xdc_Char)0x3a,  /* [6251] */
    (xdc_Char)0x30,  /* [6252] */
    (xdc_Char)0x78,  /* [6253] */
    (xdc_Char)0x25,  /* [6254] */
    (xdc_Char)0x78,  /* [6255] */
    (xdc_Char)0x0,  /* [6256] */
    (xdc_Char)0x46,  /* [6257] */
    (xdc_Char)0x41,  /* [6258] */
    (xdc_Char)0x54,  /* [6259] */
    (xdc_Char)0x41,  /* [6260] */
    (xdc_Char)0x4c,  /* [6261] */
    (xdc_Char)0x20,  /* [6262] */
    (xdc_Char)0x45,  /* [6263] */
    (xdc_Char)0x52,  /* [6264] */
    (xdc_Char)0x52,  /* [6265] */
    (xdc_Char)0x4f,  /* [6266] */
    (xdc_Char)0x52,  /* [6267] */
    (xdc_Char)0x3a,  /* [6268] */
    (xdc_Char)0x20,  /* [6269] */
    (xdc_Char)0x45,  /* [6270] */
    (xdc_Char)0x72,  /* [6271] */
    (xdc_Char)0x72,  /* [6272] */
    (xdc_Char)0x6f,  /* [6273] */
    (xdc_Char)0x72,  /* [6274] */
    (xdc_Char)0x43,  /* [6275] */
    (xdc_Char)0x6f,  /* [6276] */
    (xdc_Char)0x64,  /* [6277] */
    (xdc_Char)0x65,  /* [6278] */
    (xdc_Char)0x3a,  /* [6279] */
    (xdc_Char)0x30,  /* [6280] */
    (xdc_Char)0x78,  /* [6281] */
    (xdc_Char)0x25,  /* [6282] */
    (xdc_Char)0x78,  /* [6283] */
    (xdc_Char)0x2e,  /* [6284] */
    (xdc_Char)0x20,  /* [6285] */
    (xdc_Char)0x25,  /* [6286] */
    (xdc_Char)0x24,  /* [6287] */
    (xdc_Char)0x53,  /* [6288] */
    (xdc_Char)0x0,  /* [6289] */
    (xdc_Char)0x43,  /* [6290] */
    (xdc_Char)0x52,  /* [6291] */
    (xdc_Char)0x49,  /* [6292] */
    (xdc_Char)0x54,  /* [6293] */
    (xdc_Char)0x49,  /* [6294] */
    (xdc_Char)0x43,  /* [6295] */
    (xdc_Char)0x41,  /* [6296] */
    (xdc_Char)0x4c,  /* [6297] */
    (xdc_Char)0x20,  /* [6298] */
    (xdc_Char)0x45,  /* [6299] */
    (xdc_Char)0x52,  /* [6300] */
    (xdc_Char)0x52,  /* [6301] */
    (xdc_Char)0x4f,  /* [6302] */
    (xdc_Char)0x52,  /* [6303] */
    (xdc_Char)0x3a,  /* [6304] */
    (xdc_Char)0x20,  /* [6305] */
    (xdc_Char)0x45,  /* [6306] */
    (xdc_Char)0x72,  /* [6307] */
    (xdc_Char)0x72,  /* [6308] */
    (xdc_Char)0x6f,  /* [6309] */
    (xdc_Char)0x72,  /* [6310] */
    (xdc_Char)0x43,  /* [6311] */
    (xdc_Char)0x6f,  /* [6312] */
    (xdc_Char)0x64,  /* [6313] */
    (xdc_Char)0x65,  /* [6314] */
    (xdc_Char)0x3a,  /* [6315] */
    (xdc_Char)0x30,  /* [6316] */
    (xdc_Char)0x78,  /* [6317] */
    (xdc_Char)0x25,  /* [6318] */
    (xdc_Char)0x78,  /* [6319] */
    (xdc_Char)0x0,  /* [6320] */
    (xdc_Char)0x43,  /* [6321] */
    (xdc_Char)0x52,  /* [6322] */
    (xdc_Char)0x49,  /* [6323] */
    (xdc_Char)0x54,  /* [6324] */
    (xdc_Char)0x49,  /* [6325] */
    (xdc_Char)0x43,  /* [6326] */
    (xdc_Char)0x41,  /* [6327] */
    (xdc_Char)0x4c,  /* [6328] */
    (xdc_Char)0x20,  /* [6329] */
    (xdc_Char)0x45,  /* [6330] */
    (xdc_Char)0x52,  /* [6331] */
    (xdc_Char)0x52,  /* [6332] */
    (xdc_Char)0x4f,  /* [6333] */
    (xdc_Char)0x52,  /* [6334] */
    (xdc_Char)0x3a,  /* [6335] */
    (xdc_Char)0x20,  /* [6336] */
    (xdc_Char)0x45,  /* [6337] */
    (xdc_Char)0x72,  /* [6338] */
    (xdc_Char)0x72,  /* [6339] */
    (xdc_Char)0x6f,  /* [6340] */
    (xdc_Char)0x72,  /* [6341] */
    (xdc_Char)0x43,  /* [6342] */
    (xdc_Char)0x6f,  /* [6343] */
    (xdc_Char)0x64,  /* [6344] */
    (xdc_Char)0x65,  /* [6345] */
    (xdc_Char)0x3a,  /* [6346] */
    (xdc_Char)0x30,  /* [6347] */
    (xdc_Char)0x78,  /* [6348] */
    (xdc_Char)0x25,  /* [6349] */
    (xdc_Char)0x78,  /* [6350] */
    (xdc_Char)0x2e,  /* [6351] */
    (xdc_Char)0x20,  /* [6352] */
    (xdc_Char)0x25,  /* [6353] */
    (xdc_Char)0x24,  /* [6354] */
    (xdc_Char)0x53,  /* [6355] */
    (xdc_Char)0x0,  /* [6356] */
    (xdc_Char)0x45,  /* [6357] */
    (xdc_Char)0x52,  /* [6358] */
    (xdc_Char)0x52,  /* [6359] */
    (xdc_Char)0x4f,  /* [6360] */
    (xdc_Char)0x52,  /* [6361] */
    (xdc_Char)0x3a,  /* [6362] */
    (xdc_Char)0x20,  /* [6363] */
    (xdc_Char)0x45,  /* [6364] */
    (xdc_Char)0x78,  /* [6365] */
    (xdc_Char)0x63,  /* [6366] */
    (xdc_Char)0x65,  /* [6367] */
    (xdc_Char)0x70,  /* [6368] */
    (xdc_Char)0x74,  /* [6369] */
    (xdc_Char)0x69,  /* [6370] */
    (xdc_Char)0x6f,  /* [6371] */
    (xdc_Char)0x6e,  /* [6372] */
    (xdc_Char)0x20,  /* [6373] */
    (xdc_Char)0x61,  /* [6374] */
    (xdc_Char)0x74,  /* [6375] */
    (xdc_Char)0x20,  /* [6376] */
    (xdc_Char)0x25,  /* [6377] */
    (xdc_Char)0x24,  /* [6378] */
    (xdc_Char)0x46,  /* [6379] */
    (xdc_Char)0x2e,  /* [6380] */
    (xdc_Char)0x0,  /* [6381] */
    (xdc_Char)0x45,  /* [6382] */
    (xdc_Char)0x52,  /* [6383] */
    (xdc_Char)0x52,  /* [6384] */
    (xdc_Char)0x4f,  /* [6385] */
    (xdc_Char)0x52,  /* [6386] */
    (xdc_Char)0x3a,  /* [6387] */
    (xdc_Char)0x20,  /* [6388] */
    (xdc_Char)0x55,  /* [6389] */
    (xdc_Char)0x6e,  /* [6390] */
    (xdc_Char)0x63,  /* [6391] */
    (xdc_Char)0x61,  /* [6392] */
    (xdc_Char)0x75,  /* [6393] */
    (xdc_Char)0x67,  /* [6394] */
    (xdc_Char)0x68,  /* [6395] */
    (xdc_Char)0x74,  /* [6396] */
    (xdc_Char)0x20,  /* [6397] */
    (xdc_Char)0x45,  /* [6398] */
    (xdc_Char)0x78,  /* [6399] */
    (xdc_Char)0x63,  /* [6400] */
    (xdc_Char)0x65,  /* [6401] */
    (xdc_Char)0x70,  /* [6402] */
    (xdc_Char)0x74,  /* [6403] */
    (xdc_Char)0x69,  /* [6404] */
    (xdc_Char)0x6f,  /* [6405] */
    (xdc_Char)0x6e,  /* [6406] */
    (xdc_Char)0x20,  /* [6407] */
    (xdc_Char)0x61,  /* [6408] */
    (xdc_Char)0x74,  /* [6409] */
    (xdc_Char)0x20,  /* [6410] */
    (xdc_Char)0x25,  /* [6411] */
    (xdc_Char)0x24,  /* [6412] */
    (xdc_Char)0x46,  /* [6413] */
    (xdc_Char)0x2e,  /* [6414] */
    (xdc_Char)0x0,  /* [6415] */
    (xdc_Char)0x45,  /* [6416] */
    (xdc_Char)0x52,  /* [6417] */
    (xdc_Char)0x52,  /* [6418] */
    (xdc_Char)0x4f,  /* [6419] */
    (xdc_Char)0x52,  /* [6420] */
    (xdc_Char)0x3a,  /* [6421] */
    (xdc_Char)0x20,  /* [6422] */
    (xdc_Char)0x4e,  /* [6423] */
    (xdc_Char)0x75,  /* [6424] */
    (xdc_Char)0x6c,  /* [6425] */
    (xdc_Char)0x6c,  /* [6426] */
    (xdc_Char)0x20,  /* [6427] */
    (xdc_Char)0x50,  /* [6428] */
    (xdc_Char)0x6f,  /* [6429] */
    (xdc_Char)0x69,  /* [6430] */
    (xdc_Char)0x6e,  /* [6431] */
    (xdc_Char)0x74,  /* [6432] */
    (xdc_Char)0x65,  /* [6433] */
    (xdc_Char)0x72,  /* [6434] */
    (xdc_Char)0x20,  /* [6435] */
    (xdc_Char)0x45,  /* [6436] */
    (xdc_Char)0x78,  /* [6437] */
    (xdc_Char)0x63,  /* [6438] */
    (xdc_Char)0x65,  /* [6439] */
    (xdc_Char)0x70,  /* [6440] */
    (xdc_Char)0x74,  /* [6441] */
    (xdc_Char)0x69,  /* [6442] */
    (xdc_Char)0x6f,  /* [6443] */
    (xdc_Char)0x6e,  /* [6444] */
    (xdc_Char)0x20,  /* [6445] */
    (xdc_Char)0x61,  /* [6446] */
    (xdc_Char)0x74,  /* [6447] */
    (xdc_Char)0x20,  /* [6448] */
    (xdc_Char)0x25,  /* [6449] */
    (xdc_Char)0x24,  /* [6450] */
    (xdc_Char)0x46,  /* [6451] */
    (xdc_Char)0x2e,  /* [6452] */
    (xdc_Char)0x0,  /* [6453] */
    (xdc_Char)0x45,  /* [6454] */
    (xdc_Char)0x52,  /* [6455] */
    (xdc_Char)0x52,  /* [6456] */
    (xdc_Char)0x4f,  /* [6457] */
    (xdc_Char)0x52,  /* [6458] */
    (xdc_Char)0x3a,  /* [6459] */
    (xdc_Char)0x20,  /* [6460] */
    (xdc_Char)0x55,  /* [6461] */
    (xdc_Char)0x6e,  /* [6462] */
    (xdc_Char)0x65,  /* [6463] */
    (xdc_Char)0x78,  /* [6464] */
    (xdc_Char)0x70,  /* [6465] */
    (xdc_Char)0x65,  /* [6466] */
    (xdc_Char)0x63,  /* [6467] */
    (xdc_Char)0x74,  /* [6468] */
    (xdc_Char)0x65,  /* [6469] */
    (xdc_Char)0x64,  /* [6470] */
    (xdc_Char)0x20,  /* [6471] */
    (xdc_Char)0x49,  /* [6472] */
    (xdc_Char)0x6e,  /* [6473] */
    (xdc_Char)0x74,  /* [6474] */
    (xdc_Char)0x65,  /* [6475] */
    (xdc_Char)0x72,  /* [6476] */
    (xdc_Char)0x72,  /* [6477] */
    (xdc_Char)0x75,  /* [6478] */
    (xdc_Char)0x70,  /* [6479] */
    (xdc_Char)0x74,  /* [6480] */
    (xdc_Char)0x20,  /* [6481] */
    (xdc_Char)0x61,  /* [6482] */
    (xdc_Char)0x74,  /* [6483] */
    (xdc_Char)0x20,  /* [6484] */
    (xdc_Char)0x25,  /* [6485] */
    (xdc_Char)0x24,  /* [6486] */
    (xdc_Char)0x46,  /* [6487] */
    (xdc_Char)0x2e,  /* [6488] */
    (xdc_Char)0x0,  /* [6489] */
    (xdc_Char)0x45,  /* [6490] */
    (xdc_Char)0x52,  /* [6491] */
    (xdc_Char)0x52,  /* [6492] */
    (xdc_Char)0x4f,  /* [6493] */
    (xdc_Char)0x52,  /* [6494] */
    (xdc_Char)0x3a,  /* [6495] */
    (xdc_Char)0x20,  /* [6496] */
    (xdc_Char)0x4d,  /* [6497] */
    (xdc_Char)0x65,  /* [6498] */
    (xdc_Char)0x6d,  /* [6499] */
    (xdc_Char)0x6f,  /* [6500] */
    (xdc_Char)0x72,  /* [6501] */
    (xdc_Char)0x79,  /* [6502] */
    (xdc_Char)0x20,  /* [6503] */
    (xdc_Char)0x41,  /* [6504] */
    (xdc_Char)0x63,  /* [6505] */
    (xdc_Char)0x63,  /* [6506] */
    (xdc_Char)0x65,  /* [6507] */
    (xdc_Char)0x73,  /* [6508] */
    (xdc_Char)0x73,  /* [6509] */
    (xdc_Char)0x20,  /* [6510] */
    (xdc_Char)0x46,  /* [6511] */
    (xdc_Char)0x61,  /* [6512] */
    (xdc_Char)0x75,  /* [6513] */
    (xdc_Char)0x6c,  /* [6514] */
    (xdc_Char)0x74,  /* [6515] */
    (xdc_Char)0x20,  /* [6516] */
    (xdc_Char)0x61,  /* [6517] */
    (xdc_Char)0x74,  /* [6518] */
    (xdc_Char)0x20,  /* [6519] */
    (xdc_Char)0x25,  /* [6520] */
    (xdc_Char)0x24,  /* [6521] */
    (xdc_Char)0x46,  /* [6522] */
    (xdc_Char)0x2e,  /* [6523] */
    (xdc_Char)0x20,  /* [6524] */
    (xdc_Char)0x5b,  /* [6525] */
    (xdc_Char)0x41,  /* [6526] */
    (xdc_Char)0x44,  /* [6527] */
    (xdc_Char)0x52,  /* [6528] */
    (xdc_Char)0x53,  /* [6529] */
    (xdc_Char)0x5d,  /* [6530] */
    (xdc_Char)0x30,  /* [6531] */
    (xdc_Char)0x78,  /* [6532] */
    (xdc_Char)0x25,  /* [6533] */
    (xdc_Char)0x78,  /* [6534] */
    (xdc_Char)0x0,  /* [6535] */
    (xdc_Char)0x45,  /* [6536] */
    (xdc_Char)0x52,  /* [6537] */
    (xdc_Char)0x52,  /* [6538] */
    (xdc_Char)0x4f,  /* [6539] */
    (xdc_Char)0x52,  /* [6540] */
    (xdc_Char)0x3a,  /* [6541] */
    (xdc_Char)0x20,  /* [6542] */
    (xdc_Char)0x53,  /* [6543] */
    (xdc_Char)0x65,  /* [6544] */
    (xdc_Char)0x63,  /* [6545] */
    (xdc_Char)0x75,  /* [6546] */
    (xdc_Char)0x72,  /* [6547] */
    (xdc_Char)0x69,  /* [6548] */
    (xdc_Char)0x74,  /* [6549] */
    (xdc_Char)0x79,  /* [6550] */
    (xdc_Char)0x20,  /* [6551] */
    (xdc_Char)0x45,  /* [6552] */
    (xdc_Char)0x78,  /* [6553] */
    (xdc_Char)0x63,  /* [6554] */
    (xdc_Char)0x65,  /* [6555] */
    (xdc_Char)0x70,  /* [6556] */
    (xdc_Char)0x74,  /* [6557] */
    (xdc_Char)0x69,  /* [6558] */
    (xdc_Char)0x6f,  /* [6559] */
    (xdc_Char)0x6e,  /* [6560] */
    (xdc_Char)0x20,  /* [6561] */
    (xdc_Char)0x61,  /* [6562] */
    (xdc_Char)0x74,  /* [6563] */
    (xdc_Char)0x20,  /* [6564] */
    (xdc_Char)0x25,  /* [6565] */
    (xdc_Char)0x24,  /* [6566] */
    (xdc_Char)0x46,  /* [6567] */
    (xdc_Char)0x2e,  /* [6568] */
    (xdc_Char)0x0,  /* [6569] */
    (xdc_Char)0x45,  /* [6570] */
    (xdc_Char)0x52,  /* [6571] */
    (xdc_Char)0x52,  /* [6572] */
    (xdc_Char)0x4f,  /* [6573] */
    (xdc_Char)0x52,  /* [6574] */
    (xdc_Char)0x3a,  /* [6575] */
    (xdc_Char)0x20,  /* [6576] */
    (xdc_Char)0x44,  /* [6577] */
    (xdc_Char)0x69,  /* [6578] */
    (xdc_Char)0x76,  /* [6579] */
    (xdc_Char)0x69,  /* [6580] */
    (xdc_Char)0x73,  /* [6581] */
    (xdc_Char)0x69,  /* [6582] */
    (xdc_Char)0x6f,  /* [6583] */
    (xdc_Char)0x6e,  /* [6584] */
    (xdc_Char)0x20,  /* [6585] */
    (xdc_Char)0x62,  /* [6586] */
    (xdc_Char)0x79,  /* [6587] */
    (xdc_Char)0x20,  /* [6588] */
    (xdc_Char)0x7a,  /* [6589] */
    (xdc_Char)0x65,  /* [6590] */
    (xdc_Char)0x72,  /* [6591] */
    (xdc_Char)0x6f,  /* [6592] */
    (xdc_Char)0x20,  /* [6593] */
    (xdc_Char)0x61,  /* [6594] */
    (xdc_Char)0x74,  /* [6595] */
    (xdc_Char)0x20,  /* [6596] */
    (xdc_Char)0x25,  /* [6597] */
    (xdc_Char)0x24,  /* [6598] */
    (xdc_Char)0x46,  /* [6599] */
    (xdc_Char)0x2e,  /* [6600] */
    (xdc_Char)0x0,  /* [6601] */
    (xdc_Char)0x45,  /* [6602] */
    (xdc_Char)0x52,  /* [6603] */
    (xdc_Char)0x52,  /* [6604] */
    (xdc_Char)0x4f,  /* [6605] */
    (xdc_Char)0x52,  /* [6606] */
    (xdc_Char)0x3a,  /* [6607] */
    (xdc_Char)0x20,  /* [6608] */
    (xdc_Char)0x4f,  /* [6609] */
    (xdc_Char)0x76,  /* [6610] */
    (xdc_Char)0x65,  /* [6611] */
    (xdc_Char)0x72,  /* [6612] */
    (xdc_Char)0x66,  /* [6613] */
    (xdc_Char)0x6c,  /* [6614] */
    (xdc_Char)0x6f,  /* [6615] */
    (xdc_Char)0x77,  /* [6616] */
    (xdc_Char)0x20,  /* [6617] */
    (xdc_Char)0x65,  /* [6618] */
    (xdc_Char)0x78,  /* [6619] */
    (xdc_Char)0x63,  /* [6620] */
    (xdc_Char)0x65,  /* [6621] */
    (xdc_Char)0x70,  /* [6622] */
    (xdc_Char)0x74,  /* [6623] */
    (xdc_Char)0x69,  /* [6624] */
    (xdc_Char)0x6f,  /* [6625] */
    (xdc_Char)0x6e,  /* [6626] */
    (xdc_Char)0x20,  /* [6627] */
    (xdc_Char)0x61,  /* [6628] */
    (xdc_Char)0x74,  /* [6629] */
    (xdc_Char)0x20,  /* [6630] */
    (xdc_Char)0x25,  /* [6631] */
    (xdc_Char)0x24,  /* [6632] */
    (xdc_Char)0x46,  /* [6633] */
    (xdc_Char)0x2e,  /* [6634] */
    (xdc_Char)0x0,  /* [6635] */
    (xdc_Char)0x45,  /* [6636] */
    (xdc_Char)0x52,  /* [6637] */
    (xdc_Char)0x52,  /* [6638] */
    (xdc_Char)0x4f,  /* [6639] */
    (xdc_Char)0x52,  /* [6640] */
    (xdc_Char)0x3a,  /* [6641] */
    (xdc_Char)0x20,  /* [6642] */
    (xdc_Char)0x49,  /* [6643] */
    (xdc_Char)0x6e,  /* [6644] */
    (xdc_Char)0x64,  /* [6645] */
    (xdc_Char)0x65,  /* [6646] */
    (xdc_Char)0x78,  /* [6647] */
    (xdc_Char)0x20,  /* [6648] */
    (xdc_Char)0x6f,  /* [6649] */
    (xdc_Char)0x75,  /* [6650] */
    (xdc_Char)0x74,  /* [6651] */
    (xdc_Char)0x20,  /* [6652] */
    (xdc_Char)0x6f,  /* [6653] */
    (xdc_Char)0x66,  /* [6654] */
    (xdc_Char)0x20,  /* [6655] */
    (xdc_Char)0x72,  /* [6656] */
    (xdc_Char)0x61,  /* [6657] */
    (xdc_Char)0x6e,  /* [6658] */
    (xdc_Char)0x67,  /* [6659] */
    (xdc_Char)0x65,  /* [6660] */
    (xdc_Char)0x20,  /* [6661] */
    (xdc_Char)0x61,  /* [6662] */
    (xdc_Char)0x74,  /* [6663] */
    (xdc_Char)0x20,  /* [6664] */
    (xdc_Char)0x25,  /* [6665] */
    (xdc_Char)0x24,  /* [6666] */
    (xdc_Char)0x46,  /* [6667] */
    (xdc_Char)0x2e,  /* [6668] */
    (xdc_Char)0x20,  /* [6669] */
    (xdc_Char)0x5b,  /* [6670] */
    (xdc_Char)0x49,  /* [6671] */
    (xdc_Char)0x4e,  /* [6672] */
    (xdc_Char)0x44,  /* [6673] */
    (xdc_Char)0x45,  /* [6674] */
    (xdc_Char)0x58,  /* [6675] */
    (xdc_Char)0x5d,  /* [6676] */
    (xdc_Char)0x30,  /* [6677] */
    (xdc_Char)0x78,  /* [6678] */
    (xdc_Char)0x25,  /* [6679] */
    (xdc_Char)0x78,  /* [6680] */
    (xdc_Char)0x0,  /* [6681] */
    (xdc_Char)0x45,  /* [6682] */
    (xdc_Char)0x52,  /* [6683] */
    (xdc_Char)0x52,  /* [6684] */
    (xdc_Char)0x4f,  /* [6685] */
    (xdc_Char)0x52,  /* [6686] */
    (xdc_Char)0x3a,  /* [6687] */
    (xdc_Char)0x20,  /* [6688] */
    (xdc_Char)0x41,  /* [6689] */
    (xdc_Char)0x74,  /* [6690] */
    (xdc_Char)0x74,  /* [6691] */
    (xdc_Char)0x65,  /* [6692] */
    (xdc_Char)0x6d,  /* [6693] */
    (xdc_Char)0x70,  /* [6694] */
    (xdc_Char)0x74,  /* [6695] */
    (xdc_Char)0x20,  /* [6696] */
    (xdc_Char)0x74,  /* [6697] */
    (xdc_Char)0x6f,  /* [6698] */
    (xdc_Char)0x20,  /* [6699] */
    (xdc_Char)0x61,  /* [6700] */
    (xdc_Char)0x63,  /* [6701] */
    (xdc_Char)0x63,  /* [6702] */
    (xdc_Char)0x65,  /* [6703] */
    (xdc_Char)0x73,  /* [6704] */
    (xdc_Char)0x73,  /* [6705] */
    (xdc_Char)0x20,  /* [6706] */
    (xdc_Char)0x66,  /* [6707] */
    (xdc_Char)0x65,  /* [6708] */
    (xdc_Char)0x61,  /* [6709] */
    (xdc_Char)0x74,  /* [6710] */
    (xdc_Char)0x75,  /* [6711] */
    (xdc_Char)0x72,  /* [6712] */
    (xdc_Char)0x65,  /* [6713] */
    (xdc_Char)0x20,  /* [6714] */
    (xdc_Char)0x74,  /* [6715] */
    (xdc_Char)0x68,  /* [6716] */
    (xdc_Char)0x61,  /* [6717] */
    (xdc_Char)0x74,  /* [6718] */
    (xdc_Char)0x20,  /* [6719] */
    (xdc_Char)0x69,  /* [6720] */
    (xdc_Char)0x73,  /* [6721] */
    (xdc_Char)0x20,  /* [6722] */
    (xdc_Char)0x6e,  /* [6723] */
    (xdc_Char)0x6f,  /* [6724] */
    (xdc_Char)0x74,  /* [6725] */
    (xdc_Char)0x20,  /* [6726] */
    (xdc_Char)0x69,  /* [6727] */
    (xdc_Char)0x6d,  /* [6728] */
    (xdc_Char)0x70,  /* [6729] */
    (xdc_Char)0x6c,  /* [6730] */
    (xdc_Char)0x65,  /* [6731] */
    (xdc_Char)0x6d,  /* [6732] */
    (xdc_Char)0x65,  /* [6733] */
    (xdc_Char)0x6e,  /* [6734] */
    (xdc_Char)0x74,  /* [6735] */
    (xdc_Char)0x65,  /* [6736] */
    (xdc_Char)0x64,  /* [6737] */
    (xdc_Char)0x20,  /* [6738] */
    (xdc_Char)0x61,  /* [6739] */
    (xdc_Char)0x74,  /* [6740] */
    (xdc_Char)0x20,  /* [6741] */
    (xdc_Char)0x25,  /* [6742] */
    (xdc_Char)0x24,  /* [6743] */
    (xdc_Char)0x46,  /* [6744] */
    (xdc_Char)0x2e,  /* [6745] */
    (xdc_Char)0x0,  /* [6746] */
    (xdc_Char)0x45,  /* [6747] */
    (xdc_Char)0x52,  /* [6748] */
    (xdc_Char)0x52,  /* [6749] */
    (xdc_Char)0x4f,  /* [6750] */
    (xdc_Char)0x52,  /* [6751] */
    (xdc_Char)0x3a,  /* [6752] */
    (xdc_Char)0x20,  /* [6753] */
    (xdc_Char)0x53,  /* [6754] */
    (xdc_Char)0x74,  /* [6755] */
    (xdc_Char)0x61,  /* [6756] */
    (xdc_Char)0x63,  /* [6757] */
    (xdc_Char)0x6b,  /* [6758] */
    (xdc_Char)0x20,  /* [6759] */
    (xdc_Char)0x4f,  /* [6760] */
    (xdc_Char)0x76,  /* [6761] */
    (xdc_Char)0x65,  /* [6762] */
    (xdc_Char)0x72,  /* [6763] */
    (xdc_Char)0x66,  /* [6764] */
    (xdc_Char)0x6c,  /* [6765] */
    (xdc_Char)0x6f,  /* [6766] */
    (xdc_Char)0x77,  /* [6767] */
    (xdc_Char)0x20,  /* [6768] */
    (xdc_Char)0x64,  /* [6769] */
    (xdc_Char)0x65,  /* [6770] */
    (xdc_Char)0x74,  /* [6771] */
    (xdc_Char)0x65,  /* [6772] */
    (xdc_Char)0x63,  /* [6773] */
    (xdc_Char)0x74,  /* [6774] */
    (xdc_Char)0x65,  /* [6775] */
    (xdc_Char)0x64,  /* [6776] */
    (xdc_Char)0x20,  /* [6777] */
    (xdc_Char)0x61,  /* [6778] */
    (xdc_Char)0x74,  /* [6779] */
    (xdc_Char)0x20,  /* [6780] */
    (xdc_Char)0x25,  /* [6781] */
    (xdc_Char)0x24,  /* [6782] */
    (xdc_Char)0x46,  /* [6783] */
    (xdc_Char)0x2e,  /* [6784] */
    (xdc_Char)0x0,  /* [6785] */
    (xdc_Char)0x45,  /* [6786] */
    (xdc_Char)0x52,  /* [6787] */
    (xdc_Char)0x52,  /* [6788] */
    (xdc_Char)0x4f,  /* [6789] */
    (xdc_Char)0x52,  /* [6790] */
    (xdc_Char)0x3a,  /* [6791] */
    (xdc_Char)0x20,  /* [6792] */
    (xdc_Char)0x49,  /* [6793] */
    (xdc_Char)0x6c,  /* [6794] */
    (xdc_Char)0x6c,  /* [6795] */
    (xdc_Char)0x65,  /* [6796] */
    (xdc_Char)0x67,  /* [6797] */
    (xdc_Char)0x61,  /* [6798] */
    (xdc_Char)0x6c,  /* [6799] */
    (xdc_Char)0x20,  /* [6800] */
    (xdc_Char)0x49,  /* [6801] */
    (xdc_Char)0x6e,  /* [6802] */
    (xdc_Char)0x73,  /* [6803] */
    (xdc_Char)0x74,  /* [6804] */
    (xdc_Char)0x72,  /* [6805] */
    (xdc_Char)0x75,  /* [6806] */
    (xdc_Char)0x63,  /* [6807] */
    (xdc_Char)0x74,  /* [6808] */
    (xdc_Char)0x69,  /* [6809] */
    (xdc_Char)0x6f,  /* [6810] */
    (xdc_Char)0x6e,  /* [6811] */
    (xdc_Char)0x20,  /* [6812] */
    (xdc_Char)0x65,  /* [6813] */
    (xdc_Char)0x78,  /* [6814] */
    (xdc_Char)0x65,  /* [6815] */
    (xdc_Char)0x63,  /* [6816] */
    (xdc_Char)0x75,  /* [6817] */
    (xdc_Char)0x74,  /* [6818] */
    (xdc_Char)0x65,  /* [6819] */
    (xdc_Char)0x64,  /* [6820] */
    (xdc_Char)0x20,  /* [6821] */
    (xdc_Char)0x61,  /* [6822] */
    (xdc_Char)0x74,  /* [6823] */
    (xdc_Char)0x20,  /* [6824] */
    (xdc_Char)0x25,  /* [6825] */
    (xdc_Char)0x24,  /* [6826] */
    (xdc_Char)0x46,  /* [6827] */
    (xdc_Char)0x2e,  /* [6828] */
    (xdc_Char)0x0,  /* [6829] */
    (xdc_Char)0x45,  /* [6830] */
    (xdc_Char)0x52,  /* [6831] */
    (xdc_Char)0x52,  /* [6832] */
    (xdc_Char)0x4f,  /* [6833] */
    (xdc_Char)0x52,  /* [6834] */
    (xdc_Char)0x3a,  /* [6835] */
    (xdc_Char)0x20,  /* [6836] */
    (xdc_Char)0x45,  /* [6837] */
    (xdc_Char)0x6e,  /* [6838] */
    (xdc_Char)0x74,  /* [6839] */
    (xdc_Char)0x72,  /* [6840] */
    (xdc_Char)0x79,  /* [6841] */
    (xdc_Char)0x20,  /* [6842] */
    (xdc_Char)0x50,  /* [6843] */
    (xdc_Char)0x6f,  /* [6844] */
    (xdc_Char)0x69,  /* [6845] */
    (xdc_Char)0x6e,  /* [6846] */
    (xdc_Char)0x74,  /* [6847] */
    (xdc_Char)0x20,  /* [6848] */
    (xdc_Char)0x4e,  /* [6849] */
    (xdc_Char)0x6f,  /* [6850] */
    (xdc_Char)0x74,  /* [6851] */
    (xdc_Char)0x20,  /* [6852] */
    (xdc_Char)0x46,  /* [6853] */
    (xdc_Char)0x6f,  /* [6854] */
    (xdc_Char)0x75,  /* [6855] */
    (xdc_Char)0x6e,  /* [6856] */
    (xdc_Char)0x64,  /* [6857] */
    (xdc_Char)0x20,  /* [6858] */
    (xdc_Char)0x61,  /* [6859] */
    (xdc_Char)0x74,  /* [6860] */
    (xdc_Char)0x20,  /* [6861] */
    (xdc_Char)0x25,  /* [6862] */
    (xdc_Char)0x24,  /* [6863] */
    (xdc_Char)0x46,  /* [6864] */
    (xdc_Char)0x2e,  /* [6865] */
    (xdc_Char)0x0,  /* [6866] */
    (xdc_Char)0x45,  /* [6867] */
    (xdc_Char)0x52,  /* [6868] */
    (xdc_Char)0x52,  /* [6869] */
    (xdc_Char)0x4f,  /* [6870] */
    (xdc_Char)0x52,  /* [6871] */
    (xdc_Char)0x3a,  /* [6872] */
    (xdc_Char)0x20,  /* [6873] */
    (xdc_Char)0x4d,  /* [6874] */
    (xdc_Char)0x6f,  /* [6875] */
    (xdc_Char)0x64,  /* [6876] */
    (xdc_Char)0x75,  /* [6877] */
    (xdc_Char)0x6c,  /* [6878] */
    (xdc_Char)0x65,  /* [6879] */
    (xdc_Char)0x20,  /* [6880] */
    (xdc_Char)0x6e,  /* [6881] */
    (xdc_Char)0x6f,  /* [6882] */
    (xdc_Char)0x74,  /* [6883] */
    (xdc_Char)0x20,  /* [6884] */
    (xdc_Char)0x66,  /* [6885] */
    (xdc_Char)0x6f,  /* [6886] */
    (xdc_Char)0x75,  /* [6887] */
    (xdc_Char)0x6e,  /* [6888] */
    (xdc_Char)0x64,  /* [6889] */
    (xdc_Char)0x20,  /* [6890] */
    (xdc_Char)0x61,  /* [6891] */
    (xdc_Char)0x74,  /* [6892] */
    (xdc_Char)0x20,  /* [6893] */
    (xdc_Char)0x25,  /* [6894] */
    (xdc_Char)0x24,  /* [6895] */
    (xdc_Char)0x46,  /* [6896] */
    (xdc_Char)0x2e,  /* [6897] */
    (xdc_Char)0x20,  /* [6898] */
    (xdc_Char)0x5b,  /* [6899] */
    (xdc_Char)0x4d,  /* [6900] */
    (xdc_Char)0x4f,  /* [6901] */
    (xdc_Char)0x44,  /* [6902] */
    (xdc_Char)0x55,  /* [6903] */
    (xdc_Char)0x4c,  /* [6904] */
    (xdc_Char)0x45,  /* [6905] */
    (xdc_Char)0x5f,  /* [6906] */
    (xdc_Char)0x49,  /* [6907] */
    (xdc_Char)0x44,  /* [6908] */
    (xdc_Char)0x5d,  /* [6909] */
    (xdc_Char)0x30,  /* [6910] */
    (xdc_Char)0x78,  /* [6911] */
    (xdc_Char)0x25,  /* [6912] */
    (xdc_Char)0x78,  /* [6913] */
    (xdc_Char)0x2e,  /* [6914] */
    (xdc_Char)0x0,  /* [6915] */
    (xdc_Char)0x45,  /* [6916] */
    (xdc_Char)0x52,  /* [6917] */
    (xdc_Char)0x52,  /* [6918] */
    (xdc_Char)0x4f,  /* [6919] */
    (xdc_Char)0x52,  /* [6920] */
    (xdc_Char)0x3a,  /* [6921] */
    (xdc_Char)0x20,  /* [6922] */
    (xdc_Char)0x46,  /* [6923] */
    (xdc_Char)0x6c,  /* [6924] */
    (xdc_Char)0x6f,  /* [6925] */
    (xdc_Char)0x61,  /* [6926] */
    (xdc_Char)0x74,  /* [6927] */
    (xdc_Char)0x69,  /* [6928] */
    (xdc_Char)0x6e,  /* [6929] */
    (xdc_Char)0x67,  /* [6930] */
    (xdc_Char)0x20,  /* [6931] */
    (xdc_Char)0x50,  /* [6932] */
    (xdc_Char)0x6f,  /* [6933] */
    (xdc_Char)0x69,  /* [6934] */
    (xdc_Char)0x6e,  /* [6935] */
    (xdc_Char)0x74,  /* [6936] */
    (xdc_Char)0x20,  /* [6937] */
    (xdc_Char)0x45,  /* [6938] */
    (xdc_Char)0x72,  /* [6939] */
    (xdc_Char)0x72,  /* [6940] */
    (xdc_Char)0x6f,  /* [6941] */
    (xdc_Char)0x72,  /* [6942] */
    (xdc_Char)0x20,  /* [6943] */
    (xdc_Char)0x61,  /* [6944] */
    (xdc_Char)0x74,  /* [6945] */
    (xdc_Char)0x20,  /* [6946] */
    (xdc_Char)0x25,  /* [6947] */
    (xdc_Char)0x24,  /* [6948] */
    (xdc_Char)0x46,  /* [6949] */
    (xdc_Char)0x2e,  /* [6950] */
    (xdc_Char)0x0,  /* [6951] */
    (xdc_Char)0x45,  /* [6952] */
    (xdc_Char)0x52,  /* [6953] */
    (xdc_Char)0x52,  /* [6954] */
    (xdc_Char)0x4f,  /* [6955] */
    (xdc_Char)0x52,  /* [6956] */
    (xdc_Char)0x3a,  /* [6957] */
    (xdc_Char)0x20,  /* [6958] */
    (xdc_Char)0x49,  /* [6959] */
    (xdc_Char)0x6e,  /* [6960] */
    (xdc_Char)0x76,  /* [6961] */
    (xdc_Char)0x61,  /* [6962] */
    (xdc_Char)0x6c,  /* [6963] */
    (xdc_Char)0x69,  /* [6964] */
    (xdc_Char)0x64,  /* [6965] */
    (xdc_Char)0x20,  /* [6966] */
    (xdc_Char)0x50,  /* [6967] */
    (xdc_Char)0x61,  /* [6968] */
    (xdc_Char)0x72,  /* [6969] */
    (xdc_Char)0x61,  /* [6970] */
    (xdc_Char)0x6d,  /* [6971] */
    (xdc_Char)0x65,  /* [6972] */
    (xdc_Char)0x74,  /* [6973] */
    (xdc_Char)0x65,  /* [6974] */
    (xdc_Char)0x72,  /* [6975] */
    (xdc_Char)0x20,  /* [6976] */
    (xdc_Char)0x61,  /* [6977] */
    (xdc_Char)0x74,  /* [6978] */
    (xdc_Char)0x20,  /* [6979] */
    (xdc_Char)0x25,  /* [6980] */
    (xdc_Char)0x24,  /* [6981] */
    (xdc_Char)0x46,  /* [6982] */
    (xdc_Char)0x2e,  /* [6983] */
    (xdc_Char)0x20,  /* [6984] */
    (xdc_Char)0x5b,  /* [6985] */
    (xdc_Char)0x50,  /* [6986] */
    (xdc_Char)0x61,  /* [6987] */
    (xdc_Char)0x72,  /* [6988] */
    (xdc_Char)0x61,  /* [6989] */
    (xdc_Char)0x6d,  /* [6990] */
    (xdc_Char)0x4e,  /* [6991] */
    (xdc_Char)0x75,  /* [6992] */
    (xdc_Char)0x6d,  /* [6993] */
    (xdc_Char)0x5d,  /* [6994] */
    (xdc_Char)0x25,  /* [6995] */
    (xdc_Char)0x64,  /* [6996] */
    (xdc_Char)0x20,  /* [6997] */
    (xdc_Char)0x5b,  /* [6998] */
    (xdc_Char)0x50,  /* [6999] */
    (xdc_Char)0x61,  /* [7000] */
    (xdc_Char)0x72,  /* [7001] */
    (xdc_Char)0x61,  /* [7002] */
    (xdc_Char)0x6d,  /* [7003] */
    (xdc_Char)0x56,  /* [7004] */
    (xdc_Char)0x61,  /* [7005] */
    (xdc_Char)0x6c,  /* [7006] */
    (xdc_Char)0x75,  /* [7007] */
    (xdc_Char)0x65,  /* [7008] */
    (xdc_Char)0x5d,  /* [7009] */
    (xdc_Char)0x30,  /* [7010] */
    (xdc_Char)0x78,  /* [7011] */
    (xdc_Char)0x25,  /* [7012] */
    (xdc_Char)0x78,  /* [7013] */
    (xdc_Char)0x0,  /* [7014] */
    (xdc_Char)0x57,  /* [7015] */
    (xdc_Char)0x41,  /* [7016] */
    (xdc_Char)0x52,  /* [7017] */
    (xdc_Char)0x4e,  /* [7018] */
    (xdc_Char)0x49,  /* [7019] */
    (xdc_Char)0x4e,  /* [7020] */
    (xdc_Char)0x47,  /* [7021] */
    (xdc_Char)0x3a,  /* [7022] */
    (xdc_Char)0x20,  /* [7023] */
    (xdc_Char)0x45,  /* [7024] */
    (xdc_Char)0x76,  /* [7025] */
    (xdc_Char)0x65,  /* [7026] */
    (xdc_Char)0x6e,  /* [7027] */
    (xdc_Char)0x74,  /* [7028] */
    (xdc_Char)0x43,  /* [7029] */
    (xdc_Char)0x6f,  /* [7030] */
    (xdc_Char)0x64,  /* [7031] */
    (xdc_Char)0x65,  /* [7032] */
    (xdc_Char)0x3a,  /* [7033] */
    (xdc_Char)0x30,  /* [7034] */
    (xdc_Char)0x78,  /* [7035] */
    (xdc_Char)0x25,  /* [7036] */
    (xdc_Char)0x78,  /* [7037] */
    (xdc_Char)0x0,  /* [7038] */
    (xdc_Char)0x57,  /* [7039] */
    (xdc_Char)0x41,  /* [7040] */
    (xdc_Char)0x52,  /* [7041] */
    (xdc_Char)0x4e,  /* [7042] */
    (xdc_Char)0x49,  /* [7043] */
    (xdc_Char)0x4e,  /* [7044] */
    (xdc_Char)0x47,  /* [7045] */
    (xdc_Char)0x3a,  /* [7046] */
    (xdc_Char)0x20,  /* [7047] */
    (xdc_Char)0x45,  /* [7048] */
    (xdc_Char)0x76,  /* [7049] */
    (xdc_Char)0x65,  /* [7050] */
    (xdc_Char)0x6e,  /* [7051] */
    (xdc_Char)0x74,  /* [7052] */
    (xdc_Char)0x43,  /* [7053] */
    (xdc_Char)0x6f,  /* [7054] */
    (xdc_Char)0x64,  /* [7055] */
    (xdc_Char)0x65,  /* [7056] */
    (xdc_Char)0x3a,  /* [7057] */
    (xdc_Char)0x30,  /* [7058] */
    (xdc_Char)0x78,  /* [7059] */
    (xdc_Char)0x25,  /* [7060] */
    (xdc_Char)0x78,  /* [7061] */
    (xdc_Char)0x2e,  /* [7062] */
    (xdc_Char)0x20,  /* [7063] */
    (xdc_Char)0x25,  /* [7064] */
    (xdc_Char)0x24,  /* [7065] */
    (xdc_Char)0x53,  /* [7066] */
    (xdc_Char)0x0,  /* [7067] */
    (xdc_Char)0x49,  /* [7068] */
    (xdc_Char)0x4e,  /* [7069] */
    (xdc_Char)0x46,  /* [7070] */
    (xdc_Char)0x4f,  /* [7071] */
    (xdc_Char)0x3a,  /* [7072] */
    (xdc_Char)0x20,  /* [7073] */
    (xdc_Char)0x45,  /* [7074] */
    (xdc_Char)0x76,  /* [7075] */
    (xdc_Char)0x65,  /* [7076] */
    (xdc_Char)0x6e,  /* [7077] */
    (xdc_Char)0x74,  /* [7078] */
    (xdc_Char)0x43,  /* [7079] */
    (xdc_Char)0x6f,  /* [7080] */
    (xdc_Char)0x64,  /* [7081] */
    (xdc_Char)0x65,  /* [7082] */
    (xdc_Char)0x3a,  /* [7083] */
    (xdc_Char)0x20,  /* [7084] */
    (xdc_Char)0x30,  /* [7085] */
    (xdc_Char)0x78,  /* [7086] */
    (xdc_Char)0x25,  /* [7087] */
    (xdc_Char)0x78,  /* [7088] */
    (xdc_Char)0x0,  /* [7089] */
    (xdc_Char)0x49,  /* [7090] */
    (xdc_Char)0x4e,  /* [7091] */
    (xdc_Char)0x46,  /* [7092] */
    (xdc_Char)0x4f,  /* [7093] */
    (xdc_Char)0x3a,  /* [7094] */
    (xdc_Char)0x20,  /* [7095] */
    (xdc_Char)0x45,  /* [7096] */
    (xdc_Char)0x76,  /* [7097] */
    (xdc_Char)0x65,  /* [7098] */
    (xdc_Char)0x6e,  /* [7099] */
    (xdc_Char)0x74,  /* [7100] */
    (xdc_Char)0x43,  /* [7101] */
    (xdc_Char)0x6f,  /* [7102] */
    (xdc_Char)0x64,  /* [7103] */
    (xdc_Char)0x65,  /* [7104] */
    (xdc_Char)0x3a,  /* [7105] */
    (xdc_Char)0x30,  /* [7106] */
    (xdc_Char)0x78,  /* [7107] */
    (xdc_Char)0x25,  /* [7108] */
    (xdc_Char)0x78,  /* [7109] */
    (xdc_Char)0x2e,  /* [7110] */
    (xdc_Char)0x20,  /* [7111] */
    (xdc_Char)0x20,  /* [7112] */
    (xdc_Char)0x25,  /* [7113] */
    (xdc_Char)0x24,  /* [7114] */
    (xdc_Char)0x53,  /* [7115] */
    (xdc_Char)0x0,  /* [7116] */
    (xdc_Char)0x44,  /* [7117] */
    (xdc_Char)0x45,  /* [7118] */
    (xdc_Char)0x54,  /* [7119] */
    (xdc_Char)0x41,  /* [7120] */
    (xdc_Char)0x49,  /* [7121] */
    (xdc_Char)0x4c,  /* [7122] */
    (xdc_Char)0x3a,  /* [7123] */
    (xdc_Char)0x20,  /* [7124] */
    (xdc_Char)0x45,  /* [7125] */
    (xdc_Char)0x76,  /* [7126] */
    (xdc_Char)0x65,  /* [7127] */
    (xdc_Char)0x6e,  /* [7128] */
    (xdc_Char)0x74,  /* [7129] */
    (xdc_Char)0x43,  /* [7130] */
    (xdc_Char)0x6f,  /* [7131] */
    (xdc_Char)0x64,  /* [7132] */
    (xdc_Char)0x65,  /* [7133] */
    (xdc_Char)0x3a,  /* [7134] */
    (xdc_Char)0x30,  /* [7135] */
    (xdc_Char)0x78,  /* [7136] */
    (xdc_Char)0x25,  /* [7137] */
    (xdc_Char)0x78,  /* [7138] */
    (xdc_Char)0x0,  /* [7139] */
    (xdc_Char)0x44,  /* [7140] */
    (xdc_Char)0x45,  /* [7141] */
    (xdc_Char)0x54,  /* [7142] */
    (xdc_Char)0x41,  /* [7143] */
    (xdc_Char)0x49,  /* [7144] */
    (xdc_Char)0x4c,  /* [7145] */
    (xdc_Char)0x3a,  /* [7146] */
    (xdc_Char)0x20,  /* [7147] */
    (xdc_Char)0x45,  /* [7148] */
    (xdc_Char)0x76,  /* [7149] */
    (xdc_Char)0x65,  /* [7150] */
    (xdc_Char)0x6e,  /* [7151] */
    (xdc_Char)0x74,  /* [7152] */
    (xdc_Char)0x43,  /* [7153] */
    (xdc_Char)0x6f,  /* [7154] */
    (xdc_Char)0x64,  /* [7155] */
    (xdc_Char)0x65,  /* [7156] */
    (xdc_Char)0x3a,  /* [7157] */
    (xdc_Char)0x30,  /* [7158] */
    (xdc_Char)0x78,  /* [7159] */
    (xdc_Char)0x25,  /* [7160] */
    (xdc_Char)0x78,  /* [7161] */
    (xdc_Char)0x2e,  /* [7162] */
    (xdc_Char)0x20,  /* [7163] */
    (xdc_Char)0x20,  /* [7164] */
    (xdc_Char)0x25,  /* [7165] */
    (xdc_Char)0x24,  /* [7166] */
    (xdc_Char)0x53,  /* [7167] */
    (xdc_Char)0x0,  /* [7168] */
    (xdc_Char)0x56,  /* [7169] */
    (xdc_Char)0x41,  /* [7170] */
    (xdc_Char)0x4c,  /* [7171] */
    (xdc_Char)0x55,  /* [7172] */
    (xdc_Char)0x45,  /* [7173] */
    (xdc_Char)0x3d,  /* [7174] */
    (xdc_Char)0x25,  /* [7175] */
    (xdc_Char)0x64,  /* [7176] */
    (xdc_Char)0x20,  /* [7177] */
    (xdc_Char)0x28,  /* [7178] */
    (xdc_Char)0x41,  /* [7179] */
    (xdc_Char)0x75,  /* [7180] */
    (xdc_Char)0x78,  /* [7181] */
    (xdc_Char)0x44,  /* [7182] */
    (xdc_Char)0x61,  /* [7183] */
    (xdc_Char)0x74,  /* [7184] */
    (xdc_Char)0x61,  /* [7185] */
    (xdc_Char)0x3d,  /* [7186] */
    (xdc_Char)0x25,  /* [7187] */
    (xdc_Char)0x64,  /* [7188] */
    (xdc_Char)0x2c,  /* [7189] */
    (xdc_Char)0x20,  /* [7190] */
    (xdc_Char)0x25,  /* [7191] */
    (xdc_Char)0x64,  /* [7192] */
    (xdc_Char)0x29,  /* [7193] */
    (xdc_Char)0x20,  /* [7194] */
    (xdc_Char)0x4b,  /* [7195] */
    (xdc_Char)0x65,  /* [7196] */
    (xdc_Char)0x79,  /* [7197] */
    (xdc_Char)0x3a,  /* [7198] */
    (xdc_Char)0x25,  /* [7199] */
    (xdc_Char)0x24,  /* [7200] */
    (xdc_Char)0x53,  /* [7201] */
    (xdc_Char)0x0,  /* [7202] */
    (xdc_Char)0x52,  /* [7203] */
    (xdc_Char)0x6f,  /* [7204] */
    (xdc_Char)0x75,  /* [7205] */
    (xdc_Char)0x6e,  /* [7206] */
    (xdc_Char)0x64,  /* [7207] */
    (xdc_Char)0x74,  /* [7208] */
    (xdc_Char)0x72,  /* [7209] */
    (xdc_Char)0x69,  /* [7210] */
    (xdc_Char)0x70,  /* [7211] */
    (xdc_Char)0x5f,  /* [7212] */
    (xdc_Char)0x53,  /* [7213] */
    (xdc_Char)0x74,  /* [7214] */
    (xdc_Char)0x61,  /* [7215] */
    (xdc_Char)0x72,  /* [7216] */
    (xdc_Char)0x74,  /* [7217] */
    (xdc_Char)0x3a,  /* [7218] */
    (xdc_Char)0x20,  /* [7219] */
    (xdc_Char)0x25,  /* [7220] */
    (xdc_Char)0x24,  /* [7221] */
    (xdc_Char)0x53,  /* [7222] */
    (xdc_Char)0x0,  /* [7223] */
    (xdc_Char)0x52,  /* [7224] */
    (xdc_Char)0x6f,  /* [7225] */
    (xdc_Char)0x75,  /* [7226] */
    (xdc_Char)0x6e,  /* [7227] */
    (xdc_Char)0x64,  /* [7228] */
    (xdc_Char)0x74,  /* [7229] */
    (xdc_Char)0x72,  /* [7230] */
    (xdc_Char)0x69,  /* [7231] */
    (xdc_Char)0x70,  /* [7232] */
    (xdc_Char)0x5f,  /* [7233] */
    (xdc_Char)0x53,  /* [7234] */
    (xdc_Char)0x74,  /* [7235] */
    (xdc_Char)0x6f,  /* [7236] */
    (xdc_Char)0x70,  /* [7237] */
    (xdc_Char)0x3a,  /* [7238] */
    (xdc_Char)0x20,  /* [7239] */
    (xdc_Char)0x25,  /* [7240] */
    (xdc_Char)0x24,  /* [7241] */
    (xdc_Char)0x53,  /* [7242] */
    (xdc_Char)0x0,  /* [7243] */
    (xdc_Char)0x52,  /* [7244] */
    (xdc_Char)0x6f,  /* [7245] */
    (xdc_Char)0x75,  /* [7246] */
    (xdc_Char)0x6e,  /* [7247] */
    (xdc_Char)0x64,  /* [7248] */
    (xdc_Char)0x74,  /* [7249] */
    (xdc_Char)0x72,  /* [7250] */
    (xdc_Char)0x69,  /* [7251] */
    (xdc_Char)0x70,  /* [7252] */
    (xdc_Char)0x5f,  /* [7253] */
    (xdc_Char)0x53,  /* [7254] */
    (xdc_Char)0x74,  /* [7255] */
    (xdc_Char)0x61,  /* [7256] */
    (xdc_Char)0x72,  /* [7257] */
    (xdc_Char)0x74,  /* [7258] */
    (xdc_Char)0x49,  /* [7259] */
    (xdc_Char)0x6e,  /* [7260] */
    (xdc_Char)0x73,  /* [7261] */
    (xdc_Char)0x74,  /* [7262] */
    (xdc_Char)0x61,  /* [7263] */
    (xdc_Char)0x6e,  /* [7264] */
    (xdc_Char)0x63,  /* [7265] */
    (xdc_Char)0x65,  /* [7266] */
    (xdc_Char)0x3a,  /* [7267] */
    (xdc_Char)0x20,  /* [7268] */
    (xdc_Char)0x25,  /* [7269] */
    (xdc_Char)0x24,  /* [7270] */
    (xdc_Char)0x53,  /* [7271] */
    (xdc_Char)0x0,  /* [7272] */
    (xdc_Char)0x52,  /* [7273] */
    (xdc_Char)0x6f,  /* [7274] */
    (xdc_Char)0x75,  /* [7275] */
    (xdc_Char)0x6e,  /* [7276] */
    (xdc_Char)0x64,  /* [7277] */
    (xdc_Char)0x74,  /* [7278] */
    (xdc_Char)0x72,  /* [7279] */
    (xdc_Char)0x69,  /* [7280] */
    (xdc_Char)0x70,  /* [7281] */
    (xdc_Char)0x5f,  /* [7282] */
    (xdc_Char)0x53,  /* [7283] */
    (xdc_Char)0x74,  /* [7284] */
    (xdc_Char)0x6f,  /* [7285] */
    (xdc_Char)0x70,  /* [7286] */
    (xdc_Char)0x49,  /* [7287] */
    (xdc_Char)0x6e,  /* [7288] */
    (xdc_Char)0x73,  /* [7289] */
    (xdc_Char)0x74,  /* [7290] */
    (xdc_Char)0x61,  /* [7291] */
    (xdc_Char)0x6e,  /* [7292] */
    (xdc_Char)0x63,  /* [7293] */
    (xdc_Char)0x65,  /* [7294] */
    (xdc_Char)0x3a,  /* [7295] */
    (xdc_Char)0x20,  /* [7296] */
    (xdc_Char)0x25,  /* [7297] */
    (xdc_Char)0x24,  /* [7298] */
    (xdc_Char)0x53,  /* [7299] */
    (xdc_Char)0x0,  /* [7300] */
    (xdc_Char)0x52,  /* [7301] */
    (xdc_Char)0x6f,  /* [7302] */
    (xdc_Char)0x75,  /* [7303] */
    (xdc_Char)0x6e,  /* [7304] */
    (xdc_Char)0x64,  /* [7305] */
    (xdc_Char)0x74,  /* [7306] */
    (xdc_Char)0x72,  /* [7307] */
    (xdc_Char)0x69,  /* [7308] */
    (xdc_Char)0x70,  /* [7309] */
    (xdc_Char)0x5f,  /* [7310] */
    (xdc_Char)0x53,  /* [7311] */
    (xdc_Char)0x74,  /* [7312] */
    (xdc_Char)0x61,  /* [7313] */
    (xdc_Char)0x72,  /* [7314] */
    (xdc_Char)0x74,  /* [7315] */
    (xdc_Char)0x49,  /* [7316] */
    (xdc_Char)0x6e,  /* [7317] */
    (xdc_Char)0x73,  /* [7318] */
    (xdc_Char)0x74,  /* [7319] */
    (xdc_Char)0x61,  /* [7320] */
    (xdc_Char)0x6e,  /* [7321] */
    (xdc_Char)0x63,  /* [7322] */
    (xdc_Char)0x65,  /* [7323] */
    (xdc_Char)0x57,  /* [7324] */
    (xdc_Char)0x69,  /* [7325] */
    (xdc_Char)0x74,  /* [7326] */
    (xdc_Char)0x68,  /* [7327] */
    (xdc_Char)0x41,  /* [7328] */
    (xdc_Char)0x64,  /* [7329] */
    (xdc_Char)0x72,  /* [7330] */
    (xdc_Char)0x73,  /* [7331] */
    (xdc_Char)0x3a,  /* [7332] */
    (xdc_Char)0x20,  /* [7333] */
    (xdc_Char)0x25,  /* [7334] */
    (xdc_Char)0x24,  /* [7335] */
    (xdc_Char)0x53,  /* [7336] */
    (xdc_Char)0x0,  /* [7337] */
    (xdc_Char)0x52,  /* [7338] */
    (xdc_Char)0x6f,  /* [7339] */
    (xdc_Char)0x75,  /* [7340] */
    (xdc_Char)0x6e,  /* [7341] */
    (xdc_Char)0x64,  /* [7342] */
    (xdc_Char)0x74,  /* [7343] */
    (xdc_Char)0x72,  /* [7344] */
    (xdc_Char)0x69,  /* [7345] */
    (xdc_Char)0x70,  /* [7346] */
    (xdc_Char)0x5f,  /* [7347] */
    (xdc_Char)0x53,  /* [7348] */
    (xdc_Char)0x74,  /* [7349] */
    (xdc_Char)0x6f,  /* [7350] */
    (xdc_Char)0x70,  /* [7351] */
    (xdc_Char)0x49,  /* [7352] */
    (xdc_Char)0x6e,  /* [7353] */
    (xdc_Char)0x73,  /* [7354] */
    (xdc_Char)0x74,  /* [7355] */
    (xdc_Char)0x61,  /* [7356] */
    (xdc_Char)0x6e,  /* [7357] */
    (xdc_Char)0x63,  /* [7358] */
    (xdc_Char)0x65,  /* [7359] */
    (xdc_Char)0x57,  /* [7360] */
    (xdc_Char)0x69,  /* [7361] */
    (xdc_Char)0x74,  /* [7362] */
    (xdc_Char)0x68,  /* [7363] */
    (xdc_Char)0x41,  /* [7364] */
    (xdc_Char)0x64,  /* [7365] */
    (xdc_Char)0x72,  /* [7366] */
    (xdc_Char)0x73,  /* [7367] */
    (xdc_Char)0x3a,  /* [7368] */
    (xdc_Char)0x20,  /* [7369] */
    (xdc_Char)0x25,  /* [7370] */
    (xdc_Char)0x24,  /* [7371] */
    (xdc_Char)0x53,  /* [7372] */
    (xdc_Char)0x0,  /* [7373] */
    (xdc_Char)0x52,  /* [7374] */
    (xdc_Char)0x6f,  /* [7375] */
    (xdc_Char)0x75,  /* [7376] */
    (xdc_Char)0x6e,  /* [7377] */
    (xdc_Char)0x64,  /* [7378] */
    (xdc_Char)0x74,  /* [7379] */
    (xdc_Char)0x72,  /* [7380] */
    (xdc_Char)0x69,  /* [7381] */
    (xdc_Char)0x70,  /* [7382] */
    (xdc_Char)0x5f,  /* [7383] */
    (xdc_Char)0x53,  /* [7384] */
    (xdc_Char)0x74,  /* [7385] */
    (xdc_Char)0x61,  /* [7386] */
    (xdc_Char)0x72,  /* [7387] */
    (xdc_Char)0x74,  /* [7388] */
    (xdc_Char)0x49,  /* [7389] */
    (xdc_Char)0x6e,  /* [7390] */
    (xdc_Char)0x73,  /* [7391] */
    (xdc_Char)0x74,  /* [7392] */
    (xdc_Char)0x61,  /* [7393] */
    (xdc_Char)0x6e,  /* [7394] */
    (xdc_Char)0x63,  /* [7395] */
    (xdc_Char)0x65,  /* [7396] */
    (xdc_Char)0x57,  /* [7397] */
    (xdc_Char)0x69,  /* [7398] */
    (xdc_Char)0x74,  /* [7399] */
    (xdc_Char)0x68,  /* [7400] */
    (xdc_Char)0x53,  /* [7401] */
    (xdc_Char)0x74,  /* [7402] */
    (xdc_Char)0x72,  /* [7403] */
    (xdc_Char)0x3a,  /* [7404] */
    (xdc_Char)0x20,  /* [7405] */
    (xdc_Char)0x25,  /* [7406] */
    (xdc_Char)0x24,  /* [7407] */
    (xdc_Char)0x53,  /* [7408] */
    (xdc_Char)0x0,  /* [7409] */
    (xdc_Char)0x52,  /* [7410] */
    (xdc_Char)0x6f,  /* [7411] */
    (xdc_Char)0x75,  /* [7412] */
    (xdc_Char)0x6e,  /* [7413] */
    (xdc_Char)0x64,  /* [7414] */
    (xdc_Char)0x74,  /* [7415] */
    (xdc_Char)0x72,  /* [7416] */
    (xdc_Char)0x69,  /* [7417] */
    (xdc_Char)0x70,  /* [7418] */
    (xdc_Char)0x5f,  /* [7419] */
    (xdc_Char)0x53,  /* [7420] */
    (xdc_Char)0x74,  /* [7421] */
    (xdc_Char)0x6f,  /* [7422] */
    (xdc_Char)0x70,  /* [7423] */
    (xdc_Char)0x49,  /* [7424] */
    (xdc_Char)0x6e,  /* [7425] */
    (xdc_Char)0x73,  /* [7426] */
    (xdc_Char)0x74,  /* [7427] */
    (xdc_Char)0x61,  /* [7428] */
    (xdc_Char)0x6e,  /* [7429] */
    (xdc_Char)0x63,  /* [7430] */
    (xdc_Char)0x65,  /* [7431] */
    (xdc_Char)0x57,  /* [7432] */
    (xdc_Char)0x69,  /* [7433] */
    (xdc_Char)0x74,  /* [7434] */
    (xdc_Char)0x68,  /* [7435] */
    (xdc_Char)0x53,  /* [7436] */
    (xdc_Char)0x74,  /* [7437] */
    (xdc_Char)0x72,  /* [7438] */
    (xdc_Char)0x3a,  /* [7439] */
    (xdc_Char)0x20,  /* [7440] */
    (xdc_Char)0x25,  /* [7441] */
    (xdc_Char)0x24,  /* [7442] */
    (xdc_Char)0x53,  /* [7443] */
    (xdc_Char)0x0,  /* [7444] */
    (xdc_Char)0x43,  /* [7445] */
    (xdc_Char)0x50,  /* [7446] */
    (xdc_Char)0x55,  /* [7447] */
    (xdc_Char)0x20,  /* [7448] */
    (xdc_Char)0x4c,  /* [7449] */
    (xdc_Char)0x6f,  /* [7450] */
    (xdc_Char)0x61,  /* [7451] */
    (xdc_Char)0x64,  /* [7452] */
    (xdc_Char)0x3a,  /* [7453] */
    (xdc_Char)0x20,  /* [7454] */
    (xdc_Char)0x4e,  /* [7455] */
    (xdc_Char)0x75,  /* [7456] */
    (xdc_Char)0x6d,  /* [7457] */
    (xdc_Char)0x43,  /* [7458] */
    (xdc_Char)0x79,  /* [7459] */
    (xdc_Char)0x63,  /* [7460] */
    (xdc_Char)0x6c,  /* [7461] */
    (xdc_Char)0x65,  /* [7462] */
    (xdc_Char)0x73,  /* [7463] */
    (xdc_Char)0x3d,  /* [7464] */
    (xdc_Char)0x25,  /* [7465] */
    (xdc_Char)0x64,  /* [7466] */
    (xdc_Char)0x0,  /* [7467] */
    (xdc_Char)0x43,  /* [7468] */
    (xdc_Char)0x50,  /* [7469] */
    (xdc_Char)0x55,  /* [7470] */
    (xdc_Char)0x20,  /* [7471] */
    (xdc_Char)0x4c,  /* [7472] */
    (xdc_Char)0x6f,  /* [7473] */
    (xdc_Char)0x61,  /* [7474] */
    (xdc_Char)0x64,  /* [7475] */
    (xdc_Char)0x20,  /* [7476] */
    (xdc_Char)0x66,  /* [7477] */
    (xdc_Char)0x6f,  /* [7478] */
    (xdc_Char)0x72,  /* [7479] */
    (xdc_Char)0x20,  /* [7480] */
    (xdc_Char)0x25,  /* [7481] */
    (xdc_Char)0x73,  /* [7482] */
    (xdc_Char)0x20,  /* [7483] */
    (xdc_Char)0x28,  /* [7484] */
    (xdc_Char)0x69,  /* [7485] */
    (xdc_Char)0x6e,  /* [7486] */
    (xdc_Char)0x73,  /* [7487] */
    (xdc_Char)0x74,  /* [7488] */
    (xdc_Char)0x61,  /* [7489] */
    (xdc_Char)0x6e,  /* [7490] */
    (xdc_Char)0x63,  /* [7491] */
    (xdc_Char)0x65,  /* [7492] */
    (xdc_Char)0x49,  /* [7493] */
    (xdc_Char)0x64,  /* [7494] */
    (xdc_Char)0x20,  /* [7495] */
    (xdc_Char)0x3d,  /* [7496] */
    (xdc_Char)0x20,  /* [7497] */
    (xdc_Char)0x30,  /* [7498] */
    (xdc_Char)0x78,  /* [7499] */
    (xdc_Char)0x25,  /* [7500] */
    (xdc_Char)0x78,  /* [7501] */
    (xdc_Char)0x29,  /* [7502] */
    (xdc_Char)0x3a,  /* [7503] */
    (xdc_Char)0x20,  /* [7504] */
    (xdc_Char)0x4e,  /* [7505] */
    (xdc_Char)0x75,  /* [7506] */
    (xdc_Char)0x6d,  /* [7507] */
    (xdc_Char)0x43,  /* [7508] */
    (xdc_Char)0x79,  /* [7509] */
    (xdc_Char)0x63,  /* [7510] */
    (xdc_Char)0x6c,  /* [7511] */
    (xdc_Char)0x65,  /* [7512] */
    (xdc_Char)0x73,  /* [7513] */
    (xdc_Char)0x3d,  /* [7514] */
    (xdc_Char)0x25,  /* [7515] */
    (xdc_Char)0x64,  /* [7516] */
    (xdc_Char)0x0,  /* [7517] */
    (xdc_Char)0x42,  /* [7518] */
    (xdc_Char)0x79,  /* [7519] */
    (xdc_Char)0x74,  /* [7520] */
    (xdc_Char)0x65,  /* [7521] */
    (xdc_Char)0x73,  /* [7522] */
    (xdc_Char)0x20,  /* [7523] */
    (xdc_Char)0x50,  /* [7524] */
    (xdc_Char)0x72,  /* [7525] */
    (xdc_Char)0x6f,  /* [7526] */
    (xdc_Char)0x63,  /* [7527] */
    (xdc_Char)0x65,  /* [7528] */
    (xdc_Char)0x73,  /* [7529] */
    (xdc_Char)0x73,  /* [7530] */
    (xdc_Char)0x65,  /* [7531] */
    (xdc_Char)0x64,  /* [7532] */
    (xdc_Char)0x20,  /* [7533] */
    (xdc_Char)0x62,  /* [7534] */
    (xdc_Char)0x79,  /* [7535] */
    (xdc_Char)0x20,  /* [7536] */
    (xdc_Char)0x25,  /* [7537] */
    (xdc_Char)0x73,  /* [7538] */
    (xdc_Char)0x3a,  /* [7539] */
    (xdc_Char)0x20,  /* [7540] */
    (xdc_Char)0x4e,  /* [7541] */
    (xdc_Char)0x75,  /* [7542] */
    (xdc_Char)0x6d,  /* [7543] */
    (xdc_Char)0x42,  /* [7544] */
    (xdc_Char)0x79,  /* [7545] */
    (xdc_Char)0x74,  /* [7546] */
    (xdc_Char)0x65,  /* [7547] */
    (xdc_Char)0x73,  /* [7548] */
    (xdc_Char)0x3d,  /* [7549] */
    (xdc_Char)0x30,  /* [7550] */
    (xdc_Char)0x78,  /* [7551] */
    (xdc_Char)0x25,  /* [7552] */
    (xdc_Char)0x78,  /* [7553] */
    (xdc_Char)0x0,  /* [7554] */
    (xdc_Char)0x42,  /* [7555] */
    (xdc_Char)0x79,  /* [7556] */
    (xdc_Char)0x74,  /* [7557] */
    (xdc_Char)0x65,  /* [7558] */
    (xdc_Char)0x73,  /* [7559] */
    (xdc_Char)0x20,  /* [7560] */
    (xdc_Char)0x50,  /* [7561] */
    (xdc_Char)0x72,  /* [7562] */
    (xdc_Char)0x6f,  /* [7563] */
    (xdc_Char)0x63,  /* [7564] */
    (xdc_Char)0x65,  /* [7565] */
    (xdc_Char)0x73,  /* [7566] */
    (xdc_Char)0x73,  /* [7567] */
    (xdc_Char)0x65,  /* [7568] */
    (xdc_Char)0x64,  /* [7569] */
    (xdc_Char)0x20,  /* [7570] */
    (xdc_Char)0x61,  /* [7571] */
    (xdc_Char)0x74,  /* [7572] */
    (xdc_Char)0x20,  /* [7573] */
    (xdc_Char)0x25,  /* [7574] */
    (xdc_Char)0x24,  /* [7575] */
    (xdc_Char)0x46,  /* [7576] */
    (xdc_Char)0x20,  /* [7577] */
    (xdc_Char)0x28,  /* [7578] */
    (xdc_Char)0x49,  /* [7579] */
    (xdc_Char)0x6e,  /* [7580] */
    (xdc_Char)0x73,  /* [7581] */
    (xdc_Char)0x74,  /* [7582] */
    (xdc_Char)0x61,  /* [7583] */
    (xdc_Char)0x6e,  /* [7584] */
    (xdc_Char)0x63,  /* [7585] */
    (xdc_Char)0x65,  /* [7586] */
    (xdc_Char)0x49,  /* [7587] */
    (xdc_Char)0x64,  /* [7588] */
    (xdc_Char)0x20,  /* [7589] */
    (xdc_Char)0x30,  /* [7590] */
    (xdc_Char)0x78,  /* [7591] */
    (xdc_Char)0x25,  /* [7592] */
    (xdc_Char)0x78,  /* [7593] */
    (xdc_Char)0x29,  /* [7594] */
    (xdc_Char)0x3a,  /* [7595] */
    (xdc_Char)0x20,  /* [7596] */
    (xdc_Char)0x4e,  /* [7597] */
    (xdc_Char)0x75,  /* [7598] */
    (xdc_Char)0x6d,  /* [7599] */
    (xdc_Char)0x20,  /* [7600] */
    (xdc_Char)0x42,  /* [7601] */
    (xdc_Char)0x79,  /* [7602] */
    (xdc_Char)0x74,  /* [7603] */
    (xdc_Char)0x65,  /* [7604] */
    (xdc_Char)0x73,  /* [7605] */
    (xdc_Char)0x3d,  /* [7606] */
    (xdc_Char)0x25,  /* [7607] */
    (xdc_Char)0x64,  /* [7608] */
    (xdc_Char)0x0,  /* [7609] */
    (xdc_Char)0x57,  /* [7610] */
    (xdc_Char)0x6f,  /* [7611] */
    (xdc_Char)0x72,  /* [7612] */
    (xdc_Char)0x64,  /* [7613] */
    (xdc_Char)0x73,  /* [7614] */
    (xdc_Char)0x20,  /* [7615] */
    (xdc_Char)0x50,  /* [7616] */
    (xdc_Char)0x72,  /* [7617] */
    (xdc_Char)0x6f,  /* [7618] */
    (xdc_Char)0x63,  /* [7619] */
    (xdc_Char)0x65,  /* [7620] */
    (xdc_Char)0x73,  /* [7621] */
    (xdc_Char)0x73,  /* [7622] */
    (xdc_Char)0x65,  /* [7623] */
    (xdc_Char)0x64,  /* [7624] */
    (xdc_Char)0x20,  /* [7625] */
    (xdc_Char)0x62,  /* [7626] */
    (xdc_Char)0x79,  /* [7627] */
    (xdc_Char)0x20,  /* [7628] */
    (xdc_Char)0x25,  /* [7629] */
    (xdc_Char)0x73,  /* [7630] */
    (xdc_Char)0x3a,  /* [7631] */
    (xdc_Char)0x20,  /* [7632] */
    (xdc_Char)0x4e,  /* [7633] */
    (xdc_Char)0x75,  /* [7634] */
    (xdc_Char)0x6d,  /* [7635] */
    (xdc_Char)0x57,  /* [7636] */
    (xdc_Char)0x6f,  /* [7637] */
    (xdc_Char)0x72,  /* [7638] */
    (xdc_Char)0x64,  /* [7639] */
    (xdc_Char)0x73,  /* [7640] */
    (xdc_Char)0x3d,  /* [7641] */
    (xdc_Char)0x30,  /* [7642] */
    (xdc_Char)0x78,  /* [7643] */
    (xdc_Char)0x25,  /* [7644] */
    (xdc_Char)0x78,  /* [7645] */
    (xdc_Char)0x0,  /* [7646] */
    (xdc_Char)0x57,  /* [7647] */
    (xdc_Char)0x6f,  /* [7648] */
    (xdc_Char)0x72,  /* [7649] */
    (xdc_Char)0x64,  /* [7650] */
    (xdc_Char)0x73,  /* [7651] */
    (xdc_Char)0x20,  /* [7652] */
    (xdc_Char)0x50,  /* [7653] */
    (xdc_Char)0x72,  /* [7654] */
    (xdc_Char)0x6f,  /* [7655] */
    (xdc_Char)0x63,  /* [7656] */
    (xdc_Char)0x65,  /* [7657] */
    (xdc_Char)0x73,  /* [7658] */
    (xdc_Char)0x73,  /* [7659] */
    (xdc_Char)0x65,  /* [7660] */
    (xdc_Char)0x64,  /* [7661] */
    (xdc_Char)0x20,  /* [7662] */
    (xdc_Char)0x61,  /* [7663] */
    (xdc_Char)0x74,  /* [7664] */
    (xdc_Char)0x20,  /* [7665] */
    (xdc_Char)0x25,  /* [7666] */
    (xdc_Char)0x24,  /* [7667] */
    (xdc_Char)0x46,  /* [7668] */
    (xdc_Char)0x20,  /* [7669] */
    (xdc_Char)0x28,  /* [7670] */
    (xdc_Char)0x49,  /* [7671] */
    (xdc_Char)0x6e,  /* [7672] */
    (xdc_Char)0x73,  /* [7673] */
    (xdc_Char)0x74,  /* [7674] */
    (xdc_Char)0x61,  /* [7675] */
    (xdc_Char)0x6e,  /* [7676] */
    (xdc_Char)0x63,  /* [7677] */
    (xdc_Char)0x65,  /* [7678] */
    (xdc_Char)0x49,  /* [7679] */
    (xdc_Char)0x64,  /* [7680] */
    (xdc_Char)0x20,  /* [7681] */
    (xdc_Char)0x30,  /* [7682] */
    (xdc_Char)0x78,  /* [7683] */
    (xdc_Char)0x25,  /* [7684] */
    (xdc_Char)0x78,  /* [7685] */
    (xdc_Char)0x29,  /* [7686] */
    (xdc_Char)0x3a,  /* [7687] */
    (xdc_Char)0x20,  /* [7688] */
    (xdc_Char)0x4e,  /* [7689] */
    (xdc_Char)0x75,  /* [7690] */
    (xdc_Char)0x6d,  /* [7691] */
    (xdc_Char)0x20,  /* [7692] */
    (xdc_Char)0x57,  /* [7693] */
    (xdc_Char)0x6f,  /* [7694] */
    (xdc_Char)0x72,  /* [7695] */
    (xdc_Char)0x64,  /* [7696] */
    (xdc_Char)0x73,  /* [7697] */
    (xdc_Char)0x3d,  /* [7698] */
    (xdc_Char)0x25,  /* [7699] */
    (xdc_Char)0x64,  /* [7700] */
    (xdc_Char)0x0,  /* [7701] */
    (xdc_Char)0x48,  /* [7702] */
    (xdc_Char)0x65,  /* [7703] */
    (xdc_Char)0x61,  /* [7704] */
    (xdc_Char)0x70,  /* [7705] */
    (xdc_Char)0x20,  /* [7706] */
    (xdc_Char)0x61,  /* [7707] */
    (xdc_Char)0x74,  /* [7708] */
    (xdc_Char)0x20,  /* [7709] */
    (xdc_Char)0x25,  /* [7710] */
    (xdc_Char)0x24,  /* [7711] */
    (xdc_Char)0x46,  /* [7712] */
    (xdc_Char)0x20,  /* [7713] */
    (xdc_Char)0x28,  /* [7714] */
    (xdc_Char)0x48,  /* [7715] */
    (xdc_Char)0x65,  /* [7716] */
    (xdc_Char)0x61,  /* [7717] */
    (xdc_Char)0x70,  /* [7718] */
    (xdc_Char)0x49,  /* [7719] */
    (xdc_Char)0x64,  /* [7720] */
    (xdc_Char)0x20,  /* [7721] */
    (xdc_Char)0x30,  /* [7722] */
    (xdc_Char)0x78,  /* [7723] */
    (xdc_Char)0x25,  /* [7724] */
    (xdc_Char)0x78,  /* [7725] */
    (xdc_Char)0x29,  /* [7726] */
    (xdc_Char)0x3a,  /* [7727] */
    (xdc_Char)0x20,  /* [7728] */
    (xdc_Char)0x46,  /* [7729] */
    (xdc_Char)0x72,  /* [7730] */
    (xdc_Char)0x65,  /* [7731] */
    (xdc_Char)0x65,  /* [7732] */
    (xdc_Char)0x20,  /* [7733] */
    (xdc_Char)0x42,  /* [7734] */
    (xdc_Char)0x79,  /* [7735] */
    (xdc_Char)0x74,  /* [7736] */
    (xdc_Char)0x65,  /* [7737] */
    (xdc_Char)0x73,  /* [7738] */
    (xdc_Char)0x3d,  /* [7739] */
    (xdc_Char)0x25,  /* [7740] */
    (xdc_Char)0x64,  /* [7741] */
    (xdc_Char)0x0,  /* [7742] */
    (xdc_Char)0x53,  /* [7743] */
    (xdc_Char)0x79,  /* [7744] */
    (xdc_Char)0x6e,  /* [7745] */
    (xdc_Char)0x63,  /* [7746] */
    (xdc_Char)0x20,  /* [7747] */
    (xdc_Char)0x50,  /* [7748] */
    (xdc_Char)0x6f,  /* [7749] */
    (xdc_Char)0x69,  /* [7750] */
    (xdc_Char)0x6e,  /* [7751] */
    (xdc_Char)0x74,  /* [7752] */
    (xdc_Char)0x3a,  /* [7753] */
    (xdc_Char)0x20,  /* [7754] */
    (xdc_Char)0x20,  /* [7755] */
    (xdc_Char)0x53,  /* [7756] */
    (xdc_Char)0x65,  /* [7757] */
    (xdc_Char)0x72,  /* [7758] */
    (xdc_Char)0x69,  /* [7759] */
    (xdc_Char)0x61,  /* [7760] */
    (xdc_Char)0x6c,  /* [7761] */
    (xdc_Char)0x4e,  /* [7762] */
    (xdc_Char)0x75,  /* [7763] */
    (xdc_Char)0x6d,  /* [7764] */
    (xdc_Char)0x62,  /* [7765] */
    (xdc_Char)0x65,  /* [7766] */
    (xdc_Char)0x72,  /* [7767] */
    (xdc_Char)0x3d,  /* [7768] */
    (xdc_Char)0x30,  /* [7769] */
    (xdc_Char)0x78,  /* [7770] */
    (xdc_Char)0x25,  /* [7771] */
    (xdc_Char)0x78,  /* [7772] */
    (xdc_Char)0x2c,  /* [7773] */
    (xdc_Char)0x20,  /* [7774] */
    (xdc_Char)0x43,  /* [7775] */
    (xdc_Char)0x70,  /* [7776] */
    (xdc_Char)0x75,  /* [7777] */
    (xdc_Char)0x54,  /* [7778] */
    (xdc_Char)0x53,  /* [7779] */
    (xdc_Char)0x74,  /* [7780] */
    (xdc_Char)0x61,  /* [7781] */
    (xdc_Char)0x6d,  /* [7782] */
    (xdc_Char)0x70,  /* [7783] */
    (xdc_Char)0x20,  /* [7784] */
    (xdc_Char)0x5b,  /* [7785] */
    (xdc_Char)0x4c,  /* [7786] */
    (xdc_Char)0x53,  /* [7787] */
    (xdc_Char)0x57,  /* [7788] */
    (xdc_Char)0x3d,  /* [7789] */
    (xdc_Char)0x30,  /* [7790] */
    (xdc_Char)0x78,  /* [7791] */
    (xdc_Char)0x25,  /* [7792] */
    (xdc_Char)0x78,  /* [7793] */
    (xdc_Char)0x2c,  /* [7794] */
    (xdc_Char)0x20,  /* [7795] */
    (xdc_Char)0x4d,  /* [7796] */
    (xdc_Char)0x53,  /* [7797] */
    (xdc_Char)0x57,  /* [7798] */
    (xdc_Char)0x3d,  /* [7799] */
    (xdc_Char)0x30,  /* [7800] */
    (xdc_Char)0x78,  /* [7801] */
    (xdc_Char)0x25,  /* [7802] */
    (xdc_Char)0x78,  /* [7803] */
    (xdc_Char)0x5d,  /* [7804] */
    (xdc_Char)0x2c,  /* [7805] */
    (xdc_Char)0x20,  /* [7806] */
    (xdc_Char)0x47,  /* [7807] */
    (xdc_Char)0x6c,  /* [7808] */
    (xdc_Char)0x6f,  /* [7809] */
    (xdc_Char)0x62,  /* [7810] */
    (xdc_Char)0x61,  /* [7811] */
    (xdc_Char)0x6c,  /* [7812] */
    (xdc_Char)0x54,  /* [7813] */
    (xdc_Char)0x53,  /* [7814] */
    (xdc_Char)0x74,  /* [7815] */
    (xdc_Char)0x61,  /* [7816] */
    (xdc_Char)0x6d,  /* [7817] */
    (xdc_Char)0x70,  /* [7818] */
    (xdc_Char)0x20,  /* [7819] */
    (xdc_Char)0x5b,  /* [7820] */
    (xdc_Char)0x4c,  /* [7821] */
    (xdc_Char)0x53,  /* [7822] */
    (xdc_Char)0x57,  /* [7823] */
    (xdc_Char)0x3d,  /* [7824] */
    (xdc_Char)0x30,  /* [7825] */
    (xdc_Char)0x78,  /* [7826] */
    (xdc_Char)0x25,  /* [7827] */
    (xdc_Char)0x78,  /* [7828] */
    (xdc_Char)0x2c,  /* [7829] */
    (xdc_Char)0x20,  /* [7830] */
    (xdc_Char)0x4d,  /* [7831] */
    (xdc_Char)0x53,  /* [7832] */
    (xdc_Char)0x57,  /* [7833] */
    (xdc_Char)0x3d,  /* [7834] */
    (xdc_Char)0x30,  /* [7835] */
    (xdc_Char)0x78,  /* [7836] */
    (xdc_Char)0x25,  /* [7837] */
    (xdc_Char)0x78,  /* [7838] */
    (xdc_Char)0x5d,  /* [7839] */
    (xdc_Char)0x2c,  /* [7840] */
    (xdc_Char)0x20,  /* [7841] */
    (xdc_Char)0x43,  /* [7842] */
    (xdc_Char)0x70,  /* [7843] */
    (xdc_Char)0x75,  /* [7844] */
    (xdc_Char)0x43,  /* [7845] */
    (xdc_Char)0x79,  /* [7846] */
    (xdc_Char)0x63,  /* [7847] */
    (xdc_Char)0x6c,  /* [7848] */
    (xdc_Char)0x65,  /* [7849] */
    (xdc_Char)0x73,  /* [7850] */
    (xdc_Char)0x50,  /* [7851] */
    (xdc_Char)0x65,  /* [7852] */
    (xdc_Char)0x72,  /* [7853] */
    (xdc_Char)0x43,  /* [7854] */
    (xdc_Char)0x70,  /* [7855] */
    (xdc_Char)0x75,  /* [7856] */
    (xdc_Char)0x54,  /* [7857] */
    (xdc_Char)0x69,  /* [7858] */
    (xdc_Char)0x6d,  /* [7859] */
    (xdc_Char)0x65,  /* [7860] */
    (xdc_Char)0x72,  /* [7861] */
    (xdc_Char)0x54,  /* [7862] */
    (xdc_Char)0x69,  /* [7863] */
    (xdc_Char)0x63,  /* [7864] */
    (xdc_Char)0x6b,  /* [7865] */
    (xdc_Char)0x3d,  /* [7866] */
    (xdc_Char)0x25,  /* [7867] */
    (xdc_Char)0x64,  /* [7868] */
    (xdc_Char)0x2c,  /* [7869] */
    (xdc_Char)0x20,  /* [7870] */
    (xdc_Char)0x43,  /* [7871] */
    (xdc_Char)0x70,  /* [7872] */
    (xdc_Char)0x75,  /* [7873] */
    (xdc_Char)0x46,  /* [7874] */
    (xdc_Char)0x72,  /* [7875] */
    (xdc_Char)0x65,  /* [7876] */
    (xdc_Char)0x71,  /* [7877] */
    (xdc_Char)0x20,  /* [7878] */
    (xdc_Char)0x5b,  /* [7879] */
    (xdc_Char)0x4c,  /* [7880] */
    (xdc_Char)0x53,  /* [7881] */
    (xdc_Char)0x57,  /* [7882] */
    (xdc_Char)0x3d,  /* [7883] */
    (xdc_Char)0x30,  /* [7884] */
    (xdc_Char)0x78,  /* [7885] */
    (xdc_Char)0x25,  /* [7886] */
    (xdc_Char)0x78,  /* [7887] */
    (xdc_Char)0x2c,  /* [7888] */
    (xdc_Char)0x20,  /* [7889] */
    (xdc_Char)0x4d,  /* [7890] */
    (xdc_Char)0x53,  /* [7891] */
    (xdc_Char)0x57,  /* [7892] */
    (xdc_Char)0x3d,  /* [7893] */
    (xdc_Char)0x30,  /* [7894] */
    (xdc_Char)0x78,  /* [7895] */
    (xdc_Char)0x25,  /* [7896] */
    (xdc_Char)0x78,  /* [7897] */
    (xdc_Char)0x5d,  /* [7898] */
    (xdc_Char)0x0,  /* [7899] */
    (xdc_Char)0x53,  /* [7900] */
    (xdc_Char)0x79,  /* [7901] */
    (xdc_Char)0x6e,  /* [7902] */
    (xdc_Char)0x63,  /* [7903] */
    (xdc_Char)0x20,  /* [7904] */
    (xdc_Char)0x50,  /* [7905] */
    (xdc_Char)0x6f,  /* [7906] */
    (xdc_Char)0x69,  /* [7907] */
    (xdc_Char)0x6e,  /* [7908] */
    (xdc_Char)0x74,  /* [7909] */
    (xdc_Char)0x20,  /* [7910] */
    (xdc_Char)0x41,  /* [7911] */
    (xdc_Char)0x66,  /* [7912] */
    (xdc_Char)0x74,  /* [7913] */
    (xdc_Char)0x65,  /* [7914] */
    (xdc_Char)0x72,  /* [7915] */
    (xdc_Char)0x20,  /* [7916] */
    (xdc_Char)0x48,  /* [7917] */
    (xdc_Char)0x61,  /* [7918] */
    (xdc_Char)0x6c,  /* [7919] */
    (xdc_Char)0x74,  /* [7920] */
    (xdc_Char)0x3a,  /* [7921] */
    (xdc_Char)0x20,  /* [7922] */
    (xdc_Char)0x20,  /* [7923] */
    (xdc_Char)0x53,  /* [7924] */
    (xdc_Char)0x65,  /* [7925] */
    (xdc_Char)0x72,  /* [7926] */
    (xdc_Char)0x69,  /* [7927] */
    (xdc_Char)0x61,  /* [7928] */
    (xdc_Char)0x6c,  /* [7929] */
    (xdc_Char)0x4e,  /* [7930] */
    (xdc_Char)0x75,  /* [7931] */
    (xdc_Char)0x6d,  /* [7932] */
    (xdc_Char)0x62,  /* [7933] */
    (xdc_Char)0x65,  /* [7934] */
    (xdc_Char)0x72,  /* [7935] */
    (xdc_Char)0x3d,  /* [7936] */
    (xdc_Char)0x30,  /* [7937] */
    (xdc_Char)0x78,  /* [7938] */
    (xdc_Char)0x25,  /* [7939] */
    (xdc_Char)0x78,  /* [7940] */
    (xdc_Char)0x2c,  /* [7941] */
    (xdc_Char)0x20,  /* [7942] */
    (xdc_Char)0x43,  /* [7943] */
    (xdc_Char)0x70,  /* [7944] */
    (xdc_Char)0x75,  /* [7945] */
    (xdc_Char)0x54,  /* [7946] */
    (xdc_Char)0x53,  /* [7947] */
    (xdc_Char)0x74,  /* [7948] */
    (xdc_Char)0x61,  /* [7949] */
    (xdc_Char)0x6d,  /* [7950] */
    (xdc_Char)0x70,  /* [7951] */
    (xdc_Char)0x20,  /* [7952] */
    (xdc_Char)0x5b,  /* [7953] */
    (xdc_Char)0x4c,  /* [7954] */
    (xdc_Char)0x53,  /* [7955] */
    (xdc_Char)0x57,  /* [7956] */
    (xdc_Char)0x3d,  /* [7957] */
    (xdc_Char)0x30,  /* [7958] */
    (xdc_Char)0x78,  /* [7959] */
    (xdc_Char)0x25,  /* [7960] */
    (xdc_Char)0x78,  /* [7961] */
    (xdc_Char)0x2c,  /* [7962] */
    (xdc_Char)0x20,  /* [7963] */
    (xdc_Char)0x4d,  /* [7964] */
    (xdc_Char)0x53,  /* [7965] */
    (xdc_Char)0x57,  /* [7966] */
    (xdc_Char)0x3d,  /* [7967] */
    (xdc_Char)0x30,  /* [7968] */
    (xdc_Char)0x78,  /* [7969] */
    (xdc_Char)0x25,  /* [7970] */
    (xdc_Char)0x78,  /* [7971] */
    (xdc_Char)0x5d,  /* [7972] */
    (xdc_Char)0x2c,  /* [7973] */
    (xdc_Char)0x20,  /* [7974] */
    (xdc_Char)0x47,  /* [7975] */
    (xdc_Char)0x6c,  /* [7976] */
    (xdc_Char)0x6f,  /* [7977] */
    (xdc_Char)0x62,  /* [7978] */
    (xdc_Char)0x61,  /* [7979] */
    (xdc_Char)0x6c,  /* [7980] */
    (xdc_Char)0x54,  /* [7981] */
    (xdc_Char)0x53,  /* [7982] */
    (xdc_Char)0x74,  /* [7983] */
    (xdc_Char)0x61,  /* [7984] */
    (xdc_Char)0x6d,  /* [7985] */
    (xdc_Char)0x70,  /* [7986] */
    (xdc_Char)0x20,  /* [7987] */
    (xdc_Char)0x5b,  /* [7988] */
    (xdc_Char)0x4c,  /* [7989] */
    (xdc_Char)0x53,  /* [7990] */
    (xdc_Char)0x57,  /* [7991] */
    (xdc_Char)0x3d,  /* [7992] */
    (xdc_Char)0x30,  /* [7993] */
    (xdc_Char)0x78,  /* [7994] */
    (xdc_Char)0x25,  /* [7995] */
    (xdc_Char)0x78,  /* [7996] */
    (xdc_Char)0x2c,  /* [7997] */
    (xdc_Char)0x20,  /* [7998] */
    (xdc_Char)0x4d,  /* [7999] */
    (xdc_Char)0x53,  /* [8000] */
    (xdc_Char)0x57,  /* [8001] */
    (xdc_Char)0x3d,  /* [8002] */
    (xdc_Char)0x30,  /* [8003] */
    (xdc_Char)0x78,  /* [8004] */
    (xdc_Char)0x25,  /* [8005] */
    (xdc_Char)0x78,  /* [8006] */
    (xdc_Char)0x5d,  /* [8007] */
    (xdc_Char)0x2c,  /* [8008] */
    (xdc_Char)0x20,  /* [8009] */
    (xdc_Char)0x43,  /* [8010] */
    (xdc_Char)0x70,  /* [8011] */
    (xdc_Char)0x75,  /* [8012] */
    (xdc_Char)0x43,  /* [8013] */
    (xdc_Char)0x79,  /* [8014] */
    (xdc_Char)0x63,  /* [8015] */
    (xdc_Char)0x6c,  /* [8016] */
    (xdc_Char)0x65,  /* [8017] */
    (xdc_Char)0x73,  /* [8018] */
    (xdc_Char)0x50,  /* [8019] */
    (xdc_Char)0x65,  /* [8020] */
    (xdc_Char)0x72,  /* [8021] */
    (xdc_Char)0x43,  /* [8022] */
    (xdc_Char)0x70,  /* [8023] */
    (xdc_Char)0x75,  /* [8024] */
    (xdc_Char)0x54,  /* [8025] */
    (xdc_Char)0x69,  /* [8026] */
    (xdc_Char)0x6d,  /* [8027] */
    (xdc_Char)0x65,  /* [8028] */
    (xdc_Char)0x72,  /* [8029] */
    (xdc_Char)0x54,  /* [8030] */
    (xdc_Char)0x69,  /* [8031] */
    (xdc_Char)0x63,  /* [8032] */
    (xdc_Char)0x6b,  /* [8033] */
    (xdc_Char)0x3d,  /* [8034] */
    (xdc_Char)0x25,  /* [8035] */
    (xdc_Char)0x64,  /* [8036] */
    (xdc_Char)0x2c,  /* [8037] */
    (xdc_Char)0x20,  /* [8038] */
    (xdc_Char)0x43,  /* [8039] */
    (xdc_Char)0x70,  /* [8040] */
    (xdc_Char)0x75,  /* [8041] */
    (xdc_Char)0x46,  /* [8042] */
    (xdc_Char)0x72,  /* [8043] */
    (xdc_Char)0x65,  /* [8044] */
    (xdc_Char)0x71,  /* [8045] */
    (xdc_Char)0x20,  /* [8046] */
    (xdc_Char)0x5b,  /* [8047] */
    (xdc_Char)0x4c,  /* [8048] */
    (xdc_Char)0x53,  /* [8049] */
    (xdc_Char)0x57,  /* [8050] */
    (xdc_Char)0x3d,  /* [8051] */
    (xdc_Char)0x30,  /* [8052] */
    (xdc_Char)0x78,  /* [8053] */
    (xdc_Char)0x25,  /* [8054] */
    (xdc_Char)0x78,  /* [8055] */
    (xdc_Char)0x2c,  /* [8056] */
    (xdc_Char)0x20,  /* [8057] */
    (xdc_Char)0x4d,  /* [8058] */
    (xdc_Char)0x53,  /* [8059] */
    (xdc_Char)0x57,  /* [8060] */
    (xdc_Char)0x3d,  /* [8061] */
    (xdc_Char)0x30,  /* [8062] */
    (xdc_Char)0x78,  /* [8063] */
    (xdc_Char)0x25,  /* [8064] */
    (xdc_Char)0x78,  /* [8065] */
    (xdc_Char)0x5d,  /* [8066] */
    (xdc_Char)0x0,  /* [8067] */
    (xdc_Char)0x53,  /* [8068] */
    (xdc_Char)0x79,  /* [8069] */
    (xdc_Char)0x6e,  /* [8070] */
    (xdc_Char)0x63,  /* [8071] */
    (xdc_Char)0x20,  /* [8072] */
    (xdc_Char)0x50,  /* [8073] */
    (xdc_Char)0x6f,  /* [8074] */
    (xdc_Char)0x69,  /* [8075] */
    (xdc_Char)0x6e,  /* [8076] */
    (xdc_Char)0x74,  /* [8077] */
    (xdc_Char)0x20,  /* [8078] */
    (xdc_Char)0x47,  /* [8079] */
    (xdc_Char)0x6c,  /* [8080] */
    (xdc_Char)0x6f,  /* [8081] */
    (xdc_Char)0x62,  /* [8082] */
    (xdc_Char)0x61,  /* [8083] */
    (xdc_Char)0x6c,  /* [8084] */
    (xdc_Char)0x20,  /* [8085] */
    (xdc_Char)0x54,  /* [8086] */
    (xdc_Char)0x69,  /* [8087] */
    (xdc_Char)0x6d,  /* [8088] */
    (xdc_Char)0x65,  /* [8089] */
    (xdc_Char)0x72,  /* [8090] */
    (xdc_Char)0x20,  /* [8091] */
    (xdc_Char)0x46,  /* [8092] */
    (xdc_Char)0x72,  /* [8093] */
    (xdc_Char)0x65,  /* [8094] */
    (xdc_Char)0x71,  /* [8095] */
    (xdc_Char)0x3a,  /* [8096] */
    (xdc_Char)0x20,  /* [8097] */
    (xdc_Char)0x20,  /* [8098] */
    (xdc_Char)0x53,  /* [8099] */
    (xdc_Char)0x65,  /* [8100] */
    (xdc_Char)0x72,  /* [8101] */
    (xdc_Char)0x69,  /* [8102] */
    (xdc_Char)0x61,  /* [8103] */
    (xdc_Char)0x6c,  /* [8104] */
    (xdc_Char)0x4e,  /* [8105] */
    (xdc_Char)0x75,  /* [8106] */
    (xdc_Char)0x6d,  /* [8107] */
    (xdc_Char)0x62,  /* [8108] */
    (xdc_Char)0x65,  /* [8109] */
    (xdc_Char)0x72,  /* [8110] */
    (xdc_Char)0x3d,  /* [8111] */
    (xdc_Char)0x30,  /* [8112] */
    (xdc_Char)0x78,  /* [8113] */
    (xdc_Char)0x25,  /* [8114] */
    (xdc_Char)0x78,  /* [8115] */
    (xdc_Char)0x2c,  /* [8116] */
    (xdc_Char)0x20,  /* [8117] */
    (xdc_Char)0x43,  /* [8118] */
    (xdc_Char)0x70,  /* [8119] */
    (xdc_Char)0x75,  /* [8120] */
    (xdc_Char)0x43,  /* [8121] */
    (xdc_Char)0x79,  /* [8122] */
    (xdc_Char)0x63,  /* [8123] */
    (xdc_Char)0x6c,  /* [8124] */
    (xdc_Char)0x65,  /* [8125] */
    (xdc_Char)0x73,  /* [8126] */
    (xdc_Char)0x50,  /* [8127] */
    (xdc_Char)0x65,  /* [8128] */
    (xdc_Char)0x72,  /* [8129] */
    (xdc_Char)0x47,  /* [8130] */
    (xdc_Char)0x6c,  /* [8131] */
    (xdc_Char)0x6f,  /* [8132] */
    (xdc_Char)0x62,  /* [8133] */
    (xdc_Char)0x61,  /* [8134] */
    (xdc_Char)0x6c,  /* [8135] */
    (xdc_Char)0x54,  /* [8136] */
    (xdc_Char)0x69,  /* [8137] */
    (xdc_Char)0x6d,  /* [8138] */
    (xdc_Char)0x65,  /* [8139] */
    (xdc_Char)0x72,  /* [8140] */
    (xdc_Char)0x54,  /* [8141] */
    (xdc_Char)0x69,  /* [8142] */
    (xdc_Char)0x63,  /* [8143] */
    (xdc_Char)0x6b,  /* [8144] */
    (xdc_Char)0x3d,  /* [8145] */
    (xdc_Char)0x25,  /* [8146] */
    (xdc_Char)0x64,  /* [8147] */
    (xdc_Char)0x2c,  /* [8148] */
    (xdc_Char)0x20,  /* [8149] */
    (xdc_Char)0x47,  /* [8150] */
    (xdc_Char)0x6c,  /* [8151] */
    (xdc_Char)0x6f,  /* [8152] */
    (xdc_Char)0x62,  /* [8153] */
    (xdc_Char)0x61,  /* [8154] */
    (xdc_Char)0x6c,  /* [8155] */
    (xdc_Char)0x54,  /* [8156] */
    (xdc_Char)0x69,  /* [8157] */
    (xdc_Char)0x6d,  /* [8158] */
    (xdc_Char)0x65,  /* [8159] */
    (xdc_Char)0x72,  /* [8160] */
    (xdc_Char)0x46,  /* [8161] */
    (xdc_Char)0x72,  /* [8162] */
    (xdc_Char)0x65,  /* [8163] */
    (xdc_Char)0x71,  /* [8164] */
    (xdc_Char)0x20,  /* [8165] */
    (xdc_Char)0x5b,  /* [8166] */
    (xdc_Char)0x4c,  /* [8167] */
    (xdc_Char)0x53,  /* [8168] */
    (xdc_Char)0x57,  /* [8169] */
    (xdc_Char)0x3d,  /* [8170] */
    (xdc_Char)0x30,  /* [8171] */
    (xdc_Char)0x78,  /* [8172] */
    (xdc_Char)0x25,  /* [8173] */
    (xdc_Char)0x78,  /* [8174] */
    (xdc_Char)0x2c,  /* [8175] */
    (xdc_Char)0x20,  /* [8176] */
    (xdc_Char)0x4d,  /* [8177] */
    (xdc_Char)0x53,  /* [8178] */
    (xdc_Char)0x57,  /* [8179] */
    (xdc_Char)0x3d,  /* [8180] */
    (xdc_Char)0x30,  /* [8181] */
    (xdc_Char)0x78,  /* [8182] */
    (xdc_Char)0x25,  /* [8183] */
    (xdc_Char)0x78,  /* [8184] */
    (xdc_Char)0x5d,  /* [8185] */
    (xdc_Char)0x0,  /* [8186] */
    (xdc_Char)0x53,  /* [8187] */
    (xdc_Char)0x79,  /* [8188] */
    (xdc_Char)0x6e,  /* [8189] */
    (xdc_Char)0x63,  /* [8190] */
    (xdc_Char)0x20,  /* [8191] */
    (xdc_Char)0x50,  /* [8192] */
    (xdc_Char)0x6f,  /* [8193] */
    (xdc_Char)0x69,  /* [8194] */
    (xdc_Char)0x6e,  /* [8195] */
    (xdc_Char)0x74,  /* [8196] */
    (xdc_Char)0x20,  /* [8197] */
    (xdc_Char)0x55,  /* [8198] */
    (xdc_Char)0x73,  /* [8199] */
    (xdc_Char)0x65,  /* [8200] */
    (xdc_Char)0x72,  /* [8201] */
    (xdc_Char)0x20,  /* [8202] */
    (xdc_Char)0x44,  /* [8203] */
    (xdc_Char)0x61,  /* [8204] */
    (xdc_Char)0x74,  /* [8205] */
    (xdc_Char)0x61,  /* [8206] */
    (xdc_Char)0x3a,  /* [8207] */
    (xdc_Char)0x20,  /* [8208] */
    (xdc_Char)0x53,  /* [8209] */
    (xdc_Char)0x65,  /* [8210] */
    (xdc_Char)0x72,  /* [8211] */
    (xdc_Char)0x69,  /* [8212] */
    (xdc_Char)0x61,  /* [8213] */
    (xdc_Char)0x6c,  /* [8214] */
    (xdc_Char)0x4e,  /* [8215] */
    (xdc_Char)0x75,  /* [8216] */
    (xdc_Char)0x6d,  /* [8217] */
    (xdc_Char)0x62,  /* [8218] */
    (xdc_Char)0x65,  /* [8219] */
    (xdc_Char)0x72,  /* [8220] */
    (xdc_Char)0x3d,  /* [8221] */
    (xdc_Char)0x30,  /* [8222] */
    (xdc_Char)0x78,  /* [8223] */
    (xdc_Char)0x25,  /* [8224] */
    (xdc_Char)0x78,  /* [8225] */
    (xdc_Char)0x2c,  /* [8226] */
    (xdc_Char)0x20,  /* [8227] */
    (xdc_Char)0x25,  /* [8228] */
    (xdc_Char)0x24,  /* [8229] */
    (xdc_Char)0x53,  /* [8230] */
    (xdc_Char)0x0,  /* [8231] */
    (xdc_Char)0x4c,  /* [8232] */
    (xdc_Char)0x53,  /* [8233] */
    (xdc_Char)0x5f,  /* [8234] */
    (xdc_Char)0x63,  /* [8235] */
    (xdc_Char)0x70,  /* [8236] */
    (xdc_Char)0x75,  /* [8237] */
    (xdc_Char)0x4c,  /* [8238] */
    (xdc_Char)0x6f,  /* [8239] */
    (xdc_Char)0x61,  /* [8240] */
    (xdc_Char)0x64,  /* [8241] */
    (xdc_Char)0x3a,  /* [8242] */
    (xdc_Char)0x20,  /* [8243] */
    (xdc_Char)0x25,  /* [8244] */
    (xdc_Char)0x64,  /* [8245] */
    (xdc_Char)0x25,  /* [8246] */
    (xdc_Char)0x25,  /* [8247] */
    (xdc_Char)0x0,  /* [8248] */
    (xdc_Char)0x4c,  /* [8249] */
    (xdc_Char)0x53,  /* [8250] */
    (xdc_Char)0x5f,  /* [8251] */
    (xdc_Char)0x68,  /* [8252] */
    (xdc_Char)0x77,  /* [8253] */
    (xdc_Char)0x69,  /* [8254] */
    (xdc_Char)0x4c,  /* [8255] */
    (xdc_Char)0x6f,  /* [8256] */
    (xdc_Char)0x61,  /* [8257] */
    (xdc_Char)0x64,  /* [8258] */
    (xdc_Char)0x3a,  /* [8259] */
    (xdc_Char)0x20,  /* [8260] */
    (xdc_Char)0x25,  /* [8261] */
    (xdc_Char)0x64,  /* [8262] */
    (xdc_Char)0x2c,  /* [8263] */
    (xdc_Char)0x25,  /* [8264] */
    (xdc_Char)0x64,  /* [8265] */
    (xdc_Char)0x0,  /* [8266] */
    (xdc_Char)0x4c,  /* [8267] */
    (xdc_Char)0x53,  /* [8268] */
    (xdc_Char)0x5f,  /* [8269] */
    (xdc_Char)0x73,  /* [8270] */
    (xdc_Char)0x77,  /* [8271] */
    (xdc_Char)0x69,  /* [8272] */
    (xdc_Char)0x4c,  /* [8273] */
    (xdc_Char)0x6f,  /* [8274] */
    (xdc_Char)0x61,  /* [8275] */
    (xdc_Char)0x64,  /* [8276] */
    (xdc_Char)0x3a,  /* [8277] */
    (xdc_Char)0x20,  /* [8278] */
    (xdc_Char)0x25,  /* [8279] */
    (xdc_Char)0x64,  /* [8280] */
    (xdc_Char)0x2c,  /* [8281] */
    (xdc_Char)0x25,  /* [8282] */
    (xdc_Char)0x64,  /* [8283] */
    (xdc_Char)0x0,  /* [8284] */
    (xdc_Char)0x4c,  /* [8285] */
    (xdc_Char)0x53,  /* [8286] */
    (xdc_Char)0x5f,  /* [8287] */
    (xdc_Char)0x74,  /* [8288] */
    (xdc_Char)0x61,  /* [8289] */
    (xdc_Char)0x73,  /* [8290] */
    (xdc_Char)0x6b,  /* [8291] */
    (xdc_Char)0x4c,  /* [8292] */
    (xdc_Char)0x6f,  /* [8293] */
    (xdc_Char)0x61,  /* [8294] */
    (xdc_Char)0x64,  /* [8295] */
    (xdc_Char)0x3a,  /* [8296] */
    (xdc_Char)0x20,  /* [8297] */
    (xdc_Char)0x30,  /* [8298] */
    (xdc_Char)0x78,  /* [8299] */
    (xdc_Char)0x25,  /* [8300] */
    (xdc_Char)0x78,  /* [8301] */
    (xdc_Char)0x2c,  /* [8302] */
    (xdc_Char)0x25,  /* [8303] */
    (xdc_Char)0x64,  /* [8304] */
    (xdc_Char)0x2c,  /* [8305] */
    (xdc_Char)0x25,  /* [8306] */
    (xdc_Char)0x64,  /* [8307] */
    (xdc_Char)0x2c,  /* [8308] */
    (xdc_Char)0x30,  /* [8309] */
    (xdc_Char)0x78,  /* [8310] */
    (xdc_Char)0x25,  /* [8311] */
    (xdc_Char)0x78,  /* [8312] */
    (xdc_Char)0x0,  /* [8313] */
    (xdc_Char)0x78,  /* [8314] */
    (xdc_Char)0x64,  /* [8315] */
    (xdc_Char)0x63,  /* [8316] */
    (xdc_Char)0x2e,  /* [8317] */
    (xdc_Char)0x0,  /* [8318] */
    (xdc_Char)0x72,  /* [8319] */
    (xdc_Char)0x75,  /* [8320] */
    (xdc_Char)0x6e,  /* [8321] */
    (xdc_Char)0x74,  /* [8322] */
    (xdc_Char)0x69,  /* [8323] */
    (xdc_Char)0x6d,  /* [8324] */
    (xdc_Char)0x65,  /* [8325] */
    (xdc_Char)0x2e,  /* [8326] */
    (xdc_Char)0x0,  /* [8327] */
    (xdc_Char)0x41,  /* [8328] */
    (xdc_Char)0x73,  /* [8329] */
    (xdc_Char)0x73,  /* [8330] */
    (xdc_Char)0x65,  /* [8331] */
    (xdc_Char)0x72,  /* [8332] */
    (xdc_Char)0x74,  /* [8333] */
    (xdc_Char)0x0,  /* [8334] */
    (xdc_Char)0x43,  /* [8335] */
    (xdc_Char)0x6f,  /* [8336] */
    (xdc_Char)0x72,  /* [8337] */
    (xdc_Char)0x65,  /* [8338] */
    (xdc_Char)0x0,  /* [8339] */
    (xdc_Char)0x44,  /* [8340] */
    (xdc_Char)0x65,  /* [8341] */
    (xdc_Char)0x66,  /* [8342] */
    (xdc_Char)0x61,  /* [8343] */
    (xdc_Char)0x75,  /* [8344] */
    (xdc_Char)0x6c,  /* [8345] */
    (xdc_Char)0x74,  /* [8346] */
    (xdc_Char)0x73,  /* [8347] */
    (xdc_Char)0x0,  /* [8348] */
    (xdc_Char)0x44,  /* [8349] */
    (xdc_Char)0x69,  /* [8350] */
    (xdc_Char)0x61,  /* [8351] */
    (xdc_Char)0x67,  /* [8352] */
    (xdc_Char)0x73,  /* [8353] */
    (xdc_Char)0x0,  /* [8354] */
    (xdc_Char)0x45,  /* [8355] */
    (xdc_Char)0x72,  /* [8356] */
    (xdc_Char)0x72,  /* [8357] */
    (xdc_Char)0x6f,  /* [8358] */
    (xdc_Char)0x72,  /* [8359] */
    (xdc_Char)0x0,  /* [8360] */
    (xdc_Char)0x47,  /* [8361] */
    (xdc_Char)0x61,  /* [8362] */
    (xdc_Char)0x74,  /* [8363] */
    (xdc_Char)0x65,  /* [8364] */
    (xdc_Char)0x0,  /* [8365] */
    (xdc_Char)0x4c,  /* [8366] */
    (xdc_Char)0x6f,  /* [8367] */
    (xdc_Char)0x67,  /* [8368] */
    (xdc_Char)0x0,  /* [8369] */
    (xdc_Char)0x4d,  /* [8370] */
    (xdc_Char)0x61,  /* [8371] */
    (xdc_Char)0x69,  /* [8372] */
    (xdc_Char)0x6e,  /* [8373] */
    (xdc_Char)0x0,  /* [8374] */
    (xdc_Char)0x4d,  /* [8375] */
    (xdc_Char)0x65,  /* [8376] */
    (xdc_Char)0x6d,  /* [8377] */
    (xdc_Char)0x6f,  /* [8378] */
    (xdc_Char)0x72,  /* [8379] */
    (xdc_Char)0x79,  /* [8380] */
    (xdc_Char)0x0,  /* [8381] */
    (xdc_Char)0x52,  /* [8382] */
    (xdc_Char)0x65,  /* [8383] */
    (xdc_Char)0x67,  /* [8384] */
    (xdc_Char)0x69,  /* [8385] */
    (xdc_Char)0x73,  /* [8386] */
    (xdc_Char)0x74,  /* [8387] */
    (xdc_Char)0x72,  /* [8388] */
    (xdc_Char)0x79,  /* [8389] */
    (xdc_Char)0x0,  /* [8390] */
    (xdc_Char)0x53,  /* [8391] */
    (xdc_Char)0x74,  /* [8392] */
    (xdc_Char)0x61,  /* [8393] */
    (xdc_Char)0x72,  /* [8394] */
    (xdc_Char)0x74,  /* [8395] */
    (xdc_Char)0x75,  /* [8396] */
    (xdc_Char)0x70,  /* [8397] */
    (xdc_Char)0x0,  /* [8398] */
    (xdc_Char)0x53,  /* [8399] */
    (xdc_Char)0x79,  /* [8400] */
    (xdc_Char)0x73,  /* [8401] */
    (xdc_Char)0x74,  /* [8402] */
    (xdc_Char)0x65,  /* [8403] */
    (xdc_Char)0x6d,  /* [8404] */
    (xdc_Char)0x0,  /* [8405] */
    (xdc_Char)0x53,  /* [8406] */
    (xdc_Char)0x79,  /* [8407] */
    (xdc_Char)0x73,  /* [8408] */
    (xdc_Char)0x4d,  /* [8409] */
    (xdc_Char)0x69,  /* [8410] */
    (xdc_Char)0x6e,  /* [8411] */
    (xdc_Char)0x0,  /* [8412] */
    (xdc_Char)0x54,  /* [8413] */
    (xdc_Char)0x65,  /* [8414] */
    (xdc_Char)0x78,  /* [8415] */
    (xdc_Char)0x74,  /* [8416] */
    (xdc_Char)0x0,  /* [8417] */
    (xdc_Char)0x54,  /* [8418] */
    (xdc_Char)0x69,  /* [8419] */
    (xdc_Char)0x6d,  /* [8420] */
    (xdc_Char)0x65,  /* [8421] */
    (xdc_Char)0x73,  /* [8422] */
    (xdc_Char)0x74,  /* [8423] */
    (xdc_Char)0x61,  /* [8424] */
    (xdc_Char)0x6d,  /* [8425] */
    (xdc_Char)0x70,  /* [8426] */
    (xdc_Char)0x0,  /* [8427] */
    (xdc_Char)0x54,  /* [8428] */
    (xdc_Char)0x69,  /* [8429] */
    (xdc_Char)0x6d,  /* [8430] */
    (xdc_Char)0x65,  /* [8431] */
    (xdc_Char)0x73,  /* [8432] */
    (xdc_Char)0x74,  /* [8433] */
    (xdc_Char)0x61,  /* [8434] */
    (xdc_Char)0x6d,  /* [8435] */
    (xdc_Char)0x70,  /* [8436] */
    (xdc_Char)0x4e,  /* [8437] */
    (xdc_Char)0x75,  /* [8438] */
    (xdc_Char)0x6c,  /* [8439] */
    (xdc_Char)0x6c,  /* [8440] */
    (xdc_Char)0x0,  /* [8441] */
    (xdc_Char)0x54,  /* [8442] */
    (xdc_Char)0x79,  /* [8443] */
    (xdc_Char)0x70,  /* [8444] */
    (xdc_Char)0x65,  /* [8445] */
    (xdc_Char)0x73,  /* [8446] */
    (xdc_Char)0x0,  /* [8447] */
    (xdc_Char)0x74,  /* [8448] */
    (xdc_Char)0x69,  /* [8449] */
    (xdc_Char)0x2e,  /* [8450] */
    (xdc_Char)0x0,  /* [8451] */
    (xdc_Char)0x63,  /* [8452] */
    (xdc_Char)0x61,  /* [8453] */
    (xdc_Char)0x74,  /* [8454] */
    (xdc_Char)0x61,  /* [8455] */
    (xdc_Char)0x6c,  /* [8456] */
    (xdc_Char)0x6f,  /* [8457] */
    (xdc_Char)0x67,  /* [8458] */
    (xdc_Char)0x2e,  /* [8459] */
    (xdc_Char)0x0,  /* [8460] */
    (xdc_Char)0x61,  /* [8461] */
    (xdc_Char)0x72,  /* [8462] */
    (xdc_Char)0x6d,  /* [8463] */
    (xdc_Char)0x2e,  /* [8464] */
    (xdc_Char)0x0,  /* [8465] */
    (xdc_Char)0x63,  /* [8466] */
    (xdc_Char)0x6f,  /* [8467] */
    (xdc_Char)0x72,  /* [8468] */
    (xdc_Char)0x74,  /* [8469] */
    (xdc_Char)0x65,  /* [8470] */
    (xdc_Char)0x78,  /* [8471] */
    (xdc_Char)0x6d,  /* [8472] */
    (xdc_Char)0x34,  /* [8473] */
    (xdc_Char)0x2e,  /* [8474] */
    (xdc_Char)0x0,  /* [8475] */
    (xdc_Char)0x74,  /* [8476] */
    (xdc_Char)0x69,  /* [8477] */
    (xdc_Char)0x76,  /* [8478] */
    (xdc_Char)0x61,  /* [8479] */
    (xdc_Char)0x2e,  /* [8480] */
    (xdc_Char)0x0,  /* [8481] */
    (xdc_Char)0x63,  /* [8482] */
    (xdc_Char)0x65,  /* [8483] */
    (xdc_Char)0x2e,  /* [8484] */
    (xdc_Char)0x0,  /* [8485] */
    (xdc_Char)0x42,  /* [8486] */
    (xdc_Char)0x6f,  /* [8487] */
    (xdc_Char)0x6f,  /* [8488] */
    (xdc_Char)0x74,  /* [8489] */
    (xdc_Char)0x0,  /* [8490] */
    (xdc_Char)0x73,  /* [8491] */
    (xdc_Char)0x79,  /* [8492] */
    (xdc_Char)0x73,  /* [8493] */
    (xdc_Char)0x62,  /* [8494] */
    (xdc_Char)0x69,  /* [8495] */
    (xdc_Char)0x6f,  /* [8496] */
    (xdc_Char)0x73,  /* [8497] */
    (xdc_Char)0x2e,  /* [8498] */
    (xdc_Char)0x0,  /* [8499] */
    (xdc_Char)0x42,  /* [8500] */
    (xdc_Char)0x49,  /* [8501] */
    (xdc_Char)0x4f,  /* [8502] */
    (xdc_Char)0x53,  /* [8503] */
    (xdc_Char)0x0,  /* [8504] */
    (xdc_Char)0x68,  /* [8505] */
    (xdc_Char)0x61,  /* [8506] */
    (xdc_Char)0x6c,  /* [8507] */
    (xdc_Char)0x2e,  /* [8508] */
    (xdc_Char)0x0,  /* [8509] */
    (xdc_Char)0x48,  /* [8510] */
    (xdc_Char)0x77,  /* [8511] */
    (xdc_Char)0x69,  /* [8512] */
    (xdc_Char)0x0,  /* [8513] */
    (xdc_Char)0x54,  /* [8514] */
    (xdc_Char)0x69,  /* [8515] */
    (xdc_Char)0x6d,  /* [8516] */
    (xdc_Char)0x65,  /* [8517] */
    (xdc_Char)0x72,  /* [8518] */
    (xdc_Char)0x0,  /* [8519] */
    (xdc_Char)0x6b,  /* [8520] */
    (xdc_Char)0x6e,  /* [8521] */
    (xdc_Char)0x6c,  /* [8522] */
    (xdc_Char)0x2e,  /* [8523] */
    (xdc_Char)0x0,  /* [8524] */
    (xdc_Char)0x43,  /* [8525] */
    (xdc_Char)0x6c,  /* [8526] */
    (xdc_Char)0x6f,  /* [8527] */
    (xdc_Char)0x63,  /* [8528] */
    (xdc_Char)0x6b,  /* [8529] */
    (xdc_Char)0x0,  /* [8530] */
    (xdc_Char)0x49,  /* [8531] */
    (xdc_Char)0x64,  /* [8532] */
    (xdc_Char)0x6c,  /* [8533] */
    (xdc_Char)0x65,  /* [8534] */
    (xdc_Char)0x0,  /* [8535] */
    (xdc_Char)0x49,  /* [8536] */
    (xdc_Char)0x6e,  /* [8537] */
    (xdc_Char)0x74,  /* [8538] */
    (xdc_Char)0x72,  /* [8539] */
    (xdc_Char)0x69,  /* [8540] */
    (xdc_Char)0x6e,  /* [8541] */
    (xdc_Char)0x73,  /* [8542] */
    (xdc_Char)0x69,  /* [8543] */
    (xdc_Char)0x63,  /* [8544] */
    (xdc_Char)0x73,  /* [8545] */
    (xdc_Char)0x0,  /* [8546] */
    (xdc_Char)0x45,  /* [8547] */
    (xdc_Char)0x76,  /* [8548] */
    (xdc_Char)0x65,  /* [8549] */
    (xdc_Char)0x6e,  /* [8550] */
    (xdc_Char)0x74,  /* [8551] */
    (xdc_Char)0x0,  /* [8552] */
    (xdc_Char)0x51,  /* [8553] */
    (xdc_Char)0x75,  /* [8554] */
    (xdc_Char)0x65,  /* [8555] */
    (xdc_Char)0x75,  /* [8556] */
    (xdc_Char)0x65,  /* [8557] */
    (xdc_Char)0x0,  /* [8558] */
    (xdc_Char)0x53,  /* [8559] */
    (xdc_Char)0x65,  /* [8560] */
    (xdc_Char)0x6d,  /* [8561] */
    (xdc_Char)0x61,  /* [8562] */
    (xdc_Char)0x70,  /* [8563] */
    (xdc_Char)0x68,  /* [8564] */
    (xdc_Char)0x6f,  /* [8565] */
    (xdc_Char)0x72,  /* [8566] */
    (xdc_Char)0x65,  /* [8567] */
    (xdc_Char)0x0,  /* [8568] */
    (xdc_Char)0x53,  /* [8569] */
    (xdc_Char)0x77,  /* [8570] */
    (xdc_Char)0x69,  /* [8571] */
    (xdc_Char)0x0,  /* [8572] */
    (xdc_Char)0x54,  /* [8573] */
    (xdc_Char)0x61,  /* [8574] */
    (xdc_Char)0x73,  /* [8575] */
    (xdc_Char)0x6b,  /* [8576] */
    (xdc_Char)0x0,  /* [8577] */
    (xdc_Char)0x66,  /* [8578] */
    (xdc_Char)0x61,  /* [8579] */
    (xdc_Char)0x6d,  /* [8580] */
    (xdc_Char)0x69,  /* [8581] */
    (xdc_Char)0x6c,  /* [8582] */
    (xdc_Char)0x79,  /* [8583] */
    (xdc_Char)0x2e,  /* [8584] */
    (xdc_Char)0x0,  /* [8585] */
    (xdc_Char)0x6d,  /* [8586] */
    (xdc_Char)0x33,  /* [8587] */
    (xdc_Char)0x2e,  /* [8588] */
    (xdc_Char)0x0,  /* [8589] */
    (xdc_Char)0x49,  /* [8590] */
    (xdc_Char)0x6e,  /* [8591] */
    (xdc_Char)0x74,  /* [8592] */
    (xdc_Char)0x72,  /* [8593] */
    (xdc_Char)0x69,  /* [8594] */
    (xdc_Char)0x6e,  /* [8595] */
    (xdc_Char)0x73,  /* [8596] */
    (xdc_Char)0x69,  /* [8597] */
    (xdc_Char)0x63,  /* [8598] */
    (xdc_Char)0x73,  /* [8599] */
    (xdc_Char)0x53,  /* [8600] */
    (xdc_Char)0x75,  /* [8601] */
    (xdc_Char)0x70,  /* [8602] */
    (xdc_Char)0x70,  /* [8603] */
    (xdc_Char)0x6f,  /* [8604] */
    (xdc_Char)0x72,  /* [8605] */
    (xdc_Char)0x74,  /* [8606] */
    (xdc_Char)0x0,  /* [8607] */
    (xdc_Char)0x54,  /* [8608] */
    (xdc_Char)0x61,  /* [8609] */
    (xdc_Char)0x73,  /* [8610] */
    (xdc_Char)0x6b,  /* [8611] */
    (xdc_Char)0x53,  /* [8612] */
    (xdc_Char)0x75,  /* [8613] */
    (xdc_Char)0x70,  /* [8614] */
    (xdc_Char)0x70,  /* [8615] */
    (xdc_Char)0x6f,  /* [8616] */
    (xdc_Char)0x72,  /* [8617] */
    (xdc_Char)0x74,  /* [8618] */
    (xdc_Char)0x0,  /* [8619] */
    (xdc_Char)0x6c,  /* [8620] */
    (xdc_Char)0x6d,  /* [8621] */
    (xdc_Char)0x34,  /* [8622] */
    (xdc_Char)0x2e,  /* [8623] */
    (xdc_Char)0x0,  /* [8624] */
    (xdc_Char)0x54,  /* [8625] */
    (xdc_Char)0x69,  /* [8626] */
    (xdc_Char)0x6d,  /* [8627] */
    (xdc_Char)0x65,  /* [8628] */
    (xdc_Char)0x73,  /* [8629] */
    (xdc_Char)0x74,  /* [8630] */
    (xdc_Char)0x61,  /* [8631] */
    (xdc_Char)0x6d,  /* [8632] */
    (xdc_Char)0x70,  /* [8633] */
    (xdc_Char)0x50,  /* [8634] */
    (xdc_Char)0x72,  /* [8635] */
    (xdc_Char)0x6f,  /* [8636] */
    (xdc_Char)0x76,  /* [8637] */
    (xdc_Char)0x69,  /* [8638] */
    (xdc_Char)0x64,  /* [8639] */
    (xdc_Char)0x65,  /* [8640] */
    (xdc_Char)0x72,  /* [8641] */
    (xdc_Char)0x0,  /* [8642] */
    (xdc_Char)0x68,  /* [8643] */
    (xdc_Char)0x65,  /* [8644] */
    (xdc_Char)0x61,  /* [8645] */
    (xdc_Char)0x70,  /* [8646] */
    (xdc_Char)0x73,  /* [8647] */
    (xdc_Char)0x2e,  /* [8648] */
    (xdc_Char)0x0,  /* [8649] */
    (xdc_Char)0x48,  /* [8650] */
    (xdc_Char)0x65,  /* [8651] */
    (xdc_Char)0x61,  /* [8652] */
    (xdc_Char)0x70,  /* [8653] */
    (xdc_Char)0x4d,  /* [8654] */
    (xdc_Char)0x65,  /* [8655] */
    (xdc_Char)0x6d,  /* [8656] */
    (xdc_Char)0x0,  /* [8657] */
    (xdc_Char)0x75,  /* [8658] */
    (xdc_Char)0x69,  /* [8659] */
    (xdc_Char)0x61,  /* [8660] */
    (xdc_Char)0x2e,  /* [8661] */
    (xdc_Char)0x0,  /* [8662] */
    (xdc_Char)0x65,  /* [8663] */
    (xdc_Char)0x76,  /* [8664] */
    (xdc_Char)0x65,  /* [8665] */
    (xdc_Char)0x6e,  /* [8666] */
    (xdc_Char)0x74,  /* [8667] */
    (xdc_Char)0x73,  /* [8668] */
    (xdc_Char)0x2e,  /* [8669] */
    (xdc_Char)0x0,  /* [8670] */
    (xdc_Char)0x44,  /* [8671] */
    (xdc_Char)0x76,  /* [8672] */
    (xdc_Char)0x74,  /* [8673] */
    (xdc_Char)0x54,  /* [8674] */
    (xdc_Char)0x79,  /* [8675] */
    (xdc_Char)0x70,  /* [8676] */
    (xdc_Char)0x65,  /* [8677] */
    (xdc_Char)0x73,  /* [8678] */
    (xdc_Char)0x0,  /* [8679] */
    (xdc_Char)0x55,  /* [8680] */
    (xdc_Char)0x49,  /* [8681] */
    (xdc_Char)0x41,  /* [8682] */
    (xdc_Char)0x42,  /* [8683] */
    (xdc_Char)0x65,  /* [8684] */
    (xdc_Char)0x6e,  /* [8685] */
    (xdc_Char)0x63,  /* [8686] */
    (xdc_Char)0x68,  /* [8687] */
    (xdc_Char)0x6d,  /* [8688] */
    (xdc_Char)0x61,  /* [8689] */
    (xdc_Char)0x72,  /* [8690] */
    (xdc_Char)0x6b,  /* [8691] */
    (xdc_Char)0x0,  /* [8692] */
    (xdc_Char)0x55,  /* [8693] */
    (xdc_Char)0x49,  /* [8694] */
    (xdc_Char)0x41,  /* [8695] */
    (xdc_Char)0x45,  /* [8696] */
    (xdc_Char)0x72,  /* [8697] */
    (xdc_Char)0x72,  /* [8698] */
    (xdc_Char)0x0,  /* [8699] */
    (xdc_Char)0x55,  /* [8700] */
    (xdc_Char)0x49,  /* [8701] */
    (xdc_Char)0x41,  /* [8702] */
    (xdc_Char)0x45,  /* [8703] */
    (xdc_Char)0x76,  /* [8704] */
    (xdc_Char)0x74,  /* [8705] */
    (xdc_Char)0x0,  /* [8706] */
    (xdc_Char)0x55,  /* [8707] */
    (xdc_Char)0x49,  /* [8708] */
    (xdc_Char)0x41,  /* [8709] */
    (xdc_Char)0x52,  /* [8710] */
    (xdc_Char)0x6f,  /* [8711] */
    (xdc_Char)0x75,  /* [8712] */
    (xdc_Char)0x6e,  /* [8713] */
    (xdc_Char)0x64,  /* [8714] */
    (xdc_Char)0x74,  /* [8715] */
    (xdc_Char)0x72,  /* [8716] */
    (xdc_Char)0x69,  /* [8717] */
    (xdc_Char)0x70,  /* [8718] */
    (xdc_Char)0x0,  /* [8719] */
    (xdc_Char)0x55,  /* [8720] */
    (xdc_Char)0x49,  /* [8721] */
    (xdc_Char)0x41,  /* [8722] */
    (xdc_Char)0x53,  /* [8723] */
    (xdc_Char)0x74,  /* [8724] */
    (xdc_Char)0x61,  /* [8725] */
    (xdc_Char)0x74,  /* [8726] */
    (xdc_Char)0x69,  /* [8727] */
    (xdc_Char)0x73,  /* [8728] */
    (xdc_Char)0x74,  /* [8729] */
    (xdc_Char)0x69,  /* [8730] */
    (xdc_Char)0x63,  /* [8731] */
    (xdc_Char)0x0,  /* [8732] */
    (xdc_Char)0x55,  /* [8733] */
    (xdc_Char)0x49,  /* [8734] */
    (xdc_Char)0x41,  /* [8735] */
    (xdc_Char)0x53,  /* [8736] */
    (xdc_Char)0x79,  /* [8737] */
    (xdc_Char)0x6e,  /* [8738] */
    (xdc_Char)0x63,  /* [8739] */
    (xdc_Char)0x0,  /* [8740] */
    (xdc_Char)0x4c,  /* [8741] */
    (xdc_Char)0x6f,  /* [8742] */
    (xdc_Char)0x67,  /* [8743] */
    (xdc_Char)0x53,  /* [8744] */
    (xdc_Char)0x79,  /* [8745] */
    (xdc_Char)0x6e,  /* [8746] */
    (xdc_Char)0x63,  /* [8747] */
    (xdc_Char)0x0,  /* [8748] */
    (xdc_Char)0x4c,  /* [8749] */
    (xdc_Char)0x6f,  /* [8750] */
    (xdc_Char)0x67,  /* [8751] */
    (xdc_Char)0x67,  /* [8752] */
    (xdc_Char)0x65,  /* [8753] */
    (xdc_Char)0x72,  /* [8754] */
    (xdc_Char)0x53,  /* [8755] */
    (xdc_Char)0x74,  /* [8756] */
    (xdc_Char)0x6f,  /* [8757] */
    (xdc_Char)0x70,  /* [8758] */
    (xdc_Char)0x4d,  /* [8759] */
    (xdc_Char)0x6f,  /* [8760] */
    (xdc_Char)0x64,  /* [8761] */
    (xdc_Char)0x65,  /* [8762] */
    (xdc_Char)0x0,  /* [8763] */
    (xdc_Char)0x51,  /* [8764] */
    (xdc_Char)0x75,  /* [8765] */
    (xdc_Char)0x65,  /* [8766] */
    (xdc_Char)0x75,  /* [8767] */
    (xdc_Char)0x65,  /* [8768] */
    (xdc_Char)0x44,  /* [8769] */
    (xdc_Char)0x65,  /* [8770] */
    (xdc_Char)0x73,  /* [8771] */
    (xdc_Char)0x63,  /* [8772] */
    (xdc_Char)0x72,  /* [8773] */
    (xdc_Char)0x69,  /* [8774] */
    (xdc_Char)0x70,  /* [8775] */
    (xdc_Char)0x74,  /* [8776] */
    (xdc_Char)0x6f,  /* [8777] */
    (xdc_Char)0x72,  /* [8778] */
    (xdc_Char)0x0,  /* [8779] */
    (xdc_Char)0x55,  /* [8780] */
    (xdc_Char)0x49,  /* [8781] */
    (xdc_Char)0x41,  /* [8782] */
    (xdc_Char)0x4d,  /* [8783] */
    (xdc_Char)0x65,  /* [8784] */
    (xdc_Char)0x74,  /* [8785] */
    (xdc_Char)0x61,  /* [8786] */
    (xdc_Char)0x44,  /* [8787] */
    (xdc_Char)0x61,  /* [8788] */
    (xdc_Char)0x74,  /* [8789] */
    (xdc_Char)0x61,  /* [8790] */
    (xdc_Char)0x0,  /* [8791] */
    (xdc_Char)0x67,  /* [8792] */
    (xdc_Char)0x61,  /* [8793] */
    (xdc_Char)0x74,  /* [8794] */
    (xdc_Char)0x65,  /* [8795] */
    (xdc_Char)0x73,  /* [8796] */
    (xdc_Char)0x2e,  /* [8797] */
    (xdc_Char)0x0,  /* [8798] */
    (xdc_Char)0x47,  /* [8799] */
    (xdc_Char)0x61,  /* [8800] */
    (xdc_Char)0x74,  /* [8801] */
    (xdc_Char)0x65,  /* [8802] */
    (xdc_Char)0x48,  /* [8803] */
    (xdc_Char)0x77,  /* [8804] */
    (xdc_Char)0x69,  /* [8805] */
    (xdc_Char)0x0,  /* [8806] */
    (xdc_Char)0x47,  /* [8807] */
    (xdc_Char)0x61,  /* [8808] */
    (xdc_Char)0x74,  /* [8809] */
    (xdc_Char)0x65,  /* [8810] */
    (xdc_Char)0x4d,  /* [8811] */
    (xdc_Char)0x75,  /* [8812] */
    (xdc_Char)0x74,  /* [8813] */
    (xdc_Char)0x65,  /* [8814] */
    (xdc_Char)0x78,  /* [8815] */
    (xdc_Char)0x0,  /* [8816] */
    (xdc_Char)0x75,  /* [8817] */
    (xdc_Char)0x74,  /* [8818] */
    (xdc_Char)0x69,  /* [8819] */
    (xdc_Char)0x6c,  /* [8820] */
    (xdc_Char)0x73,  /* [8821] */
    (xdc_Char)0x2e,  /* [8822] */
    (xdc_Char)0x0,  /* [8823] */
    (xdc_Char)0x4c,  /* [8824] */
    (xdc_Char)0x6f,  /* [8825] */
    (xdc_Char)0x61,  /* [8826] */
    (xdc_Char)0x64,  /* [8827] */
    (xdc_Char)0x0,  /* [8828] */
    (xdc_Char)0x74,  /* [8829] */
    (xdc_Char)0x69,  /* [8830] */
    (xdc_Char)0x2e,  /* [8831] */
    (xdc_Char)0x73,  /* [8832] */
    (xdc_Char)0x79,  /* [8833] */
    (xdc_Char)0x73,  /* [8834] */
    (xdc_Char)0x62,  /* [8835] */
    (xdc_Char)0x69,  /* [8836] */
    (xdc_Char)0x6f,  /* [8837] */
    (xdc_Char)0x73,  /* [8838] */
    (xdc_Char)0x2e,  /* [8839] */
    (xdc_Char)0x6b,  /* [8840] */
    (xdc_Char)0x6e,  /* [8841] */
    (xdc_Char)0x6c,  /* [8842] */
    (xdc_Char)0x2e,  /* [8843] */
    (xdc_Char)0x54,  /* [8844] */
    (xdc_Char)0x61,  /* [8845] */
    (xdc_Char)0x73,  /* [8846] */
    (xdc_Char)0x6b,  /* [8847] */
    (xdc_Char)0x2e,  /* [8848] */
    (xdc_Char)0x49,  /* [8849] */
    (xdc_Char)0x64,  /* [8850] */
    (xdc_Char)0x6c,  /* [8851] */
    (xdc_Char)0x65,  /* [8852] */
    (xdc_Char)0x54,  /* [8853] */
    (xdc_Char)0x61,  /* [8854] */
    (xdc_Char)0x73,  /* [8855] */
    (xdc_Char)0x6b,  /* [8856] */
    (xdc_Char)0x0,  /* [8857] */
    (xdc_Char)0x4c,  /* [8858] */
    (xdc_Char)0x6f,  /* [8859] */
    (xdc_Char)0x61,  /* [8860] */
    (xdc_Char)0x64,  /* [8861] */
    (xdc_Char)0x20,  /* [8862] */
    (xdc_Char)0x4c,  /* [8863] */
    (xdc_Char)0x6f,  /* [8864] */
    (xdc_Char)0x67,  /* [8865] */
    (xdc_Char)0x67,  /* [8866] */
    (xdc_Char)0x65,  /* [8867] */
    (xdc_Char)0x72,  /* [8868] */
    (xdc_Char)0x0,  /* [8869] */
    (xdc_Char)0x4d,  /* [8870] */
    (xdc_Char)0x61,  /* [8871] */
    (xdc_Char)0x69,  /* [8872] */
    (xdc_Char)0x6e,  /* [8873] */
    (xdc_Char)0x20,  /* [8874] */
    (xdc_Char)0x4c,  /* [8875] */
    (xdc_Char)0x6f,  /* [8876] */
    (xdc_Char)0x67,  /* [8877] */
    (xdc_Char)0x67,  /* [8878] */
    (xdc_Char)0x65,  /* [8879] */
    (xdc_Char)0x72,  /* [8880] */
    (xdc_Char)0x0,  /* [8881] */
    (xdc_Char)0x53,  /* [8882] */
    (xdc_Char)0x59,  /* [8883] */
    (xdc_Char)0x53,  /* [8884] */
    (xdc_Char)0x42,  /* [8885] */
    (xdc_Char)0x49,  /* [8886] */
    (xdc_Char)0x4f,  /* [8887] */
    (xdc_Char)0x53,  /* [8888] */
    (xdc_Char)0x20,  /* [8889] */
    (xdc_Char)0x53,  /* [8890] */
    (xdc_Char)0x79,  /* [8891] */
    (xdc_Char)0x73,  /* [8892] */
    (xdc_Char)0x74,  /* [8893] */
    (xdc_Char)0x65,  /* [8894] */
    (xdc_Char)0x6d,  /* [8895] */
    (xdc_Char)0x20,  /* [8896] */
    (xdc_Char)0x4c,  /* [8897] */
    (xdc_Char)0x6f,  /* [8898] */
    (xdc_Char)0x67,  /* [8899] */
    (xdc_Char)0x67,  /* [8900] */
    (xdc_Char)0x65,  /* [8901] */
    (xdc_Char)0x72,  /* [8902] */
    (xdc_Char)0x0,  /* [8903] */
};

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[69] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x207a,  /* left */
        (xdc_Bits16)0x207f,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x2088,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x208f,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x2094,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x209d,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x20a3,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x20a9,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x20ae,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x20b2,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x20b7,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x20be,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x20c7,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x20cf,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x20d6,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x20dd,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x20e2,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x20ec,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x20fa,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x2100,  /* left */
        (xdc_Bits16)0x2104,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x210d,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x2112,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x211c,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x2122,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x2126,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x2100,  /* left */
        (xdc_Bits16)0x212b,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x2134,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x2139,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x213e,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x2142,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x2148,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x214d,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x2153,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x2158,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x2163,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x2169,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x216f,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x2179,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x217d,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x2182,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8027,  /* left */
        (xdc_Bits16)0x210d,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x218a,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x213e,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x218e,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x21a0,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x21ac,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802d,  /* left */
        (xdc_Bits16)0x21b1,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x802d,  /* left */
        (xdc_Bits16)0x2142,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x21c3,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x8030,  /* left */
        (xdc_Bits16)0x21ca,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x2100,  /* left */
        (xdc_Bits16)0x21d2,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x21d7,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x21df,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x21e8,  /* right */
    },  /* [53] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x21f5,  /* right */
    },  /* [54] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x21fc,  /* right */
    },  /* [55] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x2203,  /* right */
    },  /* [56] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x2210,  /* right */
    },  /* [57] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x221d,  /* right */
    },  /* [58] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x207f,  /* right */
    },  /* [59] */
    {
        (xdc_Bits16)0x803b,  /* left */
        (xdc_Bits16)0x2225,  /* right */
    },  /* [60] */
    {
        (xdc_Bits16)0x803b,  /* left */
        (xdc_Bits16)0x222d,  /* right */
    },  /* [61] */
    {
        (xdc_Bits16)0x803b,  /* left */
        (xdc_Bits16)0x223c,  /* right */
    },  /* [62] */
    {
        (xdc_Bits16)0x803b,  /* left */
        (xdc_Bits16)0x224c,  /* right */
    },  /* [63] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x2258,  /* right */
    },  /* [64] */
    {
        (xdc_Bits16)0x8040,  /* left */
        (xdc_Bits16)0x225f,  /* right */
    },  /* [65] */
    {
        (xdc_Bits16)0x8040,  /* left */
        (xdc_Bits16)0x2267,  /* right */
    },  /* [66] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x2271,  /* right */
    },  /* [67] */
    {
        (xdc_Bits16)0x8043,  /* left */
        (xdc_Bits16)0x2278,  /* right */
    },  /* [68] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x22c8;

/* nodeCnt__C */
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x45;

/* unnamedModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((CT__xdc_runtime_Timestamp_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((CT__xdc_runtime_Timestamp_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((CT__xdc_runtime_Timestamp_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((CT__xdc_runtime_Timestamp_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__startupDoneFxn xdc_runtime_Timestamp_Module__startupDoneFxn__C = ((CT__xdc_runtime_Timestamp_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = 0;


/*
 * ======== xdc.runtime.TimestampNull INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsEnabled xdc_runtime_TimestampNull_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsIncluded xdc_runtime_TimestampNull_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsMask xdc_runtime_TimestampNull_Module__diagsMask__C = ((CT__xdc_runtime_TimestampNull_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__gateObj xdc_runtime_TimestampNull_Module__gateObj__C = ((CT__xdc_runtime_TimestampNull_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__gatePrms xdc_runtime_TimestampNull_Module__gatePrms__C = ((CT__xdc_runtime_TimestampNull_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__id xdc_runtime_TimestampNull_Module__id__C = (xdc_Bits16)0x8011;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerDefined xdc_runtime_TimestampNull_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerObj xdc_runtime_TimestampNull_Module__loggerObj__C = ((CT__xdc_runtime_TimestampNull_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn0 xdc_runtime_TimestampNull_Module__loggerFxn0__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn1 xdc_runtime_TimestampNull_Module__loggerFxn1__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn2 xdc_runtime_TimestampNull_Module__loggerFxn2__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn4 xdc_runtime_TimestampNull_Module__loggerFxn4__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn8 xdc_runtime_TimestampNull_Module__loggerFxn8__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__startupDoneFxn xdc_runtime_TimestampNull_Module__startupDoneFxn__C = ((CT__xdc_runtime_TimestampNull_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Object__count xdc_runtime_TimestampNull_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Object__heap xdc_runtime_TimestampNull_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Object__sizeof xdc_runtime_TimestampNull_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Object__table xdc_runtime_TimestampNull_Object__table__C = 0;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Types INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Types_Module__diagsEnabled xdc_runtime_Types_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Types_Module__diagsIncluded xdc_runtime_Types_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Types_Module__diagsMask xdc_runtime_Types_Module__diagsMask__C = ((CT__xdc_runtime_Types_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Types_Module__gateObj xdc_runtime_Types_Module__gateObj__C = ((CT__xdc_runtime_Types_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Types_Module__gatePrms xdc_runtime_Types_Module__gatePrms__C = ((CT__xdc_runtime_Types_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Types_Module__id xdc_runtime_Types_Module__id__C = (xdc_Bits16)0x8012;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerDefined xdc_runtime_Types_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerObj xdc_runtime_Types_Module__loggerObj__C = ((CT__xdc_runtime_Types_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn0 xdc_runtime_Types_Module__loggerFxn0__C = ((CT__xdc_runtime_Types_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn1 xdc_runtime_Types_Module__loggerFxn1__C = ((CT__xdc_runtime_Types_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn2 xdc_runtime_Types_Module__loggerFxn2__C = ((CT__xdc_runtime_Types_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn4 xdc_runtime_Types_Module__loggerFxn4__C = ((CT__xdc_runtime_Types_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn8 xdc_runtime_Types_Module__loggerFxn8__C = ((CT__xdc_runtime_Types_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Types_Module__startupDoneFxn xdc_runtime_Types_Module__startupDoneFxn__C = ((CT__xdc_runtime_Types_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Types_Object__count xdc_runtime_Types_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Types_Object__heap xdc_runtime_Types_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Types_Object__sizeof xdc_runtime_Types_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Types_Object__table xdc_runtime_Types_Object__table__C = 0;

/* Module_startup */
xdc_Int ti_sysbios_family_arm_lm4_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_lm4_Timer_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_m3_Hwi_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.gates.GateHwi FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateHwi_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateHwi_query__F(qual);
}


/*
 * ======== ti.sysbios.gates.GateMutex FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateMutex_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateMutex_query__F(qual);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Hwi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Timer_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Clock_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Clock_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Swi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Swi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Task_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Task_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_uia_runtime_LogSync_Module_startup__E( xdc_Int state )
{
    return ti_uia_runtime_LogSync_Module_startup__F(state);
}


/*
 * ======== ti.uia.runtime.LoggerStopMode FUNCTION STUBS ========
 */

/* getTransferType__E */
ti_uia_runtime_IUIATransfer_TransferType ti_uia_runtime_LoggerStopMode_getTransferType__E( ti_uia_runtime_LoggerStopMode_Handle __inst ) 
{
    return ti_uia_runtime_LoggerStopMode_getTransferType__F((void*)__inst);
}

/* reset__E */
xdc_Void ti_uia_runtime_LoggerStopMode_reset__E( ti_uia_runtime_LoggerStopMode_Handle __inst ) 
{
    ti_uia_runtime_LoggerStopMode_reset__F((void*)__inst);
}

/* flushAll__E */
xdc_Void ti_uia_runtime_LoggerStopMode_flushAll__E( void ) 
{
    ti_uia_runtime_LoggerStopMode_flushAll__F();
}

/* Module_startup */
xdc_Int ti_uia_runtime_LoggerStopMode_Module_startup__E( xdc_Int state )
{
    return ti_uia_runtime_LoggerStopMode_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Diags FUNCTION STUBS ========
 */

/* setMask__E */
xdc_Void xdc_runtime_Diags_setMask__E( xdc_CString control ) 
{
    xdc_runtime_Diags_setMask__F(control);
}


/*
 * ======== xdc.runtime.Error FUNCTION STUBS ========
 */

/* check__E */
xdc_Bool xdc_runtime_Error_check__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_check__F(eb);
}

/* getData__E */
xdc_runtime_Error_Data* xdc_runtime_Error_getData__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getData__F(eb);
}

/* getCode__E */
xdc_UInt16 xdc_runtime_Error_getCode__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getCode__F(eb);
}

/* getId__E */
xdc_runtime_Error_Id xdc_runtime_Error_getId__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getId__F(eb);
}

/* getMsg__E */
xdc_String xdc_runtime_Error_getMsg__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getMsg__F(eb);
}

/* getSite__E */
xdc_runtime_Types_Site* xdc_runtime_Error_getSite__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getSite__F(eb);
}

/* init__E */
xdc_Void xdc_runtime_Error_init__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_init__F(eb);
}

/* print__E */
xdc_Void xdc_runtime_Error_print__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_print__F(eb);
}

/* raiseX__E */
xdc_Void xdc_runtime_Error_raiseX__E( xdc_runtime_Error_Block* eb, xdc_runtime_Types_ModuleId mod, xdc_CString file, xdc_Int line, xdc_runtime_Error_Id id, xdc_IArg arg1, xdc_IArg arg2 ) 
{
    xdc_runtime_Error_raiseX__F(eb, mod, file, line, id, arg1, arg2);
}


/*
 * ======== xdc.runtime.Gate FUNCTION STUBS ========
 */

/* enterSystem__E */
xdc_IArg xdc_runtime_Gate_enterSystem__E( void ) 
{
    return xdc_runtime_Gate_enterSystem__F();
}

/* leaveSystem__E */
xdc_Void xdc_runtime_Gate_leaveSystem__E( xdc_IArg key ) 
{
    xdc_runtime_Gate_leaveSystem__F(key);
}


/*
 * ======== xdc.runtime.Log FUNCTION STUBS ========
 */

/* doPrint__E */
xdc_Void xdc_runtime_Log_doPrint__E( xdc_runtime_Log_EventRec* evRec ) 
{
    xdc_runtime_Log_doPrint__F(evRec);
}


/*
 * ======== xdc.runtime.Memory FUNCTION STUBS ========
 */

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_alloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_alloc__F(heap, size, align, eb);
}

/* calloc__E */
xdc_Ptr xdc_runtime_Memory_calloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_calloc__F(heap, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_free__E( xdc_runtime_IHeap_Handle heap, xdc_Ptr block, xdc_SizeT size ) 
{
    xdc_runtime_Memory_free__F(heap, block, size);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_getStats__E( xdc_runtime_IHeap_Handle heap, xdc_runtime_Memory_Stats* stats ) 
{
    xdc_runtime_Memory_getStats__F(heap, stats);
}

/* query__E */
xdc_Bool xdc_runtime_Memory_query__E( xdc_runtime_IHeap_Handle heap, xdc_Int qual ) 
{
    return xdc_runtime_Memory_query__F(heap, qual);
}

/* getMaxDefaultTypeAlign__E */
xdc_SizeT xdc_runtime_Memory_getMaxDefaultTypeAlign__E( void ) 
{
    return xdc_runtime_Memory_getMaxDefaultTypeAlign__F();
}

/* valloc__E */
xdc_Ptr xdc_runtime_Memory_valloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_Char value, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_valloc__F(heap, size, align, value, eb);
}


/*
 * ======== xdc.runtime.Registry FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Registry_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Registry_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Registry_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Registry_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Registry_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Registry_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Registry_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Registry_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Registry_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Registry_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Registry_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Registry_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Registry_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Registry_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Registry_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Registry_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Registry_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Registry_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_Registry_addModule__ENTRY_EVT 0x0
#define xdc_runtime_Registry_addModule__EXIT_EVT 0x0
#define xdc_runtime_Registry_findByName__ENTRY_EVT 0x0
#define xdc_runtime_Registry_findByName__EXIT_EVT 0x0
#define xdc_runtime_Registry_findByNamePattern__ENTRY_EVT 0x0
#define xdc_runtime_Registry_findByNamePattern__EXIT_EVT 0x0
#define xdc_runtime_Registry_findById__ENTRY_EVT 0x0
#define xdc_runtime_Registry_findById__EXIT_EVT 0x0
#define xdc_runtime_Registry_getMask__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getMask__EXIT_EVT 0x0
#define xdc_runtime_Registry_isMember__ENTRY_EVT 0x0
#define xdc_runtime_Registry_isMember__EXIT_EVT 0x0
#define xdc_runtime_Registry_getNextModule__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getNextModule__EXIT_EVT 0x0
#define xdc_runtime_Registry_getModuleName__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getModuleName__EXIT_EVT 0x0
#define xdc_runtime_Registry_getModuleId__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getModuleId__EXIT_EVT 0x0

/* addModule__E */
xdc_runtime_Registry_Result xdc_runtime_Registry_addModule__E( xdc_runtime_Registry_Desc* desc, xdc_CString modName ) 
{
    return xdc_runtime_Registry_addModule__F(desc, modName);
}

/* findByName__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByName__E( xdc_CString modName ) 
{
    return xdc_runtime_Registry_findByName__F(modName);
}

/* findByNamePattern__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByNamePattern__E( xdc_CString namePat, xdc_Int len, xdc_runtime_Registry_Desc* prev ) 
{
    return xdc_runtime_Registry_findByNamePattern__F(namePat, len, prev);
}

/* findById__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findById__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_findById__F(mid);
}

/* getMask__E */
xdc_Bool xdc_runtime_Registry_getMask__E( xdc_CString name, xdc_runtime_Types_DiagsMask* mask ) 
{
    return xdc_runtime_Registry_getMask__F(name, mask);
}

/* isMember__E */
xdc_Bool xdc_runtime_Registry_isMember__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_isMember__F(mid);
}

/* getNextModule__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_getNextModule__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getNextModule__F(desc);
}

/* getModuleName__E */
xdc_CString xdc_runtime_Registry_getModuleName__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleName__F(desc);
}

/* getModuleId__E */
xdc_runtime_Types_ModuleId xdc_runtime_Registry_getModuleId__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleId__F(desc);
}


/*
 * ======== xdc.runtime.Startup FUNCTION STUBS ========
 */

/* exec__E */
xdc_Void xdc_runtime_Startup_exec__E( void ) 
{
    xdc_runtime_Startup_exec__F();
}

/* rtsDone__E */
xdc_Bool xdc_runtime_Startup_rtsDone__E( void ) 
{
    return xdc_runtime_Startup_rtsDone__F();
}


/*
 * ======== xdc.runtime.SysMin FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_SysMin_abort__E( xdc_CString str ) 
{
    xdc_runtime_SysMin_abort__F(str);
}

/* exit__E */
xdc_Void xdc_runtime_SysMin_exit__E( xdc_Int stat ) 
{
    xdc_runtime_SysMin_exit__F(stat);
}

/* flush__E */
xdc_Void xdc_runtime_SysMin_flush__E( void ) 
{
    xdc_runtime_SysMin_flush__F();
}

/* putch__E */
xdc_Void xdc_runtime_SysMin_putch__E( xdc_Char ch ) 
{
    xdc_runtime_SysMin_putch__F(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_SysMin_ready__E( void ) 
{
    return xdc_runtime_SysMin_ready__F();
}

/* Module_startup */
xdc_Int xdc_runtime_SysMin_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_SysMin_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_System_abort__E( xdc_CString str ) 
{
    xdc_runtime_System_abort__F(str);
}

/* atexit__E */
xdc_Bool xdc_runtime_System_atexit__E( xdc_runtime_System_AtexitHandler handler ) 
{
    return xdc_runtime_System_atexit__F(handler);
}

/* exit__E */
xdc_Void xdc_runtime_System_exit__E( xdc_Int stat ) 
{
    xdc_runtime_System_exit__F(stat);
}

/* putch__E */
xdc_Void xdc_runtime_System_putch__E( xdc_Char ch ) 
{
    xdc_runtime_System_putch__F(ch);
}

/* flush__E */
xdc_Void xdc_runtime_System_flush__E( void ) 
{
    xdc_runtime_System_flush__F();
}

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* vprintf__E */
xdc_Int xdc_runtime_System_vprintf__E( xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vprintf__F(fmt, va);
}

/* avprintf__E */
xdc_Int xdc_runtime_System_avprintf__E( xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avprintf__F(fmt, va);
}

/* vsprintf__E */
xdc_Int xdc_runtime_System_vsprintf__E( xdc_Char buf[], xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vsprintf__F(buf, fmt, va);
}

/* avsprintf__E */
xdc_Int xdc_runtime_System_avsprintf__E( xdc_Char buf[], xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avsprintf__F(buf, fmt, va);
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}

/* vsnprintf__E */
xdc_Int xdc_runtime_System_vsnprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vsnprintf__F(buf, n, fmt, va);
}

/* Module_startup */
xdc_Int xdc_runtime_System_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_System_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Text FUNCTION STUBS ========
 */

/* cordText__E */
xdc_String xdc_runtime_Text_cordText__E( xdc_runtime_Text_CordAddr cord ) 
{
    return xdc_runtime_Text_cordText__F(cord);
}

/* ropeText__E */
xdc_String xdc_runtime_Text_ropeText__E( xdc_runtime_Text_RopeId rope ) 
{
    return xdc_runtime_Text_ropeText__F(rope);
}

/* matchRope__E */
xdc_Int xdc_runtime_Text_matchRope__E( xdc_runtime_Text_RopeId rope, xdc_CString pat, xdc_Int* lenp ) 
{
    return xdc_runtime_Text_matchRope__F(rope, pat, lenp);
}

/* putLab__E */
xdc_Int xdc_runtime_Text_putLab__E( xdc_runtime_Types_Label* lab, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putLab__F(lab, bufp, len);
}

/* putMod__E */
xdc_Int xdc_runtime_Text_putMod__E( xdc_runtime_Types_ModuleId mid, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putMod__F(mid, bufp, len);
}

/* putSite__E */
xdc_Int xdc_runtime_Text_putSite__E( xdc_runtime_Types_Site* site, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putSite__F(site, bufp, len);
}


/*
 * ======== xdc.runtime.Timestamp FUNCTION STUBS ========
 */

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_get32__E( void ) 
{
    return xdc_runtime_Timestamp_get32__F();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_get64__E( xdc_runtime_Types_Timestamp64* result ) 
{
    xdc_runtime_Timestamp_get64__F(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_getFreq__E( xdc_runtime_Types_FreqHz* freq ) 
{
    xdc_runtime_Timestamp_getFreq__F(freq);
}


/*
 * ======== xdc.runtime.TimestampNull FUNCTION STUBS ========
 */

/* get32__E */
xdc_Bits32 xdc_runtime_TimestampNull_get32__E( void ) 
{
    return xdc_runtime_TimestampNull_get32__F();
}

/* get64__E */
xdc_Void xdc_runtime_TimestampNull_get64__E( xdc_runtime_Types_Timestamp64* result ) 
{
    xdc_runtime_TimestampNull_get64__F(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_TimestampNull_getFreq__E( xdc_runtime_Types_FreqHz* freq ) 
{
    xdc_runtime_TimestampNull_getFreq__F(freq);
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_BIOS_RtsGateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_arm_m3_Hwi_Object__create__S(oa, osz, aa, (ti_sysbios_family_arm_m3_Hwi___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_IHwi_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_m3_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_arm_m3_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_m3_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char* ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_arm_m3_Hwi_getFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_m3_Hwi_setFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_arm_m3_Hwi_getHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_m3_Hwi_setHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_arm_m3_Hwi_getIrp((ti_sysbios_family_arm_m3_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer_TimerProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_arm_lm4_Timer_Object__create__S(oa, osz, aa, (ti_sysbios_family_arm_lm4_Timer___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_ITimer_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Timer_TimerProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_lm4_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_TimerProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_arm_lm4_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_lm4_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_lm4_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_lm4_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 periodCounts )
{
    return ti_sysbios_family_arm_lm4_Timer_getMaxTicks((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, periodCounts);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 newPeriod, xdc_UInt32 countsPerTick )
{
    ti_sysbios_family_arm_lm4_Timer_setNextTick((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, newPeriod, countsPerTick);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_start((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_stop((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_lm4_Timer_setPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_lm4_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getCount((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_family_arm_lm4_Timer_getFreq((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_arm_lm4_Timer_getFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_lm4_Timer_setFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_lm4_Timer_trigger((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredCounts((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_arm_m3_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr* oldtskContext, xdc_Ptr* newtskContext )
{
    ti_sysbios_family_arm_m3_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getDefaultStackSize();
}


/*
 * ======== ti.uia.runtime.LogSync_CpuTimestampProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.Timestamp */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_LogSync_CpuTimestampProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_Timestamp_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 ti_uia_runtime_LogSync_CpuTimestampProxy_get32__E( void )
{
    return xdc_runtime_Timestamp_get32();
}

/* get64__E */
xdc_Void ti_uia_runtime_LogSync_CpuTimestampProxy_get64__E( xdc_runtime_Types_Timestamp64* result )
{
    xdc_runtime_Timestamp_get64(result);
}

/* getFreq__E */
xdc_Void ti_uia_runtime_LogSync_CpuTimestampProxy_getFreq__E( xdc_runtime_Types_FreqHz* freq )
{
    xdc_runtime_Timestamp_getFreq(freq);
}


/*
 * ======== ti.uia.runtime.LogSync_GlobalTimestampProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.TimestampNull */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_LogSync_GlobalTimestampProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_TimestampNull_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 ti_uia_runtime_LogSync_GlobalTimestampProxy_get32__E( void )
{
    return xdc_runtime_TimestampNull_get32();
}

/* get64__E */
xdc_Void ti_uia_runtime_LogSync_GlobalTimestampProxy_get64__E( xdc_runtime_Types_Timestamp64* result )
{
    xdc_runtime_TimestampNull_get64(result);
}

/* getFreq__E */
xdc_Void ti_uia_runtime_LogSync_GlobalTimestampProxy_getFreq__E( xdc_runtime_Types_FreqHz* freq )
{
    xdc_runtime_TimestampNull_getFreq(freq);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Main_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_heaps_HeapMem_Object__create__S(oa, osz, aa, (ti_sysbios_heaps_HeapMem___ParamsPtr)pa, sizeof(xdc_runtime_IHeap_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Memory_HeapProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats* stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_System_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64* result )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_getFreq(freq);
}


/*
 * ======== ti.sysbios.family.arm.lm4.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_lm4_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_lm4_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_lm4_Timer___S1) - sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Timer_Object2__ s0; char c; } ti_sysbios_hal_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Timer___S1) - sizeof(ti_sysbios_hal_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    offsetof(ti_sysbios_knl_Task_Object__, __name), /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};



/*
 * ======== ti.uia.runtime.LogSync OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_uia_runtime_LogSync_Object2__ s0; char c; } ti_uia_runtime_LogSync___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_runtime_LogSync_Object__DESC__C = {
    (Ptr)&ti_uia_runtime_LogSync_Module__FXNS__C, /* fxnTab */
    &ti_uia_runtime_LogSync_Module__root__V.link, /* modLink */
    sizeof(ti_uia_runtime_LogSync___S1) - sizeof(ti_uia_runtime_LogSync_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_uia_runtime_LogSync_Object2__), /* objSize */
    (Ptr)&ti_uia_runtime_LogSync_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_uia_runtime_LogSync_Params), /* prmsSize */
};



/*
 * ======== ti.uia.runtime.LoggerStopMode OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_uia_runtime_LoggerStopMode_Object2__ s0; char c; } ti_uia_runtime_LoggerStopMode___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_runtime_LoggerStopMode_Object__DESC__C = {
    (Ptr)&ti_uia_runtime_LoggerStopMode_Module__FXNS__C, /* fxnTab */
    &ti_uia_runtime_LoggerStopMode_Module__root__V.link, /* modLink */
    sizeof(ti_uia_runtime_LoggerStopMode___S1) - sizeof(ti_uia_runtime_LoggerStopMode_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_uia_runtime_LoggerStopMode_Object2__), /* objSize */
    (Ptr)&ti_uia_runtime_LoggerStopMode_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_uia_runtime_LoggerStopMode_Params), /* prmsSize */
};



/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.lm4.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_lm4_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_arm_lm4_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32815;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_arm_lm4_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_family_arm_lm4_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_lm4_Timer_Object__*)ti_sysbios_family_arm_lm4_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_lm4_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_arm_lm4_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_arm_lm4_Timer_Params prms;
    ti_sysbios_family_arm_lm4_Timer_Object* obj;
    int iStat;

    ti_sysbios_family_arm_lm4_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, *((ti_sysbios_family_arm_lm4_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_family_arm_lm4_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.m3.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_arm_m3_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32810;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_arm_m3_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_family_arm_m3_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_m3_Hwi_Object__*)ti_sysbios_family_arm_m3_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_arm_m3_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params prms;
    ti_sysbios_family_arm_m3_Hwi_Object* obj;
    int iStat;

    ti_sysbios_family_arm_m3_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_m3_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateHwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32833;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__*)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateMutex_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32834;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__*)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32796;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__*)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object* obj;
    int iStat;

    ti_sysbios_hal_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.hal.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32797;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Timer_Object__*)ti_sysbios_hal_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Timer_Params prms;
    ti_sysbios_hal_Timer_Object* obj;
    int iStat;

    ti_sysbios_hal_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, *((ti_sysbios_hal_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32817;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__*)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapMem_Object__*)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Clock_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32799;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__*)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Clock___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object* obj;

    ti_sysbios_knl_Clock_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__F(obj, args->clockFxn, args->timeout, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Event_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Event_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32802;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Event_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Event_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Event_Object__*)ti_sysbios_knl_Event_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Event___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Event_Params prms;
    ti_sysbios_knl_Event_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Event_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Queue_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32803;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__*)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Queue___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Semaphore_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32804;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__*)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object* obj;

    ti_sysbios_knl_Semaphore_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__F(obj, args->count, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Swi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32805;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__*)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Swi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object* obj;
    int iStat;

    ti_sysbios_knl_Swi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__F(obj, args->swiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Task_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32806;
    xdc_runtime_Core_assignLabel(lab, ((ti_sysbios_knl_Task_Object__*)obj)->__name, 1);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__*)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Task___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object* obj;
    int iStat;

    ti_sysbios_knl_Task_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.utils.Load SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_utils_Load_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.DvtTypes SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_DvtTypes_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.UIABenchmark SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIABenchmark_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAErr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAErr_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAEvt SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAEvt_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.UIARoundtrip SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIARoundtrip_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAStatistic SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAStatistic_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.UIASync SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIASync_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.runtime.LogSync SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_uia_runtime_LogSync_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_uia_runtime_LogSync_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_uia_runtime_LogSync_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_uia_runtime_LogSync_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_uia_runtime_LogSync_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_uia_runtime_LogSync_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_uia_runtime_LogSync_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_uia_runtime_LogSync_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_uia_runtime_LogSync_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_uia_runtime_LogSync_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_uia_runtime_LogSync_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_uia_runtime_LogSync_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_uia_runtime_LogSync_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_uia_runtime_LogSync_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_uia_runtime_LogSync_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_uia_runtime_LogSync_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_uia_runtime_LogSync_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_uia_runtime_LogSync_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_LogSync_Module__startupDone__S( void ) 
{
    return ti_uia_runtime_LogSync_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_uia_runtime_LogSync_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32828;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_uia_runtime_LogSync_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_uia_runtime_LogSync_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_uia_runtime_LogSync_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_uia_runtime_LogSync_Object__*)oa) + i;
    }

    if (ti_uia_runtime_LogSync_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_uia_runtime_LogSync_Object__*)ti_uia_runtime_LogSync_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_uia_runtime_LogSync_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_uia_runtime_LogSync_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_uia_runtime_LogSync_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_uia_runtime_LogSync_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_uia_runtime_LogSync_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_uia_runtime_LogSync_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_uia_runtime_LogSync___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_uia_runtime_LogSync_Params prms;
    ti_uia_runtime_LogSync_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_uia_runtime_LogSync_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_uia_runtime_LogSync_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_runtime_LogSync_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_uia_runtime_LogSync_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_runtime_LogSync_Object__DESC__C, *((ti_uia_runtime_LogSync_Object**)instp), NULL, -1, FALSE);
    *((ti_uia_runtime_LogSync_Handle*)instp) = NULL;
}


/*
 * ======== ti.uia.runtime.LogSync_CpuTimestampProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_uia_runtime_LogSync_CpuTimestampProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_uia_runtime_LogSync_CpuTimestampProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_Timestamp_Module__FXNS__C;
}


/*
 * ======== ti.uia.runtime.LogSync_GlobalTimestampProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_uia_runtime_LogSync_GlobalTimestampProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_uia_runtime_LogSync_GlobalTimestampProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_TimestampNull_Module__FXNS__C;
}


/*
 * ======== ti.uia.runtime.LoggerStopMode SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_uia_runtime_LoggerStopMode_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_uia_runtime_LoggerStopMode_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_uia_runtime_LoggerStopMode_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_uia_runtime_LoggerStopMode_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_uia_runtime_LoggerStopMode_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_uia_runtime_LoggerStopMode_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_uia_runtime_LoggerStopMode_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_uia_runtime_LoggerStopMode_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_uia_runtime_LoggerStopMode_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_uia_runtime_LoggerStopMode_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_uia_runtime_LoggerStopMode_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_uia_runtime_LoggerStopMode_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_uia_runtime_LoggerStopMode_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_uia_runtime_LoggerStopMode_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_uia_runtime_LoggerStopMode_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_uia_runtime_LoggerStopMode_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_uia_runtime_LoggerStopMode_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_uia_runtime_LoggerStopMode_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_LoggerStopMode_Module__startupDone__S( void ) 
{
    return ti_uia_runtime_LoggerStopMode_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_uia_runtime_LoggerStopMode_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32829;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_uia_runtime_LoggerStopMode_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_uia_runtime_LoggerStopMode_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_uia_runtime_LoggerStopMode_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_uia_runtime_LoggerStopMode_Object__*)oa) + i;
    }

    if (ti_uia_runtime_LoggerStopMode_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_uia_runtime_LoggerStopMode_Object__*)ti_uia_runtime_LoggerStopMode_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_uia_runtime_LoggerStopMode_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_uia_runtime_LoggerStopMode_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_uia_runtime_LoggerStopMode_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_uia_runtime_LoggerStopMode_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_uia_runtime_LoggerStopMode_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_uia_runtime_LoggerStopMode_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_uia_runtime_LoggerStopMode___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_uia_runtime_LoggerStopMode_Params prms;
    ti_uia_runtime_LoggerStopMode_Object* obj;
    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_uia_runtime_LoggerStopMode_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_uia_runtime_LoggerStopMode_Instance_init__F(obj, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_uia_runtime_LoggerStopMode_Object__DESC__C, obj, (xdc_Fxn)ti_uia_runtime_LoggerStopMode_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_uia_runtime_LoggerStopMode_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_runtime_LoggerStopMode_Object__DESC__C, obj, (xdc_Fxn)ti_uia_runtime_LoggerStopMode_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_uia_runtime_LoggerStopMode_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_runtime_LoggerStopMode_Object__DESC__C, *((ti_uia_runtime_LoggerStopMode_Object**)instp), (xdc_Fxn)ti_uia_runtime_LoggerStopMode_Instance_finalize__F, 0, FALSE);
    *((ti_uia_runtime_LoggerStopMode_Handle*)instp) = NULL;
}


/*
 * ======== ti.uia.runtime.QueueDescriptor SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_QueueDescriptor_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.runtime.UIAMetaData SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_UIAMetaData_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void ) 
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.TimestampNull SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_TimestampNull_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== xdc.runtime.Types SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Types_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */











/*
 * ======== CONSTANTS ========
 */

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
#pragma DATA_SECTION(ti_uia_events_IUIAEvent_Interface__BASE__C, ".const:ti_uia_events_IUIAEvent_Interface__BASE__C");
#pragma DATA_SECTION(ti_uia_events_IUIAMetaProvider_Interface__BASE__C, ".const:ti_uia_events_IUIAMetaProvider_Interface__BASE__C");
#pragma DATA_SECTION(ti_uia_runtime_IUIATraceSyncClient_Interface__BASE__C, ".const:ti_uia_runtime_IUIATraceSyncClient_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IFilterLogger_Interface__BASE__C, ".const:xdc_runtime_IFilterLogger_Interface__BASE__C");
#pragma DATA_SECTION(ti_uia_runtime_IUIATransfer_Interface__BASE__C, ".const:ti_uia_runtime_IUIATransfer_Interface__BASE__C");
#pragma DATA_SECTION(ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, ".const:ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ITimestampProvider_Interface__BASE__C, ".const:xdc_runtime_ITimestampProvider_Interface__BASE__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__FXNS__C, ".const:ti_uia_events_UIABenchmark_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__FXNS__C, ".const:ti_uia_events_UIAErr_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__FXNS__C, ".const:ti_uia_events_UIAEvt_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__FXNS__C, ".const:ti_uia_events_UIARoundtrip_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__FXNS__C, ".const:ti_uia_events_UIAStatistic_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__FXNS__C, ".const:ti_uia_events_UIASync_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__FXNS__C, ".const:ti_uia_runtime_LogSync_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__FXNS__C, ".const:ti_uia_runtime_LoggerStopMode_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__FXNS__C, ".const:xdc_runtime_TimestampNull_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__PARAMS__C, ".const:ti_uia_runtime_LogSync_Object__PARAMS__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__PARAMS__C, ".const:ti_uia_runtime_LoggerStopMode_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module_State_taskList__O, ".const:ti_sysbios_utils_Load_Module_State_taskList__O");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__id__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__count__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__table__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_anyMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_anyMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_enableFunc__C, ".const:ti_sysbios_family_arm_lm4_Timer_enableFunc__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_disableFunc__C, ".const:ti_sysbios_family_arm_lm4_Timer_disableFunc__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_lm4_Timer_startupNeeded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C, ".const:ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priorities__A, ".const:ti_sysbios_family_arm_m3_Hwi_priorities__A");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_m3_Hwi_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_m3_Hwi_LD_end__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_exception__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_exception__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_noIsr__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_noIsr__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_NMI__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_NMI__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hardFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hardFault__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_memFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_memFault__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_busFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_busFault__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_usageFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_usageFault__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_svCall__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_svCall__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_debugMon__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_debugMon__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_reserved__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_reserved__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFunc__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_disablePriority__C, ".const:ti_sysbios_family_arm_m3_Hwi_disablePriority__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priGroup__C, ".const:ti_sysbios_family_arm_m3_Hwi_priGroup__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatchTable__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatchTable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priorities__C, ".const:ti_sysbios_family_arm_m3_Hwi_priorities__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiDisable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskDisable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ccr__C, ".const:ti_sysbios_family_arm_m3_Hwi_ccr__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_hooks__C, ".const:ti_sysbios_family_arm_m3_Hwi_hooks__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__DESC__C, ".const:ti_sysbios_hal_Timer_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Timer_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Timer_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsMask__C, ".const:ti_sysbios_hal_Timer_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gateObj__C, ".const:ti_sysbios_hal_Timer_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gatePrms__C, ".const:ti_sysbios_hal_Timer_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__id__C, ".const:ti_sysbios_hal_Timer_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerDefined__C, ".const:ti_sysbios_hal_Timer_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerObj__C, ".const:ti_sysbios_hal_Timer_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__count__C, ".const:ti_sysbios_hal_Timer_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__heap__C, ".const:ti_sysbios_hal_Timer_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__sizeof__C, ".const:ti_sysbios_hal_Timer_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__table__C, ".const:ti_sysbios_hal_Timer_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Event_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__A, ".const:ti_sysbios_knl_Task_hooks__A");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsEnabled__C, ".const:ti_sysbios_utils_Load_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsIncluded__C, ".const:ti_sysbios_utils_Load_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsMask__C, ".const:ti_sysbios_utils_Load_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gateObj__C, ".const:ti_sysbios_utils_Load_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gatePrms__C, ".const:ti_sysbios_utils_Load_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__id__C, ".const:ti_sysbios_utils_Load_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerDefined__C, ".const:ti_sysbios_utils_Load_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerObj__C, ".const:ti_sysbios_utils_Load_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn0__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn1__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn2__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn4__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn8__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__startupDoneFxn__C, ".const:ti_sysbios_utils_Load_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__count__C, ".const:ti_sysbios_utils_Load_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__heap__C, ".const:ti_sysbios_utils_Load_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__sizeof__C, ".const:ti_sysbios_utils_Load_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__table__C, ".const:ti_sysbios_utils_Load_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_cpuLoad__C, ".const:ti_sysbios_utils_Load_LS_cpuLoad__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_hwiLoad__C, ".const:ti_sysbios_utils_Load_LS_hwiLoad__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_swiLoad__C, ".const:ti_sysbios_utils_Load_LS_swiLoad__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_taskLoad__C, ".const:ti_sysbios_utils_Load_LS_taskLoad__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_postUpdate__C, ".const:ti_sysbios_utils_Load_postUpdate__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_updateInIdle__C, ".const:ti_sysbios_utils_Load_updateInIdle__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_windowInMs__C, ".const:ti_sysbios_utils_Load_windowInMs__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_hwiEnabled__C, ".const:ti_sysbios_utils_Load_hwiEnabled__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_swiEnabled__C, ".const:ti_sysbios_utils_Load_swiEnabled__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_taskEnabled__C, ".const:ti_sysbios_utils_Load_taskEnabled__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_autoAddTasks__C, ".const:ti_sysbios_utils_Load_autoAddTasks__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsEnabled__C, ".const:ti_uia_events_DvtTypes_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsIncluded__C, ".const:ti_uia_events_DvtTypes_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsMask__C, ".const:ti_uia_events_DvtTypes_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gateObj__C, ".const:ti_uia_events_DvtTypes_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gatePrms__C, ".const:ti_uia_events_DvtTypes_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__id__C, ".const:ti_uia_events_DvtTypes_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerDefined__C, ".const:ti_uia_events_DvtTypes_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerObj__C, ".const:ti_uia_events_DvtTypes_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn0__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn1__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn2__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn4__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn8__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__startupDoneFxn__C, ".const:ti_uia_events_DvtTypes_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__count__C, ".const:ti_uia_events_DvtTypes_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__heap__C, ".const:ti_uia_events_DvtTypes_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__sizeof__C, ".const:ti_uia_events_DvtTypes_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__table__C, ".const:ti_uia_events_DvtTypes_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__diagsEnabled__C, ".const:ti_uia_events_UIABenchmark_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__diagsIncluded__C, ".const:ti_uia_events_UIABenchmark_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__diagsMask__C, ".const:ti_uia_events_UIABenchmark_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__gateObj__C, ".const:ti_uia_events_UIABenchmark_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__gatePrms__C, ".const:ti_uia_events_UIABenchmark_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__id__C, ".const:ti_uia_events_UIABenchmark_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerDefined__C, ".const:ti_uia_events_UIABenchmark_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerObj__C, ".const:ti_uia_events_UIABenchmark_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn0__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn1__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn2__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn4__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn8__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__startupDoneFxn__C, ".const:ti_uia_events_UIABenchmark_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__count__C, ".const:ti_uia_events_UIABenchmark_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__heap__C, ".const:ti_uia_events_UIABenchmark_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__sizeof__C, ".const:ti_uia_events_UIABenchmark_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__table__C, ".const:ti_uia_events_UIABenchmark_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_start__C, ".const:ti_uia_events_UIABenchmark_start__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stop__C, ".const:ti_uia_events_UIABenchmark_stop__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_startInstance__C, ".const:ti_uia_events_UIABenchmark_startInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stopInstance__C, ".const:ti_uia_events_UIABenchmark_stopInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_startInstanceWithAdrs__C, ".const:ti_uia_events_UIABenchmark_startInstanceWithAdrs__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stopInstanceWithAdrs__C, ".const:ti_uia_events_UIABenchmark_stopInstanceWithAdrs__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_startInstanceWithStr__C, ".const:ti_uia_events_UIABenchmark_startInstanceWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stopInstanceWithStr__C, ".const:ti_uia_events_UIABenchmark_stopInstanceWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsEnabled__C, ".const:ti_uia_events_UIAErr_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsIncluded__C, ".const:ti_uia_events_UIAErr_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsMask__C, ".const:ti_uia_events_UIAErr_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gateObj__C, ".const:ti_uia_events_UIAErr_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gatePrms__C, ".const:ti_uia_events_UIAErr_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__id__C, ".const:ti_uia_events_UIAErr_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerDefined__C, ".const:ti_uia_events_UIAErr_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerObj__C, ".const:ti_uia_events_UIAErr_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn0__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn1__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn2__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn4__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn8__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAErr_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__count__C, ".const:ti_uia_events_UIAErr_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__heap__C, ".const:ti_uia_events_UIAErr_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__sizeof__C, ".const:ti_uia_events_UIAErr_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__table__C, ".const:ti_uia_events_UIAErr_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_error__C, ".const:ti_uia_events_UIAErr_error__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_errorWithStr__C, ".const:ti_uia_events_UIAErr_errorWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwError__C, ".const:ti_uia_events_UIAErr_hwError__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwErrorWithStr__C, ".const:ti_uia_events_UIAErr_hwErrorWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatal__C, ".const:ti_uia_events_UIAErr_fatal__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatalWithStr__C, ".const:ti_uia_events_UIAErr_fatalWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_critical__C, ".const:ti_uia_events_UIAErr_critical__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_criticalWithStr__C, ".const:ti_uia_events_UIAErr_criticalWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_exception__C, ".const:ti_uia_events_UIAErr_exception__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_uncaughtException__C, ".const:ti_uia_events_UIAErr_uncaughtException__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_nullPointerException__C, ".const:ti_uia_events_UIAErr_nullPointerException__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_unexpectedInterrupt__C, ".const:ti_uia_events_UIAErr_unexpectedInterrupt__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_memoryAccessFault__C, ".const:ti_uia_events_UIAErr_memoryAccessFault__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_securityException__C, ".const:ti_uia_events_UIAErr_securityException__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_divisionByZero__C, ".const:ti_uia_events_UIAErr_divisionByZero__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_overflowException__C, ".const:ti_uia_events_UIAErr_overflowException__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_indexOutOfRange__C, ".const:ti_uia_events_UIAErr_indexOutOfRange__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_notImplemented__C, ".const:ti_uia_events_UIAErr_notImplemented__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_stackOverflow__C, ".const:ti_uia_events_UIAErr_stackOverflow__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_illegalInstruction__C, ".const:ti_uia_events_UIAErr_illegalInstruction__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_entryPointNotFound__C, ".const:ti_uia_events_UIAErr_entryPointNotFound__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_moduleNotFound__C, ".const:ti_uia_events_UIAErr_moduleNotFound__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_floatingPointError__C, ".const:ti_uia_events_UIAErr_floatingPointError__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_invalidParameter__C, ".const:ti_uia_events_UIAErr_invalidParameter__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsEnabled__C, ".const:ti_uia_events_UIAEvt_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsIncluded__C, ".const:ti_uia_events_UIAEvt_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsMask__C, ".const:ti_uia_events_UIAEvt_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gateObj__C, ".const:ti_uia_events_UIAEvt_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gatePrms__C, ".const:ti_uia_events_UIAEvt_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__id__C, ".const:ti_uia_events_UIAEvt_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerDefined__C, ".const:ti_uia_events_UIAEvt_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerObj__C, ".const:ti_uia_events_UIAEvt_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn0__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn1__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn2__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn4__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn8__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAEvt_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__count__C, ".const:ti_uia_events_UIAEvt_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__heap__C, ".const:ti_uia_events_UIAEvt_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__sizeof__C, ".const:ti_uia_events_UIAEvt_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__table__C, ".const:ti_uia_events_UIAEvt_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warning__C, ".const:ti_uia_events_UIAEvt_warning__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warningWithStr__C, ".const:ti_uia_events_UIAEvt_warningWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_info__C, ".const:ti_uia_events_UIAEvt_info__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_infoWithStr__C, ".const:ti_uia_events_UIAEvt_infoWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detail__C, ".const:ti_uia_events_UIAEvt_detail__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detailWithStr__C, ".const:ti_uia_events_UIAEvt_detailWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_intWithKey__C, ".const:ti_uia_events_UIAEvt_intWithKey__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__diagsEnabled__C, ".const:ti_uia_events_UIARoundtrip_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__diagsIncluded__C, ".const:ti_uia_events_UIARoundtrip_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__diagsMask__C, ".const:ti_uia_events_UIARoundtrip_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__gateObj__C, ".const:ti_uia_events_UIARoundtrip_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__gatePrms__C, ".const:ti_uia_events_UIARoundtrip_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__id__C, ".const:ti_uia_events_UIARoundtrip_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerDefined__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerObj__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerFxn0__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerFxn1__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerFxn2__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerFxn4__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerFxn8__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__startupDoneFxn__C, ".const:ti_uia_events_UIARoundtrip_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Object__count__C, ".const:ti_uia_events_UIARoundtrip_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Object__heap__C, ".const:ti_uia_events_UIARoundtrip_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Object__sizeof__C, ".const:ti_uia_events_UIARoundtrip_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Object__table__C, ".const:ti_uia_events_UIARoundtrip_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_start__C, ".const:ti_uia_events_UIARoundtrip_start__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_stop__C, ".const:ti_uia_events_UIARoundtrip_stop__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_startInstance__C, ".const:ti_uia_events_UIARoundtrip_startInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_stopInstance__C, ".const:ti_uia_events_UIARoundtrip_stopInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_startInstanceWithAdrs__C, ".const:ti_uia_events_UIARoundtrip_startInstanceWithAdrs__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_stopInstanceWithAdrs__C, ".const:ti_uia_events_UIARoundtrip_stopInstanceWithAdrs__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_startInstanceWithStr__C, ".const:ti_uia_events_UIARoundtrip_startInstanceWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_stopInstanceWithStr__C, ".const:ti_uia_events_UIARoundtrip_stopInstanceWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__diagsEnabled__C, ".const:ti_uia_events_UIAStatistic_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__diagsIncluded__C, ".const:ti_uia_events_UIAStatistic_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__diagsMask__C, ".const:ti_uia_events_UIAStatistic_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__gateObj__C, ".const:ti_uia_events_UIAStatistic_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__gatePrms__C, ".const:ti_uia_events_UIAStatistic_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__id__C, ".const:ti_uia_events_UIAStatistic_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerDefined__C, ".const:ti_uia_events_UIAStatistic_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerObj__C, ".const:ti_uia_events_UIAStatistic_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerFxn0__C, ".const:ti_uia_events_UIAStatistic_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerFxn1__C, ".const:ti_uia_events_UIAStatistic_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerFxn2__C, ".const:ti_uia_events_UIAStatistic_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerFxn4__C, ".const:ti_uia_events_UIAStatistic_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerFxn8__C, ".const:ti_uia_events_UIAStatistic_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAStatistic_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Object__count__C, ".const:ti_uia_events_UIAStatistic_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Object__heap__C, ".const:ti_uia_events_UIAStatistic_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Object__sizeof__C, ".const:ti_uia_events_UIAStatistic_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Object__table__C, ".const:ti_uia_events_UIAStatistic_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_cpuLoad__C, ".const:ti_uia_events_UIAStatistic_cpuLoad__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_cpuLoadByInstance__C, ".const:ti_uia_events_UIAStatistic_cpuLoadByInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_bytesProcessed__C, ".const:ti_uia_events_UIAStatistic_bytesProcessed__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_bytesProcessedByInstance__C, ".const:ti_uia_events_UIAStatistic_bytesProcessedByInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_wordsProcessed__C, ".const:ti_uia_events_UIAStatistic_wordsProcessed__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_wordsProcessedByInstance__C, ".const:ti_uia_events_UIAStatistic_wordsProcessedByInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_freeBytes__C, ".const:ti_uia_events_UIAStatistic_freeBytes__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__diagsEnabled__C, ".const:ti_uia_events_UIASync_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__diagsIncluded__C, ".const:ti_uia_events_UIASync_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__diagsMask__C, ".const:ti_uia_events_UIASync_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__gateObj__C, ".const:ti_uia_events_UIASync_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__gatePrms__C, ".const:ti_uia_events_UIASync_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__id__C, ".const:ti_uia_events_UIASync_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerDefined__C, ".const:ti_uia_events_UIASync_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerObj__C, ".const:ti_uia_events_UIASync_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerFxn0__C, ".const:ti_uia_events_UIASync_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerFxn1__C, ".const:ti_uia_events_UIASync_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerFxn2__C, ".const:ti_uia_events_UIASync_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerFxn4__C, ".const:ti_uia_events_UIASync_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerFxn8__C, ".const:ti_uia_events_UIASync_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__startupDoneFxn__C, ".const:ti_uia_events_UIASync_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Object__count__C, ".const:ti_uia_events_UIASync_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Object__heap__C, ".const:ti_uia_events_UIASync_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Object__sizeof__C, ".const:ti_uia_events_UIASync_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Object__table__C, ".const:ti_uia_events_UIASync_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_syncPoint__C, ".const:ti_uia_events_UIASync_syncPoint__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_syncPointAfterHalt__C, ".const:ti_uia_events_UIASync_syncPointAfterHalt__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_globalTimerFreq__C, ".const:ti_uia_events_UIASync_globalTimerFreq__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_syncPointUserProvidedData__C, ".const:ti_uia_events_UIASync_syncPointUserProvidedData__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__DESC__C, ".const:ti_uia_runtime_LogSync_Object__DESC__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__PARAMS__C, ".const:ti_uia_runtime_LogSync_Object__PARAMS__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__diagsEnabled__C, ".const:ti_uia_runtime_LogSync_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__diagsIncluded__C, ".const:ti_uia_runtime_LogSync_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__diagsMask__C, ".const:ti_uia_runtime_LogSync_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__gateObj__C, ".const:ti_uia_runtime_LogSync_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__gatePrms__C, ".const:ti_uia_runtime_LogSync_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__id__C, ".const:ti_uia_runtime_LogSync_Module__id__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerDefined__C, ".const:ti_uia_runtime_LogSync_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerObj__C, ".const:ti_uia_runtime_LogSync_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerFxn0__C, ".const:ti_uia_runtime_LogSync_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerFxn1__C, ".const:ti_uia_runtime_LogSync_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerFxn2__C, ".const:ti_uia_runtime_LogSync_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerFxn4__C, ".const:ti_uia_runtime_LogSync_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerFxn8__C, ".const:ti_uia_runtime_LogSync_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__startupDoneFxn__C, ".const:ti_uia_runtime_LogSync_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__count__C, ".const:ti_uia_runtime_LogSync_Object__count__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__heap__C, ".const:ti_uia_runtime_LogSync_Object__heap__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__sizeof__C, ".const:ti_uia_runtime_LogSync_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__table__C, ".const:ti_uia_runtime_LogSync_Object__table__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_injectIntoTraceFxn__C, ".const:ti_uia_runtime_LogSync_injectIntoTraceFxn__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_cpuTimestampCyclesPerTick__C, ".const:ti_uia_runtime_LogSync_cpuTimestampCyclesPerTick__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_globalTimestampCpuCyclesPerTick__C, ".const:ti_uia_runtime_LogSync_globalTimestampCpuCyclesPerTick__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_maxGlobalClockFreq__C, ".const:ti_uia_runtime_LogSync_maxGlobalClockFreq__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__DESC__C, ".const:ti_uia_runtime_LoggerStopMode_Object__DESC__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__PARAMS__C, ".const:ti_uia_runtime_LoggerStopMode_Object__PARAMS__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__diagsEnabled__C, ".const:ti_uia_runtime_LoggerStopMode_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__diagsIncluded__C, ".const:ti_uia_runtime_LoggerStopMode_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__diagsMask__C, ".const:ti_uia_runtime_LoggerStopMode_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__gateObj__C, ".const:ti_uia_runtime_LoggerStopMode_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__gatePrms__C, ".const:ti_uia_runtime_LoggerStopMode_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__id__C, ".const:ti_uia_runtime_LoggerStopMode_Module__id__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerDefined__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerObj__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerFxn0__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerFxn1__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerFxn2__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerFxn4__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerFxn8__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__startupDoneFxn__C, ".const:ti_uia_runtime_LoggerStopMode_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__count__C, ".const:ti_uia_runtime_LoggerStopMode_Object__count__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__heap__C, ".const:ti_uia_runtime_LoggerStopMode_Object__heap__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__sizeof__C, ".const:ti_uia_runtime_LoggerStopMode_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__table__C, ".const:ti_uia_runtime_LoggerStopMode_Object__table__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_filterByLevel__C, ".const:ti_uia_runtime_LoggerStopMode_filterByLevel__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_E_badLevel__C, ".const:ti_uia_runtime_LoggerStopMode_E_badLevel__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_isTimestampEnabled__C, ".const:ti_uia_runtime_LoggerStopMode_isTimestampEnabled__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_enableFlush__C, ".const:ti_uia_runtime_LoggerStopMode_enableFlush__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_statusLogger__C, ".const:ti_uia_runtime_LoggerStopMode_statusLogger__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_overflowLogger__C, ".const:ti_uia_runtime_LoggerStopMode_overflowLogger__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_level1Mask__C, ".const:ti_uia_runtime_LoggerStopMode_level1Mask__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_level2Mask__C, ".const:ti_uia_runtime_LoggerStopMode_level2Mask__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_level3Mask__C, ".const:ti_uia_runtime_LoggerStopMode_level3Mask__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_level4Mask__C, ".const:ti_uia_runtime_LoggerStopMode_level4Mask__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsMask__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gateObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gatePrms__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__id__C, ".const:ti_uia_runtime_QueueDescriptor_Module__id__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C, ".const:ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__count__C, ".const:ti_uia_runtime_QueueDescriptor_Object__count__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__heap__C, ".const:ti_uia_runtime_QueueDescriptor_Object__heap__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__sizeof__C, ".const:ti_uia_runtime_QueueDescriptor_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__table__C, ".const:ti_uia_runtime_QueueDescriptor_Object__table__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsMask__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gateObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gatePrms__C, ".const:ti_uia_runtime_UIAMetaData_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__id__C, ".const:ti_uia_runtime_UIAMetaData_Module__id__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerDefined__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C, ".const:ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__count__C, ".const:ti_uia_runtime_UIAMetaData_Object__count__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__heap__C, ".const:ti_uia_runtime_UIAMetaData_Object__heap__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__sizeof__C, ".const:ti_uia_runtime_UIAMetaData_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__table__C, ".const:ti_uia_runtime_UIAMetaData_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__A, ".const:xdc_runtime_Startup_lastFxns__A");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__startupDoneFxn__C, ".const:xdc_runtime_SysMin_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__startupDoneFxn__C, ".const:xdc_runtime_Timestamp_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsEnabled__C, ".const:xdc_runtime_TimestampNull_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsIncluded__C, ".const:xdc_runtime_TimestampNull_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsMask__C, ".const:xdc_runtime_TimestampNull_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__gateObj__C, ".const:xdc_runtime_TimestampNull_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__gatePrms__C, ".const:xdc_runtime_TimestampNull_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__id__C, ".const:xdc_runtime_TimestampNull_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerDefined__C, ".const:xdc_runtime_TimestampNull_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerObj__C, ".const:xdc_runtime_TimestampNull_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn0__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn1__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn2__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn4__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn8__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__startupDoneFxn__C, ".const:xdc_runtime_TimestampNull_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__count__C, ".const:xdc_runtime_TimestampNull_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__heap__C, ".const:xdc_runtime_TimestampNull_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__sizeof__C, ".const:xdc_runtime_TimestampNull_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__table__C, ".const:xdc_runtime_TimestampNull_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsEnabled__C, ".const:xdc_runtime_Types_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsIncluded__C, ".const:xdc_runtime_Types_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsMask__C, ".const:xdc_runtime_Types_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__gateObj__C, ".const:xdc_runtime_Types_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__gatePrms__C, ".const:xdc_runtime_Types_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__id__C, ".const:xdc_runtime_Types_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerDefined__C, ".const:xdc_runtime_Types_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerObj__C, ".const:xdc_runtime_Types_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn0__C, ".const:xdc_runtime_Types_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn1__C, ".const:xdc_runtime_Types_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn2__C, ".const:xdc_runtime_Types_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn4__C, ".const:xdc_runtime_Types_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn8__C, ".const:xdc_runtime_Types_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__startupDoneFxn__C, ".const:xdc_runtime_Types_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Types_Object__count__C, ".const:xdc_runtime_Types_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Types_Object__heap__C, ".const:xdc_runtime_Types_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Types_Object__sizeof__C, ".const:xdc_runtime_Types_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Types_Object__table__C, ".const:xdc_runtime_Types_Object__table__C");
