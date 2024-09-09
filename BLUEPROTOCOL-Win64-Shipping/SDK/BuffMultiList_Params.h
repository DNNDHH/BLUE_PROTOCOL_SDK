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
	 * Function BuffMultiList.BuffMultiList_C.OnCreateIcon
	 */
	struct UBuffMultiList_C_OnCreateIcon_Params
	{
	public:
		class USBBuffIcon*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BuffMultiList.BuffMultiList_C.UpdateList
	 */
	struct UBuffMultiList_C_UpdateList_Params
	{	};

	/**
	 * Function BuffMultiList.BuffMultiList_C.GetList
	 */
	struct UBuffMultiList_C_GetList_Params
	{
	public:
		class UPanelWidget*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BuffMultiList.BuffMultiList_C.BindBattleStatusComponent
	 */
	struct UBuffMultiList_C_BindBattleStatusComponent_Params
	{	};

	/**
	 * Function BuffMultiList.BuffMultiList_C.UnbindBattleStatusComponent
	 */
	struct UBuffMultiList_C_UnbindBattleStatusComponent_Params
	{	};

	/**
	 * Function BuffMultiList.BuffMultiList_C.ExecuteUbergraph_BuffMultiList
	 */
	struct UBuffMultiList_C_ExecuteUbergraph_BuffMultiList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B85V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
