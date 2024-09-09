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
	 * Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.NormalEffectCheck
	 */
	struct ALibraryMenu_CaptureStudio_C_NormalEffectCheck_Params
	{	};

	/**
	 * Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.AvariteliaEffectCheck
	 */
	struct ALibraryMenu_CaptureStudio_C_AvariteliaEffectCheck_Params
	{	};

	/**
	 * Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.SetCameraPosition
	 */
	struct ALibraryMenu_CaptureStudio_C_SetCameraPosition_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rotate;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CameraHeight;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SideOffset;                                              // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ModelDelete
	 */
	struct ALibraryMenu_CaptureStudio_C_ModelDelete_Params
	{	};

	/**
	 * Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.SetupCameraPosition
	 */
	struct ALibraryMenu_CaptureStudio_C_SetupCameraPosition_Params
	{	};

	/**
	 * Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.GetCaptureModel
	 */
	struct ALibraryMenu_CaptureStudio_C_GetCaptureModel_Params
	{
	public:
		class ASBEnemyCharacter*                                   EnemyCharacter;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.WeaponSetup
	 */
	struct ALibraryMenu_CaptureStudio_C_WeaponSetup_Params
	{
	public:
		class ASBEnemyCharacter*                                   EnemyCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.RegistShowActorModel
	 */
	struct ALibraryMenu_CaptureStudio_C_RegistShowActorModel_Params
	{	};

	/**
	 * Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ResetModel
	 */
	struct ALibraryMenu_CaptureStudio_C_ResetModel_Params
	{	};

	/**
	 * Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ReceiveBeginPlay
	 */
	struct ALibraryMenu_CaptureStudio_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnSetModelDataEvent
	 */
	struct ALibraryMenu_CaptureStudio_C_OnSetModelDataEvent_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.LoadModelAsset
	 */
	struct ALibraryMenu_CaptureStudio_C_LoadModelAsset_Params
	{
	public:
		class FString                                              EnemyCharacterId;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBLibraryEnemyViewSetting                                 ViewSetting;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBLibraryEnemyWeaponSetting                               WeaponSetting;                                           // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ModelStateUpdate
	 */
	struct ALibraryMenu_CaptureStudio_C_ModelStateUpdate_Params
	{	};

	/**
	 * Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnSetWeaponEvent
	 */
	struct ALibraryMenu_CaptureStudio_C_OnSetWeaponEvent_Params
	{
	public:
		class ASBEnemyCharacter*                                   EnemyActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnLoadedModelAllMipEvent
	 */
	struct ALibraryMenu_CaptureStudio_C_OnLoadedModelAllMipEvent_Params
	{	};

	/**
	 * Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ExecuteUbergraph_LibraryMenu_CaptureStudio
	 */
	struct ALibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnModelLoadedAllMipDelegate__DelegateSignature
	 */
	struct ALibraryMenu_CaptureStudio_C_OnModelLoadedAllMipDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnModelLoadedDelegate__DelegateSignature
	 */
	struct ALibraryMenu_CaptureStudio_C_OnModelLoadedDelegate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
