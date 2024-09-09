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
	 * 		Name   -> Function BP_ProjectilePath.BP_ProjectilePath_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ProjectilePath_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectilePath.BP_ProjectilePath_C.UserConstructionScript");
		
		ABP_ProjectilePath_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectilePath.BP_ProjectilePath_C.RecalcSplinePath
	 * 		Flags  -> ()
	 */
	void ABP_ProjectilePath_C::RecalcSplinePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectilePath.BP_ProjectilePath_C.RecalcSplinePath");
		
		ABP_ProjectilePath_C_RecalcSplinePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectilePath.BP_ProjectilePath_C.InitBuildSplineMesh
	 * 		Flags  -> ()
	 */
	void ABP_ProjectilePath_C::InitBuildSplineMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectilePath.BP_ProjectilePath_C.InitBuildSplineMesh");
		
		ABP_ProjectilePath_C_InitBuildSplineMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectilePath.BP_ProjectilePath_C.ExecuteUbergraph_BP_ProjectilePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProjectilePath_C::ExecuteUbergraph_BP_ProjectilePath(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectilePath.BP_ProjectilePath_C.ExecuteUbergraph_BP_ProjectilePath");
		
		ABP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ProjectilePath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ProjectilePath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectilePath.BP_ProjectilePath_C");
		return ptr;
	}

}


