
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CORTEXM_K_Exception/191:
  Jump functions of caller  OS_KernGetCurrentApplicationId/190:
  Jump functions of caller  OS_KernClearPendingInterrupt/189:
  Jump functions of caller  OS_KernSetEventAsyn/188:
  Jump functions of caller  OS_KernActivateTaskAsyn/187:
  Jump functions of caller  OS_KernGetApplicationState/186:
  Jump functions of caller  OS_KernAllowAccess/185:
  Jump functions of caller  OS_KernReturnFromCall/184:
  Jump functions of caller  OS_KernTaskReturn/183:
  Jump functions of caller  OS_KernControlIdle/182:
  Jump functions of caller  OS_KernStartScheduleTableSynchron/181:
  Jump functions of caller  OS_KernGetElapsedCounterValue/180:
  Jump functions of caller  OS_KernGetCounterValue/179:
  Jump functions of caller  OS_KernEnableInterruptSource/178:
  Jump functions of caller  OS_KernDisableInterruptSource/177:
  Jump functions of caller  OS_KernCheckObjectOwnership/176:
  Jump functions of caller  OS_KernCheckObjectAccess/175:
  Jump functions of caller  OS_KernCheckTaskMemoryAccess/174:
  Jump functions of caller  OS_KernCheckIsrMemoryAccess/173:
  Jump functions of caller  OS_KernGetIsrId/172:
  Jump functions of caller  OS_KernGetApplicationId/171:
  Jump functions of caller  OS_KernTerminateApplication/170:
  Jump functions of caller  OS_KernGetScheduleTableStatus/169:
  Jump functions of caller  OS_KernSetScheduleTableAsync/168:
  Jump functions of caller  OS_KernSyncScheduleTable/167:
  Jump functions of caller  OS_KernStopScheduleTable/166:
  Jump functions of caller  OS_KernChainScheduleTable/165:
  Jump functions of caller  OS_KernStartScheduleTable/164:
  Jump functions of caller  OS_KernIncrementCounter/163:
  Jump functions of caller  OS_KernShutdownOs/162:
  Jump functions of caller  OS_KernGetActiveApplicationMode/161:
  Jump functions of caller  OS_KernCancelAlarm/160:
  Jump functions of caller  OS_KernSetAbsAlarm/159:
  Jump functions of caller  OS_KernSetRelAlarm/158:
  Jump functions of caller  OS_KernGetAlarm/157:
  Jump functions of caller  OS_KernGetAlarmBase/156:
  Jump functions of caller  OS_KernWaitEvent/155:
  Jump functions of caller  OS_KernGetEvent/154:
  Jump functions of caller  OS_KernClearEvent/153:
  Jump functions of caller  OS_KernSetEvent/152:
  Jump functions of caller  OS_KernReleaseResource/151:
  Jump functions of caller  OS_KernGetResource/150:
  Jump functions of caller  OS_KernTerminateTask/149:
  Jump functions of caller  OS_KernActivateTask/148:
  Jump functions of caller  OS_KernGetTaskState/147:
  Jump functions of caller  OS_KernGetTaskId/146:
  Jump functions of caller  OS_KernSchedule/145:
  Jump functions of caller  OS_KernChainTask/144:
  Jump functions of caller  OS_KernResumeInterrupts/143:
  Jump functions of caller  OS_KernSuspendInterrupts/142:
  Jump functions of caller  OS_KernStartOs/141:
  Jump functions of caller  OS_KernUnknownSyscall/140:
  Jump functions of caller  OS_NullProtectionHook/139:
  Jump functions of caller  ShutdownHook/138:
  Jump functions of caller  ErrorHook/137:
  Jump functions of caller  OS_NullIsrHook/136:
  Jump functions of caller  OS_ActivateAutoAlarms/135:
  Jump functions of caller  OS_ActivateAutoTasks/134:
  Jump functions of caller  OS_StartTimeStampTimerGeneric/133:
  Jump functions of caller  OS_InitInterrupts/132:
  Jump functions of caller  OS_InitResources/131:
  Jump functions of caller  OS_InitSchedules/130:
  Jump functions of caller  OS_InitAlarms/129:
  Jump functions of caller  OS_InitCounters/128:
  Jump functions of caller  OS_InitTimers/127:
  Jump functions of caller  OS_InitTasks/126:
  Jump functions of caller  OS_InitApp/125:
  Jump functions of caller  OS_InitApplicationData/124:
  Jump functions of caller  OS_CORTEXM_InitArch/123:
  Jump functions of caller  OS_NullFunction/121:
  Jump functions of caller  OS_KillIsr/120:
  Jump functions of caller  OS_CounterIsr_HwCounter/119:
  Jump functions of caller  OS_ISR_CAN0_ORED_32_63_MB_IRQHandler/118:
  Jump functions of caller  OS_ISR_CAN0_ORED_0_31_MB_IRQHandler/117:
  Jump functions of caller  OS_ISR_CAN0_ORED_IRQHandler/115:
  Jump functions of caller  OS_Synchronize/113:
  Jump functions of caller  OS_KillSchedule/112:
  Jump functions of caller  OS_WrapRunSchedule/110:
  Jump functions of caller  OS_WrapIncrementCounter/108:
  Jump functions of caller  OS_KillAlarm/107:
  Jump functions of caller  OS_HwCounterUpdate/106:
  Jump functions of caller  OS_KillTask/102:
  Jump functions of caller  OS_ActiTask/101:
  Jump functions of caller  OS_TASK_SchMMemTask_10ms/100:
  Jump functions of caller  OS_TASK_SchMDiagStateTask_20ms/99:
  Jump functions of caller  OS_TASK_SchMComTask_5ms/98:
  Jump functions of caller  OS_TASK_SchMComTask_10ms/97:
  Jump functions of caller  OS_TASK_Init_Task/96:
  Jump functions of caller  OS_TASK_TASK_RTE_ModeSwitchEvent/95:
  Jump functions of caller  OS_TASK_Rte_Time_Task/94:
  Jump functions of caller  OS_TASK_Rte_Event_Task/93:
  Jump functions of caller  OS_KillHook/91:

 Propagating constants:


