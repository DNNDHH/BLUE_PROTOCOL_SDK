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
	 * 		Name   -> Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsSelected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C::SetSelected(bool InIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.SetSelected");
		
		UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected_Params params {};
		params.InIsSelected = InIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.GetAccessoryCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MyCharaMenu_AccessoryCategory                    OutAccessoryCategory                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C::GetAccessoryCategory(E_MyCharaMenu_AccessoryCategory* OutAccessoryCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.GetAccessoryCategory");
		
		UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C_GetAccessoryCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAccessoryCategory != nullptr)
			*OutAccessoryCategory = params.OutAccessoryCategory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.SetAccessoryCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MyCharaMenu_AccessoryCategory                    InAccessoryCategory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C::SetAccessoryCategory(E_MyCharaMenu_AccessoryCategory InAccessoryCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.SetAccessoryCategory");
		
		UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory_Params params {};
		params.InAccessoryCategory = InAccessoryCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.PreConstruct");
		
		UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C::ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn");
		
		UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MyCharaMenu_AccessoryCategory                    InAccessoryCategory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C::OnButtonClicked__DelegateSignature(E_MyCharaMenu_AccessoryCategory InAccessoryCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.OnButtonClicked__DelegateSignature");
		
		UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C_OnButtonClicked__DelegateSignature_Params params {};
		params.InAccessoryCategory = InAccessoryCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C");
		return ptr;
	}

}


