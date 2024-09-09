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
	 * 		Name   -> Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBDhcBattlePlayerEquipArtsInfo>     InEquipArtsInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InClassLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopClassAbilityInfo_C::Setup(TArray<struct FSBDhcBattlePlayerEquipArtsInfo>* InEquipArtsInfo, ESBClassType InClassType, int32_t InClassLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.Setup");
		
		UDhcBattleTopClassAbilityInfo_C_Setup_Params params {};
		params.InClassType = InClassType;
		params.InClassLevel = InClassLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InEquipArtsInfo != nullptr)
			*InEquipArtsInfo = params.InEquipArtsInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopClassAbilityInfo_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.PreConstruct");
		
		UDhcBattleTopClassAbilityInfo_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.ExecuteUbergraph_DhcBattleTopClassAbilityInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopClassAbilityInfo_C::ExecuteUbergraph_DhcBattleTopClassAbilityInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.ExecuteUbergraph_DhcBattleTopClassAbilityInfo");
		
		UDhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.OnClassAbilityIconClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillSlotId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopClassAbilityInfo_C::OnClassAbilityIconClicked__DelegateSignature(int32_t InSkillSlotId, int32_t InSkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.OnClassAbilityIconClicked__DelegateSignature");
		
		UDhcBattleTopClassAbilityInfo_C_OnClassAbilityIconClicked__DelegateSignature_Params params {};
		params.InSkillSlotId = InSkillSlotId;
		params.InSkillId = InSkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDhcBattleTopClassAbilityInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDhcBattleTopClassAbilityInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C");
		return ptr;
	}

}


