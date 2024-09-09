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
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.TermRequest
	 */
	struct ULibraryMenu_Monster_C_TermRequest_Params
	{
	public:
		ESubMenuTermReason                                         InReason;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESubMenuTermRequestReply                                   ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.ChangeDetailEnemyId
	 */
	struct ULibraryMenu_Monster_C_ChangeDetailEnemyId_Params
	{
	public:
		class FName                                                EnemyId;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.UpdateCategoryListMark
	 */
	struct ULibraryMenu_Monster_C_UpdateCategoryListMark_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.BossFlagCheck
	 */
	struct ULibraryMenu_Monster_C_BossFlagCheck_Params
	{
	public:
		class FName                                                EnemyId;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Boss;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Unique;                                                  // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.ModelPartsChange
	 */
	struct ULibraryMenu_Monster_C_ModelPartsChange_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.UpdateSearchVisibility
	 */
	struct ULibraryMenu_Monster_C_UpdateSearchVisibility_Params
	{
	public:
		class FText                                                SearchWord;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnAppearanceListClick
	 */
	struct ULibraryMenu_Monster_C_OnAppearanceListClick_Params
	{
	public:
		int32_t                                                    listIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.CreateAppearanceList
	 */
	struct ULibraryMenu_Monster_C_CreateAppearanceList_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.SaveEnemyReadId
	 */
	struct ULibraryMenu_Monster_C_SaveEnemyReadId_Params
	{
	public:
		class FName                                                EnemyId;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SaveAdd;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FM5X[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.IsReadCategory
	 */
	struct ULibraryMenu_Monster_C_IsReadCategory_Params
	{
	public:
		struct FSBTextTableHash                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FSBTextTableHash                                    RaceId;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FSBTextTableHash                                    readId;                                                  // 0x0008(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsRead;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YVEK[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.IsAllRead
	 */
	struct ULibraryMenu_Monster_C_IsAllRead_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0YXJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.CreateCategoryList
	 */
	struct ULibraryMenu_Monster_C_CreateCategoryList_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnParentTerm
	 */
	struct ULibraryMenu_Monster_C_OnParentTerm_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnRMShopClosed
	 */
	struct ULibraryMenu_Monster_C_OnRMShopClosed_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnSameMenuBookmarkAccessNew
	 */
	struct ULibraryMenu_Monster_C_OnSameMenuBookmarkAccessNew_Params
	{
	public:
		class FString                                              InBookMarkType;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnSubMenuUpdate
	 */
	struct ULibraryMenu_Monster_C_OnSubMenuUpdate_Params
	{
	public:
		int32_t                                                    MainPage;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SubPage;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.ResetMouseCursorTypeToDefaultRequest
	 */
	struct ULibraryMenu_Monster_C_ResetMouseCursorTypeToDefaultRequest_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.InitializeCaptureStudio
	 */
	struct ULibraryMenu_Monster_C_InitializeCaptureStudio_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnModelLoadComplete
	 */
	struct ULibraryMenu_Monster_C_OnModelLoadComplete_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.FinalizeCaptureStudio
	 */
	struct ULibraryMenu_Monster_C_FinalizeCaptureStudio_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.SetModelControllEnabled
	 */
	struct ULibraryMenu_Monster_C_SetModelControllEnabled_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.SetModelVisibility
	 */
	struct ULibraryMenu_Monster_C_SetModelVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.ModelLoadRequest
	 */
	struct ULibraryMenu_Monster_C_ModelLoadRequest_Params
	{
	public:
		class FString                                              EnemyCharacterId;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBLibraryEnemyViewSetting                                 ViewSetting;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBLibraryEnemyWeaponSetting                               WeaponSetting;                                           // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnModelLoadedAllMipFunc
	 */
	struct ULibraryMenu_Monster_C_OnModelLoadedAllMipFunc_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.Construct
	 */
	struct ULibraryMenu_Monster_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.Tick
	 */
	struct ULibraryMenu_Monster_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnAnimationFinished
	 */
	struct ULibraryMenu_Monster_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.UpdateEnemyModel
	 */
	struct ULibraryMenu_Monster_C_UpdateEnemyModel_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.ImageVisibleEvent
	 */
	struct ULibraryMenu_Monster_C_ImageVisibleEvent_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature
	 */
	struct ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature_Params
	{
	public:
		class FText                                                NewParam;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.Destruct
	 */
	struct ULibraryMenu_Monster_C_Destruct_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_WindowOpenButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_WindowOpenButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.Esc_ModelView
	 */
	struct ULibraryMenu_Monster_C_Esc_ModelView_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ButtonFullScreen_ModelView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_ButtonFullScreen_ModelView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.Close_ModelView
	 */
	struct ULibraryMenu_Monster_C_Close_ModelView_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnClosePopup
	 */
	struct ULibraryMenu_Monster_C_OnClosePopup_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ButtonFullScreen_MonsterDetails_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_ButtonFullScreen_MonsterDetails_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.PressedAreaList
	 */
	struct ULibraryMenu_Monster_C_PressedAreaList_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.UnBindArealistBtn
	 */
	struct ULibraryMenu_Monster_C_UnBindArealistBtn_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnEnemyDataLoaded
	 */
	struct ULibraryMenu_Monster_C_OnEnemyDataLoaded_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.AreaListVisibleChange
	 */
	struct ULibraryMenu_Monster_C_AreaListVisibleChange_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature
	 */
	struct ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature
	 */
	struct ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_WindowOpenButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_WindowOpenButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.AreaListSelect
	 */
	struct ULibraryMenu_Monster_C_AreaListSelect_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                EnemyId;                                                 // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.ExecuteUbergraph_LibraryMenu_Monster
	 */
	struct ULibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster.LibraryMenu_Monster_C.AllReadMonster__DelegateSignature
	 */
	struct ULibraryMenu_Monster_C_AllReadMonster__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
