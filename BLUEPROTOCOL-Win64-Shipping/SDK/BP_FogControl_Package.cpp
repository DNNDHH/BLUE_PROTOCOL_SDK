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
	 * 		Name   -> Function BP_FogControl.BP_FogControl_C.RemoveVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_FogControlVolume_C*                      FogControlVolume                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_FogControlVolume_C*                      PrimeVolume                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FogControl_C::RemoveVolume(class ABP_FogControlVolume_C* FogControlVolume, class ABP_FogControlVolume_C** PrimeVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControl.BP_FogControl_C.RemoveVolume");
		
		ABP_FogControl_C_RemoveVolume_Params params {};
		params.FogControlVolume = FogControlVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PrimeVolume != nullptr)
			*PrimeVolume = params.PrimeVolume;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControl.BP_FogControl_C.AddActivatedVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_FogControlVolume_C*                      FogControlVolume                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FogControl_C::AddActivatedVolume(class ABP_FogControlVolume_C* FogControlVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControl.BP_FogControl_C.AddActivatedVolume");
		
		ABP_FogControl_C_AddActivatedVolume_Params params {};
		params.FogControlVolume = FogControlVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControl.BP_FogControl_C.UpdateFogForDynamicSky
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFogControlCurveParam                       CurveParam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVolumetricFogControlParam                  VolumetricParam                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HueShift                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SaturationScale                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ColorValueScale                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FogControl_C::UpdateFogForDynamicSky(float InTime, const struct FFogControlCurveParam& CurveParam, const struct FVolumetricFogControlParam& VolumetricParam, float HueShift, float SaturationScale, float ColorValueScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControl.BP_FogControl_C.UpdateFogForDynamicSky");
		
		ABP_FogControl_C_UpdateFogForDynamicSky_Params params {};
		params.InTime = InTime;
		params.CurveParam = CurveParam;
		params.VolumetricParam = VolumetricParam;
		params.HueShift = HueShift;
		params.SaturationScale = SaturationScale;
		params.ColorValueScale = ColorValueScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControl.BP_FogControl_C.Lerp__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_FogControl_C::Lerp__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControl.BP_FogControl_C.Lerp__FinishedFunc");
		
		ABP_FogControl_C_Lerp__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControl.BP_FogControl_C.Lerp__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_FogControl_C::Lerp__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControl.BP_FogControl_C.Lerp__UpdateFunc");
		
		ABP_FogControl_C_Lerp__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControl.BP_FogControl_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_FogControl_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControl.BP_FogControl_C.ReceiveBeginPlay");
		
		ABP_FogControl_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControl.BP_FogControl_C.StartFogControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_FogControlVolume_C*                      ControlVolume                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FogControl_C::StartFogControl(class ABP_FogControlVolume_C* ControlVolume, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControl.BP_FogControl_C.StartFogControl");
		
		ABP_FogControl_C_StartFogControl_Params params {};
		params.ControlVolume = ControlVolume;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControl.BP_FogControl_C.SetCurrentParam
	 * 		Flags  -> ()
	 */
	void ABP_FogControl_C::SetCurrentParam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControl.BP_FogControl_C.SetCurrentParam");
		
		ABP_FogControl_C_SetCurrentParam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControl.BP_FogControl_C.ExecuteUbergraph_BP_FogControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FogControl_C::ExecuteUbergraph_BP_FogControl(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControl.BP_FogControl_C.ExecuteUbergraph_BP_FogControl");
		
		ABP_FogControl_C_ExecuteUbergraph_BP_FogControl_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FogControl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FogControl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FogControl.BP_FogControl_C");
		return ptr;
	}

}


