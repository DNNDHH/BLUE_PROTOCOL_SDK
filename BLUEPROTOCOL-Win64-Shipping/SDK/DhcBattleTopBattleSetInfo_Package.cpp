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
	 * 		Name   -> Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetScoreInfoSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleScoreInfoSwitcher_C*                  OutSwitcher                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopBattleSetInfo_C::GetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C** OutSwitcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetScoreInfoSwitcher");
		
		UDhcBattleTopBattleSetInfo_C_GetScoreInfoSwitcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSwitcher != nullptr)
			*OutSwitcher = params.OutSwitcher;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.ResetSkillInfoSubPalette
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsSubPaletteReleased                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopBattleSetInfo_C::ResetSkillInfoSubPalette(bool bInIsSubPaletteReleased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.ResetSkillInfoSubPalette");
		
		UDhcBattleTopBattleSetInfo_C_ResetSkillInfoSubPalette_Params params {};
		params.bInIsSubPaletteReleased = bInIsSubPaletteReleased;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetClassTypeFromWeaponId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWeaponID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       OutClassType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopBattleSetInfo_C::GetClassTypeFromWeaponId(int32_t InWeaponID, ESBClassType* OutClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetClassTypeFromWeaponId");
		
		UDhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId_Params params {};
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
	 * 		Name   -> Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetRegularAndULTSkillIdByClassType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutRegularMainSkillId                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutRegularSubSkillId                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutULTSkillId                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopBattleSetInfo_C::GetRegularAndULTSkillIdByClassType(ESBClassType InClassType, int32_t* OutRegularMainSkillId, int32_t* OutRegularSubSkillId, int32_t* OutULTSkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetRegularAndULTSkillIdByClassType");
		
		UDhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType_Params params {};
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
	 * 		Name   -> Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetIsWeaponLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsWeaponLost                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopBattleSetInfo_C::GetIsWeaponLost(bool* OutIsWeaponLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetIsWeaponLost");
		
		UDhcBattleTopBattleSetInfo_C_GetIsWeaponLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsWeaponLost != nullptr)
			*OutIsWeaponLost = params.OutIsWeaponLost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetClassAbilitySlotCnt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutSlotCnt                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopBattleSetInfo_C::GetClassAbilitySlotCnt(int32_t* OutSlotCnt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetClassAbilitySlotCnt");
		
		UDhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSlotCnt != nullptr)
			*OutSlotCnt = params.OutSlotCnt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetTacticalSkillSlotCnt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutSlotCnt                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopBattleSetInfo_C::GetTacticalSkillSlotCnt(int32_t* OutSlotCnt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetTacticalSkillSlotCnt");
		
		UDhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSlotCnt != nullptr)
			*OutSlotCnt = params.OutSlotCnt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetRegularSkillSlotCnt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutSlotCnt                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopBattleSetInfo_C::GetRegularSkillSlotCnt(int32_t* OutSlotCnt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetRegularSkillSlotCnt");
		
		UDhcBattleTopBattleSetInfo_C_GetRegularSkillSlotCnt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSlotCnt != nullptr)
			*OutSlotCnt = params.OutSlotCnt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetInnerImagineSlotCnt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutSlotCnt                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopBattleSetInfo_C::GetInnerImagineSlotCnt(int32_t* OutSlotCnt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetInnerImagineSlotCnt");
		
		UDhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSlotCnt != nullptr)
			*OutSlotCnt = params.OutSlotCnt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetBattleImagineSlotCnt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutSlotCnt                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopBattleSetInfo_C::GetBattleImagineSlotCnt(int32_t* OutSlotCnt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetBattleImagineSlotCnt");
		
		UDhcBattleTopBattleSetInfo_C_GetBattleImagineSlotCnt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSlotCnt != nullptr)
			*OutSlotCnt = params.OutSlotCnt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.SetupInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDhcBattleHighScoreInfo                   InScoreInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UDhcBattleTopBattleSetInfo_C::SetupInfo(const struct FSBDhcBattleHighScoreInfo& InScoreInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.SetupInfo");
		
		UDhcBattleTopBattleSetInfo_C_SetupInfo_Params params {};
		params.InScoreInfo = InScoreInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDhcBattleTopBattleSetInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDhcBattleTopBattleSetInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C");
		return ptr;
	}

}