overall_size: 0, max_new_size: 11001

IPA lattices after all propagation:

Lattices:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_permittedContextAutosar/192 (OS_permittedContextAutosar) @06e436c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_permittedContext/88 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_CORTEXM_K_Exception/191 (OS_CORTEXM_K_Exception) @06e788c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernGetCurrentApplicationId/190 (OS_KernGetCurrentApplicationId) @06e787e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernClearPendingInterrupt/189 (OS_KernClearPendingInterrupt) @06e78700
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernSetEventAsyn/188 (OS_KernSetEventAsyn) @06e78620
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernActivateTaskAsyn/187 (OS_KernActivateTaskAsyn) @06e78540
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernGetApplicationState/186 (OS_KernGetApplicationState) @06e78460
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernAllowAccess/185 (OS_KernAllowAccess) @06e78380
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernReturnFromCall/184 (OS_KernReturnFromCall) @06e782a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernTaskReturn/183 (OS_KernTaskReturn) @06e781c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernControlIdle/182 (OS_KernControlIdle) @06e780e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernStartScheduleTableSynchron/181 (OS_KernStartScheduleTableSynchron) @06e78000
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernGetElapsedCounterValue/180 (OS_KernGetElapsedCounterValue) @06e76ee0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernGetCounterValue/179 (OS_KernGetCounterValue) @06e76e00
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernEnableInterruptSource/178 (OS_KernEnableInterruptSource) @06e76d20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernDisableInterruptSource/177 (OS_KernDisableInterruptSource) @06e76c40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernCheckObjectOwnership/176 (OS_KernCheckObjectOwnership) @06e76b60
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernCheckObjectAccess/175 (OS_KernCheckObjectAccess) @06e76a80
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernCheckTaskMemoryAccess/174 (OS_KernCheckTaskMemoryAccess) @06e769a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernCheckIsrMemoryAccess/173 (OS_KernCheckIsrMemoryAccess) @06e768c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernGetIsrId/172 (OS_KernGetIsrId) @06e767e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernGetApplicationId/171 (OS_KernGetApplicationId) @06e76700
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernTerminateApplication/170 (OS_KernTerminateApplication) @06e76620
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernGetScheduleTableStatus/169 (OS_KernGetScheduleTableStatus) @06e76540
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernSetScheduleTableAsync/168 (OS_KernSetScheduleTableAsync) @06e76460
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernSyncScheduleTable/167 (OS_KernSyncScheduleTable) @06e76380
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernStopScheduleTable/166 (OS_KernStopScheduleTable) @06e762a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernChainScheduleTable/165 (OS_KernChainScheduleTable) @06e761c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernStartScheduleTable/164 (OS_KernStartScheduleTable) @06e760e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernIncrementCounter/163 (OS_KernIncrementCounter) @06e76000
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernShutdownOs/162 (OS_KernShutdownOs) @06e740e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernGetActiveApplicationMode/161 (OS_KernGetActiveApplicationMode) @06e74ee0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernCancelAlarm/160 (OS_KernCancelAlarm) @06e74e00
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernSetAbsAlarm/159 (OS_KernSetAbsAlarm) @06e74d20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernSetRelAlarm/158 (OS_KernSetRelAlarm) @06e74c40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernGetAlarm/157 (OS_KernGetAlarm) @06e74b60
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernGetAlarmBase/156 (OS_KernGetAlarmBase) @06e74a80
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernWaitEvent/155 (OS_KernWaitEvent) @06e749a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernGetEvent/154 (OS_KernGetEvent) @06e748c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernClearEvent/153 (OS_KernClearEvent) @06e747e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernSetEvent/152 (OS_KernSetEvent) @06e74700
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernReleaseResource/151 (OS_KernReleaseResource) @06e74620
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernGetResource/150 (OS_KernGetResource) @06e74540
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernTerminateTask/149 (OS_KernTerminateTask) @06e74460
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernActivateTask/148 (OS_KernActivateTask) @06e74380
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernGetTaskState/147 (OS_KernGetTaskState) @06e742a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernGetTaskId/146 (OS_KernGetTaskId) @06e741c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernSchedule/145 (OS_KernSchedule) @06e74000
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernChainTask/144 (OS_KernChainTask) @06e731c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernResumeInterrupts/143 (OS_KernResumeInterrupts) @06e73ee0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernSuspendInterrupts/142 (OS_KernSuspendInterrupts) @06e73e00
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernStartOs/141 (OS_KernStartOs) @06e73d20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KernUnknownSyscall/140 (OS_KernUnknownSyscall) @06e73c40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_syscallTable/87 (addr)OS_syscallTable/87 (addr)OS_syscallTable/87 (addr)OS_syscallTable/87 (addr)OS_syscallTable/87 (addr)OS_syscallTable/87 (addr)OS_syscallTable/87 (addr)OS_syscallTable/87 (addr)OS_syscallTable/87 (addr)OS_syscallTable/87 (addr)OS_syscallTable/87 (addr)OS_syscallTable/87 (addr)OS_syscallTable/87 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_NullProtectionHook/139 (OS_NullProtectionHook) @06e73b60
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_ptrProtectionHook/86 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
ShutdownHook/138 (ShutdownHook) @06e73a80
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_ptrShutdownHook/85 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
ErrorHook/137 (ErrorHook) @06e739a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_ptrErrorHook/84 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_NullIsrHook/136 (OS_NullIsrHook) @06e738c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_ptrPreIsrHook/82 (addr)OS_ptrPostIsrHook/83 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_ActivateAutoAlarms/135 (OS_ActivateAutoAlarms) @06e737e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_initFunc/78 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_ActivateAutoTasks/134 (OS_ActivateAutoTasks) @06e73700
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_initFunc/78 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_StartTimeStampTimerGeneric/133 (OS_StartTimeStampTimerGeneric) @06e73620
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_initFunc/78 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_InitInterrupts/132 (OS_InitInterrupts) @06e73540
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_initFunc/78 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_InitResources/131 (OS_InitResources) @06e73460
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_initFunc/78 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_InitSchedules/130 (OS_InitSchedules) @06e73380
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_initFunc/78 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_InitAlarms/129 (OS_InitAlarms) @06e732a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_initFunc/78 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_InitCounters/128 (OS_InitCounters) @06e730e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_initFunc/78 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_InitTimers/127 (OS_InitTimers) @06e73000
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_initFunc/78 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_InitTasks/126 (OS_InitTasks) @06e728c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_initFunc/78 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_InitApp/125 (OS_InitApp) @06e72ee0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_initFunc/78 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_InitApplicationData/124 (OS_InitApplicationData) @06e72e00
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_initFunc/78 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_CORTEXM_InitArch/123 (OS_CORTEXM_InitArch) @06e72d20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_initFunc/78 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_kernelData/122 (OS_kernelData) @06e43678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_kernel_ptr/76 (addr)
  Availability: not_available
  Varpool flags:
