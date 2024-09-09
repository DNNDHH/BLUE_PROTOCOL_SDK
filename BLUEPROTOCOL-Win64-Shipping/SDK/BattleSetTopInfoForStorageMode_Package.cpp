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
	 * 		Name   -> Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetScoreInfoSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleScoreInfoSwitcher_C*                  NewParam                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleSetTopInfoForStorageMode_C::GetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetScoreInfoSwitcher");
		
		UBattleSetTopInfoForStorageMode_C_GetScoreInfoSwitcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetClassTypeFromWeaponId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWeaponID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       OutClassType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleSetTopInfoForStorageMode_C::GetClassTypeFromWeaponId(int32_t InWeaponID, ESBClassType* OutClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetClassTypeFromWeaponId");
		
		UBattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId_Params params {};
		params.InWeaponID = InWeaponID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutClassType != nullptr)
			*OutClassType = params.OutClassType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetRegularAndULTSkillIdByClassType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutRegularMainSkillId                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutRegularSubSkillId                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutULTSkillId                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleSetTopInfoForStorageMode_C::GetRegularAndULTSkillIdByClassType(ESBClassType InClassType, int32_t* OutRegularMainSkillId, int32_t* OutRegularSubSkillId, int32_t* OutULTSkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetRegularAndULTSkillIdByClassType");
		
		UBattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType_Params params {};
		params.InClassType = InClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRegularMainSkillId != nullptr)
			*OutRegularMainSkillId = params.OutRegularMainSkillId;
		if (OutRegularSubSkillId != nullptr)
			*OutRegularSubSkillId = params.OutRegularSubSkillId;
		if (OutULTSkillId != nullptr)
			*OutULTSkillId = params.OutULTSkillId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetIsWeaponLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsWeaponLost                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleSetTopInfoForStorageMode_C::GetIsWeaponLost(bool* OutIsWeaponLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetIsWeaponLost");
		
		UBattleSetTopInfoForStorageMode_C_GetIsWeaponLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsWeaponLost != nullptr)
			*OutIsWeaponLost = params.OutIsWeaponLost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetClassAbilitySlotCnt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutSlotCnt                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleSetTopInfoForStorageMode_C::GetClassAbilitySlotCnt(int32_t* OutSlotCnt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetClassAbilitySlotCnt");
		
		UBattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSlotCnt != nullptr)
			*OutSlotCnt = params.OutSlotCnt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetTacticalSkillSlotCnt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutSlotCnt                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleSetTopInfoForStorageMode_C::GetTacticalSkillSlotCnt(int32_t* OutSlotCnt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetTacticalSkillSlotCnt");
		
		UBattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSlotCnt != nullptr)
			*OutSlotCnt = params.OutSlotCnt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetRegularSkillSlotCnt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutSlotCnt                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleSetTopInfoForStorageMode_C::GetRegularSkillSlotCnt(int32_t* OutSlotCnt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetRegularSkillSlotCnt");
		
		UBattleSetTopInfoForStorageMode_C_GetRegularSkillSlotCnt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSlotCnt != nullptr)
			*OutSlotCnt = params.OutSlotCnt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetInnerImagineSlotCnt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutSlotCnt                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleSetTopInfoForStorageMode_C::GetInnerImagineSlotCnt(int32_t* OutSlotCnt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetInnerImagineSlotCnt");
		
		UBattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSlotCnt != nullptr)
			*OutSlotCnt = params.OutSlotCnt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetBattleImagineSlotCnt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutSlotCnt                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleSetTopInfoForStorageMode_C::GetBattleImagineSlotCnt(int32_t* OutSlotCnt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetBattleImagineSlotCnt");
		
		UBattleSetTopInfoForStorageMode_C_GetBattleImagineSlotCnt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSlotCnt != nullptr)
			*OutSlotCnt = params.OutSlotCnt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.SetupBattleCordeInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCordeId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InSetupByCurrentEquip                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsStorageMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleSetTopInfoForStorageMode_C::SetupBattleCordeInfo(int32_t InCordeId, bool InSetupByCurrentEquip, bool InIsStorageMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.SetupBattleCordeInfo");
		
		UBattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo_Params params {};
		params.InCordeId = InCordeId;
		params.InSetupByCurrentEquip = InSetupByCurrentEquip;
		params.InIsStorageMode = InIsStorageMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBattleSetTopInfoForStorageMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBattleSetTopInfoForStorageMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C");
		return ptr;
	}

}


