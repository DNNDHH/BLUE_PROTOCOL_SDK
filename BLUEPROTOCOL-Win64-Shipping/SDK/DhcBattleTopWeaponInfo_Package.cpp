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
	 * 		Name   -> Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.GetScoreInfoSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleScoreInfoSwitcher_C*                  OutSwitcher                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopWeaponInfo_C::GetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C** OutSwitcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.GetScoreInfoSwitcher");
		
		UDhcBattleTopWeaponInfo_C_GetScoreInfoSwitcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSwitcher != nullptr)
			*OutSwitcher = params.OutSwitcher;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.Get_BtnForPadCursorMove_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UDhcBattleTopWeaponInfo_C::Get_BtnForPadCursorMove_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.Get_BtnForPadCursorMove_ToolTipWidget_1");
		
		UDhcBattleTopWeaponInfo_C_Get_BtnForPadCursorMove_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.CreateToolTipWidgetifNeeded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIconToolTipContent_Weapon_C*          OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopWeaponInfo_C::CreateToolTipWidgetifNeeded(class UCommonIconToolTipContent_Weapon_C** OutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.CreateToolTipWidgetifNeeded");
		
		UDhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWidget != nullptr)
			*OutWidget = params.OutWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.SetStackBIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InStackBNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStackBMax                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopWeaponInfo_C::SetStackBIcon(int32_t InStackBNum, int32_t InStackBMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.SetStackBIcon");
		
		UDhcBattleTopWeaponInfo_C_SetStackBIcon_Params params {};
		params.InStackBNum = InStackBNum;
		params.InStackBMax = InStackBMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.GetIsWeaponLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsLost                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopWeaponInfo_C::GetIsWeaponLost(bool* OutIsLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.GetIsWeaponLost");
		
		UDhcBattleTopWeaponInfo_C_GetIsWeaponLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsLost != nullptr)
			*OutIsLost = params.OutIsLost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.SetAlertIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsLost                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopWeaponInfo_C::SetAlertIconVisibility(bool InIsVisible, bool InIsLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.SetAlertIconVisibility");
		
		UDhcBattleTopWeaponInfo_C_SetAlertIconVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		params.InIsLost = InIsLost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDhcBattlePlayerEquipWeaponInfo           InEquipWeaponInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<struct FSBDhcBattlePlayerEquipImagineInfo>  InEquipBImagineInfos                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UDhcBattleTopWeaponInfo_C::Setup(const struct FSBDhcBattlePlayerEquipWeaponInfo& InEquipWeaponInfo, TArray<struct FSBDhcBattlePlayerEquipImagineInfo>* InEquipBImagineInfos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.Setup");
		
		UDhcBattleTopWeaponInfo_C_Setup_Params params {};
		params.InEquipWeaponInfo = InEquipWeaponInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InEquipBImagineInfos != nullptr)
			*InEquipBImagineInfos = params.InEquipBImagineInfos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopWeaponInfo_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.PreConstruct");
		
		UDhcBattleTopWeaponInfo_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.ExecuteUbergraph_DhcBattleTopWeaponInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopWeaponInfo_C::ExecuteUbergraph_DhcBattleTopWeaponInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.ExecuteUbergraph_DhcBattleTopWeaponInfo");
		
		UDhcBattleTopWeaponInfo_C_ExecuteUbergraph_DhcBattleTopWeaponInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDhcBattleTopWeaponInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDhcBattleTopWeaponInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C");
		return ptr;
	}

}


