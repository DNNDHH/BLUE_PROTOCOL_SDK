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
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.Is Disappearance
	 */
	struct UWBP_ItemBoxResult_C_IsDisappearance_Params
	{
	public:
		bool                                                       bDisappearance;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B50Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.GetSettingAgainItem
	 */
	struct UWBP_ItemBoxResult_C_GetSettingAgainItem_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A9ZX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInventoryItemData                                  IconData;                                                // 0x0008(0x0060)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateItemScrollList
	 */
	struct UWBP_ItemBoxResult_C_CreateItemScrollList_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.SearchSettingAgainItem
	 */
	struct UWBP_ItemBoxResult_C_SearchSettingAgainItem_Params
	{
	public:
		bool                                                       IsBag;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5ROF[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInventoryItemData                                  IconData;                                                // 0x0008(0x0060)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateStorageList
	 */
	struct UWBP_ItemBoxResult_C_CreateStorageList_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateBagList
	 */
	struct UWBP_ItemBoxResult_C_CreateBagList_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnPress_Cancel
	 */
	struct UWBP_ItemBoxResult_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnAnimationFinished
	 */
	struct UWBP_ItemBoxResult_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnDestructMainWidget
	 */
	struct UWBP_ItemBoxResult_C_OnDestructMainWidget_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ItemBoxResult_C_BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.HideDialog
	 */
	struct UWBP_ItemBoxResult_C_HideDialog_Params
	{
	public:
		bool                                                       bPlayCloseSe;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.Destruct
	 */
	struct UWBP_ItemBoxResult_C_Destruct_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.Construct
	 */
	struct UWBP_ItemBoxResult_C_Construct_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__Button1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ItemBoxResult_C_BndEvt__Button1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateResultList
	 */
	struct UWBP_ItemBoxResult_C_CreateResultList_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.SettingButtonAgain
	 */
	struct UWBP_ItemBoxResult_C_SettingButtonAgain_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.SetDisappearanceText
	 */
	struct UWBP_ItemBoxResult_C_SetDisappearanceText_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_ItemBoxResult_C_BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_ItemBoxResult_C_BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_ItemBoxResult_C_BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__Button1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_ItemBoxResult_C_BndEvt__Button1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.SetTitleName
	 */
	struct UWBP_ItemBoxResult_C_SetTitleName_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__WBP_ItemBoxResult_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 */
	struct UWBP_ItemBoxResult_C_BndEvt__WBP_ItemBoxResult_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__WBP_ItemBoxResult_SBButtonTransparent_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ItemBoxResult_C_BndEvt__WBP_ItemBoxResult_SBButtonTransparent_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.ExecuteUbergraph_WBP_ItemBoxResult
	 */
	struct UWBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9M92[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnNumSliderUpdeta__DelegateSignature
	 */
	struct UWBP_ItemBoxResult_C_OnNumSliderUpdeta__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O5T4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UNumberInputDialog_C*                                CallerDialg;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnHide__DelegateSignature
	 */
	struct UWBP_ItemBoxResult_C_OnHide__DelegateSignature_Params
	{
	public:
		ENumberInputDialogResult                                   InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VH7G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInventoryItemData                                  NewParam;                                                // 0x0008(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
