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
	 * 		Name   -> Function TicketSelectWeapon.TicketSelectWeapon_C.UpdateRewardRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AddRatio                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTicketSelectWeapon_C::UpdateRewardRatio(float* AddRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectWeapon.TicketSelectWeapon_C.UpdateRewardRatio");
		
		UTicketSelectWeapon_C_UpdateRewardRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AddRatio != nullptr)
			*AddRatio = params.AddRatio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectWeapon.TicketSelectWeapon_C.UpdateSuccessRatio
	 * 		Flags  -> ()
	 */
	void UTicketSelectWeapon_C::UpdateSuccessRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectWeapon.TicketSelectWeapon_C.UpdateSuccessRatio");
		
		UTicketSelectWeapon_C_UpdateSuccessRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectWeapon.TicketSelectWeapon_C.UpdateTokenData
	 * 		Flags  -> ()
	 */
	void UTicketSelectWeapon_C::UpdateTokenData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectWeapon.TicketSelectWeapon_C.UpdateTokenData");
		
		UTicketSelectWeapon_C_UpdateTokenData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectWeapon.TicketSelectWeapon_C.Initialize
	 * 		Flags  -> ()
	 */
	void UTicketSelectWeapon_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectWeapon.TicketSelectWeapon_C.Initialize");
		
		UTicketSelectWeapon_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectWeapon.TicketSelectWeapon_C.Construct
	 * 		Flags  -> ()
	 */
	void UTicketSelectWeapon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectWeapon.TicketSelectWeapon_C.Construct");
		
		UTicketSelectWeapon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectWeapon.TicketSelectWeapon_C.OnSelectToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTicketSelectWeapon_C::OnSelectToken(int32_t TokenID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectWeapon.TicketSelectWeapon_C.OnSelectToken");
		
		UTicketSelectWeapon_C_OnSelectToken_Params params {};
		params.TokenID = TokenID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectWeapon.TicketSelectWeapon_C.onClosedTicketSelect
	 * 		Flags  -> ()
	 */
	void UTicketSelectWeapon_C::onClosedTicketSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectWeapon.TicketSelectWeapon_C.onClosedTicketSelect");
		
		UTicketSelectWeapon_C_onClosedTicketSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectWeapon.TicketSelectWeapon_C.BndEvt__TicketSelectWeapon_CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTicketSelectWeapon_C::BndEvt__TicketSelectWeapon_CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectWeapon.TicketSelectWeapon_C.BndEvt__TicketSelectWeapon_CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");
		
		UTicketSelectWeapon_C_BndEvt__TicketSelectWeapon_CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectWeapon.TicketSelectWeapon_C.RequestClose
	 * 		Flags  -> ()
	 */
	void UTicketSelectWeapon_C::RequestClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectWeapon.TicketSelectWeapon_C.RequestClose");
		
		UTicketSelectWeapon_C_RequestClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectWeapon.TicketSelectWeapon_C.Destruct
	 * 		Flags  -> ()
	 */
	void UTicketSelectWeapon_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectWeapon.TicketSelectWeapon_C.Destruct");
		
		UTicketSelectWeapon_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectWeapon.TicketSelectWeapon_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UTicketSelectWeapon_C::WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectWeapon.TicketSelectWeapon_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2");
		
		UTicketSelectWeapon_C_WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectWeapon.TicketSelectWeapon_C.BndEvt__TicketSelectWeapon_CmnClose03_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTicketSelectWeapon_C::BndEvt__TicketSelectWeapon_CmnClose03_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectWeapon.TicketSelectWeapon_C.BndEvt__TicketSelectWeapon_CmnClose03_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");
		
		UTicketSelectWeapon_C_BndEvt__TicketSelectWeapon_CmnClose03_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectWeapon.TicketSelectWeapon_C.BndEvt__TicketSelectWeapon_Btn_Decide_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTicketSelectWeapon_C::BndEvt__TicketSelectWeapon_Btn_Decide_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectWeapon.TicketSelectWeapon_C.BndEvt__TicketSelectWeapon_Btn_Decide_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UTicketSelectWeapon_C_BndEvt__TicketSelectWeapon_Btn_Decide_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectWeapon.TicketSelectWeapon_C.ExecuteUbergraph_TicketSelectWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTicketSelectWeapon_C::ExecuteUbergraph_TicketSelectWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectWeapon.TicketSelectWeapon_C.ExecuteUbergraph_TicketSelectWeapon");
		
		UTicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectWeapon.TicketSelectWeapon_C.Select__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UseTokenId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTicketSelectWeapon_C::Select__DelegateSignature(int32_t UseTokenId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectWeapon.TicketSelectWeapon_C.Select__DelegateSignature");
		
		UTicketSelectWeapon_C_Select__DelegateSignature_Params params {};
		params.UseTokenId = UseTokenId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectWeapon.TicketSelectWeapon_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTicketSelectWeapon_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectWeapon.TicketSelectWeapon_C.OnClose__DelegateSignature");
		
		UTicketSelectWeapon_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTicketSelectWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTicketSelectWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TicketSelectWeapon.TicketSelectWeapon_C");
		return ptr;
	}

}


