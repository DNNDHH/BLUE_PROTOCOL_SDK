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
	 * Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.GetFreeBuffText
	 */
	struct UMyCharaMenu_ActiveEffects_C_GetFreeBuffText_Params
	{
	public:
		ESBFreeBuffPointType                                       Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZCVU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Text;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.AddListsByDateTime
	 */
	struct UMyCharaMenu_ActiveEffects_C_AddListsByDateTime_Params
	{
	public:
		class UVerticalBox*                                        Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FDateTime                                           Value;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHideYear;                                               // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ValueVisible;                                            // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B9CS[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.AddListsByFloatValue
	 */
	struct UMyCharaMenu_ActiveEffects_C_AddListsByFloatValue_Params
	{
	public:
		class UVerticalBox*                                        Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ValueVisible;                                            // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BAZH[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Add Lists
	 */
	struct UMyCharaMenu_ActiveEffects_C_AddLists_Params
	{
	public:
		class UVerticalBox*                                        Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsShowTooltip;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B1CA[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Value;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FHDD[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ToolTipText;                                             // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ValueVisible;                                            // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YS3D[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Unique Ids
	 */
	struct UMyCharaMenu_ActiveEffects_C_CollectUniqueIds_Params
	{	};

	/**
	 * Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Passive Effects
	 */
	struct UMyCharaMenu_ActiveEffects_C_CollectPassiveEffects_Params
	{	};

	/**
	 * Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Weapon Effects
	 */
	struct UMyCharaMenu_ActiveEffects_C_CollectWeaponEffects_Params
	{	};

	/**
	 * Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Imagine Perks
	 */
	struct UMyCharaMenu_ActiveEffects_C_CollectImaginePerks_Params
	{	};

	/**
	 * Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Ability
	 */
	struct UMyCharaMenu_ActiveEffects_C_CollectAbility_Params
	{	};

	/**
	 * Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Base Effects
	 */
	struct UMyCharaMenu_ActiveEffects_C_CollectBaseEffects_Params
	{	};

	/**
	 * Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Construct
	 */
	struct UMyCharaMenu_ActiveEffects_C_Construct_Params
	{	};

	/**
	 * Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Init Head
	 */
	struct UMyCharaMenu_ActiveEffects_C_InitHead_Params
	{	};

	/**
	 * Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Generate Lists
	 */
	struct UMyCharaMenu_ActiveEffects_C_GenerateLists_Params
	{	};

	/**
	 * Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Liquid Memory
	 */
	struct UMyCharaMenu_ActiveEffects_C_CollectLiquidMemory_Params
	{	};

	/**
	 * Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Other
	 */
	struct UMyCharaMenu_ActiveEffects_C_CollectOther_Params
	{	};

	/**
	 * Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect PioneerAbility
	 */
	struct UMyCharaMenu_ActiveEffects_C_CollectPioneerAbility_Params
	{	};

	/**
	 * Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.ExecuteUbergraph_MyCharaMenu_ActiveEffects
	 */
	struct UMyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
