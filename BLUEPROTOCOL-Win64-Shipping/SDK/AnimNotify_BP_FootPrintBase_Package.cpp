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
	 * 		Name   -> Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.IsLocomotion
	 * 		Flags  -> ()
	 */
	bool UAnimNotify_BP_FootPrintBase_C::IsLocomotion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.IsLocomotion");
		
		UAnimNotify_BP_FootPrintBase_C_IsLocomotion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.IsDisableSound
	 * 		Flags  -> ()
	 */
	bool UAnimNotify_BP_FootPrintBase_C::IsDisableSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.IsDisableSound");
		
		UAnimNotify_BP_FootPrintBase_C_IsDisableSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.IsDisableEffect
	 * 		Flags  -> ()
	 */
	bool UAnimNotify_BP_FootPrintBase_C::IsDisableEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.IsDisableEffect");
		
		UAnimNotify_BP_FootPrintBase_C_IsDisableEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.GetSocketName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBFootprintComponent*                       FPComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SocketName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimNotify_BP_FootPrintBase_C::GetSocketName(class USBFootprintComponent* FPComponent, class FName* SocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.GetSocketName");
		
		UAnimNotify_BP_FootPrintBase_C_GetSocketName_Params params {};
		params.FPComponent = FPComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SocketName != nullptr)
			*SocketName = params.SocketName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.GetFootprintType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBFootprintComponent*                       FPComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFootPrintType                                     FootPrintType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimNotify_BP_FootPrintBase_C::GetFootprintType(class USBFootprintComponent* FPComponent, EFootPrintType* FootPrintType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.GetFootprintType");
		
		UAnimNotify_BP_FootPrintBase_C_GetFootprintType_Params params {};
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
	 * 		Name   -> Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.Proc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimNotify_BP_FootPrintBase_C::Proc(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.Proc");
		
		UAnimNotify_BP_FootPrintBase_C_Proc_Params params {};
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.CreateFootprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSurfaceFootprintSetting*                  FootprintSetting                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBFootprintComponent*                       FPComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      SurfaceType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimNotify_BP_FootPrintBase_C::CreateFootprint(class USBSurfaceFootprintSetting* FootprintSetting, class AActor* Actor, class USBFootprintComponent* FPComponent, unsigned char SurfaceType, const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.CreateFootprint");
		
		UAnimNotify_BP_FootPrintBase_C_CreateFootprint_Params params {};
		params.FootprintSetting = FootprintSetting;
		params.Actor = Actor;
		params.FPComponent = FPComponent;
		params.SurfaceType = SurfaceType;
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.Received_Notify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UAnimNotify_BP_FootPrintBase_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.Received_Notify");
		
		UAnimNotify_BP_FootPrintBase_C_Received_Notify_Params params {};
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
	 * 		Name   -> PredefinedFunction UAnimNotify_BP_FootPrintBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_BP_FootPrintBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C");
		return ptr;
	}

}


