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
	 * Function SlotPartAbilityChange.SlotPartAbilityChange_C.ConvertValueToString
	 */
	struct USlotPartAbilityChange_C_ConvertValueToString_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UIAttribute;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              OutStr;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SlotPartAbilityChange.SlotPartAbilityChange_C.StopAnimArrow
	 */
	struct USlotPartAbilityChange_C_StopAnimArrow_Params
	{	};

	/**
	 * Function SlotPartAbilityChange.SlotPartAbilityChange_C.PlayAnimArrow
	 */
	struct USlotPartAbilityChange_C_PlayAnimArrow_Params
	{	};

	/**
	 * Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetValue2
	 */
	struct USlotPartAbilityChange_C_SetValue2_Params
	{
	public:
		int32_t                                                    ValueMin;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ValueMax;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetValue1
	 */
	struct USlotPartAbilityChange_C_SetValue1_Params
	{
	public:
		int32_t                                                    ValueMin;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ValueMax;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetTitleRarity
	 */
	struct USlotPartAbilityChange_C_SetTitleRarity_Params
	{
	public:
		int32_t                                                    RarityMin;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RarityMax;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetTitleText
	 */
	struct USlotPartAbilityChange_C_SetTitleText_Params
	{
	public:
		bool                                                       IsProtect;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetVisibleValue2
	 */
	struct USlotPartAbilityChange_C_SetVisibleValue2_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetVisibleValue1
	 */
	struct USlotPartAbilityChange_C_SetVisibleValue1_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetVisibleValue
	 */
	struct USlotPartAbilityChange_C_SetVisibleValue_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetVisibleTitle
	 */
	struct USlotPartAbilityChange_C_SetVisibleTitle_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetupValue
	 */
	struct USlotPartAbilityChange_C_SetupValue_Params
	{	};

	/**
	 * Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetupLock
	 */
	struct USlotPartAbilityChange_C_SetupLock_Params
	{	};

	/**
	 * Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetupNone
	 */
	struct USlotPartAbilityChange_C_SetupNone_Params
	{	};

	/**
	 * Function SlotPartAbilityChange.SlotPartAbilityChange_C.Setup
	 */
	struct USlotPartAbilityChange_C_Setup_Params
	{
	public:
		int32_t                                                    InAbilityEffectId;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AbilityDBRowName1;                                       // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AbilityDBRowName2;                                       // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SlotPartAbilityChange.SlotPartAbilityChange_C.Initialize
	 */
	struct USlotPartAbilityChange_C_Initialize_Params
	{	};

	/**
	 * Function SlotPartAbilityChange.SlotPartAbilityChange_C.Construct
	 */
	struct USlotPartAbilityChange_C_Construct_Params
	{	};

	/**
	 * Function SlotPartAbilityChange.SlotPartAbilityChange_C.ExecuteUbergraph_SlotPartAbilityChange
	 */
	struct USlotPartAbilityChange_C_ExecuteUbergraph_SlotPartAbilityChange_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
