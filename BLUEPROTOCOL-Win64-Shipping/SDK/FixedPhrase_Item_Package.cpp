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
	 * 		Name   -> Function FixedPhrase_Item.FixedPhrase_Item_C.GetShortcutItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FShortcutItemInfo                           OutShortcutItemInfo                                        (Parm, OutParm)
	 */
	void UFixedPhrase_Item_C::GetShortcutItemInfo(struct FShortcutItemInfo* OutShortcutItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Item.FixedPhrase_Item_C.GetShortcutItemInfo");
		
		UFixedPhrase_Item_C_GetShortcutItemInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutShortcutItemInfo != nullptr)
			*OutShortcutItemInfo = params.OutShortcutItemInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Item.FixedPhrase_Item_C.GetFixedPhrase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FixedPhrase                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFixedPhrase_Item_C::GetFixedPhrase(class FString* FixedPhrase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Item.FixedPhrase_Item_C.GetFixedPhrase");
		
		UFixedPhrase_Item_C_GetFixedPhrase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FixedPhrase != nullptr)
			*FixedPhrase = params.FixedPhrase;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Item.FixedPhrase_Item_C.SetDragable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InDragable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFixedPhrase_Item_C::SetDragable(bool InDragable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Item.FixedPhrase_Item_C.SetDragable");
		
		UFixedPhrase_Item_C_SetDragable_Params params {};
		params.InDragable = InDragable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Item.FixedPhrase_Item_C.OnDragDetected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFixedPhrase_Item_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Item.FixedPhrase_Item_C.OnDragDetected");
		
		UFixedPhrase_Item_C_OnDragDetected_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Operation != nullptr)
			*Operation = params.Operation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Item.FixedPhrase_Item_C.OnPreviewMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UFixedPhrase_Item_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Item.FixedPhrase_Item_C.OnPreviewMouseButtonDown");
		
		UFixedPhrase_Item_C_OnPreviewMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Item.FixedPhrase_Item_C.IsSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFixedPhrase_Item_C::IsSelected(bool* bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Item.FixedPhrase_Item_C.IsSelected");
		
		UFixedPhrase_Item_C_IsSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSelected != nullptr)
			*bSelected = params.bSelected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Item.FixedPhrase_Item_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFixedPhrase_Item_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Item.FixedPhrase_Item_C.PreConstruct");
		
		UFixedPhrase_Item_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Item.FixedPhrase_Item_C.BndEvt__CmnBtn24_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFixedPhrase_Item_C::BndEvt__CmnBtn24_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Item.FixedPhrase_Item_C.BndEvt__CmnBtn24_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UFixedPhrase_Item_C_BndEvt__CmnBtn24_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Item.FixedPhrase_Item_C.ExecuteUbergraph_FixedPhrase_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFixedPhrase_Item_C::ExecuteUbergraph_FixedPhrase_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Item.FixedPhrase_Item_C.ExecuteUbergraph_FixedPhrase_Item");
		
		UFixedPhrase_Item_C_ExecuteUbergraph_FixedPhrase_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Item.FixedPhrase_Item_C.OnSelectRight__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            retFixedPhraseIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFixedPhrase_Item_C*                         InSelectedItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFixedPhrase_Item_C::OnSelectRight__DelegateSignature(int32_t retFixedPhraseIndex, class UFixedPhrase_Item_C* InSelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Item.FixedPhrase_Item_C.OnSelectRight__DelegateSignature");
		
		UFixedPhrase_Item_C_OnSelectRight__DelegateSignature_Params params {};
		params.retFixedPhraseIndex = retFixedPhraseIndex;
		params.InSelectedItem = InSelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FixedPhrase_Item.FixedPhrase_Item_C.OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            retFixedPhraseIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFixedPhrase_Item_C*                         InSelectedItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFixedPhrase_Item_C::OnSelect__DelegateSignature(int32_t retFixedPhraseIndex, class UFixedPhrase_Item_C* InSelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FixedPhrase_Item.FixedPhrase_Item_C.OnSelect__DelegateSignature");
		
		UFixedPhrase_Item_C_OnSelect__DelegateSignature_Params params {};
		params.retFixedPhraseIndex = retFixedPhraseIndex;
		params.InSelectedItem = InSelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFixedPhrase_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFixedPhrase_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FixedPhrase_Item.FixedPhrase_Item_C");
		return ptr;
	}

}


