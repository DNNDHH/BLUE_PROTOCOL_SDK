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
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.Unbind Wishlist Update
	 * 		Flags  -> ()
	 */
	void UCraftRecepiItem_C::UnbindWishlistUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.Unbind Wishlist Update");
		
		UCraftRecepiItem_C_UnbindWishlistUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.Bind Wishlist Update
	 * 		Flags  -> ()
	 */
	void UCraftRecepiItem_C::BindWishlistUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.Bind Wishlist Update");
		
		UCraftRecepiItem_C_BindWishlistUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.UpdateBoost
	 * 		Flags  -> ()
	 */
	void UCraftRecepiItem_C::UpdateBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.UpdateBoost");
		
		UCraftRecepiItem_C_UpdateBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.isItemRecepi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsItem                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCraftRecepiItem_C::isItemRecepi(bool* IsItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.isItemRecepi");
		
		UCraftRecepiItem_C_isItemRecepi_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsItem != nullptr)
			*IsItem = params.IsItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.SetBtnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCraftRecepiItem_C::SetBtnSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.SetBtnSelected");
		
		UCraftRecepiItem_C_SetBtnSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UCraftRecepiItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.Construct");
		
		UCraftRecepiItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.BndEvt__Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCraftRecepiItem_C::BndEvt__Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.BndEvt__Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCraftRecepiItem_C_BndEvt__Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.Set Recepi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterCraftRecepi                       ItemRecepi                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCraftRecepiItem_C::SetRecepi(const struct FCharacterCraftRecepi& ItemRecepi)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.Set Recepi");
		
		UCraftRecepiItem_C_SetRecepi_Params params {};
		params.ItemRecepi = ItemRecepi;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.OnOwnItemUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChangeItemAmountParam                    InParam                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCraftRecepiItem_C::OnOwnItemUpdate(const struct FSBChangeItemAmountParam& InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.OnOwnItemUpdate");
		
		UCraftRecepiItem_C_OnOwnItemUpdate_Params params {};
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.Bind OnChangeAmount
	 * 		Flags  -> ()
	 */
	void UCraftRecepiItem_C::BindOnChangeAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.Bind OnChangeAmount");
		
		UCraftRecepiItem_C_BindOnChangeAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCraftRecepiItem_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.Destruct");
		
		UCraftRecepiItem_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.UnbindItemChangeAmountDelegate 
	 * 		Flags  -> ()
	 */
	void UCraftRecepiItem_C::UnbindItemChangeAmountDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.UnbindItemChangeAmountDelegate ");
		
		UCraftRecepiItem_C_UnbindItemChangeAmountDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.OnChangeRecepi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RecepiId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftRecepiItem_C::OnChangeRecepi(int32_t RecepiId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.OnChangeRecepi");
		
		UCraftRecepiItem_C_OnChangeRecepi_Params params {};
		params.RecepiId = RecepiId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.Destruct_RecepiAttach
	 * 		Flags  -> ()
	 */
	void UCraftRecepiItem_C::Destruct_RecepiAttach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.Destruct_RecepiAttach");
		
		UCraftRecepiItem_C_Destruct_RecepiAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.Construct_RecepiAttach
	 * 		Flags  -> ()
	 */
	void UCraftRecepiItem_C::Construct_RecepiAttach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.Construct_RecepiAttach");
		
		UCraftRecepiItem_C_Construct_RecepiAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.Bind Boost
	 * 		Flags  -> ()
	 */
	void UCraftRecepiItem_C::BindBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.Bind Boost");
		
		UCraftRecepiItem_C_BindBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.Unbind Boost
	 * 		Flags  -> ()
	 */
	void UCraftRecepiItem_C::UnbindBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.Unbind Boost");
		
		UCraftRecepiItem_C_UnbindBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.OnUpdate Boosst
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftRecepiItem_C::OnUpdateBoosst(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.OnUpdate Boosst");
		
		UCraftRecepiItem_C_OnUpdateBoosst_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.Update Wishlist
	 * 		Flags  -> ()
	 */
	void UCraftRecepiItem_C::UpdateWishlist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.Update Wishlist");
		
		UCraftRecepiItem_C_UpdateWishlist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.ExecuteUbergraph_CraftRecepiItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftRecepiItem_C::ExecuteUbergraph_CraftRecepiItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.ExecuteUbergraph_CraftRecepiItem");
		
		UCraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiItem.CraftRecepiItem_C.OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterCraftRecepi                       SelectRecepi                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UCraftRecepiItem_C*                          SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftRecepiItem_C::OnSelect__DelegateSignature(const struct FCharacterCraftRecepi& SelectRecepi, class UCraftRecepiItem_C* SelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiItem.CraftRecepiItem_C.OnSelect__DelegateSignature");
		
		UCraftRecepiItem_C_OnSelect__DelegateSignature_Params params {};
		params.SelectRecepi = SelectRecepi;
		params.SelectedItem = SelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCraftRecepiItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCraftRecepiItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftRecepiItem.CraftRecepiItem_C");
		return ptr;
	}

}


