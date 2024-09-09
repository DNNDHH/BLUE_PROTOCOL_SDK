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
	 * 		Name   -> Function EnpcHairAnimLayerInterface.EnpcHairAnimLayerInterface_C.HairLayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FVector                                     Acceralation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPoseLink                                   HairLayer                                                  (Parm, OutParm, NoDestructor)
	 */
	void UEnpcHairAnimLayerInterface_C::HairLayer(const struct FPoseLink& InPose, const struct FVector& Acceralation, bool Active, struct FPoseLink* HairLayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnpcHairAnimLayerInterface.EnpcHairAnimLayerInterface_C.HairLayer");
		
		UEnpcHairAnimLayerInterface_C_HairLayer_Params params {};
		params.InPose = InPose;
		params.Acceralation = Acceralation;
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HairLayer != nullptr)
			*HairLayer = params.HairLayer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnpcHairAnimLayerInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnpcHairAnimLayerInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass EnpcHairAnimLayerInterface.EnpcHairAnimLayerInterface_C");
		return ptr;
	}

}


