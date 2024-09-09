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
	 * Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.SetMasterDataById
	 */
	struct UCommonBattleImagineUniqueStatusSets_C_SetMasterDataById_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.SetMasterData
	 */
	struct UCommonBattleImagineUniqueStatusSets_C_SetMasterData_Params
	{
	public:
		struct FSBMasterImagine                                    SBMasterImagine;                                         // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              UniqueId;                                                // 0x00B8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.SetPossessionInfoVisibility
	 */
	struct UCommonBattleImagineUniqueStatusSets_C_SetPossessionInfoVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.SetPermanentInfoVisibility
	 */
	struct UCommonBattleImagineUniqueStatusSets_C_SetPermanentInfoVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.ExecuteUbergraph_CommonBattleImagineUniqueStatusSets
	 */
	struct UCommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
