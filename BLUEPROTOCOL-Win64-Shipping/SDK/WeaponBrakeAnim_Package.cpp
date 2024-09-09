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
	 * 		Name   -> Function WeaponBrakeAnim.WeaponBrakeAnim_C.PlayAnim
	 * 		Flags  -> ()
	 */
	void UWeaponBrakeAnim_C::PlayAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponBrakeAnim.WeaponBrakeAnim_C.PlayAnim");
		
		UWeaponBrakeAnim_C_PlayAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponBrakeAnim.WeaponBrakeAnim_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponBrakeAnim_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponBrakeAnim.WeaponBrakeAnim_C.OnAnimationFinished");
		
		UWeaponBrakeAnim_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponBrakeAnim.WeaponBrakeAnim_C.EnableQuit
	 * 		Flags  -> ()
	 */
	void UWeaponBrakeAnim_C::EnableQuit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponBrakeAnim.WeaponBrakeAnim_C.EnableQuit");
		
		UWeaponBrakeAnim_C_EnableQuit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponBrakeAnim.WeaponBrakeAnim_C.Replay
	 * 		Flags  -> ()
	 */
	void UWeaponBrakeAnim_C::Replay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponBrakeAnim.WeaponBrakeAnim_C.Replay");
		
		UWeaponBrakeAnim_C_Replay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponBrakeAnim.WeaponBrakeAnim_C.ExecuteUbergraph_WeaponBrakeAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponBrakeAnim_C::ExecuteUbergraph_WeaponBrakeAnim(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponBrakeAnim.WeaponBrakeAnim_C.ExecuteUbergraph_WeaponBrakeAnim");
		
		UWeaponBrakeAnim_C_ExecuteUbergraph_WeaponBrakeAnim_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponBrakeAnim.WeaponBrakeAnim_C.OnAnimFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWeaponBrakeAnim_C::OnAnimFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponBrakeAnim.WeaponBrakeAnim_C.OnAnimFinished__DelegateSignature");
		
		UWeaponBrakeAnim_C_OnAnimFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponBrakeAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponBrakeAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponBrakeAnim.WeaponBrakeAnim_C");
		return ptr;
	}

}


