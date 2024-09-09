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
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetOrnamentUniqueId
	 */
	struct UUMG_CaptureStudio_C_SetOrnamentUniqueId_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetOrnamentId
	 */
	struct UUMG_CaptureStudio_C_SetOrnamentId_Params
	{
	public:
		int32_t                                                    InId;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsExist;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetOwnItem
	 */
	struct UUMG_CaptureStudio_C_SetOwnItem_Params
	{
	public:
		struct FOwnItemInfo                                        InOwnItem;                                               // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetLightEnable
	 */
	struct UUMG_CaptureStudio_C_SetLightEnable_Params
	{
	public:
		bool                                                       bIsEnable;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.ResetMountImagineMeshAndCameraTransform
	 */
	struct UUMG_CaptureStudio_C_ResetMountImagineMeshAndCameraTransform_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.ResetWeaponMeshAndCameraTransform
	 */
	struct UUMG_CaptureStudio_C_ResetWeaponMeshAndCameraTransform_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetMountImagineId
	 */
	struct UUMG_CaptureStudio_C_SetMountImagineId_Params
	{
	public:
		int32_t                                                    ImaginetemId;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsExist;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.DebugPrintObjectPath
	 */
	struct UUMG_CaptureStudio_C_DebugPrintObjectPath_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetStudioHidden
	 */
	struct UUMG_CaptureStudio_C_SetStudioHidden_Params
	{
	public:
		bool                                                       InIsHidden;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetupAndLoadAsset
	 */
	struct UUMG_CaptureStudio_C_SetupAndLoadAsset_Params
	{
	public:
		class FScriptDelegate                                      LoadCompleteEvent;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		struct FInventoryItemData                                  InInventoryItemData;                                     // 0x0010(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.Load Costume Asset
	 */
	struct UUMG_CaptureStudio_C_LoadCostumeAsset_Params
	{
	public:
		class ABP_MannequinForCapture_Studio_C*                    MannequiCaptionStudio;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      Event;                                                   // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		bool                                                       Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_251X[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetStudioVisibility
	 */
	struct UUMG_CaptureStudio_C_SetStudioVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetImagineId
	 */
	struct UUMG_CaptureStudio_C_SetImagineId_Params
	{
	public:
		int32_t                                                    ImaginetemId;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsExist;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.IsCostumeValid
	 */
	struct UUMG_CaptureStudio_C_IsCostumeValid_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCaptureZoomActive
	 */
	struct UUMG_CaptureStudio_C_SetCaptureZoomActive_Params
	{
	public:
		bool                                                       ActiveZoom;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCostumeItemID
	 */
	struct UUMG_CaptureStudio_C_SetCostumeItemID_Params
	{
	public:
		int32_t                                                    CostumeItemId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_645B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              CostumeUniqueID;                                         // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    CostumeStorageNumber;                                    // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetWeaponId
	 */
	struct UUMG_CaptureStudio_C_SetWeaponId_Params
	{
	public:
		int32_t                                                    WeaponItemId;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsExist;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetDrawMode
	 */
	struct UUMG_CaptureStudio_C_SetDrawMode_Params
	{
	public:
		EItemType                                                  ItemType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCaptureRotateActive
	 */
	struct UUMG_CaptureStudio_C_SetCaptureRotateActive_Params
	{
	public:
		bool                                                       ActiveRotate;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCaptureMoveActive
	 */
	struct UUMG_CaptureStudio_C_SetCaptureMoveActive_Params
	{
	public:
		bool                                                       ActiveMove;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.Construct
	 */
	struct UUMG_CaptureStudio_C_Construct_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.Construct_Capture_Studio
	 */
	struct UUMG_CaptureStudio_C_Construct_Capture_Studio_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadAsset
	 */
	struct UUMG_CaptureStudio_C_LoadAsset_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadWeaponAsset
	 */
	struct UUMG_CaptureStudio_C_LoadWeaponAsset_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadMannequinAsset
	 */
	struct UUMG_CaptureStudio_C_LoadMannequinAsset_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.Destruct Capture Studio
	 */
	struct UUMG_CaptureStudio_C_DestructCaptureStudio_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.Destruct
	 */
	struct UUMG_CaptureStudio_C_Destruct_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadImagineAsset
	 */
	struct UUMG_CaptureStudio_C_LoadImagineAsset_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnWeaponLoaded
	 */
	struct UUMG_CaptureStudio_C_OnWeaponLoaded_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.DoDisableCaptureStudio
	 */
	struct UUMG_CaptureStudio_C_DoDisableCaptureStudio_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetEnableCaptureStudio
	 */
	struct UUMG_CaptureStudio_C_SetEnableCaptureStudio_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.DoEnableCaptureStudio
	 */
	struct UUMG_CaptureStudio_C_DoEnableCaptureStudio_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnCostumeLoaded
	 */
	struct UUMG_CaptureStudio_C_OnCostumeLoaded_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnImagineLoaded
	 */
	struct UUMG_CaptureStudio_C_OnImagineLoaded_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadMountImagineAsset
	 */
	struct UUMG_CaptureStudio_C_LoadMountImagineAsset_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnMountImagineLoaded
	 */
	struct UUMG_CaptureStudio_C_OnMountImagineLoaded_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetExternalDirectionalLightRotation
	 */
	struct UUMG_CaptureStudio_C_SetExternalDirectionalLightRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.ApplyExternalDirectionalLightRotation
	 */
	struct UUMG_CaptureStudio_C_ApplyExternalDirectionalLightRotation_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnOrnamentLoaded
	 */
	struct UUMG_CaptureStudio_C_OnOrnamentLoaded_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadOrnamentAsset
	 */
	struct UUMG_CaptureStudio_C_LoadOrnamentAsset_Params
	{
	public:
		int32_t                                                    InOrnamentId;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H6ZQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InUniqueId;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.ExecuteUbergraph_UMG_CaptureStudio
	 */
	struct UUMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnLoadAssetComplete__DelegateSignature
	 */
	struct UUMG_CaptureStudio_C_OnLoadAssetComplete__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnCaptureStudioConstructed__DelegateSignature
	 */
	struct UUMG_CaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature_Params
	{
	public:
		class ABP_CaptureStudioBase_C*                             InConstructedCaptureStudio;                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
