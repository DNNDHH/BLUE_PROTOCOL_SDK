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
	 * 		Name   -> Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.GetScoreInfoSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleScoreInfoSwitcher_C*                  OutSwitcher                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveImagineInfoForBattleCordeEdit_C::GetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C** OutSwitcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.GetScoreInfoSwitcher");
		
		UPassiveImagineInfoForBattleCordeEdit_C_GetScoreInfoSwitcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSwitcher != nullptr)
			*OutSwitcher = params.OutSwitcher;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.SetStorageMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsStorageMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPassiveImagineInfoForBattleCordeEdit_C::SetStorageMode(bool InIsStorageMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.SetStorageMode");
		
		UPassiveImagineInfoForBattleCordeEdit_C_SetStorageMode_Params params {};
		params.InIsStorageMode = InIsStorageMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InPassiveImagineUniqueIds                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               InSetupByCurrEquip                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveImagineInfoForBattleCordeEdit_C::Setup(TArray<class FString>* InPassiveImagineUniqueIds, bool InSetupByCurrEquip, ESBClassType InClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.Setup");
		
		UPassiveImagineInfoForBattleCordeEdit_C_Setup_Params params {};
		params.InSetupByCurrEquip = InSetupByCurrEquip;
		params.InClassType = InClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPassiveImagineUniqueIds != nullptr)
			*InPassiveImagineUniqueIds = params.InPassiveImagineUniqueIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.GetPassiveImagineIconBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    InPassiveImagineSlotType                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C* OutImagineIconBtn                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveImagineInfoForBattleCordeEdit_C::GetPassiveImagineIconBtn(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, bool* OutIsValid, class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C** OutImagineIconBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.GetPassiveImagineIconBtn");
		
		UPassiveImagineInfoForBattleCordeEdit_C_GetPassiveImagineIconBtn_Params params {};
		params.InPassiveImagineSlotType = InPassiveImagineSlotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutImagineIconBtn != nullptr)
			*OutImagineIconBtn = params.OutImagineIconBtn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.CreatePassiveImagineIconBtnList
	 * 		Flags  -> ()
	 */
	void UPassiveImagineInfoForBattleCordeEdit_C::CreatePassiveImagineIconBtnList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.CreatePassiveImagineIconBtnList");
		
		UPassiveImagineInfoForBattleCordeEdit_C_CreatePassiveImagineIconBtnList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPassiveImagineInfoForBattleCordeEdit_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.PreConstruct");
		
		UPassiveImagineInfoForBattleCordeEdit_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.ExecuteUbergraph_PassiveImagineInfoForBattleCordeEdit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveImagineInfoForBattleCordeEdit_C::ExecuteUbergraph_PassiveImagineInfoForBattleCordeEdit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.ExecuteUbergraph_PassiveImagineInfoForBattleCordeEdit");
		
		UPassiveImagineInfoForBattleCordeEdit_C_ExecuteUbergraph_PassiveImagineInfoForBattleCordeEdit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveImagineInfoForBattleCordeEdit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveImagineInfoForBattleCordeEdit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C");
		return ptr;
	}

}


