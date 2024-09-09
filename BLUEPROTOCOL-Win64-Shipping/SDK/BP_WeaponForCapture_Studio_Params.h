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
	 * Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.CaptureScene
	 */
	struct ABP_WeaponForCapture_Studio_C_CaptureScene_Params
	{	};

	/**
	 * Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetSceneCaptureEveryFrameFlag
	 */
	struct ABP_WeaponForCapture_Studio_C_SetSceneCaptureEveryFrameFlag_Params
	{
	public:
		bool                                                       InIsCaptureEveryFrame;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetSubWeapon
	 */
	struct ABP_WeaponForCapture_Studio_C_SetSubWeapon_Params
	{
	public:
		int32_t                                                    InWeaponID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2P78[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ASBWeapon*>                                   InWeaponAssets;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetMainWeapon
	 */
	struct ABP_WeaponForCapture_Studio_C_SetMainWeapon_Params
	{
	public:
		int32_t                                                    InWeaponID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9CHP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ASBWeapon*>                                   InWeaponAssets;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.GetWeaponInfoFromType
	 */
	struct ABP_WeaponForCapture_Studio_C_GetWeaponInfoFromType_Params
	{
	public:
		ESBWeaponType                                              InWeaponType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZH2V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FST_WeaponForCapture_Info                           OutWeaponInfo;                                           // 0x0008(0x0058)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.ResetWeapon
	 */
	struct ABP_WeaponForCapture_Studio_C_ResetWeapon_Params
	{	};

	/**
	 * Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetMainWeaponNum
	 */
	struct ABP_WeaponForCapture_Studio_C_SetMainWeaponNum_Params
	{
	public:
		int32_t                                                    InWeaponNum;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.DestroyAllChildComponents
	 */
	struct ABP_WeaponForCapture_Studio_C_DestroyAllChildComponents_Params
	{	};

	/**
	 * Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.UserConstructionScript
	 */
	struct ABP_WeaponForCapture_Studio_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.ReceiveBeginPlay
	 */
	struct ABP_WeaponForCapture_Studio_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetWeaponVisibility
	 */
	struct ABP_WeaponForCapture_Studio_C_SetWeaponVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.ReceiveEndPlay
	 */
	struct ABP_WeaponForCapture_Studio_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetSubWeaponVisibility
	 */
	struct ABP_WeaponForCapture_Studio_C_SetSubWeaponVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.LoadWeaponAsset
	 */
	struct ABP_WeaponForCapture_Studio_C_LoadWeaponAsset_Params
	{
	public:
		int32_t                                                    InWeaponItemId;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.OnLoadWeaponAssetDelegate_イベント
	 */
	struct ABP_WeaponForCapture_Studio_C_OnLoadWeaponAssetDelegate__Params
	{
	public:
		int32_t                                                    WeaponID;                                                // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsMain;                                                  // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AV6K[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ASBWeapon*>                                   Weapons;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetAllWeaponVisibility
	 */
	struct ABP_WeaponForCapture_Studio_C_SetAllWeaponVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.ExecuteUbergraph_BP_WeaponForCapture_Studio
	 */
	struct ABP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.OnWeaponLoadedDelegete__DelegateSignature
	 */
	struct ABP_WeaponForCapture_Studio_C_OnWeaponLoadedDelegete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
