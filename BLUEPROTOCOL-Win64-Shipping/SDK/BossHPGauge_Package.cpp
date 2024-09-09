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
	 * 		Name   -> Function BossHPGauge.BossHPGauge_C.OnSetBossCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           InBoss                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBossHPGauge_C::OnSetBossCharacter(class ASBEnemyCharacter* InBoss)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossHPGauge.BossHPGauge_C.OnSetBossCharacter");
		
		UBossHPGauge_C_OnSetBossCharacter_Params params {};
		params.InBoss = InBoss;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BossHPGauge.BossHPGauge_C.SetColorName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBossHPGauge_C::SetColorName(const struct FSlateColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossHPGauge.BossHPGauge_C.SetColorName");
		
		UBossHPGauge_C_SetColorName_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BossHPGauge.BossHPGauge_C.SetColorLV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBossHPGauge_C::SetColorLV(const struct FSlateColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossHPGauge.BossHPGauge_C.SetColorLV");
		
		UBossHPGauge_C_SetColorLV_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BossHPGauge.BossHPGauge_C.SetColorText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBossHPGauge_C::SetColorText(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossHPGauge.BossHPGauge_C.SetColorText");
		
		UBossHPGauge_C_SetColorText_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BossHPGauge.BossHPGauge_C.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBossHPGauge_C::SetName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossHPGauge.BossHPGauge_C.SetName");
		
		UBossHPGauge_C_SetName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BossHPGauge.BossHPGauge_C.SetLv
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Lv                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBossHPGauge_C::SetLv(int32_t Lv)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossHPGauge.BossHPGauge_C.SetLv");
		
		UBossHPGauge_C_SetLv_Params params {};
		params.Lv = Lv;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BossHPGauge.BossHPGauge_C.SetDepth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDepth                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBossHPGauge_C::SetDepth(float InDepth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossHPGauge.BossHPGauge_C.SetDepth");
		
		UBossHPGauge_C_SetDepth_Params params {};
		params.InDepth = InDepth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BossHPGauge.BossHPGauge_C.SetScreenPositionOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InScreenPositionOffset                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBossHPGauge_C::SetScreenPositionOffset(const struct FLinearColor& InScreenPositionOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossHPGauge.BossHPGauge_C.SetScreenPositionOffset");
		
		UBossHPGauge_C_SetScreenPositionOffset_Params params {};
		params.InScreenPositionOffset = InScreenPositionOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BossHPGauge.BossHPGauge_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBossHPGauge_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossHPGauge.BossHPGauge_C.PreConstruct");
		
		UBossHPGauge_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BossHPGauge.BossHPGauge_C.Construct
	 * 		Flags  -> ()
	 */
	void UBossHPGauge_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossHPGauge.BossHPGauge_C.Construct");
		
		UBossHPGauge_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BossHPGauge.BossHPGauge_C.ExecuteUbergraph_BossHPGauge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBossHPGauge_C::ExecuteUbergraph_BossHPGauge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossHPGauge.BossHPGauge_C.ExecuteUbergraph_BossHPGauge");
		
		UBossHPGauge_C_ExecuteUbergraph_BossHPGauge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBossHPGauge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBossHPGauge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BossHPGauge.BossHPGauge_C");
		return ptr;
	}

}


