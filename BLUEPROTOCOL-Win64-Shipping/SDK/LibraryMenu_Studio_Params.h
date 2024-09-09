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
	 * Function LibraryMenu_Studio.LibraryMenu_Studio_C.ModelDelete
	 */
	struct ALibraryMenu_Studio_C_ModelDelete_Params
	{	};

	/**
	 * Function LibraryMenu_Studio.LibraryMenu_Studio_C.WeaponSetup
	 */
	struct ALibraryMenu_Studio_C_WeaponSetup_Params
	{
	public:
		bool                                                       IsComplete;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_Studio.LibraryMenu_Studio_C.GetModelActor
	 */
	struct ALibraryMenu_Studio_C_GetModelActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Studio.LibraryMenu_Studio_C.ModelSetup
	 */
	struct ALibraryMenu_Studio_C_ModelSetup_Params
	{	};

	/**
	 * Function LibraryMenu_Studio.LibraryMenu_Studio_C.LoadEnemyAsset
	 */
	struct ALibraryMenu_Studio_C_LoadEnemyAsset_Params
	{	};

	/**
	 * Function LibraryMenu_Studio.LibraryMenu_Studio_C.ReceiveTick
	 */
	struct ALibraryMenu_Studio_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnAssetLoaded
	 */
	struct ALibraryMenu_Studio_C_OnAssetLoaded_Params
	{
	public:
		bool                                                       bInResult;                                               // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_Studio.LibraryMenu_Studio_C.SetEnemyModelId
	 */
	struct ALibraryMenu_Studio_C_SetEnemyModelId_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBLibraryEnemyViewSetting                                 ViewSetting;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBLibraryEnemyWeaponSetting                               WeaponSetting;                                           // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnLoadEvent
	 */
	struct ALibraryMenu_Studio_C_OnLoadEvent_Params
	{	};

	/**
	 * Function LibraryMenu_Studio.LibraryMenu_Studio_C.ReceiveDestroyed
	 */
	struct ALibraryMenu_Studio_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnWeaponEquip
	 */
	struct ALibraryMenu_Studio_C_OnWeaponEquip_Params
	{
	public:
		class ASBEnemyCharacter*                                   EnemyCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnSpawnWeapon
	 */
	struct ALibraryMenu_Studio_C_OnSpawnWeapon_Params
	{
	public:
		class ASBEnemyCharacter*                                   EnemyCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Studio.LibraryMenu_Studio_C.ExecuteUbergraph_LibraryMenu_Studio
	 */
	struct ALibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnLoadedModelAllMip__DelegateSignature
	 */
	struct ALibraryMenu_Studio_C_OnLoadedModelAllMip__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnWeaponSetup__DelegateSignature
	 */
	struct ALibraryMenu_Studio_C_OnWeaponSetup__DelegateSignature_Params
	{
	public:
		class ASBEnemyCharacter*                                   EnemyActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnSetModelData__DelegateSignature
	 */
	struct ALibraryMenu_Studio_C_OnSetModelData__DelegateSignature_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