OS_NullFunction/121 (OS_NullFunction) @06e72c40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_startTaskExecTimingFp/56 (addr)OS_preemptTaskExecTimingFp/57 (addr)OS_stopTaskExecTimingFp/58 (addr)OS_startTaskIntLockTimingFp/59 (addr)OS_stopTaskIntLockTimingFp/60 (addr)OS_startIsrExecTimingFp/61 (addr)OS_preemptIsrExecTimingFp/62 (addr)OS_resumeIsrExecTimingFp/63 (addr)OS_stopIsrExecTimingFp/64 (addr)OS_startIsrIntLockTimingFp/65 (addr)OS_stopIsrIntLockTimingFp/66 (addr)OS_startResLockTimingFp/67 (addr)OS_stopResLockTimingFp/68 (addr)OS_ptrStartupHook/79 (addr)OS_ptrPreTaskHook/80 (addr)OS_ptrPostTaskHook/81 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KillIsr/120 (OS_KillIsr) @06e72b60
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_killIsrFunc/53 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_CounterIsr_HwCounter/119 (OS_CounterIsr_HwCounter) @06e72a80
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_isrTable/51 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_ISR_CAN0_ORED_32_63_MB_IRQHandler/118 (OS_ISR_CAN0_ORED_32_63_MB_IRQHandler) @06e729a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_isrTable/51 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_ISR_CAN0_ORED_0_31_MB_IRQHandler/117 (OS_ISR_CAN0_ORED_0_31_MB_IRQHandler) @06e727e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_isrTable/51 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_isrDynamic_core0/116 (OS_isrDynamic_core0) @06e43630
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_isrTable/51 (addr)OS_isrTable/51 (addr)OS_isrTable/51 (addr)OS_isrTable/51 (addr)
  Availability: not_available
  Varpool flags:
