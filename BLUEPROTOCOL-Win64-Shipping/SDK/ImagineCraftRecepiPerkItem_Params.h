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
	 * Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.SetPerkValue
	 */
	struct UImagineCraftRecepiPerkItem_C_SetPerkValue_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZFAU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.GetAbilityDescToolTipWidget
	 */
	struct UImagineCraftRecepiPerkItem_C_GetAbilityDescToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.SetPerkID
	 */
	struct UImagineCraftRecepiPerkItem_C_SetPerkID_Params
	{
	public:
		int32_t                                                    PerkId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.Construct
	 */
	struct UImagineCraftRecepiPerkItem_C_Construct_Params
	{	};

	/**
	 * Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.Set Text
	 */
	struct UImagineCraftRecepiPerkItem_C_SetText_Params
	{
	public:
		class FString                                              InText;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.Set Rare
	 */
	struct UImagineCraftRecepiPerkItem_C_SetRare_Params
	{
	public:
		bool                                                       isRare;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.ExecuteUbergraph_ImagineCraftRecepiPerkItem
	 */
	struct UImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
