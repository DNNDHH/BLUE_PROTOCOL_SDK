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
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.SetVisibleButton
	 */
	struct UWBP_NaEventMenu_C_SetVisibleButton_Params
	{
	public:
		class UWidget*                                             Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bVisible;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.GetBgImageTexture
	 */
	struct UWBP_NaEventMenu_C_GetBgImageTexture_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W4G2[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.GetTopImageTexture
	 */
	struct UWBP_NaEventMenu_C_GetTopImageTexture_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QJ1Y[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.GetImageTexture
	 */
	struct UWBP_NaEventMenu_C_GetImageTexture_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsTopImage;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7VI8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_ZUTP[0x2F];                                  // 0x0009(0x002F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.UpdateNewIcon
	 */
	struct UWBP_NaEventMenu_C_UpdateNewIcon_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.UpdateVarious
	 */
	struct UWBP_NaEventMenu_C_UpdateVarious_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.CreateEventListItem
	 */
	struct UWBP_NaEventMenu_C_CreateEventListItem_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnLoaded_8370E89245646CB9213C6B89A2BB3695
	 */
	struct UWBP_NaEventMenu_C_OnLoaded_8370E89245646CB9213C6B89A2BB3695_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnLoaded_8370E89245646CB9213C6B89267F0426
	 */
	struct UWBP_NaEventMenu_C_OnLoaded_8370E89245646CB9213C6B89267F0426_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.Finished_106B635141EC93816CDD548EF631EDAB
	 */
	struct UWBP_NaEventMenu_C_Finished_106B635141EC93816CDD548EF631EDAB_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.PrepareTopImage
	 */
	struct UWBP_NaEventMenu_C_PrepareTopImage_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.ReadyTopImage
	 */
	struct UWBP_NaEventMenu_C_ReadyTopImage_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.SetTopImage
	 */
	struct UWBP_NaEventMenu_C_SetTopImage_Params
	{
	public:
		int32_t                                                    EventId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ID;                                                      // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UploadId;                                                // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.SetBgImage
	 */
	struct UWBP_NaEventMenu_C_SetBgImage_Params
	{
	public:
		int32_t                                                    EventId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ID;                                                      // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UploadId;                                                // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.PrepareImage
	 */
	struct UWBP_NaEventMenu_C_PrepareImage_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.PrepareBgImage
	 */
	struct UWBP_NaEventMenu_C_PrepareBgImage_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.ReadyBgImage
	 */
	struct UWBP_NaEventMenu_C_ReadyBgImage_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.RequestGetInfo
	 */
	struct UWBP_NaEventMenu_C_RequestGetInfo_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnGetInfoCompleted
	 */
	struct UWBP_NaEventMenu_C_OnGetInfoCompleted_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnClickedEventBannerButton
	 */
	struct UWBP_NaEventMenu_C_OnClickedEventBannerButton_Params
	{
	public:
		int32_t                                                    EventId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_SBButton_Schedule_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_NaEventMenu_C_BndEvt__WBP_NaEventMenu_SBButton_Schedule_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_SBButton_Quest_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_NaEventMenu_C_BndEvt__WBP_NaEventMenu_SBButton_Quest_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_SBButton_Reward_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_NaEventMenu_C_BndEvt__WBP_NaEventMenu_SBButton_Reward_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_SBButton_Team_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_NaEventMenu_C_BndEvt__WBP_NaEventMenu_SBButton_Team_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_SBButton_Help_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_NaEventMenu_C_BndEvt__WBP_NaEventMenu_SBButton_Help_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnCloseTutorialHelp
	 */
	struct UWBP_NaEventMenu_C_OnCloseTutorialHelp_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.ShowTutorialHelp
	 */
	struct UWBP_NaEventMenu_C_ShowTutorialHelp_Params
	{
	public:
		class FName                                                TutorialHelpId;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.ShowSubMenu
	 */
	struct UWBP_NaEventMenu_C_ShowSubMenu_Params
	{
	public:
		int32_t                                                    ChildMenuType;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_SBButton_OfficialSite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_NaEventMenu_C_BndEvt__WBP_NaEventMenu_SBButton_OfficialSite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnInputCancelKey
	 */
	struct UWBP_NaEventMenu_C_OnInputCancelKey_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.BndEvt__WBP_NaEventMenu_CmnBack01_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature
	 */
	struct UWBP_NaEventMenu_C_BndEvt__WBP_NaEventMenu_CmnBack01_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.Close
	 */
	struct UWBP_NaEventMenu_C_Close_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.Construct
	 */
	struct UWBP_NaEventMenu_C_Construct_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.OnAnyUpdate
	 */
	struct UWBP_NaEventMenu_C_OnAnyUpdate_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.Destruct
	 */
	struct UWBP_NaEventMenu_C_Destruct_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.Init
	 */
	struct UWBP_NaEventMenu_C_Init_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.Ready
	 */
	struct UWBP_NaEventMenu_C_Ready_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.Tick
	 */
	struct UWBP_NaEventMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1
	 */
	struct UWBP_NaEventMenu_C_WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function WBP_NaEventMenu.WBP_NaEventMenu_C.ExecuteUbergraph_WBP_NaEventMenu
	 */
	struct UWBP_NaEventMenu_C_ExecuteUbergraph_WBP_NaEventMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
