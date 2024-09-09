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
	 * 		Name   -> Function BP_EF_Library.BP_EF_Library_C.IsShouldExecOnClientOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsExec                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_EF_Library_C::IsShouldExecOnClientOnly(class UObject* __WorldContext, bool* IsExec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Library.BP_EF_Library_C.IsShouldExecOnClientOnly");
		
		UBP_EF_Library_C_IsShouldExecOnClientOnly_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsExec != nullptr)
			*IsExec = params.IsExec;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Library.BP_EF_Library_C.IsShouldExecOnServerOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsExec                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_EF_Library_C::IsShouldExecOnServerOnly(class UObject* __WorldContext, bool* IsExec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Library.BP_EF_Library_C.IsShouldExecOnServerOnly");
		
		UBP_EF_Library_C_IsShouldExecOnServerOnly_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsExec != nullptr)
			*IsExec = params.IsExec;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Library.BP_EF_Library_C.IsIntervalExec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RefTotalDeltaTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ExecIntervalTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsExec                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_EF_Library_C::IsIntervalExec(float* RefTotalDeltaTime, float DeltaTime, float ExecIntervalTime, class UObject* __WorldContext, bool* IsExec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Library.BP_EF_Library_C.IsIntervalExec");
		
		UBP_EF_Library_C_IsIntervalExec_Params params {};
		params.DeltaTime = DeltaTime;
		params.ExecIntervalTime = ExecIntervalTime;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RefTotalDeltaTime != nullptr)
			*RefTotalDeltaTime = params.RefTotalDeltaTime;
		if (IsExec != nullptr)
			*IsExec = params.IsExec;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_EF_Library_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_EF_Library_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EF_Library.BP_EF_Library_C");
		return ptr;
	}

}


