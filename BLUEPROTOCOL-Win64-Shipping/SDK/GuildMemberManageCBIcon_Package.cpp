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
	 * 		Name   -> Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.SetChecked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildMemberManageCBIcon_C::SetChecked(bool bIsCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.SetChecked");
		
		UGuildMemberManageCBIcon_C_SetChecked_Params params {};
		params.bIsCheck = bIsCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.IsCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCheck                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildMemberManageCBIcon_C::IsCheck(bool* IsCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.IsCheck");
		
		UGuildMemberManageCBIcon_C_IsCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsCheck != nullptr)
			*IsCheck = params.IsCheck;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.SetTextById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TextId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberManageCBIcon_C::SetTextById(int32_t TextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.SetTextById");
		
		UGuildMemberManageCBIcon_C_SetTextById_Params params {};
		params.TextId = TextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildMemberManageCBIcon_C::BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UGuildMemberManageCBIcon_C_BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.ExecuteUbergraph_GuildMemberManageCBIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMemberManageCBIcon_C::ExecuteUbergraph_GuildMemberManageCBIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.ExecuteUbergraph_GuildMemberManageCBIcon");
		
		UGuildMemberManageCBIcon_C_ExecuteUbergraph_GuildMemberManageCBIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.OnUpdateState__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildMemberManageCBIcon_C::OnUpdateState__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.OnUpdateState__DelegateSignature");
		
		UGuildMemberManageCBIcon_C_OnUpdateState__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildMemberManageCBIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildMemberManageCBIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildMemberManageCBIcon.GuildMemberManageCBIcon_C");
		return ptr;
	}

}


