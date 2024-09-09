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
	 * Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.FindAchievementFromList
	 */
	struct UMyCharaMenu_AchievementList_C_FindAchievementFromList_Params
	{
	public:
		int32_t                                                    InAchievementId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsExists;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4VHE[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMyCharaMenu_AchievementList_Item_C*                 OutListItem;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.IsClosing
	 */
	struct UMyCharaMenu_AchievementList_C_IsClosing_Params
	{
	public:
		bool                                                       OutIsClosing;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.Close
	 */
	struct UMyCharaMenu_AchievementList_C_Close_Params
	{	};

	/**
	 * Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.Destruct
	 */
	struct UMyCharaMenu_AchievementList_C_Destruct_Params
	{	};

	/**
	 * Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.PreConstruct
	 */
	struct UMyCharaMenu_AchievementList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.Construct
	 */
	struct UMyCharaMenu_AchievementList_C_Construct_Params
	{	};

	/**
	 * Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.Setup_AchievementList
	 */
	struct UMyCharaMenu_AchievementList_C_Setup_AchievementList_Params
	{
	public:
		TArray<struct FSBAchievementInfo>                          InAchievements;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnSelected_Item
	 */
	struct UMyCharaMenu_AchievementList_C_OnSelected_Item_Params
	{
	public:
		class UMyCharaMenu_AchievementList_Item_C*                 InSelectedItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnLoadAchievementDelegate
	 */
	struct UMyCharaMenu_AchievementList_C_OnLoadAchievementDelegate_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X4P5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBAchievementInfo>                          AchievementList;                                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnPress_Cancel
	 */
	struct UMyCharaMenu_AchievementList_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnAnimationFinished
	 */
	struct UMyCharaMenu_AchievementList_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharaMenu_AchievementList_C_BndEvt__BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.BndEvt__MyCharaMenu_AchievementList_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
	 */
	struct UMyCharaMenu_AchievementList_C_BndEvt__MyCharaMenu_AchievementList_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.ExecuteUbergraph_MyCharaMenu_AchievementList
	 */
	struct UMyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnSelectAchievement__DelegateSignature
	 */
	struct UMyCharaMenu_AchievementList_C_OnSelectAchievement__DelegateSignature_Params
	{
	public:
		int32_t                                                    InAchievementId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnLoadAchievement__DelegateSignature
	 */
	struct UMyCharaMenu_AchievementList_C_OnLoadAchievement__DelegateSignature_Params
	{
	public:
		bool                                                       InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnClose__DelegateSignature
	 */
	struct UMyCharaMenu_AchievementList_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
