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
	 * 		Name   -> Function MountHPSTGauge.MountHPSTGauge_C.UpdateHPLossGaunge
	 * 		Flags  -> ()
	 */
	void UMountHPSTGauge_C::UpdateHPLossGaunge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountHPSTGauge.MountHPSTGauge_C.UpdateHPLossGaunge");
		
		UMountHPSTGauge_C_UpdateHPLossGaunge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountHPSTGauge.MountHPSTGauge_C.UpdatePrevPlayerHP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMountHPSTGauge_C::UpdatePrevPlayerHP(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountHPSTGauge.MountHPSTGauge_C.UpdatePrevPlayerHP");
		
		UMountHPSTGauge_C_UpdatePrevPlayerHP_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountHPSTGauge.MountHPSTGauge_C.UpdatePrevENG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMountHPSTGauge_C::UpdatePrevENG(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountHPSTGauge.MountHPSTGauge_C.UpdatePrevENG");
		
		UMountHPSTGauge_C_UpdatePrevENG_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountHPSTGauge.MountHPSTGauge_C.AdjustPlayerHPGaugeSize
	 * 		Flags  -> ()
	 */
	void UMountHPSTGauge_C::AdjustPlayerHPGaugeSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountHPSTGauge.MountHPSTGauge_C.AdjustPlayerHPGaugeSize");
		
		UMountHPSTGauge_C_AdjustPlayerHPGaugeSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountHPSTGauge.MountHPSTGauge_C.AdjustENGGaugeSize
	 * 		Flags  -> ()
	 */
	void UMountHPSTGauge_C::AdjustENGGaugeSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountHPSTGauge.MountHPSTGauge_C.AdjustENGGaugeSize");
		
		UMountHPSTGauge_C_AdjustENGGaugeSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountHPSTGauge.MountHPSTGauge_C.SetBgVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMountHPSTGauge_C::SetBgVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountHPSTGauge.MountHPSTGauge_C.SetBgVisibility");
		
		UMountHPSTGauge_C_SetBgVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountHPSTGauge.MountHPSTGauge_C.カスタムイベント_2
	 * 		Flags  -> ()
	 */
	void UMountHPSTGauge_C::_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountHPSTGauge.MountHPSTGauge_C.カスタムイベント_2");
		
		UMountHPSTGauge_C__2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountHPSTGauge.MountHPSTGauge_C.SetEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEdit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMountHPSTGauge_C::SetEditMode(bool bIsEdit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountHPSTGauge.MountHPSTGauge_C.SetEditMode");
		
		UMountHPSTGauge_C_SetEditMode_Params params {};
		params.bIsEdit = bIsEdit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountHPSTGauge.MountHPSTGauge_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMountHPSTGauge_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountHPSTGauge.MountHPSTGauge_C.Tick");
		
		UMountHPSTGauge_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountHPSTGauge.MountHPSTGauge_C.CustomPlayerEvent
	 * 		Flags  -> ()
	 */
	void UMountHPSTGauge_C::CustomPlayerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountHPSTGauge.MountHPSTGauge_C.CustomPlayerEvent");
		
		UMountHPSTGauge_C_CustomPlayerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountHPSTGauge.MountHPSTGauge_C.Construct
	 * 		Flags  -> ()
	 */
	void UMountHPSTGauge_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountHPSTGauge.MountHPSTGauge_C.Construct");
		
		UMountHPSTGauge_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountHPSTGauge.MountHPSTGauge_C.ExecuteUbergraph_MountHPSTGauge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMountHPSTGauge_C::ExecuteUbergraph_MountHPSTGauge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountHPSTGauge.MountHPSTGauge_C.ExecuteUbergraph_MountHPSTGauge");
		
		UMountHPSTGauge_C_ExecuteUbergraph_MountHPSTGauge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMountHPSTGauge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMountHPSTGauge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MountHPSTGauge.MountHPSTGauge_C");
		return ptr;
	}

}


