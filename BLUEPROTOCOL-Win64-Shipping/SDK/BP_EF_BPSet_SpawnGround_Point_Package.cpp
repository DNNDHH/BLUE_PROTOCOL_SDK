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
	 * 		Name   -> Function BP_EF_BPSet_SpawnGround_Point.BP_EF_BPSet_SpawnGround_Point_C.2VectorDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EF_BPSet_SpawnGround_Point_C::_2VectorDistance(const struct FVector& A, const struct FVector& B, float* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_BPSet_SpawnGround_Point.BP_EF_BPSet_SpawnGround_Point_C.2VectorDistance");
		
		ABP_EF_BPSet_SpawnGround_Point_C__2VectorDistance_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_BPSet_SpawnGround_Point.BP_EF_BPSet_SpawnGround_Point_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_EF_BPSet_SpawnGround_Point_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_BPSet_SpawnGround_Point.BP_EF_BPSet_SpawnGround_Point_C.ReceiveBeginPlay");
		
		ABP_EF_BPSet_SpawnGround_Point_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_BPSet_SpawnGround_Point.BP_EF_BPSet_SpawnGround_Point_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EF_BPSet_SpawnGround_Point_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_BPSet_SpawnGround_Point.BP_EF_BPSet_SpawnGround_Point_C.ReceiveTick");
		
		ABP_EF_BPSet_SpawnGround_Point_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_BPSet_SpawnGround_Point.BP_EF_BPSet_SpawnGround_Point_C.ExecuteUbergraph_BP_EF_BPSet_SpawnGround_Point
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EF_BPSet_SpawnGround_Point_C::ExecuteUbergraph_BP_EF_BPSet_SpawnGround_Point(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_BPSet_SpawnGround_Point.BP_EF_BPSet_SpawnGround_Point_C.ExecuteUbergraph_BP_EF_BPSet_SpawnGround_Point");
		
		ABP_EF_BPSet_SpawnGround_Point_C_ExecuteUbergraph_BP_EF_BPSet_SpawnGround_Point_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_EF_BPSet_SpawnGround_Point_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_EF_BPSet_SpawnGround_Point_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EF_BPSet_SpawnGround_Point.BP_EF_BPSet_SpawnGround_Point_C");
		return ptr;
	}

}


