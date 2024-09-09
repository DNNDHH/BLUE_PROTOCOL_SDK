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
	 * Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.SetChecked
	 */
	struct UGuildMemberManageCBIcon_C_SetChecked_Params
	{
	public:
		bool                                                       bIsCheck;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.IsCheck
	 */
	struct UGuildMemberManageCBIcon_C_IsCheck_Params
	{
	public:
		bool                                                       IsCheck;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.SetTextById
	 */
	struct UGuildMemberManageCBIcon_C_SetTextById_Params
	{
	public:
		int32_t                                                    TextId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGuildMemberManageCBIcon_C_BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.ExecuteUbergraph_GuildMemberManageCBIcon
	 */
	struct UGuildMemberManageCBIcon_C_ExecuteUbergraph_GuildMemberManageCBIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JSDF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.OnUpdateState__DelegateSignature
	 */
	struct UGuildMemberManageCBIcon_C_OnUpdateState__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
