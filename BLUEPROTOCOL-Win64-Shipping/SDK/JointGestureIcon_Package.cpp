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
	 * 		Name   -> Function JointGestureIcon.JointGestureIcon_C.CheckTargetPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                          InTargetCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UJointGestureIcon_C::CheckTargetPlayer(class ASBPlayerCharacter* InTargetCharacter, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JointGestureIcon.JointGestureIcon_C.CheckTargetPlayer");
		
		UJointGestureIcon_C_CheckTargetPlayer_Params params {};
		params.InTargetCharacter = InTargetCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JointGestureIcon.JointGestureIcon_C.Update Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UJointGestureIcon_C::UpdateIcon(class ASBCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JointGestureIcon.JointGestureIcon_C.Update Icon");
		
		UJointGestureIcon_C_UpdateIcon_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJointGestureIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJointGestureIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass JointGestureIcon.JointGestureIcon_C");
		return ptr;
	}

}


