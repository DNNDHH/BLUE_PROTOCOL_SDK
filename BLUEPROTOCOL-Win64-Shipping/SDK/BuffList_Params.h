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
	 * Function BuffList.BuffList_C.OnCreateIcon
	 */
	struct UBuffList_C_OnCreateIcon_Params
	{
	public:
		class USBBuffIcon*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BuffList.BuffList_C.UpdateList
	 */
	struct UBuffList_C_UpdateList_Params
	{	};

	/**
	 * Function BuffList.BuffList_C.GetList
	 */
	struct UBuffList_C_GetList_Params
	{
	public:
		class UPanelWidget*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BuffList.BuffList_C.BindBattleStatusComponent
	 */
	struct UBuffList_C_BindBattleStatusComponent_Params
	{	};

	/**
	 * Function BuffList.BuffList_C.UnbindBattleStatusComponent
	 */
	struct UBuffList_C_UnbindBattleStatusComponent_Params
	{	};

	/**
	 * Function BuffList.BuffList_C.ExecuteUbergraph_BuffList
	 */
	struct UBuffList_C_ExecuteUbergraph_BuffList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZY6P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
