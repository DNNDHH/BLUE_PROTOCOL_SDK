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
	 * 		Name   -> Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.ResetParam
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Wait_C::ResetParam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.ResetParam");
		
		UUMG_MatchingMenu_Wait_C_ResetParam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.AdvanceMatching
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CallApi                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_Wait_C::AdvanceMatching(bool* CallApi)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.AdvanceMatching");
		
		UUMG_MatchingMenu_Wait_C_AdvanceMatching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CallApi != nullptr)
			*CallApi = params.CallApi;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.UpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimespan                                   InTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Wait_C::UpdateAnimation(const struct FTimespan& InTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.UpdateAnimation");
		
		UUMG_MatchingMenu_Wait_C_UpdateAnimation_Params params {};
		params.InTime = InTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.UpdateWaitTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimespan                                   InTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Wait_C::UpdateWaitTimer(const struct FTimespan& InTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.UpdateWaitTimer");
		
		UUMG_MatchingMenu_Wait_C_UpdateWaitTimer_Params params {};
		params.InTime = InTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.Get_CurrentMembers_Text
	 * 		Flags  -> ()
	 */
	class FText UUMG_MatchingMenu_Wait_C::Get_CurrentMembers_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.Get_CurrentMembers_Text");
		
		UUMG_MatchingMenu_Wait_C_Get_CurrentMembers_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.Get_MaxMembers_Text
	 * 		Flags  -> ()
	 */
	class FText UUMG_MatchingMenu_Wait_C::Get_MaxMembers_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.Get_MaxMembers_Text");
		
		UUMG_MatchingMenu_Wait_C_Get_MaxMembers_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.RequestClose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Wait_C::RequestClose(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.RequestClose");
		
		UUMG_MatchingMenu_Wait_C_RequestClose_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Wait_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.Tick");
		
		UUMG_MatchingMenu_Wait_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Wait_C::BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UUMG_MatchingMenu_Wait_C_BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.ExecuteUbergraph_UMG_MatchingMenu_Wait
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Wait_C::ExecuteUbergraph_UMG_MatchingMenu_Wait(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.ExecuteUbergraph_UMG_MatchingMenu_Wait");
		
		UUMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_MatchingMenu_Wait_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_MatchingMenu_Wait_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C");
		return ptr;
	}

}


