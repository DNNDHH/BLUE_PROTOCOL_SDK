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
	 * 		Name   -> Function FixedPhrase_Menu.FixedPhrase_Menu_C.SelectFixedPhrase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InFixedPhraseId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFixedPhrase_Item_C*                         InFixedPhraseItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFixedPhrase_Menu_C::SelectFixedPhrase(int32_t InFixedPhraseId, class UFixedPhrase_Item_C* InFixedPhraseItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Menu.FixedPhrase_Menu_C.SelectFixedPhrase");
		
		UFixedPhrase_Menu_C_SelectFixedPhrase_Params params {};
		params.InFixedPhraseId = InFixedPhraseId;
		params.InFixedPhraseItem = InFixedPhraseItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Menu.FixedPhrase_Menu_C.SetDragable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InDragable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFixedPhrase_Menu_C::SetDragable(bool InDragable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Menu.FixedPhrase_Menu_C.SetDragable");
		
		UFixedPhrase_Menu_C_SetDragable_Params params {};
		params.InDragable = InDragable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Menu.FixedPhrase_Menu_C.CreateFixedPhrase
	 * 		Flags  -> ()
	 */
	void UFixedPhrase_Menu_C::CreateFixedPhrase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Menu.FixedPhrase_Menu_C.CreateFixedPhrase");
		
		UFixedPhrase_Menu_C_CreateFixedPhrase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Menu.FixedPhrase_Menu_C.Construct
	 * 		Flags  -> ()
	 */
	void UFixedPhrase_Menu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Menu.FixedPhrase_Menu_C.Construct");
		
		UFixedPhrase_Menu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Menu.FixedPhrase_Menu_C.OnClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFixedPhrase_Item_C*                         InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFixedPhrase_Menu_C::OnClick(int32_t InIndex, class UFixedPhrase_Item_C* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Menu.FixedPhrase_Menu_C.OnClick");
		
		UFixedPhrase_Menu_C_OnClick_Params params {};
		params.InIndex = InIndex;
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Menu.FixedPhrase_Menu_C.BndEvt__Btn0_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFixedPhrase_Menu_C::BndEvt__Btn0_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Menu.FixedPhrase_Menu_C.BndEvt__Btn0_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UFixedPhrase_Menu_C_BndEvt__Btn0_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Menu.FixedPhrase_Menu_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFixedPhrase_Menu_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Menu.FixedPhrase_Menu_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UFixedPhrase_Menu_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Menu.FixedPhrase_Menu_C.BndEvt__Btn2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFixedPhrase_Menu_C::BndEvt__Btn2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Menu.FixedPhrase_Menu_C.BndEvt__Btn2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		UFixedPhrase_Menu_C_BndEvt__Btn2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Menu.FixedPhrase_Menu_C.BndEvt__Btn3_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFixedPhrase_Menu_C::BndEvt__Btn3_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Menu.FixedPhrase_Menu_C.BndEvt__Btn3_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");
		
		UFixedPhrase_Menu_C_BndEvt__Btn3_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Menu.FixedPhrase_Menu_C.ExecuteUbergraph_FixedPhrase_Menu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFixedPhrase_Menu_C::ExecuteUbergraph_FixedPhrase_Menu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Menu.FixedPhrase_Menu_C.ExecuteUbergraph_FixedPhrase_Menu");
		
		UFixedPhrase_Menu_C_ExecuteUbergraph_FixedPhrase_Menu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFixedPhrase_Menu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFixedPhrase_Menu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FixedPhrase_Menu.FixedPhrase_Menu_C");
		return ptr;
	}

}


