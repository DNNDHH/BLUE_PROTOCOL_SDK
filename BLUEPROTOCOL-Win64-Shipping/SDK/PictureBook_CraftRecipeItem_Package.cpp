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
	 * 		Name   -> Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.IsCraftable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Craftable                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPictureBook_CraftRecipeItem_C::IsCraftable(bool* Craftable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.IsCraftable");
		
		UPictureBook_CraftRecipeItem_C_IsCraftable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Craftable != nullptr)
			*Craftable = params.Craftable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.getStorageItemAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIdx                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutIsAmount                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPictureBook_CraftRecipeItem_C::getStorageItemAmount(int32_t ItemIdx, int32_t* OutIsAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.getStorageItemAmount");
		
		UPictureBook_CraftRecipeItem_C_getStorageItemAmount_Params params {};
		params.ItemIdx = ItemIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsAmount != nullptr)
			*OutIsAmount = params.OutIsAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.getInventoryItemAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIdx                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutIsAmount                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPictureBook_CraftRecipeItem_C::getInventoryItemAmount(int32_t ItemIdx, int32_t* OutIsAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.getInventoryItemAmount");
		
		UPictureBook_CraftRecipeItem_C_getInventoryItemAmount_Params params {};
		params.ItemIdx = ItemIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsAmount != nullptr)
			*OutIsAmount = params.OutIsAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.GetItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIdx                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutIsItemNameText                                          (Parm, OutParm)
	 */
	void UPictureBook_CraftRecipeItem_C::GetItemName(int32_t ItemIdx, class FText* OutIsItemNameText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.GetItemName");
		
		UPictureBook_CraftRecipeItem_C_GetItemName_Params params {};
		params.ItemIdx = ItemIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsItemNameText != nullptr)
			*OutIsItemNameText = params.OutIsItemNameText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.OnOwnItemChangeDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChangeItemAmountParam                    InParam                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPictureBook_CraftRecipeItem_C::OnOwnItemChangeDelegate(const struct FSBChangeItemAmountParam& InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.OnOwnItemChangeDelegate");
		
		UPictureBook_CraftRecipeItem_C_OnOwnItemChangeDelegate_Params params {};
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.UnbindItemChangeAmountDelegate
	 * 		Flags  -> ()
	 */
	void UPictureBook_CraftRecipeItem_C::UnbindItemChangeAmountDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.UnbindItemChangeAmountDelegate");
		
		UPictureBook_CraftRecipeItem_C_UnbindItemChangeAmountDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.Destruct
	 * 		Flags  -> ()
	 */
	void UPictureBook_CraftRecipeItem_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.Destruct");
		
		UPictureBook_CraftRecipeItem_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UPictureBook_CraftRecipeItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.Construct");
		
		UPictureBook_CraftRecipeItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.ExecuteUbergraph_PictureBook_CraftRecipeItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPictureBook_CraftRecipeItem_C::ExecuteUbergraph_PictureBook_CraftRecipeItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.ExecuteUbergraph_PictureBook_CraftRecipeItem");
		
		UPictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPictureBook_CraftRecipeItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPictureBook_CraftRecipeItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C");
		return ptr;
	}

}


