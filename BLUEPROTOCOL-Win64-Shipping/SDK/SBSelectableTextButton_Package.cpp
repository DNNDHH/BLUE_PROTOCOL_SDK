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
	 * 		Name   -> Function SBSelectableTextButton.SBSelectableTextButton_C.SearchChildText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPanelWidget*                                PanelWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USBSelectableTextButton_C::SearchChildText(class UPanelWidget* PanelWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBSelectableTextButton.SBSelectableTextButton_C.SearchChildText");
		
		USBSelectableTextButton_C_SearchChildText_Params params {};
		params.PanelWidget = PanelWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBSelectableTextButton.SBSelectableTextButton_C.IsSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USBSelectableTextButton_C::IsSelected(bool* bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBSelectableTextButton.SBSelectableTextButton_C.IsSelected");
		
		USBSelectableTextButton_C_IsSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsSelected != nullptr)
			*bIsSelected = params.bIsSelected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBSelectableTextButton.SBSelectableTextButton_C.InitChildText
	 * 		Flags  -> ()
	 */
	void USBSelectableTextButton_C::InitChildText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBSelectableTextButton.SBSelectableTextButton_C.InitChildText");
		
		USBSelectableTextButton_C_InitChildText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBSelectableTextButton.SBSelectableTextButton_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelect                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USBSelectableTextButton_C::SetSelected(bool bSelect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBSelectableTextButton.SBSelectableTextButton_C.SetSelected");
		
		USBSelectableTextButton_C_SetSelected_Params params {};
		params.bSelect = bSelect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBSelectableTextButton.SBSelectableTextButton_C.InitBothStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FButtonStyle                                SelectedStyle                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USBSelectableTextButton_C::InitBothStyle(const struct FButtonStyle& SelectedStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBSelectableTextButton.SBSelectableTextButton_C.InitBothStyle");
		
		USBSelectableTextButton_C_InitBothStyle_Params params {};
		params.SelectedStyle = SelectedStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBSelectableTextButton.SBSelectableTextButton_C.OnHovered_Event_1
	 * 		Flags  -> ()
	 */
	void USBSelectableTextButton_C::OnHovered_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBSelectableTextButton.SBSelectableTextButton_C.OnHovered_Event_1");
		
		USBSelectableTextButton_C_OnHovered_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBSelectableTextButton.SBSelectableTextButton_C.OnUnhovered_Event_1
	 * 		Flags  -> ()
	 */
	void USBSelectableTextButton_C::OnUnhovered_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBSelectableTextButton.SBSelectableTextButton_C.OnUnhovered_Event_1");
		
		USBSelectableTextButton_C_OnUnhovered_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBSelectableTextButton.SBSelectableTextButton_C.UpdateChildTextColor
	 * 		Flags  -> ()
	 */
	void USBSelectableTextButton_C::UpdateChildTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBSelectableTextButton.SBSelectableTextButton_C.UpdateChildTextColor");
		
		USBSelectableTextButton_C_UpdateChildTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBSelectableTextButton.SBSelectableTextButton_C.Construct
	 * 		Flags  -> ()
	 */
	void USBSelectableTextButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBSelectableTextButton.SBSelectableTextButton_C.Construct");
		
		USBSelectableTextButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBSelectableTextButton.SBSelectableTextButton_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USBSelectableTextButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBSelectableTextButton.SBSelectableTextButton_C.PreConstruct");
		
		USBSelectableTextButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBSelectableTextButton.SBSelectableTextButton_C.UpdateButtonStyle
	 * 		Flags  -> ()
	 */
	void USBSelectableTextButton_C::UpdateButtonStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBSelectableTextButton.SBSelectableTextButton_C.UpdateButtonStyle");
		
		USBSelectableTextButton_C_UpdateButtonStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBSelectableTextButton.SBSelectableTextButton_C.OnPressed_Event_1
	 * 		Flags  -> ()
	 */
	void USBSelectableTextButton_C::OnPressed_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBSelectableTextButton.SBSelectableTextButton_C.OnPressed_Event_1");
		
		USBSelectableTextButton_C_OnPressed_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBSelectableTextButton.SBSelectableTextButton_C.OnReleased_Event_1
	 * 		Flags  -> ()
	 */
	void USBSelectableTextButton_C::OnReleased_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBSelectableTextButton.SBSelectableTextButton_C.OnReleased_Event_1");
		
		USBSelectableTextButton_C_OnReleased_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBSelectableTextButton.SBSelectableTextButton_C.UpdateButtonStyleByDesignCheck
	 * 		Flags  -> ()
	 */
	void USBSelectableTextButton_C::UpdateButtonStyleByDesignCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBSelectableTextButton.SBSelectableTextButton_C.UpdateButtonStyleByDesignCheck");
		
		USBSelectableTextButton_C_UpdateButtonStyleByDesignCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBSelectableTextButton.SBSelectableTextButton_C.ExecuteUbergraph_SBSelectableTextButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USBSelectableTextButton_C::ExecuteUbergraph_SBSelectableTextButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBSelectableTextButton.SBSelectableTextButton_C.ExecuteUbergraph_SBSelectableTextButton");
		
		USBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USBSelectableTextButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USBSelectableTextButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SBSelectableTextButton.SBSelectableTextButton_C");
		return ptr;
	}

}


