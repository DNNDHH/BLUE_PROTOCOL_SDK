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
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.UpdateDirectionalLightControlForEditor
	 * 		Flags  -> ()
	 */
	void ABP_DynamicSky_C::UpdateDirectionalLightControlForEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.UpdateDirectionalLightControlForEditor");
		
		ABP_DynamicSky_C_UpdateDirectionalLightControlForEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.SetDisableUpdateHeightGradationColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInDisable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DynamicSky_C::SetDisableUpdateHeightGradationColor(bool bInDisable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.SetDisableUpdateHeightGradationColor");
		
		ABP_DynamicSky_C_SetDisableUpdateHeightGradationColor_Params params {};
		params.bInDisable = bInDisable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.Should Update Height Gradation Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUpdate                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DynamicSky_C::ShouldUpdateHeightGradationColor(bool* bUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.Should Update Height Gradation Color");
		
		ABP_DynamicSky_C_ShouldUpdateHeightGradationColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bUpdate != nullptr)
			*bUpdate = params.bUpdate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.InitDinamicMaterialInstance
	 * 		Flags  -> ()
	 */
	void ABP_DynamicSky_C::InitDinamicMaterialInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.InitDinamicMaterialInstance");
		
		ABP_DynamicSky_C_InitDinamicMaterialInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.UpdateOcean
	 * 		Flags  -> ()
	 */
	void ABP_DynamicSky_C::UpdateOcean()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.UpdateOcean");
		
		ABP_DynamicSky_C_UpdateOcean_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.GetDynamicSkyFogControlParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFogControlParam                            FogControlParam                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::GetDynamicSkyFogControlParam(float Time, struct FFogControlParam* FogControlParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.GetDynamicSkyFogControlParam");
		
		ABP_DynamicSky_C_GetDynamicSkyFogControlParam_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FogControlParam != nullptr)
			*FogControlParam = params.FogControlParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.Update LUT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::UpdateLUT(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.Update LUT");
		
		ABP_DynamicSky_C_UpdateLUT_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.UpdateLightSchedule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Override                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DynamicSky_C::UpdateLightSchedule(float Time, bool Override)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.UpdateLightSchedule");
		
		ABP_DynamicSky_C_UpdateLightSchedule_Params params {};
		params.Time = Time;
		params.Override = Override;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.UpdateDynamicSkyForEditor
	 * 		Flags  -> ()
	 */
	void ABP_DynamicSky_C::UpdateDynamicSkyForEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.UpdateDynamicSkyForEditor");
		
		ABP_DynamicSky_C_UpdateDynamicSkyForEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.UpdateRimLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::UpdateRimLight(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.UpdateRimLight");
		
		ABP_DynamicSky_C_UpdateRimLight_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.UpdateDistantFog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::UpdateDistantFog(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.UpdateDistantFog");
		
		ABP_DynamicSky_C_UpdateDistantFog_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.UpdateStageShadow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::UpdateStageShadow(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.UpdateStageShadow");
		
		ABP_DynamicSky_C_UpdateStageShadow_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.UpdateLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::UpdateLight(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.UpdateLight");
		
		ABP_DynamicSky_C_UpdateLight_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.UpdateFog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::UpdateFog(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.UpdateFog");
		
		ABP_DynamicSky_C_UpdateFog_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.UpdateSkyLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::UpdateSkyLight(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.UpdateSkyLight");
		
		ABP_DynamicSky_C_UpdateSkyLight_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.SetMainLightContribution
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LightIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MainLightContribution                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::SetMainLightContribution(int32_t LightIndex, float MainLightContribution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.SetMainLightContribution");
		
		ABP_DynamicSky_C_SetMainLightContribution_Params params {};
		params.LightIndex = LightIndex;
		params.MainLightContribution = MainLightContribution;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.GetLightNumInv
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              LightNumInv                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::GetLightNumInv(float* LightNumInv)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.GetLightNumInv");
		
		ABP_DynamicSky_C_GetLightNumInv_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LightNumInv != nullptr)
			*LightNumInv = params.LightNumInv;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.GetLightIntensity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LightIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LightIntensity                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::GetLightIntensity(int32_t LightIndex, float* LightIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.GetLightIntensity");
		
		ABP_DynamicSky_C_GetLightIntensity_Params params {};
		params.LightIndex = LightIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LightIntensity != nullptr)
			*LightIntensity = params.LightIntensity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.GetLightColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LightIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                LightColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::GetLightColor(int32_t LightIndex, struct FLinearColor* LightColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.GetLightColor");
		
		ABP_DynamicSky_C_GetLightColor_Params params {};
		params.LightIndex = LightIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LightColor != nullptr)
			*LightColor = params.LightColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.GetLightVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LightIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                LightVector                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::GetLightVector(int32_t LightIndex, struct FLinearColor* LightVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.GetLightVector");
		
		ABP_DynamicSky_C_GetLightVector_Params params {};
		params.LightIndex = LightIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LightVector != nullptr)
			*LightVector = params.LightVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.UpdateMPC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Intime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::UpdateMPC(float Intime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.UpdateMPC");
		
		ABP_DynamicSky_C_UpdateMPC_Params params {};
		params.Intime = Intime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_DynamicSky_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.UserConstructionScript");
		
		ABP_DynamicSky_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.SkyLightControlTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_DynamicSky_C::SkyLightControlTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.SkyLightControlTimeline__FinishedFunc");
		
		ABP_DynamicSky_C_SkyLightControlTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.SkyLightControlTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_DynamicSky_C::SkyLightControlTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.SkyLightControlTimeline__UpdateFunc");
		
		ABP_DynamicSky_C_SkyLightControlTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.ReceiveTick");
		
		ABP_DynamicSky_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_DynamicSky_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.ReceiveBeginPlay");
		
		ABP_DynamicSky_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.StartSkyLightControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SkyLightColorTgt                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SkyLightIntensityTgt                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SkyLightToonIntensityScale                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SkyLightToonSaturationScale                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LerpTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::StartSkyLightControl(float SkyLightColorTgt, float SkyLightIntensityTgt, float SkyLightToonIntensityScale, float SkyLightToonSaturationScale, float LerpTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.StartSkyLightControl");
		
		ABP_DynamicSky_C_StartSkyLightControl_Params params {};
		params.SkyLightColorTgt = SkyLightColorTgt;
		params.SkyLightIntensityTgt = SkyLightIntensityTgt;
		params.SkyLightToonIntensityScale = SkyLightToonIntensityScale;
		params.SkyLightToonSaturationScale = SkyLightToonSaturationScale;
		params.LerpTime = LerpTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.UpdateSkySphere
	 * 		Flags  -> ()
	 */
	void ABP_DynamicSky_C::UpdateSkySphere()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.UpdateSkySphere");
		
		ABP_DynamicSky_C_UpdateSkySphere_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.UpdateLightsImmidiate
	 * 		Flags  -> ()
	 */
	void ABP_DynamicSky_C::UpdateLightsImmidiate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.UpdateLightsImmidiate");
		
		ABP_DynamicSky_C_UpdateLightsImmidiate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.FixDynamicSkyForDemo
	 * 		Flags  -> ()
	 */
	void ABP_DynamicSky_C::FixDynamicSkyForDemo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.FixDynamicSkyForDemo");
		
		ABP_DynamicSky_C_FixDynamicSkyForDemo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.RemoveSkyLightControlVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SkyLightControlVolume_C*                 Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::RemoveSkyLightControlVolume(class ABP_SkyLightControlVolume_C* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.RemoveSkyLightControlVolume");
		
		ABP_DynamicSky_C_RemoveSkyLightControlVolume_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.AddSkyLightControlVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SkyLightControlVolume_C*                 Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::AddSkyLightControlVolume(class ABP_SkyLightControlVolume_C* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.AddSkyLightControlVolume");
		
		ABP_DynamicSky_C_AddSkyLightControlVolume_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DynamicSky.BP_DynamicSky_C.ExecuteUbergraph_BP_DynamicSky
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DynamicSky_C::ExecuteUbergraph_BP_DynamicSky(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicSky.BP_DynamicSky_C.ExecuteUbergraph_BP_DynamicSky");
		
		ABP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DynamicSky_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DynamicSky_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DynamicSky.BP_DynamicSky_C");
		return ptr;
	}

}


