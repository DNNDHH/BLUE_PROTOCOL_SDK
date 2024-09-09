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
	 * Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetTerm
	 */
	struct UUMG_MatchingMenu_ContentInfo_C_SetTerm_Params
	{
	public:
		class FName                                                EventTerm;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetBestScore
	 */
	struct UUMG_MatchingMenu_ContentInfo_C_SetBestScore_Params
	{
	public:
		int32_t                                                    Record;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ClearCount;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBClassType                                               ClassType;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BRMK[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                MapId;                                                   // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetCommandMenuMode
	 */
	struct UUMG_MatchingMenu_ContentInfo_C_SetCommandMenuMode_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetDungeonInfo
	 */
	struct UUMG_MatchingMenu_ContentInfo_C_SetDungeonInfo_Params
	{
	public:
		struct FSBMapInfo                                          DungeonMapInfo;                                          // 0x0000(0x01F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.BndEvt__UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature
	 */
	struct UUMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature
	 */
	struct UUMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature_Params
	{
	public:
		class UQuestRewardIcon_C*                                  Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature
	 */
	struct UUMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature_Params
	{
	public:
		struct FSBDungeonSupply                                    DungeonSupply;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.ExecuteUbergraph_UMG_MatchingMenu_ContentInfo
	 */
	struct UUMG_MatchingMenu_ContentInfo_C_ExecuteUbergraph_UMG_MatchingMenu_ContentInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.OnClickSupplyIcon__DelegateSignature
	 */
	struct UUMG_MatchingMenu_ContentInfo_C_OnClickSupplyIcon__DelegateSignature_Params
	{
	public:
		struct FSBDungeonSupply                                    DungeonSupply;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.OnClickRewardIcon__DelegateSignature
	 */
	struct UUMG_MatchingMenu_ContentInfo_C_OnClickRewardIcon__DelegateSignature_Params
	{
	public:
		class UQuestRewardIcon_C*                                  Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.OnCloseButtonClicked__DelegateSignature
	 */
	struct UUMG_MatchingMenu_ContentInfo_C_OnCloseButtonClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
