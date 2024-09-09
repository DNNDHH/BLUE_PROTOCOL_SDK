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
	 * 		Name   -> Function Activity_UpdateInfo.Activity_UpdateInfo_C.SetActivity_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildActivity                              Other                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UActivity_UpdateInfo_C::SetActivity_Internal(const struct FGuildActivity& Other)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Activity_UpdateInfo.Activity_UpdateInfo_C.SetActivity_Internal");
		
		UActivity_UpdateInfo_C_SetActivity_Internal_Params params {};
		params.Other = Other;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Activity_UpdateInfo.Activity_UpdateInfo_C.BndEvt__Activity_UpdateInfo_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Keys                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FString>                              Values                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UActivity_UpdateInfo_C::BndEvt__Activity_UpdateInfo_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature(TArray<class FString> Keys, TArray<class FString> Values)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Activity_UpdateInfo.Activity_UpdateInfo_C.BndEvt__Activity_UpdateInfo_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature");
		
		UActivity_UpdateInfo_C_BndEvt__Activity_UpdateInfo_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature_Params params {};
		params.Keys = Keys;
		params.Values = Values;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Activity_UpdateInfo.Activity_UpdateInfo_C.ExecuteUbergraph_Activity_UpdateInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActivity_UpdateInfo_C::ExecuteUbergraph_Activity_UpdateInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Activity_UpdateInfo.Activity_UpdateInfo_C.ExecuteUbergraph_Activity_UpdateInfo");
		
		UActivity_UpdateInfo_C_ExecuteUbergraph_Activity_UpdateInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivity_UpdateInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivity_UpdateInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Activity_UpdateInfo.Activity_UpdateInfo_C");
		return ptr;
	}

}


