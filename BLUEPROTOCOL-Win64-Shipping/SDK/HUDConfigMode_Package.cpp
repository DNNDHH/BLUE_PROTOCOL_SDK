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
	 * 		Name   -> Function HUDConfigMode.HUDConfigMode_C.On_Cmb_HelpDisplay_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UHUDConfigMode_C::On_Cmb_HelpDisplay_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDConfigMode.HUDConfigMode_C.On_Cmb_HelpDisplay_GenerateWidget_1");
		
		UHUDConfigMode_C_On_Cmb_HelpDisplay_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDConfigMode.HUDConfigMode_C.On_Cmb_BasePlate_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UHUDConfigMode_C::On_Cmb_BasePlate_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDConfigMode.HUDConfigMode_C.On_Cmb_BasePlate_GenerateWidget_1");
		
		UHUDConfigMode_C_On_Cmb_BasePlate_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDConfigMode.HUDConfigMode_C.GenerateCmbBox
	 * 		Flags  -> ()
	 */
	void UHUDConfigMode_C::GenerateCmbBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDConfigMode.HUDConfigMode_C.GenerateCmbBox");
		
		UHUDConfigMode_C_GenerateCmbBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDConfigMode.HUDConfigMode_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUDConfigMode_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDConfigMode.HUDConfigMode_C.Construct");
		
		UHUDConfigMode_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDConfigMode.HUDConfigMode_C.EndEdit
	 * 		Flags  -> ()
	 */
	void UHUDConfigMode_C::EndEdit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDConfigMode.HUDConfigMode_C.EndEdit");
		
		UHUDConfigMode_C_EndEdit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDConfigMode.HUDConfigMode_C.bEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEditMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDConfigMode_C::bEditMode(bool bIsEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDConfigMode.HUDConfigMode_C.bEditMode");
		
		UHUDConfigMode_C_bEditMode_Params params {};
		params.bIsEditMode = bIsEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDConfigMode.HUDConfigMode_C.BndEvt__StartEdit_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUDConfigMode_C::BndEvt__StartEdit_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDConfigMode.HUDConfigMode_C.BndEvt__StartEdit_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UHUDConfigMode_C_BndEvt__StartEdit_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDConfigMode.HUDConfigMode_C.BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDConfigMode_C::BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDConfigMode.HUDConfigMode_C.BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
		
		UHUDConfigMode_C_BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDConfigMode.HUDConfigMode_C.BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDConfigMode_C::BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDConfigMode.HUDConfigMode_C.BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
		
		UHUDConfigMode_C_BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDConfigMode.HUDConfigMode_C.SyncKeyGuide
	 * 		Flags  -> ()
	 */
	void UHUDConfigMode_C::SyncKeyGuide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDConfigMode.HUDConfigMode_C.SyncKeyGuide");
		
		UHUDConfigMode_C_SyncKeyGuide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDConfigMode.HUDConfigMode_C.ExecuteUbergraph_HUDConfigMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDConfigMode_C::ExecuteUbergraph_HUDConfigMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDConfigMode.HUDConfigMode_C.ExecuteUbergraph_HUDConfigMode");
		
		UHUDConfigMode_C_ExecuteUbergraph_HUDConfigMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUDConfigMode.HUDConfigMode_C.StartEditMode__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUDConfigMode_C::StartEditMode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDConfigMode.HUDConfigMode_C.StartEditMode__DelegateSignature");
		
		UHUDConfigMode_C_StartEditMode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDConfigMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDConfigMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDConfigMode.HUDConfigMode_C");
		return ptr;
	}

}


