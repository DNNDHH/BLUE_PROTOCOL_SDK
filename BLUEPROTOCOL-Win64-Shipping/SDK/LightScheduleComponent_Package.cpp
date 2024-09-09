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
	 * 		Name   -> Function LightScheduleComponent.LightScheduleComponent_C.EditorPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeRate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Sw                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ULightScheduleComponent_C::EditorPreview(float TimeRate, bool Sw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightScheduleComponent.LightScheduleComponent_C.EditorPreview");
		
		ULightScheduleComponent_C_EditorPreview_Params params {};
		params.TimeRate = TimeRate;
		params.Sw = Sw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LightScheduleComponent.LightScheduleComponent_C.ClearVariableMaterials
	 * 		Flags  -> ()
	 */
	void ULightScheduleComponent_C::ClearVariableMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightScheduleComponent.LightScheduleComponent_C.ClearVariableMaterials");
		
		ULightScheduleComponent_C_ClearVariableMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LightScheduleComponent.LightScheduleComponent_C.GetVariableMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightScheduleComponent_C::GetVariableMaterial(int32_t Index, class UMaterialInstanceDynamic** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightScheduleComponent.LightScheduleComponent_C.GetVariableMaterial");
		
		ULightScheduleComponent_C_GetVariableMaterial_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LightScheduleComponent.LightScheduleComponent_C.Set Variable Light All
	 * 		Flags  -> ()
	 */
	void ULightScheduleComponent_C::SetVariableLightAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightScheduleComponent.LightScheduleComponent_C.Set Variable Light All");
		
		ULightScheduleComponent_C_SetVariableLightAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LightScheduleComponent.LightScheduleComponent_C.SetVariableMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    MaterialInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ParameterName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Intencity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ArrayIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightScheduleComponent_C::SetVariableMaterial(class UMaterialInstanceDynamic* MaterialInstance, const class FName& ParameterName, float Intencity, int32_t* ArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightScheduleComponent.LightScheduleComponent_C.SetVariableMaterial");
		
		ULightScheduleComponent_C_SetVariableMaterial_Params params {};
		params.MaterialInstance = MaterialInstance;
		params.ParameterName = ParameterName;
		params.Intencity = Intencity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayIndex != nullptr)
			*ArrayIndex = params.ArrayIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LightScheduleComponent.LightScheduleComponent_C.SetVariableLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULightComponent*                             LightComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightScheduleComponent_C::SetVariableLight(class ULightComponent* LightComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightScheduleComponent.LightScheduleComponent_C.SetVariableLight");
		
		ULightScheduleComponent_C_SetVariableLight_Params params {};
		params.LightComponent = LightComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LightScheduleComponent.LightScheduleComponent_C.CheckTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            PrevTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CheckedTime                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightScheduleComponent_C::CheckTime(TArray<int32_t>* Array, int32_t PrevTime, int32_t CurrTime, int32_t* CheckedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightScheduleComponent.LightScheduleComponent_C.CheckTime");
		
		ULightScheduleComponent_C_CheckTime_Params params {};
		params.PrevTime = PrevTime;
		params.CurrTime = CurrTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (CheckedTime != nullptr)
			*CheckedTime = params.CheckedTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LightScheduleComponent.LightScheduleComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ULightScheduleComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightScheduleComponent.LightScheduleComponent_C.ReceiveBeginPlay");
		
		ULightScheduleComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LightScheduleComponent.LightScheduleComponent_C.StartFadeOut
	 * 		Flags  -> ()
	 */
	void ULightScheduleComponent_C::StartFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightScheduleComponent.LightScheduleComponent_C.StartFadeOut");
		
		ULightScheduleComponent_C_StartFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LightScheduleComponent.LightScheduleComponent_C.StartFadeIn
	 * 		Flags  -> ()
	 */
	void ULightScheduleComponent_C::StartFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightScheduleComponent.LightScheduleComponent_C.StartFadeIn");
		
		ULightScheduleComponent_C_StartFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LightScheduleComponent.LightScheduleComponent_C.UpdateTimeSchedule
	 * 		Flags  -> ()
	 */
	void ULightScheduleComponent_C::UpdateTimeSchedule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightScheduleComponent.LightScheduleComponent_C.UpdateTimeSchedule");
		
		ULightScheduleComponent_C_UpdateTimeSchedule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LightScheduleComponent.LightScheduleComponent_C.StartTimeSchedule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SetGameTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightScheduleComponent_C::StartTimeSchedule(int32_t SetGameTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightScheduleComponent.LightScheduleComponent_C.StartTimeSchedule");
		
		ULightScheduleComponent_C_StartTimeSchedule_Params params {};
		params.SetGameTime = SetGameTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LightScheduleComponent.LightScheduleComponent_C.ExecuteUbergraph_LightScheduleComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightScheduleComponent_C::ExecuteUbergraph_LightScheduleComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightScheduleComponent.LightScheduleComponent_C.ExecuteUbergraph_LightScheduleComponent");
		
		ULightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LightScheduleComponent.LightScheduleComponent_C.LightOffEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULightScheduleComponent_C::LightOffEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightScheduleComponent.LightScheduleComponent_C.LightOffEvent__DelegateSignature");
		
		ULightScheduleComponent_C_LightOffEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LightScheduleComponent.LightScheduleComponent_C.LightOnEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULightScheduleComponent_C::LightOnEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightScheduleComponent.LightScheduleComponent_C.LightOnEvent__DelegateSignature");
		
		ULightScheduleComponent_C_LightOnEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightScheduleComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightScheduleComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightScheduleComponent.LightScheduleComponent_C");
		return ptr;
	}

}


