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
	 * 		Name   -> Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.SetIsMaxHpDecreaseExpressionValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsValid                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerGaugeCommandMenu_C::SetIsMaxHpDecreaseExpressionValid(bool bInIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.SetIsMaxHpDecreaseExpressionValid");
		
		UPlayerGaugeCommandMenu_C_SetIsMaxHpDecreaseExpressionValid_Params params {};
		params.bInIsValid = bInIsValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.GetDefaultHpGaugeWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OutHpGaugeWidth                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerGaugeCommandMenu_C::GetDefaultHpGaugeWidth(float* OutHpGaugeWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.GetDefaultHpGaugeWidth");
		
		UPlayerGaugeCommandMenu_C_GetDefaultHpGaugeWidth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHpGaugeWidth != nullptr)
			*OutHpGaugeWidth = params.OutHpGaugeWidth;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.SetDhcBattleTopMenuMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsDhcBattleTopMenuMode                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerGaugeCommandMenu_C::SetDhcBattleTopMenuMode(bool InIsDhcBattleTopMenuMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.SetDhcBattleTopMenuMode");
		
		UPlayerGaugeCommandMenu_C_SetDhcBattleTopMenuMode_Params params {};
		params.InIsDhcBattleTopMenuMode = InIsDhcBattleTopMenuMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.UpdateStGauge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCurrSt                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxSt                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerGaugeCommandMenu_C::UpdateStGauge(int32_t InCurrSt, int32_t InMaxSt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.UpdateStGauge");
		
		UPlayerGaugeCommandMenu_C_UpdateStGauge_Params params {};
		params.InCurrSt = InCurrSt;
		params.InMaxSt = InMaxSt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.UpdateHpGauge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCurrHp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxHp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerGaugeCommandMenu_C::UpdateHpGauge(int32_t InCurrHp, int32_t InMaxHp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.UpdateHpGauge");
		
		UPlayerGaugeCommandMenu_C_UpdateHpGauge_Params params {};
		params.InCurrHp = InCurrHp;
		params.InMaxHp = InMaxHp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.UpdateHPLossGaunge
	 * 		Flags  -> ()
	 */
	void UPlayerGaugeCommandMenu_C::UpdateHPLossGaunge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.UpdateHPLossGaunge");
		
		UPlayerGaugeCommandMenu_C_UpdateHPLossGaunge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.SetCurrHpGaugeWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InHpGaugeWidth                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerGaugeCommandMenu_C::SetCurrHpGaugeWidth(float InHpGaugeWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.SetCurrHpGaugeWidth");
		
		UPlayerGaugeCommandMenu_C_SetCurrHpGaugeWidth_Params params {};
		params.InHpGaugeWidth = InHpGaugeWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.AdjustHPGaugeSize
	 * 		Flags  -> ()
	 */
	void UPlayerGaugeCommandMenu_C::AdjustHPGaugeSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.AdjustHPGaugeSize");
		
		UPlayerGaugeCommandMenu_C_AdjustHPGaugeSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlayerGaugeCommandMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.Construct");
		
		UPlayerGaugeCommandMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerGaugeCommandMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.Tick");
		
		UPlayerGaugeCommandMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerGaugeCommandMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.PreConstruct");
		
		UPlayerGaugeCommandMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.ExecuteUbergraph_PlayerGaugeCommandMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerGaugeCommandMenu_C::ExecuteUbergraph_PlayerGaugeCommandMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.ExecuteUbergraph_PlayerGaugeCommandMenu");
		
		UPlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerGaugeCommandMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerGaugeCommandMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C");
		return ptr;
	}

}


