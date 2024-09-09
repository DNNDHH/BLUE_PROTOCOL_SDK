#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_OpenClose
	 */
	struct USchedulerDateTimeHud_C_update_OpenClose_Params
	{	};

	/**
	 * Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.IsShow
	 */
	struct USchedulerDateTimeHud_C_IsShow_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_DateTime
	 */
	struct USchedulerDateTimeHud_C_update_DateTime_Params
	{	};

	/**
	 * Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_VirtualDateStart
	 */
	struct USchedulerDateTimeHud_C_update_VirtualDateStart_Params
	{
	public:
		class USBPlayerVirtualDateTimeComponent*                   InDateTimeComp;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_VirtualDate
	 */
	struct USchedulerDateTimeHud_C_update_VirtualDate_Params
	{
	public:
		class USBPlayerVirtualDateTimeComponent*                   InDateTimeComp;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_NowDate
	 */
	struct USchedulerDateTimeHud_C_update_NowDate_Params
	{
	public:
		class USBPlayerVirtualDateTimeComponent*                   InDateTimeComp;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Update
	 */
	struct USchedulerDateTimeHud_C_Update_Params
	{	};

	/**
	 * Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Close
	 */
	struct USchedulerDateTimeHud_C_Close_Params
	{	};

	/**
	 * Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Show
	 */
	struct USchedulerDateTimeHud_C_Show_Params
	{	};

	/**
	 * Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Construct
	 */
	struct USchedulerDateTimeHud_C_Construct_Params
	{	};

	/**
	 * Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.BindDebugValueChanged
	 */
	struct USchedulerDateTimeHud_C_BindDebugValueChanged_Params
	{	};

	/**
	 * Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.OnDebugValueChanged
	 */
	struct USchedulerDateTimeHud_C_OnDebugValueChanged_Params
	{
	public:
		ESBDebugMenuType                                           MenuType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FPUN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                RowName;                                                 // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.TimerUpaateEvent
	 */
	struct USchedulerDateTimeHud_C_TimerUpaateEvent_Params
	{	};

	/**
	 * Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.UnbindDebugValueChanged
	 */
	struct USchedulerDateTimeHud_C_UnbindDebugValueChanged_Params
	{	};

	/**
	 * Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Destruct
	 */
	struct USchedulerDateTimeHud_C_Destruct_Params
	{	};

	/**
	 * Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.ExecuteUbergraph_SchedulerDateTimeHud
	 */
	struct USchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
