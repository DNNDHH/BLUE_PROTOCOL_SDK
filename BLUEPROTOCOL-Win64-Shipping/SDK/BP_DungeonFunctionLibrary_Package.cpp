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
	 * 		Name   -> Function BP_DungeonFunctionLibrary.BP_DungeonFunctionLibrary_C.Find Class Actor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      TargetClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorObject                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DungeonFunctionLibrary_C::FindClassActor(class UObject* Object, class UClass* TargetClass, class UObject* __WorldContext, class AActor** ActorObject, int32_t* Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DungeonFunctionLibrary.BP_DungeonFunctionLibrary_C.Find Class Actor");
		
		UBP_DungeonFunctionLibrary_C_FindClassActor_Params params {};
		params.Object = Object;
		params.TargetClass = TargetClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorObject != nullptr)
			*ActorObject = params.ActorObject;
		if (Num != nullptr)
			*Num = params.Num;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DungeonFunctionLibrary.BP_DungeonFunctionLibrary_C.ResetPlayerAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                          PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DungeonFunctionLibrary_C::ResetPlayerAction(class ASBPlayerCharacter* PlayerCharacter, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DungeonFunctionLibrary.BP_DungeonFunctionLibrary_C.ResetPlayerAction");
		
		UBP_DungeonFunctionLibrary_C_ResetPlayerAction_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DungeonFunctionLibrary.BP_DungeonFunctionLibrary_C.GetPlayerStartLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerStart*                                PlayerStart                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DistFromStart                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DungeonFunctionLibrary_C::GetPlayerStartLocation(class APawn* Pawn, class UObject* __WorldContext, class APlayerStart** PlayerStart, float* DistFromStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DungeonFunctionLibrary.BP_DungeonFunctionLibrary_C.GetPlayerStartLocation");
		
		UBP_DungeonFunctionLibrary_C_GetPlayerStartLocation_Params params {};
		params.Pawn = Pawn;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerStart != nullptr)
			*PlayerStart = params.PlayerStart;
		if (DistFromStart != nullptr)
			*DistFromStart = params.DistFromStart;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DungeonFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DungeonFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DungeonFunctionLibrary.BP_DungeonFunctionLibrary_C");
		return ptr;
	}

}


