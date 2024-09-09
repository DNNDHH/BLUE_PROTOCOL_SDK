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
	 * 		Name   -> Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.GetScoreInfoSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleScoreInfoSwitcher_C*                  OutSwitcher                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponInfoForBattleCordeEdit_C::GetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C** OutSwitcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.GetScoreInfoSwitcher");
		
		UWeaponInfoForBattleCordeEdit_C_GetScoreInfoSwitcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSwitcher != nullptr)
			*OutSwitcher = params.OutSwitcher;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.Get_BtnForPadCursorMove_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UWeaponInfoForBattleCordeEdit_C::Get_BtnForPadCursorMove_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.Get_BtnForPadCursorMove_ToolTipWidget_1");
		
		UWeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.CreateToolTipWidgetifNeeded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIconToolTip_C*                        OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponInfoForBattleCordeEdit_C::CreateToolTipWidgetifNeeded(class UCommonIconToolTip_C** OutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.CreateToolTipWidgetifNeeded");
		
		UWeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWidget != nullptr)
			*OutWidget = params.OutWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.SetStackBIconByOwnItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InOwnItemInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponInfoForBattleCordeEdit_C::SetStackBIconByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.SetStackBIconByOwnItemInfo");
		
		UWeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo_Params params {};
		params.InOwnItemInfo = InOwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.GetIsWeaponLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsLost                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponInfoForBattleCordeEdit_C::GetIsWeaponLost(bool* OutIsLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.GetIsWeaponLost");
		
		UWeaponInfoForBattleCordeEdit_C_GetIsWeaponLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsLost != nullptr)
			*OutIsLost = params.OutIsLost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.SetStorageMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsStorageMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponInfoForBattleCordeEdit_C::SetStorageMode(bool InIsStorageMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.SetStorageMode");
		
		UWeaponInfoForBattleCordeEdit_C_SetStorageMode_Params params {};
		params.InIsStorageMode = InIsStorageMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.SetAlertIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsLost                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponInfoForBattleCordeEdit_C::SetAlertIconVisibility(bool InIsVisible, bool InIsLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.SetAlertIconVisibility");
		
		UWeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		params.InIsLost = InIsLost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWeaponID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InWeaponUniqueId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InSetupByCurrEquip                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              InBImagineUniqueIds                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWeaponInfoForBattleCordeEdit_C::Setup(int32_t InWeaponID, const class FString& InWeaponUniqueId, bool InSetupByCurrEquip, ESBClassType InClassType, TArray<class FString>* InBImagineUniqueIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.Setup");
		
		UWeaponInfoForBattleCordeEdit_C_Setup_Params params {};
		params.InWeaponID = InWeaponID;
		params.InWeaponUniqueId = InWeaponUniqueId;
		params.InSetupByCurrEquip = InSetupByCurrEquip;
		params.InClassType = InClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InBImagineUniqueIds != nullptr)
			*InBImagineUniqueIds = params.InBImagineUniqueIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.Construct
	 * 		Flags  -> ()
	 */
	void UWeaponInfoForBattleCordeEdit_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.Construct");
		
		UWeaponInfoForBattleCordeEdit_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponInfoForBattleCordeEdit_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.PreConstruct");
		
		UWeaponInfoForBattleCordeEdit_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.ExecuteUbergraph_WeaponInfoForBattleCordeEdit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponInfoForBattleCordeEdit_C::ExecuteUbergraph_WeaponInfoForBattleCordeEdit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.ExecuteUbergraph_WeaponInfoForBattleCordeEdit");
		
		UWeaponInfoForBattleCordeEdit_C_ExecuteUbergraph_WeaponInfoForBattleCordeEdit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponInfoForBattleCordeEdit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponInfoForBattleCordeEdit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C");
		return ptr;
	}

}


