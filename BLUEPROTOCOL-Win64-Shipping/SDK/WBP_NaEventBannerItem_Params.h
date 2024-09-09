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
	 * Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.GetBannerTexture
	 */
	struct UWBP_NaEventBannerItem_C_GetBannerTexture_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3DAJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_QRIG[0x2C];                                  // 0x0004(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.UpdateNewIcon
	 */
	struct UWBP_NaEventBannerItem_C_UpdateNewIcon_Params
	{	};

	/**
	 * Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.SetData
	 */
	struct UWBP_NaEventBannerItem_C_SetData_Params
	{
	public:
		class USBNaEventData*                                      Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.BndEvt__WBP_AcEventBannerItem_SBSelectableTextButtonCmnBtn27_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_NaEventBannerItem_C_BndEvt__WBP_AcEventBannerItem_SBSelectableTextButtonCmnBtn27_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.SetSelected
	 */
	struct UWBP_NaEventBannerItem_C_SetSelected_Params
	{
	public:
		bool                                                       bSelect;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.OnChangeSelectedEventId
	 */
	struct UWBP_NaEventBannerItem_C_OnChangeSelectedEventId_Params
	{
	public:
		int32_t                                                    SelectedEventId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.Construct
	 */
	struct UWBP_NaEventBannerItem_C_Construct_Params
	{	};

	/**
	 * Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.Destruct
	 */
	struct UWBP_NaEventBannerItem_C_Destruct_Params
	{	};

	/**
	 * Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.OnAnyUpdate
	 */
	struct UWBP_NaEventBannerItem_C_OnAnyUpdate_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.ExecuteUbergraph_WBP_NaEventBannerItem
	 */
	struct UWBP_NaEventBannerItem_C_ExecuteUbergraph_WBP_NaEventBannerItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventBannerItem.WBP_NaEventBannerItem_C.OnClicked__DelegateSignature
	 */
	struct UWBP_NaEventBannerItem_C_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    EventId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