OS_ISR_CAN0_ORED_IRQHandler/115 (OS_ISR_CAN0_ORED_IRQHandler) @06e72700
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_isrTable/51 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_resourceDynamic_core0/114 (OS_resourceDynamic_core0) @06e435e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_resource/48 (addr)OS_resource/48 (addr)OS_resource/48 (addr)OS_resource/48 (addr)
  Availability: not_available
  Varpool flags:
OS_Synchronize/113 (OS_Synchronize) @06e72540
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_synchronizeFunc/47 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KillSchedule/112 (OS_KillSchedule) @06e72460
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_killScheduleFunc/46 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_scheduleDynamic_core0/111 (OS_scheduleDynamic_core0) @06e435a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_schedule/43 (addr)OS_schedule/43 (addr)
  Availability: not_available
  Varpool flags:
OS_WrapRunSchedule/110 (OS_WrapRunSchedule) @06e721c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_alarm/37 (addr)OS_alarm/37 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_alarmDynamic_core0/109 (OS_alarmDynamic_core0) @06e43558
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_alarm/37 (addr)OS_alarm/37 (addr)OS_alarm/37 (addr)
  Availability: not_available
  Varpool flags:
OS_WrapIncrementCounter/108 (OS_WrapIncrementCounter) @06e720e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_alarm/37 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_KillAlarm/107 (OS_KillAlarm) @06e72000
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_killAlarmFunc/40 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_HwCounterUpdate/106 (OS_HwCounterUpdate) @06e41380
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_counter/34 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_counterDynamic_core0/105 (OS_counterDynamic_core0) @06e43510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_counter/34 (addr)OS_counter/34 (addr)
  Availability: not_available
  Varpool flags:
OS_hwtLastValue_core0/104 (OS_hwtLastValue_core0) @06e434c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_hwTimer/31 (addr)
  Availability: not_available
  Varpool flags:
OS_timerSTMdriver/103 (OS_timerSTMdriver) @06e43480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_hwTimer/31 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_KillTask/102 (OS_KillTask) @06e41ee0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_killTaskFunc/24 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_ActiTask/101 (OS_ActiTask) @06e41e00
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_actiTaskFunc/23 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_TASK_SchMMemTask_10ms/100 (OS_TASK_SchMMemTask_10ms) @06e41d20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_taskTable/20 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_TASK_SchMDiagStateTask_20ms/99 (OS_TASK_SchMDiagStateTask_20ms) @06e41c40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_taskTable/20 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_TASK_SchMComTask_5ms/98 (OS_TASK_SchMComTask_5ms) @06e41b60
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_taskTable/20 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_TASK_SchMComTask_10ms/97 (OS_TASK_SchMComTask_10ms) @06e41a80
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_taskTable/20 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_TASK_Init_Task/96 (OS_TASK_Init_Task) @06e419a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_taskTable/20 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_TASK_TASK_RTE_ModeSwitchEvent/95 (OS_TASK_TASK_RTE_ModeSwitchEvent) @06e418c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_taskTable/20 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_TASK_Rte_Time_Task/94 (OS_TASK_Rte_Time_Task) @06e41700
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_taskTable/20 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_TASK_Rte_Event_Task/93 (OS_TASK_Rte_Event_Task) @06e41620
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_taskTable/20 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_taskDynamic_core0/92 (OS_taskDynamic_core0) @06e43438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_taskTable/20 (addr)OS_taskTable/20 (addr)OS_taskTable/20 (addr)OS_taskTable/20 (addr)OS_taskTable/20 (addr)OS_taskTable/20 (addr)OS_taskTable/20 (addr)OS_taskTable/20 (addr)
  Availability: not_available
  Varpool flags:
