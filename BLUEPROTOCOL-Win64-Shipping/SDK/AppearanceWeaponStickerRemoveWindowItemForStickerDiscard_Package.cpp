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
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindowItemForStickerDiscard.AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C.SetBtnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C::SetBtnSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindowItemForStickerDiscard.AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C.SetBtnSelected");
		
		UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_SetBtnSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindowItemForStickerDiscard.AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C.BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C::BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindowItemForStickerDiscard.AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C.BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindowItemForStickerDiscard.AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C.ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerDiscard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C::ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerDiscard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindowItemForStickerDiscard.AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C.ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerDiscard");
		
		UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindowItemForStickerDiscard.AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C.ItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C* InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C::ItemSelected__DelegateSignature(class UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindowItemForStickerDiscard.AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C.ItemSelected__DelegateSignature");
		
		UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_ItemSelected__DelegateSignature_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AppearanceWeaponStickerRemoveWindowItemForStickerDiscard.AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C");
		return ptr;
	}

}


