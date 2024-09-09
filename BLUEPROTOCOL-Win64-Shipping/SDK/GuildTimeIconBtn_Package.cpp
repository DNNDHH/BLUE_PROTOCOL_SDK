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
	 * 		Name   -> Function GuildTimeIconBtn.GuildTimeIconBtn_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UGuildTimeIconBtn_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeIconBtn.GuildTimeIconBtn_C.GetToolTipWidget_1");
		
		UGuildTimeIconBtn_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeIconBtn.GuildTimeIconBtn_C.Set Checked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildTimeIconBtn_C::SetChecked(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeIconBtn.GuildTimeIconBtn_C.Set Checked");
		
		UGuildTimeIconBtn_C_SetChecked_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeIconBtn.GuildTimeIconBtn_C.GetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBGuildActivityTime                               Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildTimeIconBtn_C::GetTime(ESBGuildActivityTime* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeIconBtn.GuildTimeIconBtn_C.GetTime");
		
		UGuildTimeIconBtn_C_GetTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeIconBtn.GuildTimeIconBtn_C.IsCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCheck                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildTimeIconBtn_C::IsCheck(bool* IsCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeIconBtn.GuildTimeIconBtn_C.IsCheck");
		
		UGuildTimeIconBtn_C_IsCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsCheck != nullptr)
			*IsCheck = params.IsCheck;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeIconBtn.GuildTimeIconBtn_C.OnLoaded_456EB643467351B1ABBF91877B36AC98
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildTimeIconBtn_C::OnLoaded_456EB643467351B1ABBF91877B36AC98(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeIconBtn.GuildTimeIconBtn_C.OnLoaded_456EB643467351B1ABBF91877B36AC98");
		
		UGuildTimeIconBtn_C_OnLoaded_456EB643467351B1ABBF91877B36AC98_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeIconBtn.GuildTimeIconBtn_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildTimeIconBtn_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeIconBtn.GuildTimeIconBtn_C.PreConstruct");
		
		UGuildTimeIconBtn_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeIconBtn.GuildTimeIconBtn_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildTimeIconBtn_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeIconBtn.GuildTimeIconBtn_C.Construct");
		
		UGuildTimeIconBtn_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeIconBtn.GuildTimeIconBtn_C.InitializeTime
	 * 		Flags  -> ()
	 */
	void UGuildTimeIconBtn_C::InitializeTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeIconBtn.GuildTimeIconBtn_C.InitializeTime");
		
		UGuildTimeIconBtn_C_InitializeTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeIconBtn.GuildTimeIconBtn_C.BndEvt__Btn_Time_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildTimeIconBtn_C::BndEvt__Btn_Time_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeIconBtn.GuildTimeIconBtn_C.BndEvt__Btn_Time_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UGuildTimeIconBtn_C_BndEvt__Btn_Time_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeIconBtn.GuildTimeIconBtn_C.Set Editable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEditable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildTimeIconBtn_C::SetEditable(bool bEditable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeIconBtn.GuildTimeIconBtn_C.Set Editable");
		
		UGuildTimeIconBtn_C_SetEditable_Params params {};
		params.bEditable = bEditable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeIconBtn.GuildTimeIconBtn_C.BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildTimeIconBtn_C::BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeIconBtn.GuildTimeIconBtn_C.BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UGuildTimeIconBtn_C_BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeIconBtn.GuildTimeIconBtn_C.BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildTimeIconBtn_C::BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeIconBtn.GuildTimeIconBtn_C.BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UGuildTimeIconBtn_C_BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildTimeIconBtn.GuildTimeIconBtn_C.ExecuteUbergraph_GuildTimeIconBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildTimeIconBtn_C::ExecuteUbergraph_GuildTimeIconBtn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildTimeIconBtn.GuildTimeIconBtn_C.ExecuteUbergraph_GuildTimeIconBtn");
		
		UGuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildTimeIconBtn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildTimeIconBtn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildTimeIconBtn.GuildTimeIconBtn_C");
		return ptr;
	}

}


