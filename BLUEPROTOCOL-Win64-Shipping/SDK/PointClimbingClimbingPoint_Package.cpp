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
	 * 		Name   -> Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.SetPointLocation2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPointClimbingClimbingPoint_C::SetPointLocation2D(const struct FVector2D& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.SetPointLocation2D");
		
		UPointClimbingClimbingPoint_C_SetPointLocation2D_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.SetPointLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Condition                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPointClimbingClimbingPoint_C::SetPointLocation(const struct FVector& Location, bool* Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.SetPointLocation");
		
		UPointClimbingClimbingPoint_C_SetPointLocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Condition != nullptr)
			*Condition = params.Condition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPointClimbingClimbingPoint_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.PreConstruct");
		
		UPointClimbingClimbingPoint_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.ExecuteUbergraph_PointClimbingClimbingPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPointClimbingClimbingPoint_C::ExecuteUbergraph_PointClimbingClimbingPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.ExecuteUbergraph_PointClimbingClimbingPoint");
		
		UPointClimbingClimbingPoint_C_ExecuteUbergraph_PointClimbingClimbingPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPointClimbingClimbingPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPointClimbingClimbingPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PointClimbingClimbingPoint.PointClimbingClimbingPoint_C");
		return ptr;
	}

}


