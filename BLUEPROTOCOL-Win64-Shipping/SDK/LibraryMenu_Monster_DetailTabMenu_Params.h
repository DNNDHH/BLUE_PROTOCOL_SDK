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
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetDetailOpenSetting
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting_Params
	{
	public:
		class FName                                                CheckType;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.UpdateDetailOpenSetting
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_UpdateDetailOpenSetting_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.SetActiveArea
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_SetActiveArea_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_93W0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetAreaListWidget
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A318[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULibraryMenu_MonsterAreaListItem_C*                  OutWidget;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.MakeAreaList
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_MakeAreaList_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.CloseAreaList
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_CloseAreaList_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OpenAreaList
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_OpenAreaList_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ChangeEnemyData
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AreaIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetEnemyPopAreaData
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_GetEnemyPopAreaData_Params
	{
	public:
		TArray<class FString>                                      AreaIds;                                                 // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetDropItemWidget
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FQ1R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULibraryMenu_Monster_DropItem_C*                     Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.Update Drop Item Widget Visibility
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_UpdateDropItemWidgetVisibility_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.Initialize Drop Item List
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_InitializeDropItemList_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ChangeEnemyViewData
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData_Params
	{
	public:
		class FName                                                ChangeEnemyId;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.SetEnemyData
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_SetEnemyData_Params
	{
	public:
		struct FSBLibraryEnemyData                                 EnemyData;                                               // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ButtonTextColorChange
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_ButtonTextColorChange_Params
	{
	public:
		bool                                                       OnCursor;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EOPP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_3_OnHandledLostFocus__DelegateSignature
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_3_OnHandledLostFocus__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_AreaSelectCloseFullscreen_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_BndEvt__LibraryMenu_Monster_DetailTabMenu_AreaSelectCloseFullscreen_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAreaItemSelect
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_OnAreaItemSelect_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAnimationFinished
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.Construct
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAreaListVisibleChange__DelegateSignature
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_OnAreaListVisibleChange__DelegateSignature_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAreaListSelect__DelegateSignature
	 */
	struct ULibraryMenu_Monster_DetailTabMenu_C_OnAreaListSelect__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                EnemyId;                                                 // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
