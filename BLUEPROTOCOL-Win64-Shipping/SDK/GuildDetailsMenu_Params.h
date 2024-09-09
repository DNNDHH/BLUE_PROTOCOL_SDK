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
	 * Function GuildDetailsMenu.GuildDetailsMenu_C.Initialize
	 */
	struct UGuildDetailsMenu_C_Initialize_Params
	{	};

	/**
	 * Function GuildDetailsMenu.GuildDetailsMenu_C.GetGuildComp
	 */
	struct UGuildDetailsMenu_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildDetailsMenu.GuildDetailsMenu_C.Construct
	 */
	struct UGuildDetailsMenu_C_Construct_Params
	{	};

	/**
	 * Function GuildDetailsMenu.GuildDetailsMenu_C.BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature
	 */
	struct UGuildDetailsMenu_C_BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature_Params
	{
	public:
		bool                                                       Edit;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildDetailsMenu.GuildDetailsMenu_C.OnCompleteGetGuildData_Event
	 */
	struct UGuildDetailsMenu_C_OnCompleteGetGuildData_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildDetailsMenu.GuildDetailsMenu_C.ExecuteUbergraph_GuildDetailsMenu
	 */
	struct UGuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
