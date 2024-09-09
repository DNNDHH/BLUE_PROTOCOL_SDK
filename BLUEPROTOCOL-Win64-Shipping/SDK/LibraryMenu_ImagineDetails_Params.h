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
	 * Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.UpdateReadRecipeTab
	 */
	struct ULibraryMenu_ImagineDetails_C_UpdateReadRecipeTab_Params
	{	};

	/**
	 * Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.SetActiveTab
	 */
	struct ULibraryMenu_ImagineDetails_C_SetActiveTab_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4ZHQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.SetImagineData
	 */
	struct ULibraryMenu_ImagineDetails_C_SetImagineData_Params
	{
	public:
		struct FSBMasterImagine                                    InImagineMasterData;                                     // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ELibraryImagineType                                        InImagineType;                                           // 0x00B8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P4N9[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.SetDetailsVisibility
	 */
	struct ULibraryMenu_ImagineDetails_C_SetDetailsVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K3W2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.OnLoaded_9077E37640FA46939F1F1AB3BCBE4946
	 */
	struct ULibraryMenu_ImagineDetails_C_OnLoaded_9077E37640FA46939F1F1AB3BCBE4946_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct ULibraryMenu_ImagineDetails_C_BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.Construct
	 */
	struct ULibraryMenu_ImagineDetails_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.Destruct
	 */
	struct ULibraryMenu_ImagineDetails_C_Destruct_Params
	{	};

	/**
	 * Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.BndEvt__LibraryMenu_WeaponDetails_WindowOpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_ImagineDetails_C_BndEvt__LibraryMenu_WeaponDetails_WindowOpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct ULibraryMenu_ImagineDetails_C_BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.PreConstruct
	 */
	struct ULibraryMenu_ImagineDetails_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.SetEnhanceImage
	 */
	struct ULibraryMenu_ImagineDetails_C_SetEnhanceImage_Params
	{
	public:
		int32_t                                                    InImagineId;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.BndEvt__LibraryMenu_ImagineDetails_Button_EnhanceImagine_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_ImagineDetails_C_BndEvt__LibraryMenu_ImagineDetails_Button_EnhanceImagine_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.BndEvt__LibraryMenu_ImagineDetails_UMG_CaptureStudio_K2Node_ComponentBoundEvent_3_OnLoadAssetComplete__DelegateSignature
	 */
	struct ULibraryMenu_ImagineDetails_C_BndEvt__LibraryMenu_ImagineDetails_UMG_CaptureStudio_K2Node_ComponentBoundEvent_3_OnLoadAssetComplete__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.ExecuteUbergraph_LibraryMenu_ImagineDetails
	 */
	struct ULibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R3DE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.OnClickZoomIn__DelegateSignature
	 */
	struct ULibraryMenu_ImagineDetails_C_OnClickZoomIn__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.OnRecipeTabRead__DelegateSignature
	 */
	struct ULibraryMenu_ImagineDetails_C_OnRecipeTabRead__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
