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
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetImagePNGData_Bp
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_GetImagePNGData_Bp_Params
	{
	public:
		TArray<unsigned char>                                      OutImagePngData;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetIsUpload_Bp
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_GetIsUpload_Bp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetThumbnailTexture_Bp
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_SetThumbnailTexture_Bp_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<unsigned char>                                      InImagePNGData;                                          // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetThumbnailTexture_Bp
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_GetThumbnailTexture_Bp_Params
	{
	public:
		class UTexture2DDynamic*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetIsUpload
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_SetIsUpload_Params
	{
	public:
		bool                                                       IsUpload;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetIsUpload
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_GetIsUpload_Params
	{
	public:
		bool                                                       IsUpload;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetSelect
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_SetSelect_Params
	{
	public:
		bool                                                       bSelect;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.IsSelect
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_IsSelect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.Get Slate Brush
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_GetSlateBrush_Params
	{
	public:
		struct FSlateBrush                                         BrushImage;                                              // 0x0000(0x0088)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.Reset
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_Reset_Params
	{	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.ResetFaild
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_ResetFaild_Params
	{	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetImage_PNGData
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_GetImage_PNGData_Params
	{
	public:
		TArray<unsigned char>                                      outImage_PNGData;                                        // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetThumbnailTexture
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_GetThumbnailTexture_Params
	{
	public:
		class UTexture2DDynamic*                                   outThumbnailTexture;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetThumbnailTexture
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_SetThumbnailTexture_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<unsigned char>                                      inImage_PNGData;                                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       outIsTextureNone;                                        // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.IsValidThumbnail
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_IsValidThumbnail_Params
	{
	public:
		bool                                                       bIsValid;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KQ23[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetIsUpload_Bp
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_SetIsUpload_Bp_Params
	{
	public:
		bool                                                       bIsUpload;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.Reset_Bp
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_Reset_Bp_Params
	{	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.Init
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_Init_Params
	{
	public:
		int32_t                                                    ThumbnailNo;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.ResetButton
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_ResetButton_Params
	{	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetIsEnableButton
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_SetIsEnableButton_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.BndEvt__UMG_PhotoMode_ThumbnailData_ThumbnailBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_BndEvt__UMG_PhotoMode_ThumbnailData_ThumbnailBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.BndEvt__UMG_PhotoMode_ThumbnailData_SelectFrameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_BndEvt__UMG_PhotoMode_ThumbnailData_SelectFrameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.ExecuteUbergraph_UMG_PhotoMode_ThumbnailData
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_ExecuteUbergraph_UMG_PhotoMode_ThumbnailData_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.OnClickedFrameButton__DelegateSignature
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_OnClickedFrameButton__DelegateSignature_Params
	{
	public:
		int32_t                                                    outThumbnailNo;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.OnClickedViewerButton__DelegateSignature
	 */
	struct UUMG_PhotoMode_ThumbnailData_C_OnClickedViewerButton__DelegateSignature_Params
	{
	public:
		int32_t                                                    outThumbnailNo;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
