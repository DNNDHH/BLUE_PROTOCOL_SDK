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
	 * 		Name   -> Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_AdminGotoBookmarkRegistrationWindowItem_C::SetText(const class FString& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.SetText");
		
		UUMG_AdminGotoBookmarkRegistrationWindowItem_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_AdminGotoBookmarkRegistrationWindowItem_C::GetText(class FString* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.GetText");
		
		UUMG_AdminGotoBookmarkRegistrationWindowItem_C_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_AdminGotoBookmarkRegistrationWindowItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.PreConstruct");
		
		UUMG_AdminGotoBookmarkRegistrationWindowItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUMG_AdminGotoBookmarkRegistrationWindowItem_C::BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature");
		
		UUMG_AdminGotoBookmarkRegistrationWindowItem_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindowItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_AdminGotoBookmarkRegistrationWindowItem_C::ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindowItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindowItem");
		
		UUMG_AdminGotoBookmarkRegistrationWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindowItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.OnTextChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_AdminGotoBookmarkRegistrationWindowItem_C::OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.OnTextChanged__DelegateSignature");
		
		UUMG_AdminGotoBookmarkRegistrationWindowItem_C_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_AdminGotoBookmarkRegistrationWindowItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_AdminGotoBookmarkRegistrationWindowItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C");
		return ptr;
	}

}


