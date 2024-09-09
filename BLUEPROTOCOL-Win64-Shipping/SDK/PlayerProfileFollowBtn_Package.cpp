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
	 * 		Name   -> Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.SetFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFriend                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDoneSend                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCanSend                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfileFollowBtn_C::SetFriend(bool bFriend, bool bDoneSend, bool bCanSend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.SetFriend");
		
		UPlayerProfileFollowBtn_C_SetFriend_Params params {};
		params.bFriend = bFriend;
		params.bDoneSend = bDoneSend;
		params.bCanSend = bCanSend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.SetFollow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFollow                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfileFollowBtn_C::SetFollow(bool bFollow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.SetFollow");
		
		UPlayerProfileFollowBtn_C_SetFollow_Params params {};
		params.bFollow = bFollow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.BndEvt__BtnFollow_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfileFollowBtn_C::BndEvt__BtnFollow_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.BndEvt__BtnFollow_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UPlayerProfileFollowBtn_C_BndEvt__BtnFollow_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.BndEvt__BtnFollow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfileFollowBtn_C::BndEvt__BtnFollow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.BndEvt__BtnFollow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UPlayerProfileFollowBtn_C_BndEvt__BtnFollow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.BndEvt__BtnFollow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfileFollowBtn_C::BndEvt__BtnFollow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.BndEvt__BtnFollow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UPlayerProfileFollowBtn_C_BndEvt__BtnFollow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.ExecuteUbergraph_PlayerProfileFollowBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfileFollowBtn_C::ExecuteUbergraph_PlayerProfileFollowBtn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.ExecuteUbergraph_PlayerProfileFollowBtn");
		
		UPlayerProfileFollowBtn_C_ExecuteUbergraph_PlayerProfileFollowBtn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfileFollowBtn_C::EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.EventClicked__DelegateSignature");
		
		UPlayerProfileFollowBtn_C_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerProfileFollowBtn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerProfileFollowBtn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerProfileFollowBtn.PlayerProfileFollowBtn_C");
		return ptr;
	}

}


