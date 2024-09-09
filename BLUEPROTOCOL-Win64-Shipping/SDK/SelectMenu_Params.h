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
	 * Function SelectMenu.SelectMenu_C.Construct
	 */
	struct USelectMenu_C_Construct_Params
	{	};

	/**
	 * Function SelectMenu.SelectMenu_C.AddItemFromArray
	 */
	struct USelectMenu_C_AddItemFromArray_Params
	{
	public:
		TArray<class FText>                                        ItemArray;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SelectMenu.SelectMenu_C.OnSelectMenuItem
	 */
	struct USelectMenu_C_OnSelectMenuItem_Params
	{
	public:
		class USelectMenuItem_C*                                   SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectMenu.SelectMenu_C.ChangeCurrentItem
	 */
	struct USelectMenu_C_ChangeCurrentItem_Params
	{
	public:
		int32_t                                                    CurrentItem;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectMenu.SelectMenu_C.SetCurrentItem
	 */
	struct USelectMenu_C_SetCurrentItem_Params
	{
	public:
		int32_t                                                    CurrentItem;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectMenu.SelectMenu_C.Show
	 */
	struct USelectMenu_C_Show_Params
	{	};

	/**
	 * Function SelectMenu.SelectMenu_C.ProcSelectItem
	 */
	struct USelectMenu_C_ProcSelectItem_Params
	{
	public:
		int32_t                                                    SelectItemIndex;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectMenu.SelectMenu_C.Destruct
	 */
	struct USelectMenu_C_Destruct_Params
	{	};

	/**
	 * Function SelectMenu.SelectMenu_C.Close
	 */
	struct USelectMenu_C_Close_Params
	{	};

	/**
	 * Function SelectMenu.SelectMenu_C.AddItemFromStringArray
	 */
	struct USelectMenu_C_AddItemFromStringArray_Params
	{
	public:
		TArray<class FString>                                      ItemArray;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SelectMenu.SelectMenu_C.AddItem
	 */
	struct USelectMenu_C_AddItem_Params
	{
	public:
		class FText                                                item;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SelectMenu.SelectMenu_C.ExecuteUbergraph_SelectMenu
	 */
	struct USelectMenu_C_ExecuteUbergraph_SelectMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ABT3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SelectMenu.SelectMenu_C.OnSelectItem__DelegateSignature
	 */
	struct USelectMenu_C_OnSelectItem__DelegateSignature_Params
	{
	public:
		int32_t                                                    SelectItem;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
