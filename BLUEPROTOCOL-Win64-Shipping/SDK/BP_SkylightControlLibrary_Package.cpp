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
	 * 		Name   -> Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.SetSkyLightDefaultLightParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_DynamicSky_C*                            DynamicSky                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SkylightControlLibrary_C::SetSkyLightDefaultLightParam(class ABP_DynamicSky_C* DynamicSky, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.SetSkyLightDefaultLightParam");
		
		UBP_SkylightControlLibrary_C_SetSkyLightDefaultLightParam_Params params {};
		params.DynamicSky = DynamicSky;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.SetSkyLightControlLightParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_DynamicSky_C*                            DynamicSky                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCurveLinearColor*                           SkyLightColorOverride                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCurveFloat*                                 SkyLightIntensityOverride                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCurveFloat*                                 SkyLightToonIntensityOverride                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCurveFloat*                                 SkyLightToonSaturationScaleOverride                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SkylightControlLibrary_C::SetSkyLightControlLightParam(class ABP_DynamicSky_C* DynamicSky, class UCurveLinearColor* SkyLightColorOverride, class UCurveFloat* SkyLightIntensityOverride, class UCurveFloat* SkyLightToonIntensityOverride, class UCurveFloat* SkyLightToonSaturationScaleOverride, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.SetSkyLightControlLightParam");
		
		UBP_SkylightControlLibrary_C_SetSkyLightControlLightParam_Params params {};
		params.DynamicSky = DynamicSky;
		params.SkyLightColorOverride = SkyLightColorOverride;
		params.SkyLightIntensityOverride = SkyLightIntensityOverride;
		params.SkyLightToonIntensityOverride = SkyLightToonIntensityOverride;
		params.SkyLightToonSaturationScaleOverride = SkyLightToonSaturationScaleOverride;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.UpdateSkyLightPreviewFlag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_DynamicSky_C*                            DynamicSky                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PreviewFlagChange                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SkylightControlLibrary_C::UpdateSkyLightPreviewFlag(class ABP_DynamicSky_C* DynamicSky, class UObject* __WorldContext, bool* PreviewFlagChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.UpdateSkyLightPreviewFlag");
		
		UBP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag_Params params {};
		params.DynamicSky = DynamicSky;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PreviewFlagChange != nullptr)
			*PreviewFlagChange = params.PreviewFlagChange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.UpdateSkyLightToonIntensityScaleDefault
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_DynamicSky_C*                            DynamicSky                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SkylightControlLibrary_C::UpdateSkyLightToonIntensityScaleDefault(class ABP_DynamicSky_C* DynamicSky, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.UpdateSkyLightToonIntensityScaleDefault");
		
		UBP_SkylightControlLibrary_C_UpdateSkyLightToonIntensityScaleDefault_Params params {};
		params.DynamicSky = DynamicSky;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SkylightControlLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SkylightControlLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkylightControlLibrary.BP_SkylightControlLibrary_C");
		return ptr;
	}

}


