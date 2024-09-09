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
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetSlotInfoBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InUnlockedSlotNum                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBCharacterWeaponPerkData>          InPerkList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InUsedSlotNum                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHasValidAbility                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonWeaponAbilityInfoSlotList_C::SetSlotInfoBase(int32_t InUnlockedSlotNum, TArray<struct FSBCharacterWeaponPerkData>* InPerkList, int32_t InUsedSlotNum, bool* bHasValidAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetSlotInfoBase");
		
		UCommonWeaponAbilityInfoSlotList_C_SetSlotInfoBase_Params params {};
		params.InUnlockedSlotNum = InUnlockedSlotNum;
		params.InUsedSlotNum = InUsedSlotNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPerkList != nullptr)
			*InPerkList = params.InPerkList;
		if (bHasValidAbility != nullptr)
			*bHasValidAbility = params.bHasValidAbility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.GetUnlockSlotMinMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterRewardLotteryGroupsRewards         LotteryReward                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		int32_t                                            Min                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Max                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonWeaponAbilityInfoSlotList_C::GetUnlockSlotMinMax(const struct FSBMasterRewardLotteryGroupsRewards& LotteryReward, int32_t* Min, int32_t* Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.GetUnlockSlotMinMax");
		
		UCommonWeaponAbilityInfoSlotList_C_GetUnlockSlotMinMax_Params params {};
		params.LotteryReward = LotteryReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Min != nullptr)
			*Min = params.Min;
		if (Max != nullptr)
			*Max = params.Max;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetLotteryReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterRewardLotteryGroupsRewards         LotteryReward                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UCommonWeaponAbilityInfoSlotList_C::SetLotteryReward(const struct FSBMasterRewardLotteryGroupsRewards& LotteryReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetLotteryReward");
		
		UCommonWeaponAbilityInfoSlotList_C_SetLotteryReward_Params params {};
		params.LotteryReward = LotteryReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetUnknownSlot
	 * 		Flags  -> ()
	 */
	void UCommonWeaponAbilityInfoSlotList_C::SetUnknownSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetUnknownSlot");
		
		UCommonWeaponAbilityInfoSlotList_C_SetUnknownSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetRecipeId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RecipeId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonWeaponAbilityInfoSlotList_C::SetRecipeId(int32_t RecipeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetRecipeId");
		
		UCommonWeaponAbilityInfoSlotList_C_SetRecipeId_Params params {};
		params.RecipeId = RecipeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonWeaponAbilityInfoSlotList_C::SetTextColor(const struct FSlateColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetTextColor");
		
		UCommonWeaponAbilityInfoSlotList_C_SetTextColor_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetVLineVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonWeaponAbilityInfoSlotList_C::SetVLineVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetVLineVisibility");
		
		UCommonWeaponAbilityInfoSlotList_C_SetVLineVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetSlotInfoByUniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bHasValidAbility                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonWeaponAbilityInfoSlotList_C::SetSlotInfoByUniqueId(const class FString& UniqueId, bool* bHasValidAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetSlotInfoByUniqueId");
		
		UCommonWeaponAbilityInfoSlotList_C_SetSlotInfoByUniqueId_Params params {};
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasValidAbility != nullptr)
			*bHasValidAbility = params.bHasValidAbility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetSlotInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBWeaponItemData                           InWeaponItemData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bHasValidAbility                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonWeaponAbilityInfoSlotList_C::SetSlotInfo(const struct FSBWeaponItemData& InWeaponItemData, bool* bHasValidAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetSlotInfo");
		
		UCommonWeaponAbilityInfoSlotList_C_SetSlotInfo_Params params {};
		params.InWeaponItemData = InWeaponItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasValidAbility != nullptr)
			*bHasValidAbility = params.bHasValidAbility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.GetSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSlotId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UCommonWeaponAbilityInfoSlot_C*              OutSlot                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonWeaponAbilityInfoSlotList_C::GetSlot(int32_t InSlotId, bool* IsValid, class UCommonWeaponAbilityInfoSlot_C** OutSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.GetSlot");
		
		UCommonWeaponAbilityInfoSlotList_C_GetSlot_Params params {};
		params.InSlotId = InSlotId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutSlot != nullptr)
			*OutSlot = params.OutSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SwitchSlotInfoType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsSlotUnlocked                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonWeaponAbilityInfoSlotList_C::SwitchSlotInfoType(bool InIsSlotUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SwitchSlotInfoType");
		
		UCommonWeaponAbilityInfoSlotList_C_SwitchSlotInfoType_Params params {};
		params.InIsSlotUnlocked = InIsSlotUnlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.InitAllSlot
	 * 		Flags  -> ()
	 */
	void UCommonWeaponAbilityInfoSlotList_C::InitAllSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.InitAllSlot");
		
		UCommonWeaponAbilityInfoSlotList_C_InitAllSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonWeaponAbilityInfoSlotList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.PreConstruct");
		
		UCommonWeaponAbilityInfoSlotList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.ExecuteUbergraph_CommonWeaponAbilityInfoSlotList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonWeaponAbilityInfoSlotList_C::ExecuteUbergraph_CommonWeaponAbilityInfoSlotList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.ExecuteUbergraph_CommonWeaponAbilityInfoSlotList");
		
		UCommonWeaponAbilityInfoSlotList_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlotList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonWeaponAbilityInfoSlotList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonWeaponAbilityInfoSlotList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C");
		return ptr;
	}

}


