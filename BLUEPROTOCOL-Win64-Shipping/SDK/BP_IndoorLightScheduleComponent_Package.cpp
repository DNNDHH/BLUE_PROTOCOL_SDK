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
	 * 		Name   -> Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.SetIndoorLightWithCurrentValue
	 * 		Flags  -> ()
	 */
	void UBP_IndoorLightScheduleComponent_C::SetIndoorLightWithCurrentValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.SetIndoorLightWithCurrentValue");
		
		UBP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.CalcFadeColorAndTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentTimeOfDay                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentId                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentFadeId                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rate                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                CurrentColor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentIntensity                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentEmmisiveScale                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_IndoorLightScheduleComponent_C::CalcFadeColorAndTime(int32_t CurrentTimeOfDay, int32_t* CurrentId, int32_t* CurrentFadeId, float* Rate, struct FLinearColor* CurrentColor, float* CurrentIntensity, float* CurrentEmmisiveScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.CalcFadeColorAndTime");
		
		UBP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime_Params params {};
		params.CurrentTimeOfDay = CurrentTimeOfDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentId != nullptr)
			*CurrentId = params.CurrentId;
		if (CurrentFadeId != nullptr)
			*CurrentFadeId = params.CurrentFadeId;
		if (Rate != nullptr)
			*Rate = params.Rate;
		if (CurrentColor != nullptr)
			*CurrentColor = params.CurrentColor;
		if (CurrentIntensity != nullptr)
			*CurrentIntensity = params.CurrentIntensity;
		if (CurrentEmmisiveScale != nullptr)
			*CurrentEmmisiveScale = params.CurrentEmmisiveScale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.GetNowMinOfDay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinOfday                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_IndoorLightScheduleComponent_C::GetNowMinOfDay(int32_t* MinOfday)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.GetNowMinOfDay");
		
		UBP_IndoorLightScheduleComponent_C_GetNowMinOfDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinOfday != nullptr)
			*MinOfday = params.MinOfday;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.GetNewFadeParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            End                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_IndoorLightScheduleComponent_C::GetNewFadeParam(int32_t Start, int32_t End, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.GetNewFadeParam");
		
		UBP_IndoorLightScheduleComponent_C_GetNewFadeParam_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_IndoorLightScheduleComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.ReceiveTick");
		
		UBP_IndoorLightScheduleComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.InitMaterialSchedule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UMeshComponent*>                      MeshComponents                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		bool                                               Sw                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_IndoorLightScheduleComponent_C::InitMaterialSchedule(TArray<class UMeshComponent*> MeshComponents, bool Sw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.InitMaterialSchedule");
		
		UBP_IndoorLightScheduleComponent_C_InitMaterialSchedule_Params params {};
		params.MeshComponents = MeshComponents;
		params.Sw = Sw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.UpdateLightSchedule
	 * 		Flags  -> ()
	 */
	void UBP_IndoorLightScheduleComponent_C::UpdateLightSchedule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.UpdateLightSchedule");
		
		UBP_IndoorLightScheduleComponent_C_UpdateLightSchedule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.FadeStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NowRate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_IndoorLightScheduleComponent_C::FadeStart(int32_t Index, float NowRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.FadeStart");
		
		UBP_IndoorLightScheduleComponent_C_FadeStart_Params params {};
		params.Index = Index;
		params.NowRate = NowRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_IndoorLightScheduleComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.ReceiveBeginPlay");
		
		UBP_IndoorLightScheduleComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.ClearArrays
	 * 		Flags  -> ()
	 */
	void UBP_IndoorLightScheduleComponent_C::ClearArrays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.ClearArrays");
		
		UBP_IndoorLightScheduleComponent_C_ClearArrays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.UpdateEditorPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeRate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Sw                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_IndoorLightScheduleComponent_C::UpdateEditorPreview(float TimeRate, bool Sw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.UpdateEditorPreview");
		
		UBP_IndoorLightScheduleComponent_C_UpdateEditorPreview_Params params {};
		params.TimeRate = TimeRate;
		params.Sw = Sw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.SetLightValueByMinOfDay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinOfday                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_IndoorLightScheduleComponent_C::SetLightValueByMinOfDay(int32_t MinOfday)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.SetLightValueByMinOfDay");
		
		UBP_IndoorLightScheduleComponent_C_SetLightValueByMinOfDay_Params params {};
		params.MinOfday = MinOfday;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.ExecuteUbergraph_BP_IndoorLightScheduleComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_IndoorLightScheduleComponent_C::ExecuteUbergraph_BP_IndoorLightScheduleComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.ExecuteUbergraph_BP_IndoorLightScheduleComponent");
		
		UBP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_IndoorLightScheduleComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_IndoorLightScheduleComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C");
		return ptr;
	}

}


