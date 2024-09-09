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
	 * 		Name   -> Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.NewFunction_1
	 * 		Flags  -> ()
	 */
	void UWBP_CommandMenuBookmarkRegister_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.NewFunction_1");
		
		UWBP_CommandMenuBookmarkRegister_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.IsTestKeyUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CommandMenuBookmarkRegister_C::IsTestKeyUse(const struct FKey& Key, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.IsTestKeyUse");
		
		UWBP_CommandMenuBookmarkRegister_C_IsTestKeyUse_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWBP_CommandMenuBookmarkRegister_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.OnKeyDown");
		
		UWBP_CommandMenuBookmarkRegister_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_CommandMenuBookmarkRegister_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.Construct");
		
		UWBP_CommandMenuBookmarkRegister_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.UpdateKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_CommandMenuBookmarkRegister_C::UpdateKey(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.UpdateKey");
		
		UWBP_CommandMenuBookmarkRegister_C_UpdateKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_CommandMenuBookmarkRegister_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.Destruct");
		
		UWBP_CommandMenuBookmarkRegister_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CommandMenuBookmarkRegister_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_CommandMenuBookmarkRegister_C_BndEvt__Button1_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CommandMenuBookmarkRegister_C::BndEvt__Button1_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_CommandMenuBookmarkRegister_C_BndEvt__Button1_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CommandMenuBookmarkRegister_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_CommandMenuBookmarkRegister_C_BndEvt__Button1_1_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__Button2_1_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CommandMenuBookmarkRegister_C::BndEvt__Button2_1_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__Button2_1_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_CommandMenuBookmarkRegister_C_BndEvt__Button2_1_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CommandMenuBookmarkRegister_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_CommandMenuBookmarkRegister_C_BndEvt__Button1_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__Button2_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CommandMenuBookmarkRegister_C::BndEvt__Button2_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__Button2_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_CommandMenuBookmarkRegister_C_BndEvt__Button2_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__WBP_CommandMenuBookmarkRegister_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CommandMenuBookmarkRegister_C::BndEvt__WBP_CommandMenuBookmarkRegister_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__WBP_CommandMenuBookmarkRegister_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");
		
		UWBP_CommandMenuBookmarkRegister_C_BndEvt__WBP_CommandMenuBookmarkRegister_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.ExecuteUbergraph_WBP_CommandMenuBookmarkRegister
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CommandMenuBookmarkRegister_C::ExecuteUbergraph_WBP_CommandMenuBookmarkRegister(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.ExecuteUbergraph_WBP_CommandMenuBookmarkRegister");
		
		UWBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.UpdateFinish__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBBookMarkerSlot                                  BookmarkSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      KeyString                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_CommandMenuBookmarkRegister_C::UpdateFinish__DelegateSignature(ESBBookMarkerSlot BookmarkSlot, const class FString& KeyString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.UpdateFinish__DelegateSignature");
		
		UWBP_CommandMenuBookmarkRegister_C_UpdateFinish__DelegateSignature_Params params {};
		params.BookmarkSlot = BookmarkSlot;
		params.KeyString = KeyString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CommandMenuBookmarkRegister_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CommandMenuBookmarkRegister_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C");
		return ptr;
	}

}


