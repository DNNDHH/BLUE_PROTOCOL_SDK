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
	 * 		Name   -> Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.InitializeAtFirstLoadingComplete
	 * 		Flags  -> ()
	 */
	void UObjectSelectCursorComponent_C::InitializeAtFirstLoadingComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.InitializeAtFirstLoadingComplete");
		
		UObjectSelectCursorComponent_C_InitializeAtFirstLoadingComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.IsLocallyControlled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsLocallyControlled                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UObjectSelectCursorComponent_C::IsLocallyControlled(bool* bIsLocallyControlled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.IsLocallyControlled");
		
		UObjectSelectCursorComponent_C_IsLocallyControlled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsLocallyControlled != nullptr)
			*bIsLocallyControlled = params.bIsLocallyControlled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.UpdateDisplayLocation
	 * 		Flags  -> ()
	 */
	void UObjectSelectCursorComponent_C::UpdateDisplayLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.UpdateDisplayLocation");
		
		UObjectSelectCursorComponent_C_UpdateDisplayLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.GetDisplayLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBInteractionInfo                          InteractionInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     DisplayLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UObjectSelectCursorComponent_C::GetDisplayLocation(const struct FSBInteractionInfo& InteractionInfo, struct FVector* DisplayLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.GetDisplayLocation");
		
		UObjectSelectCursorComponent_C_GetDisplayLocation_Params params {};
		params.InteractionInfo = InteractionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayLocation != nullptr)
			*DisplayLocation = params.DisplayLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UObjectSelectCursorComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.ReceiveBeginPlay");
		
		UObjectSelectCursorComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UObjectSelectCursorComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.ReceiveTick");
		
		UObjectSelectCursorComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.ExecuteUbergraph_ObjectSelectCursorComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UObjectSelectCursorComponent_C::ExecuteUbergraph_ObjectSelectCursorComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.ExecuteUbergraph_ObjectSelectCursorComponent");
		
		UObjectSelectCursorComponent_C_ExecuteUbergraph_ObjectSelectCursorComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectSelectCursorComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectSelectCursorComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ObjectSelectCursorComponent.ObjectSelectCursorComponent_C");
		return ptr;
	}

}


