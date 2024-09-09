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
	 * 		Name   -> Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.GetVariableMaterialInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstance*                           SourceMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    MaterialInstanceDynamic                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SchedulableMaterialParam_C::GetVariableMaterialInstance(class UMaterialInstance* SourceMaterial, class UMaterialInstanceDynamic** MaterialInstanceDynamic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.GetVariableMaterialInstance");
		
		ABP_SchedulableMaterialParam_C_GetVariableMaterialInstance_Params params {};
		params.SourceMaterial = SourceMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaterialInstanceDynamic != nullptr)
			*MaterialInstanceDynamic = params.MaterialInstanceDynamic;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.StartRoutine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UMaterialInstance*>                   SourceMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        ParameterName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Intencity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SwitchOnTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SwitchOffTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SchedulableMaterialParam_C::StartRoutine(TArray<class UMaterialInstance*>* SourceMaterial, const class FName& ParameterName, float Intencity, float Duration, int32_t SwitchOnTime, int32_t SwitchOffTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.StartRoutine");
		
		ABP_SchedulableMaterialParam_C_StartRoutine_Params params {};
		params.ParameterName = ParameterName;
		params.Intencity = Intencity;
		params.Duration = Duration;
		params.SwitchOnTime = SwitchOnTime;
		params.SwitchOffTime = SwitchOffTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SourceMaterial != nullptr)
			*SourceMaterial = params.SourceMaterial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SchedulableMaterialParam_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.ReceiveBeginPlay");
		
		ABP_SchedulableMaterialParam_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SchedulableMaterialParam_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.ReceiveTick");
		
		ABP_SchedulableMaterialParam_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.ExecuteUbergraph_BP_SchedulableMaterialParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SchedulableMaterialParam_C::ExecuteUbergraph_BP_SchedulableMaterialParam(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.ExecuteUbergraph_BP_SchedulableMaterialParam");
		
		ABP_SchedulableMaterialParam_C_ExecuteUbergraph_BP_SchedulableMaterialParam_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SchedulableMaterialParam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SchedulableMaterialParam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C");
		return ptr;
	}

}


