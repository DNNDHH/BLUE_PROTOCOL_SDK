/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryLimitGrp.InventoryLimitGrp_C.Set Item Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemType                                          ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryLimitGrp_C::SetItemType(EItemType ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryLimitGrp.InventoryLimitGrp_C.Set Item Type");
		
		UInventoryLimitGrp_C_SetItemType_Params params {};
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryLimitGrp.InventoryLimitGrp_C.SetHeadingMessage
	 * 		Flags  -> ()
	 */
	void UInventoryLimitGrp_C::SetHeadingMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryLimitGrp.InventoryLimitGrp_C.SetHeadingMessage");
		
		UInventoryLimitGrp_C_SetHeadingMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryLimitGrp.InventoryLimitGrp_C.SetDateTimeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   InDateTime                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	ESBDateTimeTextRemainTimeFlag UInventoryLimitGrp_C::SetDateTimeText(const struct FDateTime& InDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryLimitGrp.InventoryLimitGrp_C.SetDateTimeText");
		
		UInventoryLimitGrp_C_SetDateTimeText_Params params {};
		params.InDateTime = InDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryLimitGrp.InventoryLimitGrp_C.SetIsForShopProduct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsForShopProduct                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryLimitGrp_C::SetIsForShopProduct(bool InIsForShopProduct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryLimitGrp.InventoryLimitGrp_C.SetIsForShopProduct");
		
		UInventoryLimitGrp_C_SetIsForShopProduct_Params params {};
		params.InIsForShopProduct = InIsForShopProduct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryLimitGrp.InventoryLimitGrp_C.SetDurationTimeFromMinutes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InDurationMinutes                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryLimitGrp_C::SetDurationTimeFromMinutes(int32_t InDurationMinutes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryLimitGrp.InventoryLimitGrp_C.SetDurationTimeFromMinutes");
		
		UInventoryLimitGrp_C_SetDurationTimeFromMinutes_Params params {};
		params.InDurationMinutes = InDurationMinutes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryLimitGrp.InventoryLimitGrp_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryLimitGrp_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryLimitGrp.InventoryLimitGrp_C.PreConstruct");
		
		UInventoryLimitGrp_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryLimitGrp.InventoryLimitGrp_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemMasterData                             ItemMasterData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UInventoryLimitGrp_C::SetData(const struct FItemMasterData& ItemMasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryLimitGrp.InventoryLimitGrp_C.SetData");
		
		UInventoryLimitGrp_C_SetData_Params params {};
		params.ItemMasterData = ItemMasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForCostume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   InExpiryDateTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryLimitGrp_C::SetDataForCostume(const struct FDateTime& InExpiryDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForCostume");
		
		UInventoryLimitGrp_C_SetDataForCostume_Params params {};
		params.InExpiryDateTime = InExpiryDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   InExpiryDateTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryLimitGrp_C::SetDataForWeapon(const struct FDateTime& InExpiryDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForWeapon");
		
		UInventoryLimitGrp_C_SetDataForWeapon_Params params {};
		params.InExpiryDateTime = InExpiryDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForCostumeByDurationMinutes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InDurationMinutes                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryLimitGrp_C::SetDataForCostumeByDurationMinutes(int32_t InDurationMinutes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForCostumeByDurationMinutes");
		
		UInventoryLimitGrp_C_SetDataForCostumeByDurationMinutes_Params params {};
		params.InDurationMinutes = InDurationMinutes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForWeaponByDurationMinutes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InDurationMinutes                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryLimitGrp_C::SetDataForWeaponByDurationMinutes(int32_t InDurationMinutes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForWeaponByDurationMinutes");
		
		UInventoryLimitGrp_C_SetDataForWeaponByDurationMinutes_Params params {};
		params.InDurationMinutes = InDurationMinutes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   InExpiryDateTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryLimitGrp_C::SetDataForImagine(const struct FDateTime& InExpiryDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForImagine");
		
		UInventoryLimitGrp_C_SetDataForImagine_Params params {};
		params.InExpiryDateTime = InExpiryDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForMountImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   InExpiryDateTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryLimitGrp_C::SetDataForMountImagine(const struct FDateTime& InExpiryDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForMountImagine");
		
		UInventoryLimitGrp_C_SetDataForMountImagine_Params params {};
		params.InExpiryDateTime = InExpiryDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryLimitGrp.InventoryLimitGrp_C.ExecuteUbergraph_InventoryLimitGrp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryLimitGrp_C::ExecuteUbergraph_InventoryLimitGrp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryLimitGrp.InventoryLimitGrp_C.ExecuteUbergraph_InventoryLimitGrp");
		
		UInventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryLimitGrp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryLimitGrp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryLimitGrp.InventoryLimitGrp_C");
		return ptr;
	}

}


