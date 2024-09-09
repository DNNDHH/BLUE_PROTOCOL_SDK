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
	 * 		Name   -> Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UGuildAttributeIconBtn_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.GetToolTipWidget_1");
		
		UGuildAttributeIconBtn_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.SetChecked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildAttributeIconBtn_C::SetChecked(bool bIsCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.SetChecked");
		
		UGuildAttributeIconBtn_C_SetChecked_Params params {};
		params.bIsCheck = bIsCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.GetAttrib
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGuildAttribute                                    Attribute                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildAttributeIconBtn_C::GetAttrib(EGuildAttribute* Attribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.GetAttrib");
		
		UGuildAttributeIconBtn_C_GetAttrib_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attribute != nullptr)
			*Attribute = params.Attribute;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.IsCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCheck                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildAttributeIconBtn_C::IsCheck(bool* IsCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.IsCheck");
		
		UGuildAttributeIconBtn_C_IsCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsCheck != nullptr)
			*IsCheck = params.IsCheck;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.OnLoaded_BBCADD534C9D43FF5AB95D8D8A7DF76A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildAttributeIconBtn_C::OnLoaded_BBCADD534C9D43FF5AB95D8D8A7DF76A(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.OnLoaded_BBCADD534C9D43FF5AB95D8D8A7DF76A");
		
		UGuildAttributeIconBtn_C_OnLoaded_BBCADD534C9D43FF5AB95D8D8A7DF76A_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildAttributeIconBtn_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.PreConstruct");
		
		UGuildAttributeIconBtn_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildAttributeIconBtn_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.Construct");
		
		UGuildAttributeIconBtn_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.Initialize Attribute
	 * 		Flags  -> ()
	 */
	void UGuildAttributeIconBtn_C::InitializeAttribute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.Initialize Attribute");
		
		UGuildAttributeIconBtn_C_InitializeAttribute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.BndEvt__CB_Check_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildAttributeIconBtn_C::BndEvt__CB_Check_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.BndEvt__CB_Check_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UGuildAttributeIconBtn_C_BndEvt__CB_Check_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.Set Ediable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildAttributeIconBtn_C::SetEdiable(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.Set Ediable");
		
		UGuildAttributeIconBtn_C_SetEdiable_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.BndEvt__GuildAttributeIconBtn_CB_Check_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildAttributeIconBtn_C::BndEvt__GuildAttributeIconBtn_CB_Check_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.BndEvt__GuildAttributeIconBtn_CB_Check_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UGuildAttributeIconBtn_C_BndEvt__GuildAttributeIconBtn_CB_Check_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.BndEvt__GuildAttributeIconBtn_CB_Check_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildAttributeIconBtn_C::BndEvt__GuildAttributeIconBtn_CB_Check_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.BndEvt__GuildAttributeIconBtn_CB_Check_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UGuildAttributeIconBtn_C_BndEvt__GuildAttributeIconBtn_CB_Check_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.ExecuteUbergraph_GuildAttributeIconBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildAttributeIconBtn_C::ExecuteUbergraph_GuildAttributeIconBtn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildAttributeIconBtn.GuildAttributeIconBtn_C.ExecuteUbergraph_GuildAttributeIconBtn");
		
		UGuildAttributeIconBtn_C_ExecuteUbergraph_GuildAttributeIconBtn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildAttributeIconBtn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildAttributeIconBtn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildAttributeIconBtn.GuildAttributeIconBtn_C");
		return ptr;
	}

}