OS_KillHook/91 (OS_KillHook) @06e41540
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: OS_killHookFunc/16 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
OS_appDynamic_core0/90 (OS_appDynamic_core0) @06e433f0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_appTable/14 (addr)
  Availability: not_available
  Varpool flags:
OS_OS_SYSTEM_0GenBuildId/89 (OS_OS_SYSTEM_0GenBuildId) @06e433a8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_appTable/14 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_permittedContext/88 (OS_permittedContext) @06e432d0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_permittedContextAutosar/192 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_syscallTable/87 (OS_syscallTable) @06e431f8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_KernUnknownSyscall/140 (addr)OS_KernStartOs/141 (addr)OS_KernSuspendInterrupts/142 (addr)OS_KernResumeInterrupts/143 (addr)OS_KernChainTask/144 (addr)OS_KernSchedule/145 (addr)OS_KernGetTaskId/146 (addr)OS_KernGetTaskState/147 (addr)OS_KernActivateTask/148 (addr)OS_KernTerminateTask/149 (addr)OS_KernGetResource/150 (addr)OS_KernReleaseResource/151 (addr)OS_KernSetEvent/152 (addr)OS_KernClearEvent/153 (addr)OS_KernGetEvent/154 (addr)OS_KernWaitEvent/155 (addr)OS_KernGetAlarmBase/156 (addr)OS_KernGetAlarm/157 (addr)OS_KernSetRelAlarm/158 (addr)OS_KernSetAbsAlarm/159 (addr)OS_KernCancelAlarm/160 (addr)OS_KernGetActiveApplicationMode/161 (addr)OS_KernShutdownOs/162 (addr)OS_KernIncrementCounter/163 (addr)OS_KernUnknownSyscall/140 (addr)OS_KernStartScheduleTable/164 (addr)OS_KernChainScheduleTable/165 (addr)OS_KernStopScheduleTable/166 (addr)OS_KernSyncScheduleTable/167 (addr)OS_KernSetScheduleTableAsync/168 (addr)OS_KernGetScheduleTableStatus/169 (addr)OS_KernTerminateApplication/170 (addr)OS_KernGetApplicationId/171 (addr)OS_KernGetIsrId/172 (addr)OS_KernUnknownSyscall/140 (addr)OS_KernCheckIsrMemoryAccess/173 (addr)OS_KernCheckTaskMemoryAccess/174 (addr)OS_KernCheckObjectAccess/175 (addr)OS_KernCheckObjectOwnership/176 (addr)OS_KernDisableInterruptSource/177 (addr)OS_KernEnableInterruptSource/178 (addr)OS_KernGetCounterValue/179 (addr)OS_KernGetElapsedCounterValue/180 (addr)OS_KernStartScheduleTableSynchron/181 (addr)OS_KernControlIdle/182 (addr)OS_KernTaskReturn/183 (addr)OS_KernReturnFromCall/184 (addr)OS_KernUnknownSyscall/140 (addr)OS_KernUnknownSyscall/140 (addr)OS_KernUnknownSyscall/140 (addr)OS_KernAllowAccess/185 (addr)OS_KernGetApplicationState/186 (addr)OS_KernUnknownSyscall/140 (addr)OS_KernUnknownSyscall/140 (addr)OS_KernUnknownSyscall/140 (addr)OS_KernUnknownSyscall/140 (addr)OS_KernUnknownSyscall/140 (addr)OS_KernActivateTaskAsyn/187 (addr)OS_KernSetEventAsyn/188 (addr)OS_KernClearPendingInterrupt/189 (addr)OS_KernGetCurrentApplicationId/190 (addr)OS_CORTEXM_K_Exception/191 (addr)OS_KernUnknownSyscall/140 (addr)OS_KernUnknownSyscall/140 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_ptrProtectionHook/86 (OS_ptrProtectionHook) @06e43048
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullProtectionHook/139 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_ptrShutdownHook/85 (OS_ptrShutdownHook) @06e43000
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: ShutdownHook/138 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_ptrErrorHook/84 (OS_ptrErrorHook) @06e6ddc8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: ErrorHook/137 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_ptrPostIsrHook/83 (OS_ptrPostIsrHook) @06e6daf8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullIsrHook/136 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_ptrPreIsrHook/82 (OS_ptrPreIsrHook) @06e6da68
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullIsrHook/136 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_ptrPostTaskHook/81 (OS_ptrPostTaskHook) @06e6df78
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullFunction/121 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_ptrPreTaskHook/80 (OS_ptrPreTaskHook) @06e6df30
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullFunction/121 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_ptrStartupHook/79 (OS_ptrStartupHook) @06e6dee8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullFunction/121 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_initFunc/78 (OS_initFunc) @06e6de10
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_CORTEXM_InitArch/123 (addr)OS_InitApplicationData/124 (addr)OS_InitApp/125 (addr)OS_InitTasks/126 (addr)OS_InitTimers/127 (addr)OS_InitCounters/128 (addr)OS_InitAlarms/129 (addr)OS_InitSchedules/130 (addr)OS_InitResources/131 (addr)OS_InitInterrupts/132 (addr)OS_StartTimeStampTimerGeneric/133 (addr)OS_ActivateAutoTasks/134 (addr)OS_ActivateAutoAlarms/135 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_coreStarted/77 (OS_coreStarted) @06e6dca8
  Type: variable definition analyzed
  Visibility: externally_visible public section:.bss.shared.os.OS_coreStarted
  References: 
  Referring: 
  Availability: available
  Varpool flags:
