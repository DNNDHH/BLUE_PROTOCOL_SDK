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
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.UpdateExclamation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_DungeonFinder_Button_C::UpdateExclamation(bool IsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.UpdateExclamation");
		
		UUMG_DungeonFinder_Button_C_UpdateExclamation_Params params {};
		params.IsShow = IsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.SetBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_DungeonFinder_Button_C::SetBtn(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.SetBtn");
		
		UUMG_DungeonFinder_Button_C_SetBtn_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.IsUpdateMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_DungeonFinder_Button_C::IsUpdateMatch(bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.IsUpdateMatch");
		
		UUMG_DungeonFinder_Button_C_IsUpdateMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.PlayBtnAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_DungeonFinder_Button_C::PlayBtnAnim(bool bInActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.PlayBtnAnim");
		
		UUMG_DungeonFinder_Button_C_PlayBtnAnim_Params params {};
		params.bInActive = bInActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_NowConfirmCountText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUMG_DungeonFinder_Button_C::Get_NowConfirmCountText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_NowConfirmCountText_Text_1");
		
		UUMG_DungeonFinder_Button_C_Get_NowConfirmCountText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_MaxConfirmCountText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUMG_DungeonFinder_Button_C::Get_MaxConfirmCountText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_MaxConfirmCountText_Text_1");
		
		UUMG_DungeonFinder_Button_C_Get_MaxConfirmCountText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_MatchingText_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUMG_DungeonFinder_Button_C::Get_MatchingText_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_MatchingText_Visibility_1");
		
		UUMG_DungeonFinder_Button_C_Get_MatchingText_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.IsParticipantNumberCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCompleted                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_DungeonFinder_Button_C::IsParticipantNumberCompleted(bool* bCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.IsParticipantNumberCompleted");
		
		UUMG_DungeonFinder_Button_C_IsParticipantNumberCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCompleted != nullptr)
			*bCompleted = params.bCompleted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_NeedParticipantSizeText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUMG_DungeonFinder_Button_C::Get_NeedParticipantSizeText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_NeedParticipantSizeText_Text_1");
		
		UUMG_DungeonFinder_Button_C_Get_NeedParticipantSizeText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_ServerWaitText_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUMG_DungeonFinder_Button_C::Get_ServerWaitText_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_ServerWaitText_Visibility_1");
		
		UUMG_DungeonFinder_Button_C_Get_ServerWaitText_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_NowParticipantSizeText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUMG_DungeonFinder_Button_C::Get_NowParticipantSizeText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_NowParticipantSizeText_Text_1");
		
		UUMG_DungeonFinder_Button_C_Get_NowParticipantSizeText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.ResetButtonState
	 * 		Flags  -> ()
	 */
	void UUMG_DungeonFinder_Button_C::ResetButtonState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.ResetButtonState");
		
		UUMG_DungeonFinder_Button_C_ResetButtonState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_DungeonFinder_Button_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Construct");
		
		UUMG_DungeonFinder_Button_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_DungeonFinder_Button_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Tick");
		
		UUMG_DungeonFinder_Button_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_DungeonFinder_Button_C::BndEvt__ContentButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_DungeonFinder_Button_C_BndEvt__ContentButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_DungeonFinder_Button_C::BndEvt__ContentButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature");
		
		UUMG_DungeonFinder_Button_C_BndEvt__ContentButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_DungeonFinder_Button_C::BndEvt__ContentButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature");
		
		UUMG_DungeonFinder_Button_C_BndEvt__ContentButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.ExecuteUbergraph_UMG_DungeonFinder_Button
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_DungeonFinder_Button_C::ExecuteUbergraph_UMG_DungeonFinder_Button(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.ExecuteUbergraph_UMG_DungeonFinder_Button");
		
		UUMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.OnMatchingState__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_DungeonFinder_Button_C::OnMatchingState__DelegateSignature(bool IsStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.OnMatchingState__DelegateSignature");
		
		UUMG_DungeonFinder_Button_C_OnMatchingState__DelegateSignature_Params params {};
		params.IsStart = IsStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.OnOpenDungeonMatchingMenu__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_DungeonFinder_Button_C::OnOpenDungeonMatchingMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.OnOpenDungeonMatchingMenu__DelegateSignature");
		
		UUMG_DungeonFinder_Button_C_OnOpenDungeonMatchingMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.OnOpenMatchingMenu__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_DungeonFinder_Button_C::OnOpenMatchingMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.OnOpenMatchingMenu__DelegateSignature");
		
		UUMG_DungeonFinder_Button_C_OnOpenMatchingMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_DungeonFinder_Button_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_DungeonFinder_Button_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C");
		return ptr;
	}

}


