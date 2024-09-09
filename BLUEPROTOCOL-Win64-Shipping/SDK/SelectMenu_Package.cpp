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
	 * 		Name   -> Function SelectMenu.SelectMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void USelectMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenu.SelectMenu_C.Construct");
		
		USelectMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMenu.SelectMenu_C.AddItemFromArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                ItemArray                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USelectMenu_C::AddItemFromArray(TArray<class FText> ItemArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenu.SelectMenu_C.AddItemFromArray");
		
		USelectMenu_C_AddItemFromArray_Params params {};
		params.ItemArray = ItemArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMenu.SelectMenu_C.OnSelectMenuItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USelectMenuItem_C*                           SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMenu_C::OnSelectMenuItem(class USelectMenuItem_C* SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenu.SelectMenu_C.OnSelectMenuItem");
		
		USelectMenu_C_OnSelectMenuItem_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMenu.SelectMenu_C.ChangeCurrentItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMenu_C::ChangeCurrentItem(int32_t CurrentItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenu.SelectMenu_C.ChangeCurrentItem");
		
		USelectMenu_C_ChangeCurrentItem_Params params {};
		params.CurrentItem = CurrentItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMenu.SelectMenu_C.SetCurrentItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMenu_C::SetCurrentItem(int32_t CurrentItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenu.SelectMenu_C.SetCurrentItem");
		
		USelectMenu_C_SetCurrentItem_Params params {};
		params.CurrentItem = CurrentItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMenu.SelectMenu_C.Show
	 * 		Flags  -> ()
	 */
	void USelectMenu_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenu.SelectMenu_C.Show");
		
		USelectMenu_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMenu.SelectMenu_C.ProcSelectItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMenu_C::ProcSelectItem(int32_t SelectItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenu.SelectMenu_C.ProcSelectItem");
		
		USelectMenu_C_ProcSelectItem_Params params {};
		params.SelectItemIndex = SelectItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMenu.SelectMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void USelectMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenu.SelectMenu_C.Destruct");
		
		USelectMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMenu.SelectMenu_C.Close
	 * 		Flags  -> ()
	 */
	void USelectMenu_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenu.SelectMenu_C.Close");
		
		USelectMenu_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMenu.SelectMenu_C.AddItemFromStringArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              ItemArray                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USelectMenu_C::AddItemFromStringArray(TArray<class FString> ItemArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenu.SelectMenu_C.AddItemFromStringArray");
		
		USelectMenu_C_AddItemFromStringArray_Params params {};
		params.ItemArray = ItemArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMenu.SelectMenu_C.AddItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        item                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USelectMenu_C::AddItem(const class FText& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenu.SelectMenu_C.AddItem");
		
		USelectMenu_C_AddItem_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMenu.SelectMenu_C.ExecuteUbergraph_SelectMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMenu_C::ExecuteUbergraph_SelectMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenu.SelectMenu_C.ExecuteUbergraph_SelectMenu");
		
		USelectMenu_C_ExecuteUbergraph_SelectMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMenu.SelectMenu_C.OnSelectItem__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMenu_C::OnSelectItem__DelegateSignature(int32_t SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenu.SelectMenu_C.OnSelectItem__DelegateSignature");
		
		USelectMenu_C_OnSelectItem__DelegateSignature_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelectMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelectMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SelectMenu.SelectMenu_C");
		return ptr;
	}

}


