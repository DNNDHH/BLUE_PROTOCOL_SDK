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
	 * 		Name   -> Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetVisibleStackB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconToolTipContent_Item_C::SetVisibleStackB(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetVisibleStackB");
		
		UCommonIconToolTipContent_Item_C_SetVisibleStackB_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetNameAndType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_Item_C::SetNameAndType(ESBRewardItemType Type, int32_t ID, int32_t Amount, int32_t AmountMin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetNameAndType");
		
		UCommonIconToolTipContent_Item_C_SetNameAndType_Params params {};
		params.Type = Type;
		params.ID = ID;
		params.Amount = Amount;
		params.AmountMin = AmountMin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetCostume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CostumeId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_Item_C::SetCostume(int32_t CostumeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetCostume");
		
		UCommonIconToolTipContent_Item_C_SetCostume_Params params {};
		params.CostumeId = CostumeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WeaponID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStorageNumber                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_Item_C::SetWeapon(int32_t WeaponID, const class FString& InUniqueId, int32_t InStorageNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetWeapon");
		
		UCommonIconToolTipContent_Item_C_SetWeapon_Params params {};
		params.WeaponID = WeaponID;
		params.InUniqueId = InUniqueId;
		params.InStorageNumber = InStorageNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetMountImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InImagineItemId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStorageNumber                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_Item_C::SetMountImagine(int32_t InImagineItemId, const class FString& InUniqueId, int32_t InStorageNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetMountImagine");
		
		UCommonIconToolTipContent_Item_C_SetMountImagine_Params params {};
		params.InImagineItemId = InImagineItemId;
		params.InUniqueId = InUniqueId;
		params.InStorageNumber = InStorageNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InImagineItemId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStorageNumber                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_Item_C::SetImagine(int32_t InImagineItemId, const class FString& InUniqueId, int32_t InStorageNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetImagine");
		
		UCommonIconToolTipContent_Item_C_SetImagine_Params params {};
		params.InImagineItemId = InImagineItemId;
		params.InUniqueId = InUniqueId;
		params.InStorageNumber = InStorageNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUnidentified                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconToolTipContent_Item_C::SetItem(int32_t InItemIndex, bool bUnidentified)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetItem");
		
		UCommonIconToolTipContent_Item_C_SetItem_Params params {};
		params.InItemIndex = InItemIndex;
		params.bUnidentified = bUnidentified;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonIconToolTipContent_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonIconToolTipContent_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C");
		return ptr;
	}

}


