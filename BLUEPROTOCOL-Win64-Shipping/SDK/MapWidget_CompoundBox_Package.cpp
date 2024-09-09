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
	 * 		Name   -> Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.ClearComboBox
	 * 		Flags  -> ()
	 */
	void UMapWidget_CompoundBox_C::ClearComboBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.ClearComboBox");
		
		UMapWidget_CompoundBox_C_ClearComboBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.On_CBox_1_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UMapWidget_CompoundBox_C::On_CBox_1_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.On_CBox_1_GenerateWidget_1");
		
		UMapWidget_CompoundBox_C_On_CBox_1_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetComboBoxEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_CompoundBox_C::SetComboBoxEnable(bool IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetComboBoxEnable");
		
		UMapWidget_CompoundBox_C_SetComboBoxEnable_Params params {};
		params.IsEnable = IsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetTitleTextId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTextId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_CompoundBox_C::SetTitleTextId(int32_t InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetTitleTextId");
		
		UMapWidget_CompoundBox_C_SetTitleTextId_Params params {};
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetTitleText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMapWidget_CompoundBox_C::SetTitleText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetTitleText");
		
		UMapWidget_CompoundBox_C_SetTitleText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetOptionWidgetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_CompoundBox_C::SetOptionWidgetVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetOptionWidgetVisibility");
		
		UMapWidget_CompoundBox_C_SetOptionWidgetVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetWidgetToOptionCanvas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InUserWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_CompoundBox_C::SetWidgetToOptionCanvas(class UUserWidget* InUserWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetWidgetToOptionCanvas");
		
		UMapWidget_CompoundBox_C_SetWidgetToOptionCanvas_Params params {};
		params.InUserWidget = InUserWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetComboBoxItemSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InItemName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_CompoundBox_C::SetComboBoxItemSelected(const class FString& InItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetComboBoxItemSelected");
		
		UMapWidget_CompoundBox_C_SetComboBoxItemSelected_Params params {};
		params.InItemName = InItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.AddItemToComboBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InItemName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_CompoundBox_C::AddItemToComboBox(const class FString& InItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.AddItemToComboBox");
		
		UMapWidget_CompoundBox_C_AddItemToComboBox_Params params {};
		params.InItemName = InItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMapWidget_CompoundBox_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.Destruct");
		
		UMapWidget_CompoundBox_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_CompoundBox_C::BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
		
		UMapWidget_CompoundBox_C_BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.BndEvt__SBComboBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_CompoundBox_C::BndEvt__SBComboBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.BndEvt__SBComboBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature");
		
		UMapWidget_CompoundBox_C_BndEvt__SBComboBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.BndEvt__SBComboBox_K2Node_ComponentBoundEvent_3_OnClosingEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_CompoundBox_C::BndEvt__SBComboBox_K2Node_ComponentBoundEvent_3_OnClosingEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.BndEvt__SBComboBox_K2Node_ComponentBoundEvent_3_OnClosingEvent__DelegateSignature");
		
		UMapWidget_CompoundBox_C_BndEvt__SBComboBox_K2Node_ComponentBoundEvent_3_OnClosingEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.ExecuteUbergraph_MapWidget_CompoundBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_CompoundBox_C::ExecuteUbergraph_MapWidget_CompoundBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.ExecuteUbergraph_MapWidget_CompoundBox");
		
		UMapWidget_CompoundBox_C_ExecuteUbergraph_MapWidget_CompoundBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.OnListBoxClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_CompoundBox_C::OnListBoxClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.OnListBoxClosed__DelegateSignature");
		
		UMapWidget_CompoundBox_C_OnListBoxClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.OnListBoxOpened__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_CompoundBox_C::OnListBoxOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.OnListBoxOpened__DelegateSignature");
		
		UMapWidget_CompoundBox_C_OnListBoxOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.OnItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InSelectedItemName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSelectedItemId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_CompoundBox_C::OnItemSelected__DelegateSignature(const class FString& InSelectedItemName, int32_t InSelectedItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.OnItemSelected__DelegateSignature");
		
		UMapWidget_CompoundBox_C_OnItemSelected__DelegateSignature_Params params {};
		params.InSelectedItemName = InSelectedItemName;
		params.InSelectedItemId = InSelectedItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_CompoundBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_CompoundBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_CompoundBox.MapWidget_CompoundBox_C");
		return ptr;
	}

}