OS_kernel_ptr/76 (OS_kernel_ptr) @06e6dbd0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/122 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_timeStampValue/75 (OS_timeStampValue) @06e6db40
  Type: variable definition analyzed
  Visibility: externally_visible public section:.bss.shared.os.OS_timeStampValue
  References: 
  Referring: 
  Availability: available
  Varpool flags:
OS_lastTimeStampTime/73 (OS_lastTimeStampTime) @06e6dab0
  Type: variable definition analyzed
  Visibility: externally_visible public section:.bss.shared.os.OS_lastTimeStampTime
  References: 
  Referring: 
  Availability: available
  Varpool flags:
OS_timeStampTimer/71 (OS_timeStampTimer) @06e6da20
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_rateMonitorFunc/70 (OS_rateMonitorFunc) @06e6d990
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_nRateMonitors/69 (OS_nRateMonitors) @06e6d8b8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_stopResLockTimingFp/68 (OS_stopResLockTimingFp) @06e6d828
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullFunction/121 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_startResLockTimingFp/67 (OS_startResLockTimingFp) @06e6d7e0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullFunction/121 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_stopIsrIntLockTimingFp/66 (OS_stopIsrIntLockTimingFp) @06e6d798
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullFunction/121 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_startIsrIntLockTimingFp/65 (OS_startIsrIntLockTimingFp) @06e6d750
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullFunction/121 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_stopIsrExecTimingFp/64 (OS_stopIsrExecTimingFp) @06e6d708
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullFunction/121 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_resumeIsrExecTimingFp/63 (OS_resumeIsrExecTimingFp) @06e6d6c0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullFunction/121 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_preemptIsrExecTimingFp/62 (OS_preemptIsrExecTimingFp) @06e6d678
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullFunction/121 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_startIsrExecTimingFp/61 (OS_startIsrExecTimingFp) @06e6d630
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullFunction/121 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_stopTaskIntLockTimingFp/60 (OS_stopTaskIntLockTimingFp) @06e6d5e8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullFunction/121 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_startTaskIntLockTimingFp/59 (OS_startTaskIntLockTimingFp) @06e6d5a0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullFunction/121 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_stopTaskExecTimingFp/58 (OS_stopTaskExecTimingFp) @06e6d558
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullFunction/121 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_preemptTaskExecTimingFp/57 (OS_preemptTaskExecTimingFp) @06e6d510
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullFunction/121 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_startTaskExecTimingFp/56 (OS_startTaskExecTimingFp) @06e6d4c8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_NullFunction/121 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_executionTimer/55 (OS_executionTimer) @06e6d438
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_nInterrupts/54 (OS_nInterrupts) @06e6d0d8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_killIsrFunc/53 (OS_killIsrFunc) @06e6d090
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_KillIsr/120 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_isrTableBase/52 (OS_isrTableBase) @06e6d048
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_isrTable/51 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_isrTable/51 (OS_isrTable) @06e63948
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_appTable/14 (addr)OS_ISR_CAN0_ORED_IRQHandler/115 (addr)OS_isrDynamic_core0/116 (addr)OS_appTable/14 (addr)OS_ISR_CAN0_ORED_0_31_MB_IRQHandler/117 (addr)OS_isrDynamic_core0/116 (addr)OS_appTable/14 (addr)OS_ISR_CAN0_ORED_32_63_MB_IRQHandler/118 (addr)OS_isrDynamic_core0/116 (addr)OS_appTable/14 (addr)OS_CounterIsr_HwCounter/119 (addr)OS_isrDynamic_core0/116 (addr)
  Referring: OS_isrTableBase/52 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_nResources/50 (OS_nResources) @06e63ea0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_resourceTableBase/49 (OS_resourceTableBase) @06e63dc8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_resource/48 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_resource/48 (OS_resource) @06e63cf0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_appTable/14 (addr)OS_resourceDynamic_core0/114 (addr)OS_appTable/14 (addr)OS_resourceDynamic_core0/114 (addr)OS_appTable/14 (addr)OS_resourceDynamic_core0/114 (addr)OS_appTable/14 (addr)OS_resourceDynamic_core0/114 (addr)
  Referring: OS_resourceTableBase/49 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_synchronizeFunc/47 (OS_synchronizeFunc) @06e63c18
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_Synchronize/113 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_killScheduleFunc/46 (OS_killScheduleFunc) @06e63bd0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_KillSchedule/112 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_scheduleTableBase/45 (OS_scheduleTableBase) @06e63b88
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_schedule/43 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_nSchedules/44 (OS_nSchedules) @06e63ab0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_schedule/43 (OS_schedule) @06e639d8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_appTable/14 (addr)OS_stEntries/42 (addr)OS_scheduleDynamic_core0/111 (addr)OS_appTable/14 (addr)OS_stEntries/42 (addr)OS_scheduleDynamic_core0/111 (addr)
  Referring: OS_scheduleTableBase/45 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_stEntries/42 (OS_stEntries) @06e63900
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: OS_schedule/43 (addr)OS_schedule/43 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_alarmTableBase/41 (OS_alarmTableBase) @06dff708
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_alarm/37 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_killAlarmFunc/40 (OS_killAlarmFunc) @06dff6c0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_KillAlarm/107 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_totalAlarms/39 (OS_totalAlarms) @06dff5e8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_nAlarms/38 (OS_nAlarms) @06dff5a0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_alarm/37 (OS_alarm) @06dff4c8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_appTable/14 (addr)OS_WrapIncrementCounter/108 (addr)OS_alarmDynamic_core0/109 (addr)OS_appTable/14 (addr)OS_WrapRunSchedule/110 (addr)OS_alarmDynamic_core0/109 (addr)OS_appTable/14 (addr)OS_WrapRunSchedule/110 (addr)OS_alarmDynamic_core0/109 (addr)
  Referring: OS_alarmTableBase/41 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_counterTableBase/36 (OS_counterTableBase) @06dff318
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_counter/34 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_nCounters/35 (OS_nCounters) @06dff240
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_counter/34 (OS_counter) @06dff168
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_appTable/14 (addr)OS_counterDynamic_core0/105 (addr)OS_appTable/14 (addr)OS_HwCounterUpdate/106 (addr)OS_hwTimer/31 (addr)OS_counterDynamic_core0/105 (addr)
  Referring: OS_counterTableBase/36 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_hwTimerTableBase/33 (OS_hwTimerTableBase) @06dff000
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_hwTimer/31 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_nHwTimers/32 (OS_nHwTimers) @06afb7e0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_hwTimer/31 (OS_hwTimer) @06afb6c0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_timerSTMdriver/103 (addr)OS_hwtLastValue_core0/104 (addr)
  Referring: OS_hwTimerTableBase/33 (addr)OS_counter/34 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_autoStartAlarms/30 (OS_autoStartAlarms) @06afbf78
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_startModeAlarms/29 (OS_startModeAlarms) @06afbea0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_autoStartTasks/28 (OS_autoStartTasks) @06afbdc8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_startModeTasks/27 (OS_startModeTasks) @06afbcf0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_nStartModes/26 (OS_nStartModes) @06afbc18
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_maxPrio/25 (OS_maxPrio) @06afbb40
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_killTaskFunc/24 (OS_killTaskFunc) @06afba68
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_KillTask/102 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_actiTaskFunc/23 (OS_actiTaskFunc) @06afba20
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_ActiTask/101 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_taskTableBase/22 (OS_taskTableBase) @06afb9d8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_taskTable/20 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_nTasks/21 (OS_nTasks) @06afb990
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_taskTable/20 (OS_taskTable) @06afb8b8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_taskDynamic_core0/92 (addr)OS_TASK_Rte_Event_Task/93 (addr)OS_taskStack0_slot0/0 (addr)OS_appTable/14 (addr)OS_taskDynamic_core0/92 (addr)OS_TASK_Rte_Time_Task/94 (addr)OS_taskStack0_slot1/1 (addr)OS_appTable/14 (addr)OS_taskDynamic_core0/92 (addr)OS_TASK_TASK_RTE_ModeSwitchEvent/95 (addr)OS_taskStack0_slot2/2 (addr)OS_appTable/14 (addr)OS_taskDynamic_core0/92 (addr)OS_TASK_Init_Task/96 (addr)OS_taskStack0_slot3/3 (addr)OS_appTable/14 (addr)OS_taskDynamic_core0/92 (addr)OS_TASK_SchMComTask_10ms/97 (addr)OS_taskStack0_slot4/4 (addr)OS_appTable/14 (addr)OS_taskDynamic_core0/92 (addr)OS_TASK_SchMComTask_5ms/98 (addr)OS_taskStack0_slot3/3 (addr)OS_appTable/14 (addr)OS_taskDynamic_core0/92 (addr)OS_TASK_SchMDiagStateTask_20ms/99 (addr)OS_taskStack0_slot5/5 (addr)OS_appTable/14 (addr)OS_taskDynamic_core0/92 (addr)OS_TASK_SchMMemTask_10ms/100 (addr)OS_taskStack0_slot6/6 (addr)OS_appTable/14 (addr)
  Referring: OS_taskTableBase/22 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_functionTableBase/19 (OS_functionTableBase) @06afb4c8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_nFunctions/18 (OS_nFunctions) @06afb480
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_nApps/17 (OS_nApps) @06afb3a8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_killHookFunc/16 (OS_killHookFunc) @06afb2d0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_KillHook/91 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_appTableBase/15 (OS_appTableBase) @06afb288
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_appTable/14 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_appTable/14 (OS_appTable) @06afb1b0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_OS_SYSTEM_0GenBuildId/89 (addr)OS_appDynamic_core0/90 (addr)
  Referring: OS_appTableBase/15 (addr)OS_taskTable/20 (addr)OS_taskTable/20 (addr)OS_taskTable/20 (addr)OS_taskTable/20 (addr)OS_taskTable/20 (addr)OS_taskTable/20 (addr)OS_taskTable/20 (addr)OS_taskTable/20 (addr)OS_counter/34 (addr)OS_counter/34 (addr)OS_alarm/37 (addr)OS_alarm/37 (addr)OS_alarm/37 (addr)OS_schedule/43 (addr)OS_schedule/43 (addr)OS_resource/48 (addr)OS_resource/48 (addr)OS_resource/48 (addr)OS_resource/48 (addr)OS_isrTable/51 (addr)OS_isrTable/51 (addr)OS_isrTable/51 (addr)OS_isrTable/51 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_hookSelection/13 (OS_hookSelection) @06afb048
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_iecMode/12 (OS_iecMode) @06cc5f78
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_configMode/11 (OS_configMode) @06cc5ea0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_appMode/10 (OS_appMode) @06cc5d80
  Type: variable definition analyzed
  Visibility: externally_visible public section:.data.shared.os.OS_appMode
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
OS_configurationId/8 (OS_configurationId) @06cc5c60
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_taskStack0_slot6/6 (OS_taskStack0_slot6) @06cc53a8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public section:.bss.core0.os_taskstack0_slot6
  References: 
  Referring: OS_taskTable/20 (addr)
  Availability: not_available
  Varpool flags:
