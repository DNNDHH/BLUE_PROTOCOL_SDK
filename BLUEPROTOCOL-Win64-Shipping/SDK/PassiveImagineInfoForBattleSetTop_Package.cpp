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
	 * 		Name   -> Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.GetScoreInfoSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleScoreInfoSwitcher_C*                  NewParam                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveImagineInfoForBattleSetTop_C::GetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.GetScoreInfoSwitcher");
		
		UPassiveImagineInfoForBattleSetTop_C_GetScoreInfoSwitcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.GetPassiveImagineInfoUnit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    InPassiveImagineSlotType                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPassiveImagineInfoUnitForBattleSet_C*       OutImagineInfoUnit                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveImagineInfoForBattleSetTop_C::GetPassiveImagineInfoUnit(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, bool* IsValid, class UPassiveImagineInfoUnitForBattleSet_C** OutImagineInfoUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.GetPassiveImagineInfoUnit");
		
		UPassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit_Params params {};
		params.InPassiveImagineSlotType = InPassiveImagineSlotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutImagineInfoUnit != nullptr)
			*OutImagineInfoUnit = params.OutImagineInfoUnit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.SetupPassiveImagineIconBtnList
	 * 		Flags  -> ()
	 */
	void UPassiveImagineInfoForBattleSetTop_C::SetupPassiveImagineIconBtnList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.SetupPassiveImagineIconBtnList");
		
		UPassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.GetPassiveImagineIconBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    InPassiveImagineSlotType                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C* OutImagineIconBtn                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveImagineInfoForBattleSetTop_C::GetPassiveImagineIconBtn(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, bool* OutIsValid, class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C** OutImagineIconBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.GetPassiveImagineIconBtn");
		
		UPassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn_Params params {};
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
	 * 		Name   -> Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.CreatePassiveImagineIconBtnList
	 * 		Flags  -> ()
	 */
	void UPassiveImagineInfoForBattleSetTop_C::CreatePassiveImagineIconBtnList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.CreatePassiveImagineIconBtnList");
		
		UPassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPassiveImagineInfoForBattleSetTop_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.PreConstruct");
		
		UPassiveImagineInfoForBattleSetTop_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.Construct
	 * 		Flags  -> ()
	 */
	void UPassiveImagineInfoForBattleSetTop_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.Construct");
		
		UPassiveImagineInfoForBattleSetTop_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.OnIconBtnClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    InPassiveImagineSlotType                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InPassiveImagineItemId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveImagineInfoForBattleSetTop_C::OnIconBtnClicked(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, int32_t InPassiveImagineItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.OnIconBtnClicked");
		
		UPassiveImagineInfoForBattleSetTop_C_OnIconBtnClicked_Params params {};
		params.InPassiveImagineSlotType = InPassiveImagineSlotType;
		params.InPassiveImagineItemId = InPassiveImagineItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.Destruct
	 * 		Flags  -> ()
	 */
	void UPassiveImagineInfoForBattleSetTop_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.Destruct");
		
		UPassiveImagineInfoForBattleSetTop_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.ExecuteUbergraph_PassiveImagineInfoForBattleSetTop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveImagineInfoForBattleSetTop_C::ExecuteUbergraph_PassiveImagineInfoForBattleSetTop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.ExecuteUbergraph_PassiveImagineInfoForBattleSetTop");
		
		UPassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.OnIconBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    InInnerImagineSlotType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InImagineId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveImagineInfoForBattleSetTop_C::OnIconBtnPressed__DelegateSignature(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32_t InImagineId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.OnIconBtnPressed__DelegateSignature");
		
		UPassiveImagineInfoForBattleSetTop_C_OnIconBtnPressed__DelegateSignature_Params params {};
		params.InInnerImagineSlotType = InInnerImagineSlotType;
		params.InImagineId = InImagineId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveImagineInfoForBattleSetTop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveImagineInfoForBattleSetTop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C");
		return ptr;
	}

}


