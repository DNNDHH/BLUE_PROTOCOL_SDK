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
	 * Function ImagineMaterialsItem.ImagineMaterialsItem_C.UpdateItemDropInfo
	 */
	struct UImagineMaterialsItem_C_UpdateItemDropInfo_Params
	{	};

	/**
	 * Function ImagineMaterialsItem.ImagineMaterialsItem_C.Set Token Term
	 */
	struct UImagineMaterialsItem_C_SetTokenTerm_Params
	{	};

	/**
	 * Function ImagineMaterialsItem.ImagineMaterialsItem_C.Set Ornament Term
	 */
	struct UImagineMaterialsItem_C_SetOrnamentTerm_Params
	{	};

	/**
	 * Function ImagineMaterialsItem.ImagineMaterialsItem_C.Set Costume Term
	 */
	struct UImagineMaterialsItem_C_SetCostumeTerm_Params
	{	};

	/**
	 * Function ImagineMaterialsItem.ImagineMaterialsItem_C.Set MountImaine Term
	 */
	struct UImagineMaterialsItem_C_SetMountImaineTerm_Params
	{	};

	/**
	 * Function ImagineMaterialsItem.ImagineMaterialsItem_C.Set Imaine Term
	 */
	struct UImagineMaterialsItem_C_SetImaineTerm_Params
	{	};

	/**
	 * Function ImagineMaterialsItem.ImagineMaterialsItem_C.Set Weapon Term
	 */
	struct UImagineMaterialsItem_C_SetWeaponTerm_Params
	{	};

	/**
	 * Function ImagineMaterialsItem.ImagineMaterialsItem_C.Set Item Term
	 */
	struct UImagineMaterialsItem_C_SetItemTerm_Params
	{	};

	/**
	 * Function ImagineMaterialsItem.ImagineMaterialsItem_C.UpdateLock
	 */
	struct UImagineMaterialsItem_C_UpdateLock_Params
	{	};

	/**
	 * Function ImagineMaterialsItem.ImagineMaterialsItem_C.UpdateAmount
	 */
	struct UImagineMaterialsItem_C_UpdateAmount_Params
	{	};

	/**
	 * Function ImagineMaterialsItem.ImagineMaterialsItem_C.SetInvalidData
	 */
	struct UImagineMaterialsItem_C_SetInvalidData_Params
	{	};

	/**
	 * Function ImagineMaterialsItem.ImagineMaterialsItem_C.SetName
	 */
	struct UImagineMaterialsItem_C_SetName_Params
	{	};

	/**
	 * Function ImagineMaterialsItem.ImagineMaterialsItem_C.SetAmountAndNeeds
	 */
	struct UImagineMaterialsItem_C_SetAmountAndNeeds_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineMaterialsItem.ImagineMaterialsItem_C.SetEventTermId
	 */
	struct UImagineMaterialsItem_C_SetEventTermId_Params
	{
	public:
		class FString                                              InEventTermId;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineMaterialsItem.ImagineMaterialsItem_C.ApplyMaterialData
	 */
	struct UImagineMaterialsItem_C_ApplyMaterialData_Params
	{	};

	/**
	 * Function ImagineMaterialsItem.ImagineMaterialsItem_C.SetMaterialData
	 */
	struct UImagineMaterialsItem_C_SetMaterialData_Params
	{
	public:
		struct FMasterImagineMaterial                              Material;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ImagineMaterialsItem.ImagineMaterialsItem_C.ExecuteUbergraph_ImagineMaterialsItem
	 */
	struct UImagineMaterialsItem_C_ExecuteUbergraph_ImagineMaterialsItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
