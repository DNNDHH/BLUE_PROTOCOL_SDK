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
	 * Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.ScreenShotCapturedEvent
	 */
	struct UUMG_PhotoModeControll_UploadList_C_ScreenShotCapturedEvent_Params
	{
	public:
		TArray<class UTexture2DDynamic*>                           InThumbnailImage;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.SetUploadThumbnail
	 */
	struct UUMG_PhotoModeControll_UploadList_C_SetUploadThumbnail_Params
	{
	public:
		TArray<class UTexture2DDynamic*>                           InThumbnailImage;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.InitUploadPanel
	 */
	struct UUMG_PhotoModeControll_UploadList_C_InitUploadPanel_Params
	{	};

	/**
	 * Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.ScreenshotCapturedEvent_Bp
	 */
	struct UUMG_PhotoModeControll_UploadList_C_ScreenshotCapturedEvent_Bp_Params
	{
	public:
		TArray<class UTexture2DDynamic*>                           InThumbnailImage;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.SetUploadThumbnail_Bp
	 */
	struct UUMG_PhotoModeControll_UploadList_C_SetUploadThumbnail_Bp_Params
	{
	public:
		TArray<class UTexture2DDynamic*>                           InThumbnailImage;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadWidgetSwitcher_Bp
	 */
	struct UUMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher_Bp_Params
	{
	public:
		unsigned char                                              InMode;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadWidgetSwitcher
	 */
	struct UUMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher_Params
	{
	public:
		EPhotoModeUploadList                                       InMode;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadFinish
	 */
	struct UUMG_PhotoModeControll_UploadList_C_UploadFinish_Params
	{
	public:
		TArray<struct FSlateBrush>                                 InThumbnailImage;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<bool>                                               InReturnValue;                                           // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       InIsClickCheck;                                          // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.BndEvt__UMG_PhotoModeControll_UploadList_SBButton_UploadSelectWindowOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControll_UploadList_C_BndEvt__UMG_PhotoModeControll_UploadList_SBButton_UploadSelectWindowOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.ExecuteUbergraph_UMG_PhotoModeControll_UploadList
	 */
	struct UUMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadSelectWindowClickEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControll_UploadList_C_UploadSelectWindowClickEvent__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
