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
	 * 		Name   -> Function CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C.SetBattleScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InBattleScore                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_PassiveImagine_C::SetBattleScore(int32_t InBattleScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C.SetBattleScore");
		
		UCommonIconToolTipContent_PassiveImagine_C_SetBattleScore_Params params {};
		params.InBattleScore = InBattleScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C.SetImagineDataBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            InMasterImagine                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      InUniqueId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InUseClassTypeForLevelSync                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBClassType                                       InClassTypeForLevelSync                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEffectiveDisplay                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInForceLevelSyncOff                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InClassLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InPerkId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStackBNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStackBMax                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInUseArgBattleScore                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InBattleScore                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_PassiveImagine_C::SetImagineDataBase(const struct FSBMasterImagine& InMasterImagine, const class FString& InUniqueId, bool InUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool bInForceLevelSyncOff, int32_t InClassLevel, int32_t InPerkId, int32_t InStackBNum, int32_t InStackBMax, bool bInUseArgBattleScore, int32_t InBattleScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C.SetImagineDataBase");
		
		UCommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase_Params params {};
		params.InMasterImagine = InMasterImagine;
		params.InUniqueId = InUniqueId;
		params.InUseClassTypeForLevelSync = InUseClassTypeForLevelSync;
		params.InClassTypeForLevelSync = InClassTypeForLevelSync;
		params.IsEffectiveDisplay = IsEffectiveDisplay;
		params.bInForceLevelSyncOff = bInForceLevelSyncOff;
		params.InClassLevel = InClassLevel;
		params.InPerkId = InPerkId;
		params.InStackBNum = InStackBNum;
		params.InStackBMax = InStackBMax;
		params.bInUseArgBattleScore = bInUseArgBattleScore;
		params.InBattleScore = InBattleScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C.SetIntToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  InTextWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InInteger                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InUseGrouping                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconToolTipContent_PassiveImagine_C::SetIntToText(class UTextBlock* InTextWidget, int32_t InInteger, bool InUseGrouping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C.SetIntToText");
		
		UCommonIconToolTipContent_PassiveImagine_C_SetIntToText_Params params {};
		params.InTextWidget = InTextWidget;
		params.InInteger = InInteger;
		params.InUseGrouping = InUseGrouping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C.SetImagineLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InImagineLv                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InClassLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutImagineLv                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_PassiveImagine_C::SetImagineLevel(int32_t InImagineLv, int32_t InClassLevel, int32_t* OutImagineLv)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C.SetImagineLevel");
		
		UCommonIconToolTipContent_PassiveImagine_C_SetImagineLevel_Params params {};
		params.InImagineLv = InImagineLv;
		params.InClassLevel = InClassLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutImagineLv != nullptr)
			*OutImagineLv = params.OutImagineLv;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C.SetImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            InMasterImagine                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      InUniqueId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InUseClassTypeForLevelSync                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBClassType                                       InClassTypeForLevelSync                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEffectiveDisplay                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInForceLevelSyncOff                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconToolTipContent_PassiveImagine_C::SetImagineData(const struct FSBMasterImagine& InMasterImagine, const class FString& InUniqueId, bool InUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool bInForceLevelSyncOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C.SetImagineData");
		
		UCommonIconToolTipContent_PassiveImagine_C_SetImagineData_Params params {};
		params.InMasterImagine = InMasterImagine;
		params.InUniqueId = InUniqueId;
		params.InUseClassTypeForLevelSync = InUseClassTypeForLevelSync;
		params.InClassTypeForLevelSync = InClassTypeForLevelSync;
		params.IsEffectiveDisplay = IsEffectiveDisplay;
		params.bInForceLevelSyncOff = bInForceLevelSyncOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonIconToolTipContent_PassiveImagine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonIconToolTipContent_PassiveImagine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C");
		return ptr;
	}

}


