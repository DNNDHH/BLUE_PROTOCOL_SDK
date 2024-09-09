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
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.RequestPreLoad
	 */
	struct UUMG_MatchingMenu_Main_C_RequestPreLoad_Params
	{
	public:
		TArray<struct FSBMapInfo>                                  InDungeonMapInfos;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OutAnimation
	 */
	struct UUMG_MatchingMenu_Main_C_OutAnimation_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.InAnimation
	 */
	struct UUMG_MatchingMenu_Main_C_InAnimation_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.CloseMenu
	 */
	struct UUMG_MatchingMenu_Main_C_CloseMenu_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.Init
	 */
	struct UUMG_MatchingMenu_Main_C_Init_Params
	{
	public:
		class FName                                                InitDungeonId;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.Construct
	 */
	struct UUMG_MatchingMenu_Main_C_Construct_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnAnimationFinished
	 */
	struct UUMG_MatchingMenu_Main_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.ShowNoLeaderAlert
	 */
	struct UUMG_MatchingMenu_Main_C_ShowNoLeaderAlert_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.BndEvt__ContentInfo_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature
	 */
	struct UUMG_MatchingMenu_Main_C_BndEvt__ContentInfo_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.DoMatching
	 */
	struct UUMG_MatchingMenu_Main_C_DoMatching_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.PartyRecruitCancel_YesNoDialog
	 */
	struct UUMG_MatchingMenu_Main_C_PartyRecruitCancel_YesNoDialog_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnCancelRecruit
	 */
	struct UUMG_MatchingMenu_Main_C_OnCancelRecruit_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C4GJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    iRetCode;                                                // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.PartyRecruitCancel
	 */
	struct UUMG_MatchingMenu_Main_C_PartyRecruitCancel_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_1_OnClickedSoloOrParty__DelegateSignature
	 */
	struct UUMG_MatchingMenu_Main_C_BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_1_OnClickedSoloOrParty__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_2_OnClickedMatching__DelegateSignature
	 */
	struct UUMG_MatchingMenu_Main_C_BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_2_OnClickedMatching__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature
	 */
	struct UUMG_MatchingMenu_Main_C_BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature_Params
	{
	public:
		struct FSBDungeonSupply                                    DungeonSupply;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.ExecuteUbergraph_UMG_MatchingMenu_Main
	 */
	struct UUMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnClickSupplyIcon__DelegateSignature
	 */
	struct UUMG_MatchingMenu_Main_C_OnClickSupplyIcon__DelegateSignature_Params
	{
	public:
		struct FSBDungeonSupply                                    DungeonSupply;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnClose__DelegateSignature
	 */
	struct UUMG_MatchingMenu_Main_C_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnStartMatchmaking__DelegateSignature
	 */
	struct UUMG_MatchingMenu_Main_C_OnStartMatchmaking__DelegateSignature_Params
	{
	public:
		TArray<struct FSBMapInfo>                                  DungeonMapInfoArray;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bUnlimit;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
