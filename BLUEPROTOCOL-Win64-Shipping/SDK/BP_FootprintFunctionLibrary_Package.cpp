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
	 * 		Name   -> Function BP_FootprintFunctionLibrary.BP_FootprintFunctionLibrary_C.ParticleRotationToDecalRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    ParticleRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUseActorRotation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    DecalRotation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FootprintFunctionLibrary_C::ParticleRotationToDecalRotation(const struct FRotator& ParticleRotation, bool bUseActorRotation, class AActor* Actor, class UObject* __WorldContext, struct FRotator* DecalRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FootprintFunctionLibrary.BP_FootprintFunctionLibrary_C.ParticleRotationToDecalRotation");
		
		UBP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation_Params params {};
		params.ParticleRotation = ParticleRotation;
		params.bUseActorRotation = bUseActorRotation;
		params.Actor = Actor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DecalRotation != nullptr)
			*DecalRotation = params.DecalRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FootprintFunctionLibrary.BP_FootprintFunctionLibrary_C.SocketRotationToParticleRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    SocketRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ParticleRotation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FootprintFunctionLibrary_C::SocketRotationToParticleRotation(const struct FRotator& SocketRotation, class UObject* __WorldContext, struct FRotator* ParticleRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FootprintFunctionLibrary.BP_FootprintFunctionLibrary_C.SocketRotationToParticleRotation");
		
		UBP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation_Params params {};
		params.SocketRotation = SocketRotation;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParticleRotation != nullptr)
			*ParticleRotation = params.ParticleRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_FootprintFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FootprintFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FootprintFunctionLibrary.BP_FootprintFunctionLibrary_C");
		return ptr;
	}

}


