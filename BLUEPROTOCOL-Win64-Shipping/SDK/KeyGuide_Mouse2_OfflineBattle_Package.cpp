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
	 * 		Name   -> Function KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C.KeyConfigActionToKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBKeyConfigAction                                 KeyConfigAction                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        Key                                                        (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UKeyGuide_Mouse2_OfflineBattle_C::KeyConfigActionToKey(struct FSBPlayerClassKeyConfigData* KeyConfigData, ESBKeyConfigAction KeyConfigAction, struct FKey* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C.KeyConfigActionToKey");
		
		UKeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey_Params params {};
		params.KeyConfigAction = KeyConfigAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KeyConfigData != nullptr)
			*KeyConfigData = params.KeyConfigData;
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C.MakePare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USBRuntimeTextBlock*>                 Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		TArray<ESBKeyConfigAction>                         Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> ReturnValue                                                (Parm, OutParm, ContainsInstancedReference)
	 */
	void UKeyGuide_Mouse2_OfflineBattle_C::MakePare(TArray<class USBRuntimeTextBlock*>* Key, TArray<ESBKeyConfigAction>* Value, TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C.MakePare");
		
		UKeyGuide_Mouse2_OfflineBattle_C_MakePare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
		if (Value != nullptr)
			*Value = params.Value;
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C.GetKeyToTextString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBKeyConfigAction                                 KeyConfigAction                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDash                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isAutoRun                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString UKeyGuide_Mouse2_OfflineBattle_C::GetKeyToTextString(struct FSBPlayerClassKeyConfigData* KeyConfigData, ESBKeyConfigAction KeyConfigAction, bool IsDash, bool isAutoRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C.GetKeyToTextString");
		
		UKeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString_Params params {};
		params.KeyConfigAction = KeyConfigAction;
		params.IsDash = IsDash;
		params.isAutoRun = isAutoRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KeyConfigData != nullptr)
			*KeyConfigData = params.KeyConfigData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C.MakeMovesText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	class FString UKeyGuide_Mouse2_OfflineBattle_C::MakeMovesText(struct FSBPlayerClassKeyConfigData* KeyConfigData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C.MakeMovesText");
		
		UKeyGuide_Mouse2_OfflineBattle_C_MakeMovesText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KeyConfigData != nullptr)
			*KeyConfigData = params.KeyConfigData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C.ApplyKeyConfigData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UKeyGuide_Mouse2_OfflineBattle_C::ApplyKeyConfigData(const struct FSBPlayerClassKeyConfigData& KeyConfigData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C.ApplyKeyConfigData");
		
		UKeyGuide_Mouse2_OfflineBattle_C_ApplyKeyConfigData_Params params {};
		params.KeyConfigData = KeyConfigData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C.ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuide_Mouse2_OfflineBattle_C::ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C.ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle");
		
		UKeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyGuide_Mouse2_OfflineBattle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyGuide_Mouse2_OfflineBattle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C");
		return ptr;
	}

}


