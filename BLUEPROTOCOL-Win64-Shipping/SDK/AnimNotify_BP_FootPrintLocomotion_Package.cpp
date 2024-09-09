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
	 * 		Name   -> Function AnimNotify_BP_FootPrintLocomotion.AnimNotify_BP_FootPrintLocomotion_C.IsLocomotion
	 * 		Flags  -> ()
	 */
	bool UAnimNotify_BP_FootPrintLocomotion_C::IsLocomotion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotify_BP_FootPrintLocomotion.AnimNotify_BP_FootPrintLocomotion_C.IsLocomotion");
		
		UAnimNotify_BP_FootPrintLocomotion_C_IsLocomotion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimNotify_BP_FootPrintLocomotion.AnimNotify_BP_FootPrintLocomotion_C.GetFootprintType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBFootprintComponent*                       FPComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFootPrintType                                     FootPrintType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimNotify_BP_FootPrintLocomotion_C::GetFootprintType(class USBFootprintComponent* FPComponent, EFootPrintType* FootPrintType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotify_BP_FootPrintLocomotion.AnimNotify_BP_FootPrintLocomotion_C.GetFootprintType");
		
		UAnimNotify_BP_FootPrintLocomotion_C_GetFootprintType_Params params {};
		params.FPComponent = FPComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FootPrintType != nullptr)
			*FootPrintType = params.FootPrintType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimNotify_BP_FootPrintLocomotion.AnimNotify_BP_FootPrintLocomotion_C.Received_Notify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UAnimNotify_BP_FootPrintLocomotion_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotify_BP_FootPrintLocomotion.AnimNotify_BP_FootPrintLocomotion_C.Received_Notify");
		
		UAnimNotify_BP_FootPrintLocomotion_C_Received_Notify_Params params {};
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_BP_FootPrintLocomotion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_BP_FootPrintLocomotion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_BP_FootPrintLocomotion.AnimNotify_BP_FootPrintLocomotion_C");
		return ptr;
	}

}


