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
	 * 		Name   -> Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.SetBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_Guild_Button_C::SetBtn(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.SetBtn");
		
		UCommandMenu_Guild_Button_C_SetBtn_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.IsUpdateMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_Guild_Button_C::IsUpdateMatch(bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.IsUpdateMatch");
		
		UCommandMenu_Guild_Button_C_IsUpdateMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.PlayBtnAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_Guild_Button_C::PlayBtnAnim(bool bInActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.PlayBtnAnim");
		
		UCommandMenu_Guild_Button_C_PlayBtnAnim_Params params {};
		params.bInActive = bInActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_NowConfirmCountText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UCommandMenu_Guild_Button_C::Get_NowConfirmCountText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_NowConfirmCountText_Text_1");
		
		UCommandMenu_Guild_Button_C_Get_NowConfirmCountText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_MaxConfirmCountText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UCommandMenu_Guild_Button_C::Get_MaxConfirmCountText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_MaxConfirmCountText_Text_1");
		
		UCommandMenu_Guild_Button_C_Get_MaxConfirmCountText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_MatchingText_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UCommandMenu_Guild_Button_C::Get_MatchingText_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_MatchingText_Visibility_1");
		
		UCommandMenu_Guild_Button_C_Get_MatchingText_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.IsParticipantNumberCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCompleted                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_Guild_Button_C::IsParticipantNumberCompleted(bool* bCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.IsParticipantNumberCompleted");
		
		UCommandMenu_Guild_Button_C_IsParticipantNumberCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCompleted != nullptr)
			*bCompleted = params.bCompleted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_NeedParticipantSizeText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UCommandMenu_Guild_Button_C::Get_NeedParticipantSizeText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_NeedParticipantSizeText_Text_1");
		
		UCommandMenu_Guild_Button_C_Get_NeedParticipantSizeText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_ServerWaitText_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UCommandMenu_Guild_Button_C::Get_ServerWaitText_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_ServerWaitText_Visibility_1");
		
		UCommandMenu_Guild_Button_C_Get_ServerWaitText_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_NowParticipantSizeText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UCommandMenu_Guild_Button_C::Get_NowParticipantSizeText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_NowParticipantSizeText_Text_1");
		
		UCommandMenu_Guild_Button_C_Get_NowParticipantSizeText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenu_Guild_Button_C::BndEvt__ContentButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");
		
		UCommandMenu_Guild_Button_C_BndEvt__ContentButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenu_Guild_Button_C::BndEvt__ContentButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature");
		
		UCommandMenu_Guild_Button_C_BndEvt__ContentButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenu_Guild_Button_C::BndEvt__ContentButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature");
		
		UCommandMenu_Guild_Button_C_BndEvt__ContentButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.UpdateExclamation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommandMenu_Guild_Button_C::UpdateExclamation(bool IsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.UpdateExclamation");
		
		UCommandMenu_Guild_Button_C_UpdateExclamation_Params params {};
		params.IsShow = IsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.ExecuteUbergraph_CommandMenu_Guild_Button
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_Guild_Button_C::ExecuteUbergraph_CommandMenu_Guild_Button(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.ExecuteUbergraph_CommandMenu_Guild_Button");
		
		UCommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.OpenGuildMenu__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommandMenu_Guild_Button_C::OpenGuildMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.OpenGuildMenu__DelegateSignature");
		
		UCommandMenu_Guild_Button_C_OpenGuildMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommandMenu_Guild_Button_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommandMenu_Guild_Button_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommandMenu_Guild_Button.CommandMenu_Guild_Button_C");
		return ptr;
	}

}


