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
	 * 		Name   -> Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsSelected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_CostumeCategoryIconBtn_C::SetSelected(bool InIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.SetSelected");
		
		UMyCharaMenu_CostumeCategoryIconBtn_C_SetSelected_Params params {};
		params.InIsSelected = InIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.GetCostumeCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MyCharaMenu_CostumeCategory                      OutCostumeCategory                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeCategoryIconBtn_C::GetCostumeCategory(E_MyCharaMenu_CostumeCategory* OutCostumeCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.GetCostumeCategory");
		
		UMyCharaMenu_CostumeCategoryIconBtn_C_GetCostumeCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCostumeCategory != nullptr)
			*OutCostumeCategory = params.OutCostumeCategory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.SetCostumeCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MyCharaMenu_CostumeCategory                      InCostumeCategory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeCategoryIconBtn_C::SetCostumeCategory(E_MyCharaMenu_CostumeCategory InCostumeCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.SetCostumeCategory");
		
		UMyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory_Params params {};
		params.InCostumeCategory = InCostumeCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_CostumeCategoryIconBtn_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.PreConstruct");
		
		UMyCharaMenu_CostumeCategoryIconBtn_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_CostumeCategoryIconBtn_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMyCharaMenu_CostumeCategoryIconBtn_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeCategoryIconBtn_C::ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn");
		
		UMyCharaMenu_CostumeCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MyCharaMenu_CostumeCategory                      InCostumeCategory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeCategoryIconBtn_C::OnButtonClicked__DelegateSignature(E_MyCharaMenu_CostumeCategory InCostumeCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.OnButtonClicked__DelegateSignature");
		
		UMyCharaMenu_CostumeCategoryIconBtn_C_OnButtonClicked__DelegateSignature_Params params {};
		params.InCostumeCategory = InCostumeCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_CostumeCategoryIconBtn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_CostumeCategoryIconBtn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C");
		return ptr;
	}

}


