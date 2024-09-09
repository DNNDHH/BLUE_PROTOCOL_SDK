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
	 * 		Name   -> Function CommonBattleHudComponent.CommonBattleHudComponent_C.IsEnable
	 * 		Flags  -> ()
	 */
	bool UCommonBattleHudComponent_C::IsEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonBattleHudComponent.CommonBattleHudComponent_C.IsEnable");
		
		UCommonBattleHudComponent_C_IsEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonBattleHudComponent.CommonBattleHudComponent_C.ShowHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonBattleHudComponent_C::ShowHUD(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonBattleHudComponent.CommonBattleHudComponent_C.ShowHUD");
		
		UCommonBattleHudComponent_C_ShowHUD_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonBattleHudComponent.CommonBattleHudComponent_C.UpdateHud
	 * 		Flags  -> ()
	 */
	void UCommonBattleHudComponent_C::UpdateHud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonBattleHudComponent.CommonBattleHudComponent_C.UpdateHud");
		
		UCommonBattleHudComponent_C_UpdateHud_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonBattleHudComponent.CommonBattleHudComponent_C.OnTick
	 * 		Flags  -> ()
	 */
	void UCommonBattleHudComponent_C::OnTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonBattleHudComponent.CommonBattleHudComponent_C.OnTick");
		
		UCommonBattleHudComponent_C_OnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonBattleHudComponent.CommonBattleHudComponent_C.DestroyHud
	 * 		Flags  -> ()
	 */
	void UCommonBattleHudComponent_C::DestroyHud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonBattleHudComponent.CommonBattleHudComponent_C.DestroyHud");
		
		UCommonBattleHudComponent_C_DestroyHud_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonBattleHudComponent.CommonBattleHudComponent_C.SetupHUD
	 * 		Flags  -> ()
	 */
	void UCommonBattleHudComponent_C::SetupHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonBattleHudComponent.CommonBattleHudComponent_C.SetupHUD");
		
		UCommonBattleHudComponent_C_SetupHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonBattleHudComponent.CommonBattleHudComponent_C.SetRayHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bRayHit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonBattleHudComponent_C::SetRayHit(bool bRayHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonBattleHudComponent.CommonBattleHudComponent_C.SetRayHit");
		
		UCommonBattleHudComponent_C_SetRayHit_Params params {};
		params.bRayHit = bRayHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonBattleHudComponent.CommonBattleHudComponent_C.AttackHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCritical                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonBattleHudComponent_C::AttackHit(bool IsCritical)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonBattleHudComponent.CommonBattleHudComponent_C.AttackHit");
		
		UCommonBattleHudComponent_C_AttackHit_Params params {};
		params.IsCritical = IsCritical;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonBattleHudComponent.CommonBattleHudComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UCommonBattleHudComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonBattleHudComponent.CommonBattleHudComponent_C.ReceiveBeginPlay");
		
		UCommonBattleHudComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonBattleHudComponent.CommonBattleHudComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonBattleHudComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonBattleHudComponent.CommonBattleHudComponent_C.ReceiveTick");
		
		UCommonBattleHudComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonBattleHudComponent.CommonBattleHudComponent_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonBattleHudComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonBattleHudComponent.CommonBattleHudComponent_C.ReceiveEndPlay");
		
		UCommonBattleHudComponent_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonBattleHudComponent.CommonBattleHudComponent_C.ExecuteUbergraph_CommonBattleHudComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonBattleHudComponent_C::ExecuteUbergraph_CommonBattleHudComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonBattleHudComponent.CommonBattleHudComponent_C.ExecuteUbergraph_CommonBattleHudComponent");
		
		UCommonBattleHudComponent_C_ExecuteUbergraph_CommonBattleHudComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonBattleHudComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonBattleHudComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CommonBattleHudComponent.CommonBattleHudComponent_C");
		return ptr;
	}

}


