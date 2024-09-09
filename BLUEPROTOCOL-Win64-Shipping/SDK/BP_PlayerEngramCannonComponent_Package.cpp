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
	 * 		Name   -> Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.PostAkEvent_RideOff
	 * 		Flags  -> ()
	 */
	void UBP_PlayerEngramCannonComponent_C::PostAkEvent_RideOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.PostAkEvent_RideOff");
		
		UBP_PlayerEngramCannonComponent_C_PostAkEvent_RideOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.PostAkEvent_RideOn
	 * 		Flags  -> ()
	 */
	void UBP_PlayerEngramCannonComponent_C::PostAkEvent_RideOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.PostAkEvent_RideOn");
		
		UBP_PlayerEngramCannonComponent_C_PostAkEvent_RideOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.ResetUI
	 * 		Flags  -> ()
	 */
	void UBP_PlayerEngramCannonComponent_C::ResetUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.ResetUI");
		
		UBP_PlayerEngramCannonComponent_C_ResetUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.SetUI
	 * 		Flags  -> ()
	 */
	void UBP_PlayerEngramCannonComponent_C::SetUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.SetUI");
		
		UBP_PlayerEngramCannonComponent_C_SetUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.InitGetOff_BP
	 * 		Flags  -> ()
	 */
	void UBP_PlayerEngramCannonComponent_C::InitGetOff_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.InitGetOff_BP");
		
		UBP_PlayerEngramCannonComponent_C_InitGetOff_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.InitOnBoard_BP
	 * 		Flags  -> ()
	 */
	void UBP_PlayerEngramCannonComponent_C::InitOnBoard_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.InitOnBoard_BP");
		
		UBP_PlayerEngramCannonComponent_C_InitOnBoard_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerEngramCannonComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.ReceiveEndPlay");
		
		UBP_PlayerEngramCannonComponent_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.ExecuteUbergraph_BP_PlayerEngramCannonComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerEngramCannonComponent_C::ExecuteUbergraph_BP_PlayerEngramCannonComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.ExecuteUbergraph_BP_PlayerEngramCannonComponent");
		
		UBP_PlayerEngramCannonComponent_C_ExecuteUbergraph_BP_PlayerEngramCannonComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerEngramCannonComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerEngramCannonComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C");
		return ptr;
	}

}


