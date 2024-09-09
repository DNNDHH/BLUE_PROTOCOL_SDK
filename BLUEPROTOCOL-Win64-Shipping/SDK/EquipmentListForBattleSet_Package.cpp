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
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetIsChangingEquip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsChangingEquip                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentListForBattleSet_C::SetIsChangingEquip(bool bInIsChangingEquip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetIsChangingEquip");
		
		UEquipmentListForBattleSet_C_SetIsChangingEquip_Params params {};
		params.bInIsChangingEquip = bInIsChangingEquip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetFilterPosition
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::SetFilterPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetFilterPosition");
		
		UEquipmentListForBattleSet_C_SetFilterPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.IsFilterSelectorAnimInfOutPlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsPlaying                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentListForBattleSet_C::IsFilterSelectorAnimInfOutPlaying(bool* OutIsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.IsFilterSelectorAnimInfOutPlaying");
		
		UEquipmentListForBattleSet_C_IsFilterSelectorAnimInfOutPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsPlaying != nullptr)
			*OutIsPlaying = params.OutIsPlaying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.PlayFilterSelectorAnimInOrOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InPlayAnimIn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentListForBattleSet_C::PlayFilterSelectorAnimInOrOut(bool InPlayAnimIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.PlayFilterSelectorAnimInOrOut");
		
		UEquipmentListForBattleSet_C_PlayFilterSelectorAnimInOrOut_Params params {};
		params.InPlayAnimIn = InPlayAnimIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.CheckIfSelectedEquipmentIsEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InEquipmentUniqueId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBCharaEquipType                                  InEquipType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsEquipped                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentListForBattleSet_C::CheckIfSelectedEquipmentIsEquipped(const class FString& InEquipmentUniqueId, ESBCharaEquipType InEquipType, bool* OutIsEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.CheckIfSelectedEquipmentIsEquipped");
		
		UEquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped_Params params {};
		params.InEquipmentUniqueId = InEquipmentUniqueId;
		params.InEquipType = InEquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsEquipped != nullptr)
			*OutIsEquipped = params.OutIsEquipped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetEquipmentIconSelectedByUniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InEquipmentUinqueId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipmentListForBattleSet_C::SetEquipmentIconSelectedByUniqueId(const class FString& InEquipmentUinqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetEquipmentIconSelectedByUniqueId");
		
		UEquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId_Params params {};
		params.InEquipmentUinqueId = InEquipmentUinqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SwitchEquipmentIconListBody
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEquipmentIconListBodyEmpty                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentListForBattleSet_C::SwitchEquipmentIconListBody(bool InIsEquipmentIconListBodyEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SwitchEquipmentIconListBody");
		
		UEquipmentListForBattleSet_C_SwitchEquipmentIconListBody_Params params {};
		params.InIsEquipmentIconListBodyEmpty = InIsEquipmentIconListBodyEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetFilterBtnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsFilterBtnStorageSelected                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentListForBattleSet_C::SetFilterBtnSelected(bool InIsFilterBtnStorageSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetFilterBtnSelected");
		
		UEquipmentListForBattleSet_C_SetFilterBtnSelected_Params params {};
		params.InIsFilterBtnStorageSelected = InIsFilterBtnStorageSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ExtractInnerImagineEquipPositionFlagByEquipType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharaEquipType                                  InEquipType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InEquipPosition1                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InEquipPosition2                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InEquipPosition3                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InEquipPosition4                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InEquipPosition5                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutEquipPositionMatch                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentListForBattleSet_C::ExtractInnerImagineEquipPositionFlagByEquipType(ESBCharaEquipType InEquipType, bool InEquipPosition1, bool InEquipPosition2, bool InEquipPosition3, bool InEquipPosition4, bool InEquipPosition5, bool* OutEquipPositionMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ExtractInnerImagineEquipPositionFlagByEquipType");
		
		UEquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType_Params params {};
		params.InEquipType = InEquipType;
		params.InEquipPosition1 = InEquipPosition1;
		params.InEquipPosition2 = InEquipPosition2;
		params.InEquipPosition3 = InEquipPosition3;
		params.InEquipPosition4 = InEquipPosition4;
		params.InEquipPosition5 = InEquipPosition5;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEquipPositionMatch != nullptr)
			*OutEquipPositionMatch = params.OutEquipPositionMatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.GetEquipType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharaEquipType                                  OutEquipType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentListForBattleSet_C::GetEquipType(ESBCharaEquipType* OutEquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.GetEquipType");
		
		UEquipmentListForBattleSet_C_GetEquipType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEquipType != nullptr)
			*OutEquipType = params.OutEquipType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetEquipType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharaEquipType                                  InEquipType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentListForBattleSet_C::SetEquipType(ESBCharaEquipType InEquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetEquipType");
		
		UEquipmentListForBattleSet_C_SetEquipType_Params params {};
		params.InEquipType = InEquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetInfoType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InInfoType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentListForBattleSet_C::SetInfoType(E_BattleSetInfoType InInfoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetInfoType");
		
		UEquipmentListForBattleSet_C_SetInfoType_Params params {};
		params.InInfoType = InInfoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.IsFilterSelectorOpened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsOpened                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentListForBattleSet_C::IsFilterSelectorOpened(bool* OutIsOpened)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.IsFilterSelectorOpened");
		
		UEquipmentListForBattleSet_C_IsFilterSelectorOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsOpened != nullptr)
			*OutIsOpened = params.OutIsOpened;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ChangeActiveWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsFilterSelectorWindowActive                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InDoAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentListForBattleSet_C::ChangeActiveWindow(bool InIsFilterSelectorWindowActive, bool InDoAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ChangeActiveWindow");
		
		UEquipmentListForBattleSet_C_ChangeActiveWindow_Params params {};
		params.InIsFilterSelectorWindowActive = InIsFilterSelectorWindowActive;
		params.InDoAnimation = InDoAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.PlayListInAnimReverse
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::PlayListInAnimReverse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.PlayListInAnimReverse");
		
		UEquipmentListForBattleSet_C_PlayListInAnimReverse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.PlayListInAnimForward
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::PlayListInAnimForward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.PlayListInAnimForward");
		
		UEquipmentListForBattleSet_C_PlayListInAnimForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetStorageMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsForStorage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentListForBattleSet_C::SetStorageMode(bool InIsForStorage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetStorageMode");
		
		UEquipmentListForBattleSet_C_SetStorageMode_Params params {};
		params.InIsForStorage = InIsForStorage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetListVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentListForBattleSet_C::SetListVisibility(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetListVisibility");
		
		UEquipmentListForBattleSet_C_SetListVisibility_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ChangeFilterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFilter_Type                                       InFilterType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentListForBattleSet_C::ChangeFilterType(EFilter_Type InFilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ChangeFilterType");
		
		UEquipmentListForBattleSet_C_ChangeFilterType_Params params {};
		params.InFilterType = InFilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetIsEquipChangeBtnEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentListForBattleSet_C::SetIsEquipChangeBtnEnabled(bool InIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetIsEquipChangeBtnEnabled");
		
		UEquipmentListForBattleSet_C_SetIsEquipChangeBtnEnabled_Params params {};
		params.InIsEnabled = InIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ResetSelectedIconAll
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::ResetSelectedIconAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ResetSelectedIconAll");
		
		UEquipmentListForBattleSet_C_ResetSelectedIconAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.HideListItemAll
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::HideListItemAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.HideListItemAll");
		
		UEquipmentListForBattleSet_C_HideListItemAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SortList
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::SortList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SortList");
		
		UEquipmentListForBattleSet_C_SortList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.InitListSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InInfoType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIgnoreSortAndFilterInit                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentListForBattleSet_C::InitListSetting(E_BattleSetInfoType InInfoType, bool InIgnoreSortAndFilterInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.InitListSetting");
		
		UEquipmentListForBattleSet_C_InitListSetting_Params params {};
		params.InInfoType = InInfoType;
		params.InIgnoreSortAndFilterInit = InIgnoreSortAndFilterInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.CreateList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InInfoType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentListForBattleSet_C::CreateList(E_BattleSetInfoType InInfoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.CreateList");
		
		UEquipmentListForBattleSet_C_CreateList_Params params {};
		params.InInfoType = InInfoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.UpdateOwnItemListContainer
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::UpdateOwnItemListContainer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.UpdateOwnItemListContainer");
		
		UEquipmentListForBattleSet_C_UpdateOwnItemListContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InBattleSetInfoType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharaEquipType                                  InEquipType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsStorageMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentListForBattleSet_C::Init(E_BattleSetInfoType InBattleSetInfoType, ESBCharaEquipType InEquipType, bool InIsStorageMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.Init");
		
		UEquipmentListForBattleSet_C_Init_Params params {};
		params.InBattleSetInfoType = InBattleSetInfoType;
		params.InEquipType = InEquipType;
		params.InIsStorageMode = InIsStorageMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentListForBattleSet_C::BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature(ESBItemSortType SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature");
		
		UEquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature_Params params {};
		params.SortType = SortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnItemIconBtnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentListForBattleSet_C::OnItemIconBtnSelected(class UItemIconBtn_C* SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnItemIconBtnSelected");
		
		UEquipmentListForBattleSet_C_OnItemIconBtnSelected_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.Destruct
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.Destruct");
		
		UEquipmentListForBattleSet_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_BtnFilter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::BndEvt__EquipmentListForBattleSet_BtnFilter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_BtnFilter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UEquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_BtnFilter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		UEquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEquipmentListForBattleSet_C::BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature");
		
		UEquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature");
		
		UEquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_FilterButton_Bag_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::BndEvt__EquipmentListForBattleSet_FilterButton_Bag_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_FilterButton_Bag_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UEquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_FilterButton_Bag_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_FilterButton_Storage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::BndEvt__EquipmentListForBattleSet_FilterButton_Storage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_FilterButton_Storage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UEquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_FilterButton_Storage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::BndEvt__EquipmentListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature");
		
		UEquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::BndEvt__EquipmentListForBattleSet_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UEquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.Construct
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.Construct");
		
		UEquipmentListForBattleSet_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ExecuteUbergraph_EquipmentListForBattleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentListForBattleSet_C::ExecuteUbergraph_EquipmentListForBattleSet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ExecuteUbergraph_EquipmentListForBattleSet");
		
		UEquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnIsChangingEquip__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::OnIsChangingEquip__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnIsChangingEquip__DelegateSignature");
		
		UEquipmentListForBattleSet_C_OnIsChangingEquip__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnCancelBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::OnCancelBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnCancelBtnPressed__DelegateSignature");
		
		UEquipmentListForBattleSet_C_OnCancelBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnFilterBtnBagOrStoragePressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsFilterBtnStoragePressed                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentListForBattleSet_C::OnFilterBtnBagOrStoragePressed__DelegateSignature(bool InIsFilterBtnStoragePressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnFilterBtnBagOrStoragePressed__DelegateSignature");
		
		UEquipmentListForBattleSet_C_OnFilterBtnBagOrStoragePressed__DelegateSignature_Params params {};
		params.InIsFilterBtnStoragePressed = InIsFilterBtnStoragePressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnSortTypeSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    InSelectedSortType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentListForBattleSet_C::OnSortTypeSelected__DelegateSignature(ESBItemSortType InSelectedSortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnSortTypeSelected__DelegateSignature");
		
		UEquipmentListForBattleSet_C_OnSortTypeSelected__DelegateSignature_Params params {};
		params.InSelectedSortType = InSelectedSortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnFilterApply__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentListForBattleSet_C::OnFilterApply__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnFilterApply__DelegateSignature");
		
		UEquipmentListForBattleSet_C_OnFilterApply__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnEquipChangeBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InInfoType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InEquipmentUniqueId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipmentListForBattleSet_C::OnEquipChangeBtnPressed__DelegateSignature(E_BattleSetInfoType InInfoType, const class FString& InEquipmentUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnEquipChangeBtnPressed__DelegateSignature");
		
		UEquipmentListForBattleSet_C_OnEquipChangeBtnPressed__DelegateSignature_Params params {};
		params.InInfoType = InInfoType;
		params.InEquipmentUniqueId = InEquipmentUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnListItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              InSelectedListItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentListForBattleSet_C::OnListItemSelected__DelegateSignature(class UItemIconBtn_C* InSelectedListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnListItemSelected__DelegateSignature");
		
		UEquipmentListForBattleSet_C_OnListItemSelected__DelegateSignature_Params params {};
		params.InSelectedListItem = InSelectedListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEquipmentListForBattleSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquipmentListForBattleSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EquipmentListForBattleSet.EquipmentListForBattleSet_C");
		return ptr;
	}

}


