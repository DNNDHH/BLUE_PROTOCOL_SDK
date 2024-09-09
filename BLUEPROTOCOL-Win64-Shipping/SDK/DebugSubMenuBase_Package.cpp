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
	 * 		Name   -> Function DebugSubMenuBase.DebugSubMenuBase_C.ClearMenuItem
	 * 		Flags  -> ()
	 */
	void UDebugSubMenuBase_C::ClearMenuItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugSubMenuBase.DebugSubMenuBase_C.ClearMenuItem");
		
		UDebugSubMenuBase_C_ClearMenuItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugSubMenuBase.DebugSubMenuBase_C.AddMenuItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InItemWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugSubMenuBase_C::AddMenuItem(class UUserWidget* InItemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugSubMenuBase.DebugSubMenuBase_C.AddMenuItem");
		
		UDebugSubMenuBase_C_AddMenuItem_Params params {};
		params.InItemWidget = InItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugSubMenuBase.DebugSubMenuBase_C.AddChildMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InChildMenu                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugSubMenuBase_C::AddChildMenu(class UUserWidget* InChildMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugSubMenuBase.DebugSubMenuBase_C.AddChildMenu");
		
		UDebugSubMenuBase_C_AddChildMenu_Params params {};
		params.InChildMenu = InChildMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugSubMenuBase.DebugSubMenuBase_C.SetFocusItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FocusItemIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugSubMenuBase_C::SetFocusItem(int32_t FocusItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugSubMenuBase.DebugSubMenuBase_C.SetFocusItem");
		
		UDebugSubMenuBase_C_SetFocusItem_Params params {};
		params.FocusItemIndex = FocusItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugSubMenuBase.DebugSubMenuBase_C.OnButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDebugButton_C*                              DebugButton                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugSubMenuBase_C::OnButtonClicked(class UDebugButton_C* DebugButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugSubMenuBase.DebugSubMenuBase_C.OnButtonClicked");
		
		UDebugSubMenuBase_C_OnButtonClicked_Params params {};
		params.DebugButton = DebugButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugSubMenuBase.DebugSubMenuBase_C.AddButton_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ButtonLabel                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDebugButton_C*                              NewButton                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugSubMenuBase_C::AddButton_Internal(const class FText& ButtonLabel, class UDebugButton_C** NewButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugSubMenuBase.DebugSubMenuBase_C.AddButton_Internal");
		
		UDebugSubMenuBase_C_AddButton_Internal_Params params {};
		params.ButtonLabel = ButtonLabel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewButton != nullptr)
			*NewButton = params.NewButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugSubMenuBase.DebugSubMenuBase_C.AddButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ButtonLabel                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UDebugSubMenuBase_C::AddButton(const class FText& ButtonLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugSubMenuBase.DebugSubMenuBase_C.AddButton");
		
		UDebugSubMenuBase_C_AddButton_Params params {};
		params.ButtonLabel = ButtonLabel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugSubMenuBase.DebugSubMenuBase_C.EventDispatcher_OnClicked_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDebugButton_C*                              DebugButton                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugSubMenuBase_C::EventDispatcher_OnClicked_Event_1(class UDebugButton_C* DebugButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugSubMenuBase.DebugSubMenuBase_C.EventDispatcher_OnClicked_Event_1");
		
		UDebugSubMenuBase_C_EventDispatcher_OnClicked_Event_1_Params params {};
		params.DebugButton = DebugButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugSubMenuBase.DebugSubMenuBase_C.AddButtonFromArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                ButtonLabels                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UDebugSubMenuBase_C::AddButtonFromArray(TArray<class FText> ButtonLabels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugSubMenuBase.DebugSubMenuBase_C.AddButtonFromArray");
		
		UDebugSubMenuBase_C_AddButtonFromArray_Params params {};
		params.ButtonLabels = ButtonLabels;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugSubMenuBase.DebugSubMenuBase_C.AddButtonEx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDebugParameter                           InParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UDebugSubMenuBase_C::AddButtonEx(const struct FSBDebugParameter& InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugSubMenuBase.DebugSubMenuBase_C.AddButtonEx");
		
		UDebugSubMenuBase_C_AddButtonEx_Params params {};
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugSubMenuBase.DebugSubMenuBase_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDebugButton_C*                              DebugButton                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugSubMenuBase_C::CustomEvent_1(class UDebugButton_C* DebugButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugSubMenuBase.DebugSubMenuBase_C.CustomEvent_1");
		
		UDebugSubMenuBase_C_CustomEvent_1_Params params {};
		params.DebugButton = DebugButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugSubMenuBase.DebugSubMenuBase_C.Construct
	 * 		Flags  -> ()
	 */
	void UDebugSubMenuBase_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugSubMenuBase.DebugSubMenuBase_C.Construct");
		
		UDebugSubMenuBase_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugSubMenuBase.DebugSubMenuBase_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugSubMenuBase_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugSubMenuBase.DebugSubMenuBase_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UDebugSubMenuBase_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugSubMenuBase.DebugSubMenuBase_C.ExecuteUbergraph_DebugSubMenuBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugSubMenuBase_C::ExecuteUbergraph_DebugSubMenuBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugSubMenuBase.DebugSubMenuBase_C.ExecuteUbergraph_DebugSubMenuBase");
		
		UDebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugSubMenuBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugSubMenuBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DebugSubMenuBase.DebugSubMenuBase_C");
		return ptr;
	}

}


