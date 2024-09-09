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
	 * Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.SetAchievementUnlock
	 */
	struct UMyCharaMenu_AchievementList_Item_C_SetAchievementUnlock_Params
	{
	public:
		bool                                                       IsUnlocked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.SetAsAchievementSelected
	 */
	struct UMyCharaMenu_AchievementList_Item_C_SetAsAchievementSelected_Params
	{
	public:
		bool                                                       IsAchievementSelected;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.SetTooltipEnable
	 */
	struct UMyCharaMenu_AchievementList_Item_C_SetTooltipEnable_Params
	{
	public:
		bool                                                       IsEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.GetAchievement
	 */
	struct UMyCharaMenu_AchievementList_Item_C_GetAchievement_Params
	{
	public:
		int32_t                                                    OutAchievementId;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.SetAchievement
	 */
	struct UMyCharaMenu_AchievementList_Item_C_SetAchievement_Params
	{
	public:
		int32_t                                                    InAchievementId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.GetToolTipWidget_1
	 */
	struct UMyCharaMenu_AchievementList_Item_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.PreConstruct
	 */
	struct UMyCharaMenu_AchievementList_Item_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.BndEvt__CheckBoxNormal_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UMyCharaMenu_AchievementList_Item_C_BndEvt__CheckBoxNormal_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.ExecuteUbergraph_MyCharaMenu_AchievementList_Item
	 */
	struct UMyCharaMenu_AchievementList_Item_C_ExecuteUbergraph_MyCharaMenu_AchievementList_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.OnSelected__DelegateSignature
	 */
	struct UMyCharaMenu_AchievementList_Item_C_OnSelected__DelegateSignature_Params
	{
	public:
		class UMyCharaMenu_AchievementList_Item_C*                 InSelectedItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
