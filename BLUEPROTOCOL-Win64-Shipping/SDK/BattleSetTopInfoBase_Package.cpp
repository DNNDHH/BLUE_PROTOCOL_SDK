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
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.ResetSkillInfoSubPalette
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsSubPaletteReleased                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleSetTopInfoBase_C::ResetSkillInfoSubPalette(bool bInIsSubPaletteReleased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.ResetSkillInfoSubPalette");
		
		UBattleSetTopInfoBase_C_ResetSkillInfoSubPalette_Params params {};
		params.bInIsSubPaletteReleased = bInIsSubPaletteReleased;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.UnbindChildEvents
	 * 		Flags  -> ()
	 */
	void UBattleSetTopInfoBase_C::UnbindChildEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.UnbindChildEvents");
		
		UBattleSetTopInfoBase_C_UnbindChildEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.GetIsWeaponLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsWeaponLost                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleSetTopInfoBase_C::GetIsWeaponLost(bool* OutIsWeaponLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.GetIsWeaponLost");
		
		UBattleSetTopInfoBase_C_GetIsWeaponLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsWeaponLost != nullptr)
			*OutIsWeaponLost = params.OutIsWeaponLost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupBattleCordeInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCordeId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InSetupByCurrentEquip                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsStorageMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleSetTopInfoBase_C::SetupBattleCordeInfo(int32_t InCordeId, bool InSetupByCurrentEquip, bool InIsStorageMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupBattleCordeInfo");
		
		UBattleSetTopInfoBase_C_SetupBattleCordeInfo_Params params {};
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
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupInnerImagineInfo
	 * 		Flags  -> ()
	 */
	void UBattleSetTopInfoBase_C::SetupInnerImagineInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupInnerImagineInfo");
		
		UBattleSetTopInfoBase_C_SetupInnerImagineInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupClassAbilityInfo
	 * 		Flags  -> ()
	 */
	void UBattleSetTopInfoBase_C::SetupClassAbilityInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupClassAbilityInfo");
		
		UBattleSetTopInfoBase_C_SetupClassAbilityInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupTacticalSkillInfo
	 * 		Flags  -> ()
	 */
	void UBattleSetTopInfoBase_C::SetupTacticalSkillInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupTacticalSkillInfo");
		
		UBattleSetTopInfoBase_C_SetupTacticalSkillInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupBattleImagineInfo
	 * 		Flags  -> ()
	 */
	void UBattleSetTopInfoBase_C::SetupBattleImagineInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupBattleImagineInfo");
		
		UBattleSetTopInfoBase_C_SetupBattleImagineInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupAllSkillInfo
	 * 		Flags  -> ()
	 */
	void UBattleSetTopInfoBase_C::SetupAllSkillInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupAllSkillInfo");
		
		UBattleSetTopInfoBase_C_SetupAllSkillInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupWeaponInfo
	 * 		Flags  -> ()
	 */
	void UBattleSetTopInfoBase_C::SetupWeaponInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupWeaponInfo");
		
		UBattleSetTopInfoBase_C_SetupWeaponInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsStorageMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleSetTopInfoBase_C::SetupInfo(bool bIsStorageMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupInfo");
		
		UBattleSetTopInfoBase_C_SetupInfo_Params params {};
		params.bIsStorageMode = bIsStorageMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.Construct
	 * 		Flags  -> ()
	 */
	void UBattleSetTopInfoBase_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.Construct");
		
		UBattleSetTopInfoBase_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnWeaponIconPressed
	 * 		Flags  -> ()
	 */
	void UBattleSetTopInfoBase_C::OnWeaponIconPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnWeaponIconPressed");
		
		UBattleSetTopInfoBase_C_OnWeaponIconPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTacticalSkillIconPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InTacticalSkillSAP                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleSetTopInfoBase_C::OnTacticalSkillIconPressed(ESkillActionPosition InTacticalSkillSAP, int32_t InSkillId, int32_t InSkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTacticalSkillIconPressed");
		
		UBattleSetTopInfoBase_C_OnTacticalSkillIconPressed_Params params {};
		params.InTacticalSkillSAP = InTacticalSkillSAP;
		params.InSkillId = InSkillId;
		params.InSkillLevel = InSkillLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnBattleImagineIconPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InBattleImagineSAP                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InBattleImagineUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBattleSetTopInfoBase_C::OnBattleImagineIconPressed(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnBattleImagineIconPressed");
		
		UBattleSetTopInfoBase_C_OnBattleImagineIconPressed_Params params {};
		params.InBattleImagineSAP = InBattleImagineSAP;
		params.InBattleImagineUniqueId = InBattleImagineUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnClassAbilityIconPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillSlotId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleSetTopInfoBase_C::OnClassAbilityIconPressed(int32_t InSkillSlotId, int32_t InSkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnClassAbilityIconPressed");
		
		UBattleSetTopInfoBase_C_OnClassAbilityIconPressed_Params params {};
		params.InSkillSlotId = InSkillSlotId;
		params.InSkillId = InSkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnInnerImagineIconPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    InInnerImagineSlotType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InImagineId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleSetTopInfoBase_C::OnInnerImagineIconPressed(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32_t InImagineId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnInnerImagineIconPressed");
		
		UBattleSetTopInfoBase_C_OnInnerImagineIconPressed_Params params {};
		params.InInnerImagineSlotType = InInnerImagineSlotType;
		params.InImagineId = InImagineId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.Destruct
	 * 		Flags  -> ()
	 */
	void UBattleSetTopInfoBase_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.Destruct");
		
		UBattleSetTopInfoBase_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.ExecuteUbergraph_BattleSetTopInfoBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleSetTopInfoBase_C::ExecuteUbergraph_BattleSetTopInfoBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.ExecuteUbergraph_BattleSetTopInfoBase");
		
		UBattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoInnerImagineIconPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    InInnerImagineSlotType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InImagineId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleSetTopInfoBase_C::OnTopInfoInnerImagineIconPressed__DelegateSignature(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32_t InImagineId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoInnerImagineIconPressed__DelegateSignature");
		
		UBattleSetTopInfoBase_C_OnTopInfoInnerImagineIconPressed__DelegateSignature_Params params {};
		params.InInnerImagineSlotType = InInnerImagineSlotType;
		params.InImagineId = InImagineId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoClassAbilityIconPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillSlotId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleSetTopInfoBase_C::OnTopInfoClassAbilityIconPressed__DelegateSignature(int32_t InSkillSlotId, int32_t InSkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoClassAbilityIconPressed__DelegateSignature");
		
		UBattleSetTopInfoBase_C_OnTopInfoClassAbilityIconPressed__DelegateSignature_Params params {};
		params.InSkillSlotId = InSkillSlotId;
		params.InSkillId = InSkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoBattleImagineIconPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InBattleImagineSAP                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InBattleImagineUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBattleSetTopInfoBase_C::OnTopInfoBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoBattleImagineIconPressed__DelegateSignature");
		
		UBattleSetTopInfoBase_C_OnTopInfoBattleImagineIconPressed__DelegateSignature_Params params {};
		params.InBattleImagineSAP = InBattleImagineSAP;
		params.InBattleImagineUniqueId = InBattleImagineUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoTacticalSkillIconPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InTacticalSkillSAP                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleSetTopInfoBase_C::OnTopInfoTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32_t InSkillId, int32_t InSkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoTacticalSkillIconPressed__DelegateSignature");
		
		UBattleSetTopInfoBase_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature_Params params {};
		params.InTacticalSkillSAP = InTacticalSkillSAP;
		params.InSkillId = InSkillId;
		params.InSkillLevel = InSkillLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoWeaponIconPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleSetTopInfoBase_C::OnTopInfoWeaponIconPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoWeaponIconPressed__DelegateSignature");
		
		UBattleSetTopInfoBase_C_OnTopInfoWeaponIconPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBattleSetTopInfoBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBattleSetTopInfoBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BattleSetTopInfoBase.BattleSetTopInfoBase_C");
		return ptr;
	}

}


