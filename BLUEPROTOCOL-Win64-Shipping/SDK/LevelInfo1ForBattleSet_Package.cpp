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
	 * 		Name   -> Function LevelInfo1ForBattleSet.LevelInfo1ForBattleSet_C.SetImagineLevelSync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InOwnItemInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InForceLevelSyncOff                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULevelInfo1ForBattleSet_C::SetImagineLevelSync(const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType, bool InForceLevelSyncOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelInfo1ForBattleSet.LevelInfo1ForBattleSet_C.SetImagineLevelSync");
		
		ULevelInfo1ForBattleSet_C_SetImagineLevelSync_Params params {};
		params.InOwnItemInfo = InOwnItemInfo;
		params.InClassType = InClassType;
		params.InForceLevelSyncOff = InForceLevelSyncOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelInfo1ForBattleSet.LevelInfo1ForBattleSet_C.SetLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULevelInfo1ForBattleSet_C::SetLevel(int32_t InLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelInfo1ForBattleSet.LevelInfo1ForBattleSet_C.SetLevel");
		
		ULevelInfo1ForBattleSet_C_SetLevel_Params params {};
		params.InLevel = InLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelInfo1ForBattleSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelInfo1ForBattleSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LevelInfo1ForBattleSet.LevelInfo1ForBattleSet_C");
		return ptr;
	}

}


