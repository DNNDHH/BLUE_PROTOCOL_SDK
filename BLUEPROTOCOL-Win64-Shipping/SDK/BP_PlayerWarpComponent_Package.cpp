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
	 * 		Name   -> Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.IsCountDownUICancelPressed
	 * 		Flags  -> ()
	 */
	bool UBP_PlayerWarpComponent_C::IsCountDownUICancelPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.IsCountDownUICancelPressed");
		
		UBP_PlayerWarpComponent_C_IsCountDownUICancelPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.HideCountDownUI
	 * 		Flags  -> ()
	 */
	void UBP_PlayerWarpComponent_C::HideCountDownUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.HideCountDownUI");
		
		UBP_PlayerWarpComponent_C_HideCountDownUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.ShowCountDownUI
	 * 		Flags  -> ()
	 */
	void UBP_PlayerWarpComponent_C::ShowCountDownUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.ShowCountDownUI");
		
		UBP_PlayerWarpComponent_C_ShowCountDownUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.TickComponentByActorEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerWarpComponent_C::TickComponentByActorEvent(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.TickComponentByActorEvent");
		
		UBP_PlayerWarpComponent_C_TickComponentByActorEvent_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.ExecuteUbergraph_BP_PlayerWarpComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerWarpComponent_C::ExecuteUbergraph_BP_PlayerWarpComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.ExecuteUbergraph_BP_PlayerWarpComponent");
		
		UBP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerWarpComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerWarpComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerWarpComponent.BP_PlayerWarpComponent_C");
		return ptr;
	}

}