OS_taskStack0_slot5/5 (OS_taskStack0_slot5) @06cc5360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public section:.bss.core0.os_taskstack0_slot5
  References: 
  Referring: OS_taskTable/20 (addr)
  Availability: not_available
  Varpool flags:
OS_taskStack0_slot4/4 (OS_taskStack0_slot4) @06cc5318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public section:.bss.core0.os_taskstack0_slot4
  References: 
  Referring: OS_taskTable/20 (addr)
  Availability: not_available
  Varpool flags:
OS_taskStack0_slot3/3 (OS_taskStack0_slot3) @06cc52d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public section:.bss.core0.os_taskstack0_slot3
  References: 
  Referring: OS_taskTable/20 (addr)OS_taskTable/20 (addr)
  Availability: not_available
  Varpool flags:
OS_taskStack0_slot2/2 (OS_taskStack0_slot2) @06cc5288
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public section:.bss.core0.os_taskstack0_slot2
  References: 
  Referring: OS_taskTable/20 (addr)
  Availability: not_available
  Varpool flags:
OS_taskStack0_slot1/1 (OS_taskStack0_slot1) @06cc5240
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public section:.bss.core0.os_taskstack0_slot1
  References: 
  Referring: OS_taskTable/20 (addr)
  Availability: not_available
  Varpool flags:
OS_taskStack0_slot0/0 (OS_taskStack0_slot0) @06cc51f8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public section:.bss.core0.os_taskstack0_slot0
  References: 
  Referring: OS_taskTable/20 (addr)
  Availability: not_available
  Varpool flags:
