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
	 * 		Name   -> Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetBaseInfoChangeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Prev                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_SpecialMainSab_C::SetBaseInfoChangeColor(const struct FOwnItemInfo& Prev)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetBaseInfoChangeColor");
		
		UWBP_SpecialMainSab_C_SetBaseInfoChangeColor_Params params {};
		params.Prev = Prev;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetVisibleBonusInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SpecialMainSab_C::SetVisibleBonusInfo(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetVisibleBonusInfo");
		
		UWBP_SpecialMainSab_C_SetVisibleBonusInfo_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetLinePadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     PaddingOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SpecialMainSab_C::SetLinePadding(const struct FMargin& PaddingOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetLinePadding");
		
		UWBP_SpecialMainSab_C_SetLinePadding_Params params {};
		params.PaddingOffset = PaddingOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_SpecialMainSab_C::Setup(const struct FOwnItemInfo& OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.Setup");
		
		UWBP_SpecialMainSab_C_Setup_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetupSubAbilityInfoTypeStackB
	 * 		Flags  -> ()
	 */
	void UWBP_SpecialMainSab_C::SetupSubAbilityInfoTypeStackB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetupSubAbilityInfoTypeStackB");
		
		UWBP_SpecialMainSab_C_SetupSubAbilityInfoTypeStackB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetOffSubInfoTypeStackB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsExist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SpecialMainSab_C::SetOffSubInfoTypeStackB(bool bIsExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetOffSubInfoTypeStackB");
		
		UWBP_SpecialMainSab_C_SetOffSubInfoTypeStackB_Params params {};
		params.bIsExist = bIsExist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetOffMainInfoTypeStackB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsExist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SpecialMainSab_C::SetOffMainInfoTypeStackB(bool bIsExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetOffMainInfoTypeStackB");
		
		UWBP_SpecialMainSab_C_SetOffMainInfoTypeStackB_Params params {};
		params.bIsExist = bIsExist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.InitVisibleSetUpTypeStackB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsExist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBWeaponPerkRarity                                InWeaponPerkRarity                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpecialMainSab_C::InitVisibleSetUpTypeStackB(bool bIsExist, ESBWeaponPerkRarity InWeaponPerkRarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.InitVisibleSetUpTypeStackB");
		
		UWBP_SpecialMainSab_C_InitVisibleSetUpTypeStackB_Params params {};
		params.bIsExist = bIsExist;
		params.InWeaponPerkRarity = InWeaponPerkRarity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetSpecialDataTypeStackB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsStackBMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InRecepiId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLotteryGroupsId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpecialMainSab_C::SetSpecialDataTypeStackB(bool bIsStackBMax, int32_t InItemID, int32_t InRecepiId, int32_t InLotteryGroupsId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetSpecialDataTypeStackB");
		
		UWBP_SpecialMainSab_C_SetSpecialDataTypeStackB_Params params {};
		params.bIsStackBMax = bIsStackBMax;
		params.InItemID = InItemID;
		params.InRecepiId = InRecepiId;
		params.InLotteryGroupsId = InLotteryGroupsId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.TryGetToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_HyouiAbilityParamToolTip_C*             ToolTip                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpecialMainSab_C::TryGetToolTip(class UWBP_HyouiAbilityParamToolTip_C** ToolTip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.TryGetToolTip");
		
		UWBP_SpecialMainSab_C_TryGetToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ToolTip != nullptr)
			*ToolTip = params.ToolTip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.Get_Icon_info_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_SpecialMainSab_C::Get_Icon_info_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.Get_Icon_info_ToolTipWidget_1");
		
		UWBP_SpecialMainSab_C_Get_Icon_info_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.Set Hyoui Imagine Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            stackb_num                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpecialMainSab_C::SetHyouiImagineData(int32_t InId, int32_t stackb_num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.Set Hyoui Imagine Data");
		
		UWBP_SpecialMainSab_C_SetHyouiImagineData_Params params {};
		params.InId = InId;
		params.stackb_num = stackb_num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.Set Special Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            StorageNumber                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WeaponID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpecialMainSab_C::SetSpecialData(const class FString& UniqueId, int32_t StorageNumber, int32_t WeaponID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.Set Special Data");
		
		UWBP_SpecialMainSab_C_SetSpecialData_Params params {};
		params.UniqueId = UniqueId;
		params.StorageNumber = StorageNumber;
		params.WeaponID = WeaponID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SpecialMainSab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SpecialMainSab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SpecialMainSab.WBP_SpecialMainSab_C");
		return ptr;
	}

}


