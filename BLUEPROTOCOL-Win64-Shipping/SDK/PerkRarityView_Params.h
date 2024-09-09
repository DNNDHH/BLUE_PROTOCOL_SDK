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
	 * Function PerkRarityView.PerkRarityView_C.IsMax
	 */
	struct UPerkRarityView_C_IsMax_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ULX3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PerkRarityView.PerkRarityView_C.GetCount
	 */
	struct UPerkRarityView_C_GetCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PerkRarityView.PerkRarityView_C.Set AllQuestion
	 */
	struct UPerkRarityView_C_SetAllQuestion_Params
	{	};

	/**
	 * Function PerkRarityView.PerkRarityView_C.SetRarity
	 */
	struct UPerkRarityView_C_SetRarity_Params
	{
	public:
		int32_t                                                    InRarity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PerkRarityView.PerkRarityView_C.ExecuteUbergraph_PerkRarityView
	 */
	struct UPerkRarityView_C_ExecuteUbergraph_PerkRarityView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
