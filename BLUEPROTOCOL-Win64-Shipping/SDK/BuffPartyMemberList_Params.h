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
	 * Function BuffPartyMemberList.BuffPartyMemberList_C.OnCreateIcon
	 */
	struct UBuffPartyMemberList_C_OnCreateIcon_Params
	{
	public:
		class USBBuffIcon*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BuffPartyMemberList.BuffPartyMemberList_C.UpdateList
	 */
	struct UBuffPartyMemberList_C_UpdateList_Params
	{	};

	/**
	 * Function BuffPartyMemberList.BuffPartyMemberList_C.GetList
	 */
	struct UBuffPartyMemberList_C_GetList_Params
	{
	public:
		class UPanelWidget*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BuffPartyMemberList.BuffPartyMemberList_C.BindBattleStatusComponent
	 */
	struct UBuffPartyMemberList_C_BindBattleStatusComponent_Params
	{	};

	/**
	 * Function BuffPartyMemberList.BuffPartyMemberList_C.UnbindBattleStatusComponent
	 */
	struct UBuffPartyMemberList_C_UnbindBattleStatusComponent_Params
	{	};

	/**
	 * Function BuffPartyMemberList.BuffPartyMemberList_C.ExecuteUbergraph_BuffPartyMemberList
	 */
	struct UBuffPartyMemberList_C_ExecuteUbergraph_BuffPartyMemberList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K71J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
