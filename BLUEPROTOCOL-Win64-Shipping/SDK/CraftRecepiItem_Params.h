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
	 * Function CraftRecepiItem.CraftRecepiItem_C.Unbind Wishlist Update
	 */
	struct UCraftRecepiItem_C_UnbindWishlistUpdate_Params
	{	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.Bind Wishlist Update
	 */
	struct UCraftRecepiItem_C_BindWishlistUpdate_Params
	{	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.UpdateBoost
	 */
	struct UCraftRecepiItem_C_UpdateBoost_Params
	{	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.isItemRecepi
	 */
	struct UCraftRecepiItem_C_isItemRecepi_Params
	{
	public:
		bool                                                       IsItem;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.SetBtnSelected
	 */
	struct UCraftRecepiItem_C_SetBtnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XBIB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.Construct
	 */
	struct UCraftRecepiItem_C_Construct_Params
	{	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.BndEvt__Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCraftRecepiItem_C_BndEvt__Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.Set Recepi
	 */
	struct UCraftRecepiItem_C_SetRecepi_Params
	{
	public:
		struct FCharacterCraftRecepi                               ItemRecepi;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.OnOwnItemUpdate
	 */
	struct UCraftRecepiItem_C_OnOwnItemUpdate_Params
	{
	public:
		struct FSBChangeItemAmountParam                            InParam;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.Bind OnChangeAmount
	 */
	struct UCraftRecepiItem_C_BindOnChangeAmount_Params
	{	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.Destruct
	 */
	struct UCraftRecepiItem_C_Destruct_Params
	{	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.UnbindItemChangeAmountDelegate 
	 */
	struct UCraftRecepiItem_C_UnbindItemChangeAmountDelegate_Params
	{	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.OnChangeRecepi
	 */
	struct UCraftRecepiItem_C_OnChangeRecepi_Params
	{
	public:
		int32_t                                                    RecepiId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.Destruct_RecepiAttach
	 */
	struct UCraftRecepiItem_C_Destruct_RecepiAttach_Params
	{	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.Construct_RecepiAttach
	 */
	struct UCraftRecepiItem_C_Construct_RecepiAttach_Params
	{	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.Bind Boost
	 */
	struct UCraftRecepiItem_C_BindBoost_Params
	{	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.Unbind Boost
	 */
	struct UCraftRecepiItem_C_UnbindBoost_Params
	{	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.OnUpdate Boosst
	 */
	struct UCraftRecepiItem_C_OnUpdateBoosst_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.Update Wishlist
	 */
	struct UCraftRecepiItem_C_UpdateWishlist_Params
	{	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.ExecuteUbergraph_CraftRecepiItem
	 */
	struct UCraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FK4L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CraftRecepiItem.CraftRecepiItem_C.OnSelect__DelegateSignature
	 */
	struct UCraftRecepiItem_C_OnSelect__DelegateSignature_Params
	{
	public:
		struct FCharacterCraftRecepi                               SelectRecepi;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UCraftRecepiItem_C*                                  SelectedItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
