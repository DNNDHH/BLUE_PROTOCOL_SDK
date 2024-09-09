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
	 * 		Name   -> Function Activity_GuildOrganize.Activity_GuildOrganize_C.Construct
	 * 		Flags  -> ()
	 */
	void UActivity_GuildOrganize_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Activity_GuildOrganize.Activity_GuildOrganize_C.Construct");
		
		UActivity_GuildOrganize_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Activity_GuildOrganize.Activity_GuildOrganize_C.SetActivity_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildActivity                              Other                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UActivity_GuildOrganize_C::SetActivity_Internal(const struct FGuildActivity& Other)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Activity_GuildOrganize.Activity_GuildOrganize_C.SetActivity_Internal");
		
		UActivity_GuildOrganize_C_SetActivity_Internal_Params params {};
		params.Other = Other;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Activity_GuildOrganize.Activity_GuildOrganize_C.BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Keys                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FString>                              Values                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UActivity_GuildOrganize_C::BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature(TArray<class FString> Keys, TArray<class FString> Values)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Activity_GuildOrganize.Activity_GuildOrganize_C.BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature");
		
		UActivity_GuildOrganize_C_BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature_Params params {};
		params.Keys = Keys;
		params.Values = Values;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Activity_GuildOrganize.Activity_GuildOrganize_C.ExecuteUbergraph_Activity_GuildOrganize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActivity_GuildOrganize_C::ExecuteUbergraph_Activity_GuildOrganize(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Activity_GuildOrganize.Activity_GuildOrganize_C.ExecuteUbergraph_Activity_GuildOrganize");
		
		UActivity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivity_GuildOrganize_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivity_GuildOrganize_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Activity_GuildOrganize.Activity_GuildOrganize_C");
		return ptr;
	}

}


