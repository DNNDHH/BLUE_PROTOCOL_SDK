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
	 * Function GuildFindEntry.GuildFindEntry_C.Set Entry
	 */
	struct UGuildFindEntry_C_SetEntry_Params
	{
	public:
		struct FGuildEntryData                                     Entry;                                                   // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildFindEntry.GuildFindEntry_C.Find Guild Entry
	 */
	struct UGuildFindEntry_C_FindGuildEntry_Params
	{
	public:
		struct FGuildEntryData                                     Output_Get;                                              // 0x0000(0x00E0)  (Parm, OutParm)
	};

	/**
	 * Function GuildFindEntry.GuildFindEntry_C.GetGuildComp
	 */
	struct UGuildFindEntry_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildFindEntry.GuildFindEntry_C.SetGuildData
	 */
	struct UGuildFindEntry_C_SetGuildData_Params
	{
	public:
		struct FGuildData                                          GuildData;                                               // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildFindEntry.GuildFindEntry_C.OnCompletedGuildEntries
	 */
	struct UGuildFindEntry_C_OnCompletedGuildEntries_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildFindEntry.GuildFindEntry_C.UpdateButtons
	 */
	struct UGuildFindEntry_C_UpdateButtons_Params
	{	};

	/**
	 * Function GuildFindEntry.GuildFindEntry_C.Initialize
	 */
	struct UGuildFindEntry_C_Initialize_Params
	{	};

	/**
	 * Function GuildFindEntry.GuildFindEntry_C.OnCancelDialog
	 */
	struct UGuildFindEntry_C_OnCancelDialog_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildFindEntry.GuildFindEntry_C.Show Guild
	 */
	struct UGuildFindEntry_C_ShowGuild_Params
	{	};

	/**
	 * Function GuildFindEntry.GuildFindEntry_C.NotFound
	 */
	struct UGuildFindEntry_C_NotFound_Params
	{	};

	/**
	 * Function GuildFindEntry.GuildFindEntry_C.OnCloseEntry
	 */
	struct UGuildFindEntry_C_OnCloseEntry_Params
	{
	public:
		EDialogResult                                              OnButton;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_16KK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                InputText;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_Applicate_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 */
	struct UGuildFindEntry_C_BndEvt__GuildFindEntry_Btn_Applicate_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_Research_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 */
	struct UGuildFindEntry_C_BndEvt__GuildFindEntry_Btn_Research_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_Cancel_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
	 */
	struct UGuildFindEntry_C_BndEvt__GuildFindEntry_Btn_Cancel_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_Accept_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
	 */
	struct UGuildFindEntry_C_BndEvt__GuildFindEntry_Btn_Accept_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_WithDraw_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature
	 */
	struct UGuildFindEntry_C_BndEvt__GuildFindEntry_Btn_WithDraw_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildFindEntry.GuildFindEntry_C.Construct
	 */
	struct UGuildFindEntry_C_Construct_Params
	{	};

	/**
	 * Function GuildFindEntry.GuildFindEntry_C.ExecuteUbergraph_GuildFindEntry
	 */
	struct UGuildFindEntry_C_ExecuteUbergraph_GuildFindEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NHQC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GuildFindEntry.GuildFindEntry_C.OnResearchGuild__DelegateSignature
	 */
	struct UGuildFindEntry_C_OnResearchGuild__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
