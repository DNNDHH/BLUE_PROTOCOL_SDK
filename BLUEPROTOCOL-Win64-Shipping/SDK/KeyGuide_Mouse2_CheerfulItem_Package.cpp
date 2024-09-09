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
	 * 		Name   -> Function KeyGuide_Mouse2_CheerfulItem.KeyGuide_Mouse2_CheerfulItem_C.MakeOrientToCameraText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	class FString UKeyGuide_Mouse2_CheerfulItem_C::MakeOrientToCameraText(struct FSBPlayerClassKeyConfigData* KeyConfigData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Mouse2_CheerfulItem.KeyGuide_Mouse2_CheerfulItem_C.MakeOrientToCameraText");
		
		UKeyGuide_Mouse2_CheerfulItem_C_MakeOrientToCameraText_Params params {};
		
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
	 * 		Name   -> Function KeyGuide_Mouse2_CheerfulItem.KeyGuide_Mouse2_CheerfulItem_C.KeyConfigActionToKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBKeyConfigAction                                 KeyConfigAction                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        Key                                                        (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UKeyGuide_Mouse2_CheerfulItem_C::KeyConfigActionToKey(struct FSBPlayerClassKeyConfigData* KeyConfigData, ESBKeyConfigAction KeyConfigAction, struct FKey* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Mouse2_CheerfulItem.KeyGuide_Mouse2_CheerfulItem_C.KeyConfigActionToKey");
		
		UKeyGuide_Mouse2_CheerfulItem_C_KeyConfigActionToKey_Params params {};
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
	 * 		Name   -> Function KeyGuide_Mouse2_CheerfulItem.KeyGuide_Mouse2_CheerfulItem_C.MakePare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USBRuntimeTextBlock*>                 Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		TArray<ESBKeyConfigAction>                         Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> ReturnValue                                                (Parm, OutParm, ContainsInstancedReference)
	 */
	void UKeyGuide_Mouse2_CheerfulItem_C::MakePare(TArray<class USBRuntimeTextBlock*>* Key, TArray<ESBKeyConfigAction>* Value, TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Mouse2_CheerfulItem.KeyGuide_Mouse2_CheerfulItem_C.MakePare");
		
		UKeyGuide_Mouse2_CheerfulItem_C_MakePare_Params params {};
		
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
	 * 		Name   -> Function KeyGuide_Mouse2_CheerfulItem.KeyGuide_Mouse2_CheerfulItem_C.GetKeyToTextString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBKeyConfigAction                                 KeyConfigAction                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsWalk                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString UKeyGuide_Mouse2_CheerfulItem_C::GetKeyToTextString(struct FSBPlayerClassKeyConfigData* KeyConfigData, ESBKeyConfigAction KeyConfigAction, bool IsWalk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Mouse2_CheerfulItem.KeyGuide_Mouse2_CheerfulItem_C.GetKeyToTextString");
		
		UKeyGuide_Mouse2_CheerfulItem_C_GetKeyToTextString_Params params {};
		params.KeyConfigAction = KeyConfigAction;
		params.IsWalk = IsWalk;
		
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
	 * 		Name   -> Function KeyGuide_Mouse2_CheerfulItem.KeyGuide_Mouse2_CheerfulItem_C.MakeMovesText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	class FString UKeyGuide_Mouse2_CheerfulItem_C::MakeMovesText(struct FSBPlayerClassKeyConfigData* KeyConfigData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Mouse2_CheerfulItem.KeyGuide_Mouse2_CheerfulItem_C.MakeMovesText");
		
		UKeyGuide_Mouse2_CheerfulItem_C_MakeMovesText_Params params {};
		
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
	 * 		Name   -> Function KeyGuide_Mouse2_CheerfulItem.KeyGuide_Mouse2_CheerfulItem_C.ApplyKeyConfigData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UKeyGuide_Mouse2_CheerfulItem_C::ApplyKeyConfigData(const struct FSBPlayerClassKeyConfigData& KeyConfigData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Mouse2_CheerfulItem.KeyGuide_Mouse2_CheerfulItem_C.ApplyKeyConfigData");
		
		UKeyGuide_Mouse2_CheerfulItem_C_ApplyKeyConfigData_Params params {};
		params.KeyConfigData = KeyConfigData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide_Mouse2_CheerfulItem.KeyGuide_Mouse2_CheerfulItem_C.ExecuteUbergraph_KeyGuide_Mouse2_CheerfulItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuide_Mouse2_CheerfulItem_C::ExecuteUbergraph_KeyGuide_Mouse2_CheerfulItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Mouse2_CheerfulItem.KeyGuide_Mouse2_CheerfulItem_C.ExecuteUbergraph_KeyGuide_Mouse2_CheerfulItem");
		
		UKeyGuide_Mouse2_CheerfulItem_C_ExecuteUbergraph_KeyGuide_Mouse2_CheerfulItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyGuide_Mouse2_CheerfulItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyGuide_Mouse2_CheerfulItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyGuide_Mouse2_CheerfulItem.KeyGuide_Mouse2_CheerfulItem_C");
		return ptr;
	}

}


