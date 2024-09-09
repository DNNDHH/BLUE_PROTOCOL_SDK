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
	 * 		Name   -> Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.ResetOrnament
	 * 		Flags  -> ()
	 */
	void ABP_OrnamentForCapture_Studio_C::ResetOrnament()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.ResetOrnament");
		
		ABP_OrnamentForCapture_Studio_C_ResetOrnament_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_OrnamentForCapture_Studio_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.UserConstructionScript");
		
		ABP_OrnamentForCapture_Studio_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_OrnamentForCapture_Studio_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.ReceiveBeginPlay");
		
		ABP_OrnamentForCapture_Studio_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.OnOrnamentCreationCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrnamentForCapture_Studio_C::OnOrnamentCreationCompleted(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.OnOrnamentCreationCompleted");
		
		ABP_OrnamentForCapture_Studio_C_OnOrnamentCreationCompleted_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.LoadOrnamentAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InOrnamentId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_OrnamentForCapture_Studio_C::LoadOrnamentAsset(int32_t InOrnamentId, const class FString& InUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.LoadOrnamentAsset");
		
		ABP_OrnamentForCapture_Studio_C_LoadOrnamentAsset_Params params {};
		params.InOrnamentId = InOrnamentId;
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.ExecuteUbergraph_BP_OrnamentForCapture_Studio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OrnamentForCapture_Studio_C::ExecuteUbergraph_BP_OrnamentForCapture_Studio(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.ExecuteUbergraph_BP_OrnamentForCapture_Studio");
		
		ABP_OrnamentForCapture_Studio_C_ExecuteUbergraph_BP_OrnamentForCapture_Studio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.OnOrnamentLoadedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_OrnamentForCapture_Studio_C::OnOrnamentLoadedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C.OnOrnamentLoadedDelegate__DelegateSignature");
		
		ABP_OrnamentForCapture_Studio_C_OnOrnamentLoadedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OrnamentForCapture_Studio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OrnamentForCapture_Studio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C");
		return ptr;
	}

}


