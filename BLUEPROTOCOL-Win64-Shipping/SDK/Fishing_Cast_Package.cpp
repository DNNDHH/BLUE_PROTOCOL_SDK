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
	 * 		Name   -> Function Fishing_Cast.Fishing_Cast_C.Reset
	 * 		Flags  -> ()
	 */
	void UFishing_Cast_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Cast.Fishing_Cast_C.Reset");
		
		UFishing_Cast_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Cast.Fishing_Cast_C.Init
	 * 		Flags  -> ()
	 */
	void UFishing_Cast_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Cast.Fishing_Cast_C.Init");
		
		UFishing_Cast_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Cast.Fishing_Cast_C.HookSuccess
	 * 		Flags  -> ()
	 */
	void UFishing_Cast_C::HookSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Cast.Fishing_Cast_C.HookSuccess");
		
		UFishing_Cast_C_HookSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Cast.Fishing_Cast_C.AnimFail
	 * 		Flags  -> ()
	 */
	void UFishing_Cast_C::AnimFail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Cast.Fishing_Cast_C.AnimFail");
		
		UFishing_Cast_C_AnimFail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Cast.Fishing_Cast_C.AnimSuccess
	 * 		Flags  -> ()
	 */
	void UFishing_Cast_C::AnimSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Cast.Fishing_Cast_C.AnimSuccess");
		
		UFishing_Cast_C_AnimSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Cast.Fishing_Cast_C.AnimHookSuccess
	 * 		Flags  -> ()
	 */
	void UFishing_Cast_C::AnimHookSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Cast.Fishing_Cast_C.AnimHookSuccess");
		
		UFishing_Cast_C_AnimHookSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Cast.Fishing_Cast_C.UpdateLineColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              LineTensionPercentage                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishing_Cast_C::UpdateLineColor(float LineTensionPercentage, struct FLinearColor* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Cast.Fishing_Cast_C.UpdateLineColor");
		
		UFishing_Cast_C_UpdateLineColor_Params params {};
		params.LineTensionPercentage = LineTensionPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Cast.Fishing_Cast_C.InitLineTensionColorData
	 * 		Flags  -> ()
	 */
	void UFishing_Cast_C::InitLineTensionColorData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Cast.Fishing_Cast_C.InitLineTensionColorData");
		
		UFishing_Cast_C_InitLineTensionColorData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Cast.Fishing_Cast_C.InitFishIconPos
	 * 		Flags  -> ()
	 */
	void UFishing_Cast_C::InitFishIconPos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Cast.Fishing_Cast_C.InitFishIconPos");
		
		UFishing_Cast_C_InitFishIconPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Cast.Fishing_Cast_C.Get_FishStaminaGauge_Brush_1
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UFishing_Cast_C::Get_FishStaminaGauge_Brush_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Cast.Fishing_Cast_C.Get_FishStaminaGauge_Brush_1");
		
		UFishing_Cast_C_Get_FishStaminaGauge_Brush_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Cast.Fishing_Cast_C.SetTensionGauge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TensionValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishing_Cast_C::SetTensionGauge(float TensionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Cast.Fishing_Cast_C.SetTensionGauge");
		
		UFishing_Cast_C_SetTensionGauge_Params params {};
		params.TensionValue = TensionValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Cast.Fishing_Cast_C.SetStaminaGauge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurentStamina                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxStamina                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishing_Cast_C::SetStaminaGauge(float CurentStamina, float MaxStamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Cast.Fishing_Cast_C.SetStaminaGauge");
		
		UFishing_Cast_C_SetStaminaGauge_Params params {};
		params.CurentStamina = CurentStamina;
		params.MaxStamina = MaxStamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Cast.Fishing_Cast_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishing_Cast_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Cast.Fishing_Cast_C.PreConstruct");
		
		UFishing_Cast_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Cast.Fishing_Cast_C.Construct
	 * 		Flags  -> ()
	 */
	void UFishing_Cast_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Cast.Fishing_Cast_C.Construct");
		
		UFishing_Cast_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Cast.Fishing_Cast_C.ExecuteUbergraph_Fishing_Cast
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishing_Cast_C::ExecuteUbergraph_Fishing_Cast(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Cast.Fishing_Cast_C.ExecuteUbergraph_Fishing_Cast");
		
		UFishing_Cast_C_ExecuteUbergraph_Fishing_Cast_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFishing_Cast_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFishing_Cast_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fishing_Cast.Fishing_Cast_C");
		return ptr;
	}

}


