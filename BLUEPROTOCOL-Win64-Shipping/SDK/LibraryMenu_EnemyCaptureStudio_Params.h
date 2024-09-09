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
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetEnemyModelCameraState
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_SetEnemyModelCameraState_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rotate;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CameraHeight;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SideOffset;                                              // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.ModelDelete
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_ModelDelete_Params
	{	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.GetCaptureModel
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_GetCaptureModel_Params
	{
	public:
		class ASBEnemyCharacter*                                   EnemyCharacter;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetStudioHidden
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_SetStudioHidden_Params
	{
	public:
		bool                                                       InIsHidden;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.Setup and Load Asset
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_SetupandLoadAsset_Params
	{
	public:
		class FScriptDelegate                                      LoadCompleteEvent;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		struct FSBLibraryEnemyAppearanceData                       EnemyData;                                               // 0x0010(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetStudioVisibility
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_SetStudioVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetCaptureZoomActive
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_SetCaptureZoomActive_Params
	{
	public:
		bool                                                       ActiveZoom;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetCaptureRotateActive
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_SetCaptureRotateActive_Params
	{
	public:
		bool                                                       ActiveRotate;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetCaptureMoveActive
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_SetCaptureMoveActive_Params
	{
	public:
		bool                                                       ActiveMove;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.Construct
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.Construct_Studio
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_Construct_Studio_Params
	{	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.ApplyExternalDirectionalLightRotation
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_ApplyExternalDirectionalLightRotation_Params
	{	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.LoadAsset
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_LoadAsset_Params
	{
	public:
		class FString                                              EnemyCharacterId;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBLibraryEnemyViewSetting                                 ViewSetting;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBLibraryEnemyWeaponSetting                               WeaponSetting;                                           // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnModelLoaded
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_OnModelLoaded_Params
	{	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.Destruct
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_Destruct_Params
	{	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.DoDisableCaptureStudio
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_DoDisableCaptureStudio_Params
	{	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.DoEnableCaptureStudio
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_DoEnableCaptureStudio_Params
	{	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetEnableCaptureStudio
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_SetEnableCaptureStudio_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetExternalDirectionalLightRotation
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_SetExternalDirectionalLightRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.ModelStateUpdate
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_ModelStateUpdate_Params
	{	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnModelLoadedAllMipDelegate
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_OnModelLoadedAllMipDelegate_Params
	{	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9ET7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnModelLoadedAllMip__DelegateSignature
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_OnModelLoadedAllMip__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnLoadAssetComplete__DelegateSignature
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_OnLoadAssetComplete__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnCaptureStudioConstructed__DelegateSignature
	 */
	struct ULibraryMenu_EnemyCaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature_Params
	{
	public:
		class ABP_CaptureStudioBase_C*                             InConstructedCaptureStudio;                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
