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
	 * 		Name   -> Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.GetScoreInfoSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleScoreInfoSwitcher_C*                  OutSwitcher                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopEnhanceImagineInfo_C::GetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C** OutSwitcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.GetScoreInfoSwitcher");
		
		UDhcBattleTopEnhanceImagineInfo_C_GetScoreInfoSwitcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSwitcher != nullptr)
			*OutSwitcher = params.OutSwitcher;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.GetPassiveImagineIconUnit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    InPassiveImagineSlotType                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPassiveImagineInfoUnitForBattleSet_C*       OutImagineIconUnit                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopEnhanceImagineInfo_C::GetPassiveImagineIconUnit(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, bool* IsValid, class UPassiveImagineInfoUnitForBattleSet_C** OutImagineIconUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.GetPassiveImagineIconUnit");
		
		UDhcBattleTopEnhanceImagineInfo_C_GetPassiveImagineIconUnit_Params params {};
		params.InPassiveImagineSlotType = InPassiveImagineSlotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutImagineIconUnit != nullptr)
			*OutImagineIconUnit = params.OutImagineIconUnit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBDhcBattlePlayerEquipImagineInfo>  InEquipEnhanceImagineInfo                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InClassLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopEnhanceImagineInfo_C::Setup(TArray<struct FSBDhcBattlePlayerEquipImagineInfo>* InEquipEnhanceImagineInfo, ESBClassType InClassType, int32_t InClassLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.Setup");
		
		UDhcBattleTopEnhanceImagineInfo_C_Setup_Params params {};
		params.InClassType = InClassType;
		params.InClassLevel = InClassLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InEquipEnhanceImagineInfo != nullptr)
			*InEquipEnhanceImagineInfo = params.InEquipEnhanceImagineInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.CreatePassiveImagineIconUnitList
	 * 		Flags  -> ()
	 */
	void UDhcBattleTopEnhanceImagineInfo_C::CreatePassiveImagineIconUnitList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.CreatePassiveImagineIconUnitList");
		
		UDhcBattleTopEnhanceImagineInfo_C_CreatePassiveImagineIconUnitList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopEnhanceImagineInfo_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.PreConstruct");
		
		UDhcBattleTopEnhanceImagineInfo_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.ExecuteUbergraph_DhcBattleTopEnhanceImagineInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopEnhanceImagineInfo_C::ExecuteUbergraph_DhcBattleTopEnhanceImagineInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.ExecuteUbergraph_DhcBattleTopEnhanceImagineInfo");
		
		UDhcBattleTopEnhanceImagineInfo_C_ExecuteUbergraph_DhcBattleTopEnhanceImagineInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDhcBattleTopEnhanceImagineInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDhcBattleTopEnhanceImagineInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C");
		return ptr;
	}

}


